/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SEMI"
 * 	found in "SEMI_v2.3.0_070616.asn"
 * 	`asn1c -gen-OER -gen-PER`
 */

#include "IntersectionSituationDataBundle.h"

static int
memb_recordCount_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 300)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_bundleCount_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 60)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_isdBundles_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size <= 5)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_isdBundles_constr_8 GCC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..5)) */};
static asn_per_constraints_t asn_PER_type_isdBundles_constr_8 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (SIZE(0..5)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_recordCount_constr_6 GCC_NOTUSED = {
	{ 2, 1 }	/* (0..300) */,
	-1};
static asn_per_constraints_t asn_PER_memb_recordCount_constr_6 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  0,  300 }	/* (0..300) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_bundleCount_constr_7 GCC_NOTUSED = {
	{ 1, 1 }	/* (0..60) */,
	-1};
static asn_per_constraints_t asn_PER_memb_bundleCount_constr_7 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  60 }	/* (0..60) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_isdBundles_constr_8 GCC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..5)) */};
static asn_per_constraints_t asn_PER_memb_isdBundles_constr_8 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (SIZE(0..5)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_isdBundles_8[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_IntersectionBundle,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static const ber_tlv_tag_t asn_DEF_isdBundles_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_isdBundles_specs_8 = {
	sizeof(struct isdBundles),
	offsetof(struct isdBundles, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_isdBundles_8 = {
	"isdBundles",
	"isdBundles",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_oer,
	SEQUENCE_OF_encode_oer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_isdBundles_tags_8,
	sizeof(asn_DEF_isdBundles_tags_8)
		/sizeof(asn_DEF_isdBundles_tags_8[0]) - 1, /* 1 */
	asn_DEF_isdBundles_tags_8,	/* Same as above */
	sizeof(asn_DEF_isdBundles_tags_8)
		/sizeof(asn_DEF_isdBundles_tags_8[0]), /* 2 */
	&asn_OER_type_isdBundles_constr_8,
	&asn_PER_type_isdBundles_constr_8,
	asn_MBR_isdBundles_8,
	1,	/* Single element */
	&asn_SPC_isdBundles_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_IntersectionSituationDataBundle_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct IntersectionSituationDataBundle, dialogID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SemiDialogID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"dialogID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IntersectionSituationDataBundle, seqID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SemiSequenceID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"seqID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IntersectionSituationDataBundle, groupID),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GroupID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"groupID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IntersectionSituationDataBundle, requestID),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TemporaryID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"requestID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IntersectionSituationDataBundle, recordCount),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_recordCount_constraint_1,
		&asn_OER_memb_recordCount_constr_6,
		&asn_PER_memb_recordCount_constr_6,
		0,
		"recordCount"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IntersectionSituationDataBundle, bundleCount),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_bundleCount_constraint_1,
		&asn_OER_memb_bundleCount_constr_7,
		&asn_PER_memb_bundleCount_constr_7,
		0,
		"bundleCount"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IntersectionSituationDataBundle, isdBundles),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_isdBundles_8,
		memb_isdBundles_constraint_1,
		&asn_OER_memb_isdBundles_constr_8,
		&asn_PER_memb_isdBundles_constr_8,
		0,
		"isdBundles"
		},
};
static const ber_tlv_tag_t asn_DEF_IntersectionSituationDataBundle_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_IntersectionSituationDataBundle_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dialogID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* seqID */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* groupID */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* requestID */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* recordCount */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* bundleCount */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* isdBundles */
};
static asn_SEQUENCE_specifics_t asn_SPC_IntersectionSituationDataBundle_specs_1 = {
	sizeof(struct IntersectionSituationDataBundle),
	offsetof(struct IntersectionSituationDataBundle, _asn_ctx),
	asn_MAP_IntersectionSituationDataBundle_tag2el_1,
	7,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_IntersectionSituationDataBundle = {
	"IntersectionSituationDataBundle",
	"IntersectionSituationDataBundle",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_oer,
	SEQUENCE_encode_oer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_IntersectionSituationDataBundle_tags_1,
	sizeof(asn_DEF_IntersectionSituationDataBundle_tags_1)
		/sizeof(asn_DEF_IntersectionSituationDataBundle_tags_1[0]), /* 1 */
	asn_DEF_IntersectionSituationDataBundle_tags_1,	/* Same as above */
	sizeof(asn_DEF_IntersectionSituationDataBundle_tags_1)
		/sizeof(asn_DEF_IntersectionSituationDataBundle_tags_1[0]), /* 1 */
	0,	/* No OER visible constraints */
	0,	/* No PER visible constraints */
	asn_MBR_IntersectionSituationDataBundle_1,
	7,	/* Elements count */
	&asn_SPC_IntersectionSituationDataBundle_specs_1	/* Additional specs */
};
