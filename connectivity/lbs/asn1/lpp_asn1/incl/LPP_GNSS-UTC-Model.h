/*
 * LPP_GNSS-UTC-Model.h
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
 * From ASN.1 module "LPP_PDU-Definitions"
 * 	found in "LPP_RRLP_Rel_10.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_LPP_GNSS_UTC_Model_H_
#define	_LPP_GNSS_UTC_Model_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LPP_UTC-ModelSet1.h"
#include "LPP_UTC-ModelSet2.h"
#include "LPP_UTC-ModelSet3.h"
#include "LPP_UTC-ModelSet4.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LPP_GNSS_UTC_Model_PR {
	LPP_GNSS_UTC_Model_PR_NOTHING,	/* No components present */
	LPP_GNSS_UTC_Model_PR_utcModel1,
	LPP_GNSS_UTC_Model_PR_utcModel2,
	LPP_GNSS_UTC_Model_PR_utcModel3,
	LPP_GNSS_UTC_Model_PR_utcModel4,
	/* Extensions may appear below */
	
} LPP_GNSS_UTC_Model_PR;

/* LPP_GNSS-UTC-Model */
typedef struct LPP_GNSS_UTC_Model {
	LPP_GNSS_UTC_Model_PR present;
	union LPP_GNSS_UTC_Model_u {
		LPP_UTC_ModelSet1_t	 utcModel1;
		LPP_UTC_ModelSet2_t	 utcModel2;
		LPP_UTC_ModelSet3_t	 utcModel3;
		LPP_UTC_ModelSet4_t	 utcModel4;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_GNSS_UTC_Model_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LPP_GNSS_UTC_Model;

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_GNSS_UTC_Model_H_ */