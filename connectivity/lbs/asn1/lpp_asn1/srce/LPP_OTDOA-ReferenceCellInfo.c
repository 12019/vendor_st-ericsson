/*
 * LPP_OTDOA-ReferenceCellInfo.c
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

#include <asn_internal.h>

#include "LPP_OTDOA-ReferenceCellInfo.h"

static int
antennaPortConfig_5_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_ENUMERATED.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using ENUMERATED,
 * so here we adjust the DEF accordingly.
 */
static void
antennaPortConfig_5_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_ENUMERATED.free_struct;
	td->print_struct   = asn_DEF_ENUMERATED.print_struct;
	td->ber_decoder    = asn_DEF_ENUMERATED.ber_decoder;
	td->der_encoder    = asn_DEF_ENUMERATED.der_encoder;
	td->xer_decoder    = asn_DEF_ENUMERATED.xer_decoder;
	td->xer_encoder    = asn_DEF_ENUMERATED.xer_encoder;
	td->uper_decoder   = asn_DEF_ENUMERATED.uper_decoder;
	td->uper_encoder   = asn_DEF_ENUMERATED.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_ENUMERATED.per_constraints;
	td->elements       = asn_DEF_ENUMERATED.elements;
	td->elements_count = asn_DEF_ENUMERATED.elements_count;
     /* td->specifics      = asn_DEF_ENUMERATED.specifics;	// Defined explicitly */
}

static void
antennaPortConfig_5_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	antennaPortConfig_5_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
antennaPortConfig_5_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	antennaPortConfig_5_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
antennaPortConfig_5_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	antennaPortConfig_5_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
antennaPortConfig_5_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	antennaPortConfig_5_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
antennaPortConfig_5_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	antennaPortConfig_5_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
antennaPortConfig_5_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	antennaPortConfig_5_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
antennaPortConfig_5_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	antennaPortConfig_5_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
antennaPortConfig_5_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	antennaPortConfig_5_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
cpLength_9_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_ENUMERATED.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using ENUMERATED,
 * so here we adjust the DEF accordingly.
 */
static void
cpLength_9_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_ENUMERATED.free_struct;
	td->print_struct   = asn_DEF_ENUMERATED.print_struct;
	td->ber_decoder    = asn_DEF_ENUMERATED.ber_decoder;
	td->der_encoder    = asn_DEF_ENUMERATED.der_encoder;
	td->xer_decoder    = asn_DEF_ENUMERATED.xer_decoder;
	td->xer_encoder    = asn_DEF_ENUMERATED.xer_encoder;
	td->uper_decoder   = asn_DEF_ENUMERATED.uper_decoder;
	td->uper_encoder   = asn_DEF_ENUMERATED.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_ENUMERATED.per_constraints;
	td->elements       = asn_DEF_ENUMERATED.elements;
	td->elements_count = asn_DEF_ENUMERATED.elements_count;
     /* td->specifics      = asn_DEF_ENUMERATED.specifics;	// Defined explicitly */
}

