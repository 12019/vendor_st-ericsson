/*
 * Copyright (c) 2009, Google Inc.
 * All rights reserved.
 *
 * Copyright (c) 2009-2011, Code Aurora Forum. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *	notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *	notice, this list of conditions and the following disclaimer in
 *	the documentation and/or other materials provided with the
 *	distribution.
 *  * Neither the name of Google, Inc. nor the names of its contributors
 *	may be used to endorse or promote products derived from this
 *	software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#include <reg.h>
#include <debug.h>
#include <lib/ptable.h>
#include <dev/flash.h>
#include <dev/pm8921.h>
#include <dev/ssbi.h>
#include <string.h>
#include <smem.h>
#include <gsbi.h>
#include <platform/iomap.h>
#include <platform.h>

#define MDM9X15_CDP	3675
#define MDM9X15_MTP	3681
#define LINUX_MACHTYPE  MDM9X15_CDP

static struct ptable flash_ptable;
unsigned hw_platform = 0;
unsigned target_msm_id = 0;

/* Partition names for fastboot flash */
char *apps_ptn_names[] = {"aboot", "boot", "system"};
/* Partitions should be in this order */
char *ptable_ptn_names[] = {"APPSBL", "APPS", "EFS2APPS"};
unsigned ptn_name_count = 3;
unsigned modem_ptn_count = 7;

static const uint8_t uart_gsbi_id = GSBI_ID_4;

static pm8921_dev_t pmic;

void smem_ptable_init(void);
extern void reboot(unsigned reboot_reason);
void update_ptable_apps_partitions(void);
void update_ptable_modem_partitions(void);
extern int fake_key_get_state(void);

void target_init(void)
{
	struct flash_info *flash_info;

	dprintf(INFO, "target_init()\n");

	/* Initialize PMIC driver */
	pmic.read  = (pm8921_read_func) &pa1_ssbi2_read_bytes;
	pmic.write = (pm8921_write_func) &pa1_ssbi2_write_bytes;

	pm8921_init(&pmic);

	ptable_init(&flash_ptable);
	smem_ptable_init();

	flash_init();
	flash_info = flash_get_info();
	ASSERT(flash_info);

	smem_add_modem_partitions(&flash_ptable);

	/* Update the naming for apps partitions and type */
	update_ptable_apps_partitions();

	/* Update modem partitions to lower case for fastboot */
	update_ptable_modem_partitions();

	ptable_dump(&flash_ptable);
	flash_set_ptable(&flash_ptable);
}

void board_info(void)
{
	struct smem_board_info_v4 board_info_v4;
	unsigned int board_info_len = 0;
	unsigned smem_status;
	unsigned format = 0;
	unsigned id = 0;

	if (hw_platform && target_msm_id)
		return;

	hw_platform = MDM9X15_CDP;
	target_msm_id = MDM9600;

	smem_status = smem_read_alloc_entry_offset(SMEM_BOARD_INFO_LOCATION,
						&format, sizeof(format), 0);
	if(!smem_status)
	{
		if(format == 4)
		{
			board_info_len = sizeof(board_info_v4);
			smem_status = smem_read_alloc_entry(
						SMEM_BOARD_INFO_LOCATION,
						&board_info_v4, board_info_len);
			if(!smem_status)
			{
				id = board_info_v4.board_info_v3.hw_platform;
				target_msm_id =
					board_info_v4.board_info_v3.msm_id;
			}
		}
	}
	return;
}

unsigned board_machtype(void)
{
	board_info();
	return hw_platform;
}

void reboot_device(unsigned reboot_reason)
{
	/* Actually reset the chip */
	pm8921_config_reset_pwr_off(1);
	writel(0, MSM_PSHOLD_CTL_SU);
	mdelay(10000);

	dprintf (CRITICAL, "Rebooting failed\n");
	return;
}

uint8_t target_uart_gsbi(void)
{
	return uart_gsbi_id;
}

/*
 * Return 1 to trigger to fastboot
 */
int fastboot_trigger(void) {
	int ret;
	ret = fake_key_get_state();
	/* Want to trigger when dip switch is off */
	return (!ret);
}

void update_ptable_modem_partitions(void)
{
	uint32_t ptn_index, i = 0;
	uint32_t name_size;
	struct ptentry * ptentry_ptr = flash_ptable.parts;

	for(ptn_index=0; ptn_index < modem_ptn_count; ptn_index++)
	{
		name_size = strlen(ptentry_ptr[ptn_index].name);
		for(i=0; i < name_size; i++)
		{
			ptentry_ptr[ptn_index].name[i] =
				tolower(ptentry_ptr[ptn_index].name[i]);
		}
	}
}

void update_ptable_apps_partitions(void)
{
	uint32_t ptn_index, name_index = 0;
	uint32_t end = 0xffffffff;
	uint32_t name_size = strlen(ptable_ptn_names[name_index]);
	struct ptentry * ptentry_ptr = flash_ptable.parts;

	for(ptn_index=0; ptentry_ptr[ptn_index].start != end; ptn_index++)
	{
		if (!(strncmp(ptentry_ptr[ptn_index].name,
				ptable_ptn_names[name_index], name_size)))
		{
			name_size = strlen(apps_ptn_names[name_index]);
			name_size++; /* For null termination */

			/* Update the partition names to something familiar */
			if (name_size <= MAX_PTENTRY_NAME)
				strncpy(ptentry_ptr[ptn_index].name,
					apps_ptn_names[name_index], name_size);

			/* Aboot uses modem page layout, leave aboot ptn */
			if (name_index != 0)
				ptentry_ptr[ptn_index].type =
							TYPE_APPS_PARTITION;

			/* Don't go out of bounds */
			name_index++;
			if (name_index >= ptn_name_count)
				break;
			name_size = strlen(ptable_ptn_names[name_index]);
		}
	}
}
