/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2"
 * 	found in "1609dot2-schema.asn"
 * 	`asn1c -gen-OER`
 */

#include "PsidGroupPermissions.h"

static int asn_DFL_3_set_1(int set_value, void **sptr) {
	long *st = *sptr;
	
	if(!st) {
		if(!set_value) return -1;	/* Not a default value */
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	if(set_value) {
		/* Install default value 1 */
		*st = 1;
		return 0;
	} else {
		/* Test default value 1 */
		return (*st == 1);
	}
}
static int asn_DFL_4_set_0(int set_value, void **sptr) {
	long *st = *sptr;
	
	if(!st) {
		if(!set_value) return -1;	/* Not a default value */
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	if(set_value) {
		/* Install default value 0 */
		*st = 0;
		return 0;
	} else {
		/* Test default value 0 */
		return (*st == 0);
	}
}
asn_TYPE_member_t asn_MBR_PsidGroupPermissions_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PsidGroupPermissions, subjectPermissions),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SubjectPermissions,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"subjectPermissions"
		},
	{ ATF_POINTER, 3, offsetof(struct PsidGroupPermissions, minChainDepth),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* PER is not compiled, use -gen-PER */
		asn_DFL_3_set_1,	/* DEFAULT 1 */
		"minChainDepth"
		},
	{ ATF_NOFLAGS, 2, offsetof(struct PsidGroupPermissions, chainDepthRange),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* PER is not compiled, use -gen-PER */
		asn_DFL_4_set_0,	/* DEFAULT 0 */
		"chainDepthRange"
		},
	{ ATF_POINTER, 1, offsetof(struct PsidGroupPermissions, eeType),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EndEntityType,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"eeType"
		},
};
static const int asn_MAP_PsidGroupPermissions_oms_1[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_PsidGroupPermissions_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PsidGroupPermissions_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* subjectPermissions */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* minChainDepth */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* chainDepthRange */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* eeType */
};
asn_SEQUENCE_specifics_t asn_SPC_PsidGroupPermissions_specs_1 = {
	sizeof(struct PsidGroupPermissions),
	offsetof(struct PsidGroupPermissions, _asn_ctx),
	asn_MAP_PsidGroupPermissions_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_PsidGroupPermissions_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PsidGroupPermissions = {
	"PsidGroupPermissions",
	"PsidGroupPermissions",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_oer,
	SEQUENCE_encode_oer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_PsidGroupPermissions_tags_1,
	sizeof(asn_DEF_PsidGroupPermissions_tags_1)
		/sizeof(asn_DEF_PsidGroupPermissions_tags_1[0]), /* 1 */
	asn_DEF_PsidGroupPermissions_tags_1,	/* Same as above */
	sizeof(asn_DEF_PsidGroupPermissions_tags_1)
		/sizeof(asn_DEF_PsidGroupPermissions_tags_1[0]), /* 1 */
	0,	/* No OER visible constraints */
	0,	/* No PER visible constraints */
	asn_MBR_PsidGroupPermissions_1,
	4,	/* Elements count */
	&asn_SPC_PsidGroupPermissions_specs_1	/* Additional specs */
};