static void
cpLength_9_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	cpLength_9_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
cpLength_9_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	cpLength_9_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
cpLength_9_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	cpLength_9_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
cpLength_9_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	cpLength_9_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
cpLength_9_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	cpLength_9_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
cpLength_9_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	cpLength_9_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
cpLength_9_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	cpLength_9_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
cpLength_9_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	cpLength_9_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
memb_physCellId_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 503)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_INTEGER_enum_map_t asn_MAP_antennaPortConfig_value2enum_5[] = {
	{ 0,	11,	"ports1-or-2" },
	{ 1,	6,	"ports4" }
	/* This list is extensible */
};
static unsigned int asn_MAP_antennaPortConfig_enum2value_5[] = {
	0,	/* ports1-or-2(0) */
	1	/* ports4(1) */
	/* This list is extensible */
};
static asn_INTEGER_specifics_t asn_SPC_antennaPortConfig_specs_5 = {
	asn_MAP_antennaPortConfig_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_antennaPortConfig_enum2value_5,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	3,	/* Extensions before this member */
	1	/* Strict enumeration */
};
static ber_tlv_tag_t asn_DEF_antennaPortConfig_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static asn_per_constraints_t asn_PER_antennaPortConfig_constr_5 = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_antennaPortConfig_5 = {
	"antennaPortConfig",
	"antennaPortConfig",
	antennaPortConfig_5_free,
	antennaPortConfig_5_print,
	antennaPortConfig_5_constraint,
	antennaPortConfig_5_decode_ber,
	antennaPortConfig_5_encode_der,
	antennaPortConfig_5_decode_xer,
	antennaPortConfig_5_encode_xer,
	antennaPortConfig_5_decode_uper,
	antennaPortConfig_5_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_antennaPortConfig_tags_5,
	sizeof(asn_DEF_antennaPortConfig_tags_5)
		/sizeof(asn_DEF_antennaPortConfig_tags_5[0]) - 1, /* 1 */
	asn_DEF_antennaPortConfig_tags_5,	/* Same as above */
	sizeof(asn_DEF_antennaPortConfig_tags_5)
		/sizeof(asn_DEF_antennaPortConfig_tags_5[0]), /* 2 */
	&asn_PER_antennaPortConfig_constr_5,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_antennaPortConfig_specs_5	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_cpLength_value2enum_9[] = {
	{ 0,	6,	"normal" },
	{ 1,	8,	"extended" }
	/* This list is extensible */
};
static unsigned int asn_MAP_cpLength_enum2value_9[] = {
	1,	/* extended(1) */
	0	/* normal(0) */
	/* This list is extensible */
};
static asn_INTEGER_specifics_t asn_SPC_cpLength_specs_9 = {
	asn_MAP_cpLength_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_cpLength_enum2value_9,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	3,	/* Extensions before this member */
	1	/* Strict enumeration */
};
static ber_tlv_tag_t asn_DEF_cpLength_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static asn_per_constraints_t asn_PER_cpLength_constr_9 = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cpLength_9 = {
	"cpLength",
	"cpLength",
	cpLength_9_free,
	cpLength_9_print,
	cpLength_9_constraint,
	cpLength_9_decode_ber,
	cpLength_9_encode_der,
	cpLength_9_decode_xer,
	cpLength_9_encode_xer,
	cpLength_9_decode_uper,
	cpLength_9_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_cpLength_tags_9,
	sizeof(asn_DEF_cpLength_tags_9)
		/sizeof(asn_DEF_cpLength_tags_9[0]) - 1, /* 1 */
	asn_DEF_cpLength_tags_9,	/* Same as above */
	sizeof(asn_DEF_cpLength_tags_9)
		/sizeof(asn_DEF_cpLength_tags_9[0]), /* 2 */
	&asn_PER_cpLength_constr_9,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_cpLength_specs_9	/* Additional specs */
};

static asn_per_constraints_t asn_PER_memb_physCellId_constr_2 = {
	{ APC_CONSTRAINED,	 9,  9,  0,  503 }	/* (0..503) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_per_constraints_t asn_PER_memb_antennaPortConfig_constr_5 = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_per_constraints_t asn_PER_memb_cpLength_constr_9 = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_TYPE_member_t asn_MBR_LPP_OTDOA_ReferenceCellInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_OTDOA_ReferenceCellInfo, physCellId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_physCellId_constraint_1,
		&asn_PER_memb_physCellId_constr_2,
		0,
		"physCellId"
		},
	{ ATF_POINTER, 3, offsetof(struct LPP_OTDOA_ReferenceCellInfo, cellGlobalId),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_ECGI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellGlobalId"
		},
	{ ATF_POINTER, 2, offsetof(struct LPP_OTDOA_ReferenceCellInfo, earfcnRef),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_ARFCN_ValueEUTRA,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"earfcnRef"
		},
	{ ATF_POINTER, 1, offsetof(struct LPP_OTDOA_ReferenceCellInfo, antennaPortConfig),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_antennaPortConfig_5,
		0,	/* Defer constraints checking to the member type */
		&asn_PER_memb_antennaPortConfig_constr_5,
		0,
		"antennaPortConfig"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_OTDOA_ReferenceCellInfo, cpLength),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_cpLength_9,
		0,	/* Defer constraints checking to the member type */
		&asn_PER_memb_cpLength_constr_9,
		0,
		"cpLength"
		},
	{ ATF_POINTER, 1, offsetof(struct LPP_OTDOA_ReferenceCellInfo, prsInfo),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_PRS_Info,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"prsInfo"
		},
};
static int asn_MAP_LPP_OTDOA_ReferenceCellInfo_oms_1[] = { 1, 2, 3, 5 };
static ber_tlv_tag_t asn_DEF_LPP_OTDOA_ReferenceCellInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_LPP_OTDOA_ReferenceCellInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physCellId at 2880 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cellGlobalId at 2881 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* earfcnRef at 2882 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* antennaPortConfig at 2883 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* cpLength at 2885 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* prsInfo at 2886 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LPP_OTDOA_ReferenceCellInfo_specs_1 = {
	sizeof(struct LPP_OTDOA_ReferenceCellInfo),
	offsetof(struct LPP_OTDOA_ReferenceCellInfo, _asn_ctx),
	asn_MAP_LPP_OTDOA_ReferenceCellInfo_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_LPP_OTDOA_ReferenceCellInfo_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	5,	/* Start extensions */
	7	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_LPP_OTDOA_ReferenceCellInfo = {
	"LPP_OTDOA-ReferenceCellInfo",
	"LPP_OTDOA-ReferenceCellInfo",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_LPP_OTDOA_ReferenceCellInfo_tags_1,
	sizeof(asn_DEF_LPP_OTDOA_ReferenceCellInfo_tags_1)
		/sizeof(asn_DEF_LPP_OTDOA_ReferenceCellInfo_tags_1[0]), /* 1 */
	asn_DEF_LPP_OTDOA_ReferenceCellInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_LPP_OTDOA_ReferenceCellInfo_tags_1)
		/sizeof(asn_DEF_LPP_OTDOA_ReferenceCellInfo_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_LPP_OTDOA_ReferenceCellInfo_1,
	6,	/* Elements count */
	&asn_SPC_LPP_OTDOA_ReferenceCellInfo_specs_1	/* Additional specs */
};
