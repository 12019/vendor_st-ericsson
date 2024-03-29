/*
 * RRLP_GANSSClockModel.h
 *
 * Copyright (C) ST-Ericsson SA 2010. All rights reserved.
 * Author: sunilsatish.rao@stericsson.com for ST-Ericsson.
 * License terms: Redistribution and modifications are permitted subject to BSD license.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of ST-Ericsson nor the
 *       names of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL ST-ERICSSON BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP_Components"
 * 	found in "LPP_RRLP_Rel_10.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_RRLP_GANSSClockModel_H_
#define	_RRLP_GANSSClockModel_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRLP_SeqOfStandardClockModelElement.h"
#include "RRLP_NAVclockModel.h"
#include "RRLP_CNAVclockModel.h"
#include "RRLP_GLONASSclockModel.h"
#include "RRLP_SBASclockModel.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRLP_GANSSClockModel_PR {
	RRLP_GANSSClockModel_PR_NOTHING,	/* No components present */
	RRLP_GANSSClockModel_PR_standardClockModelList,
	/* Extensions may appear below */
	RRLP_GANSSClockModel_PR_navClockModel,
	RRLP_GANSSClockModel_PR_cnavClockModel,
	RRLP_GANSSClockModel_PR_glonassClockModel,
	RRLP_GANSSClockModel_PR_sbasClockModel
} RRLP_GANSSClockModel_PR;

/* RRLP_GANSSClockModel */
typedef struct RRLP_GANSSClockModel {
	RRLP_GANSSClockModel_PR present;
	union RRLP_GANSSClockModel_u {
		RRLP_SeqOfStandardClockModelElement_t	 standardClockModelList;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		RRLP_NAVclockModel_t	 navClockModel;
		RRLP_CNAVclockModel_t	 cnavClockModel;
		RRLP_GLONASSclockModel_t	 glonassClockModel;
		RRLP_SBASclockModel_t	 sbasClockModel;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRLP_GANSSClockModel_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRLP_GANSSClockModel;

#ifdef __cplusplus
}
#endif

#endif	/* _RRLP_GANSSClockModel_H_ */
