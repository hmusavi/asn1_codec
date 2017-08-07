/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603DA.asn"
 * 	`asn1c -gen-OER -gen-PER`
 */

#include "DisabledVehicle.h"

static int
memb_statusDetails_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 523 && value <= 541)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_statusDetails_constr_2 GCC_NOTUSED = {
	{ 2, 1 }	/* (523..541) */,
	-1};
static asn_per_constraints_t asn_PER_memb_statusDetails_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  523,  541 }	/* (523..541) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_DisabledVehicle_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DisabledVehicle, statusDetails),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ITIScodes,
		memb_statusDetails_constraint_1,
		&asn_OER_memb_statusDetails_constr_2,
		&asn_PER_memb_statusDetails_constr_2,
		0,
		"statusDetails"
		},
	{ ATF_POINTER, 1, offsetof(struct DisabledVehicle, locationDetails),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GenericLocations,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* No PER visible constraints */
		0,
		"locationDetails"
		},
};
static const int asn_MAP_DisabledVehicle_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_DisabledVehicle_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DisabledVehicle_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* statusDetails */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* locationDetails */
};
asn_SEQUENCE_specifics_t asn_SPC_DisabledVehicle_specs_1 = {
	sizeof(struct DisabledVehicle),
	offsetof(struct DisabledVehicle, _asn_ctx),
	asn_MAP_DisabledVehicle_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_DisabledVehicle_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	1,	/* Start extensions */
	3	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_DisabledVehicle = {
	"DisabledVehicle",
	"DisabledVehicle",
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
	asn_DEF_DisabledVehicle_tags_1,
	sizeof(asn_DEF_DisabledVehicle_tags_1)
		/sizeof(asn_DEF_DisabledVehicle_tags_1[0]), /* 1 */
	asn_DEF_DisabledVehicle_tags_1,	/* Same as above */
	sizeof(asn_DEF_DisabledVehicle_tags_1)
		/sizeof(asn_DEF_DisabledVehicle_tags_1[0]), /* 1 */
	0,	/* No OER visible constraints */
	0,	/* No PER visible constraints */
	asn_MBR_DisabledVehicle_1,
	2,	/* Elements count */
	&asn_SPC_DisabledVehicle_specs_1	/* Additional specs */
};
