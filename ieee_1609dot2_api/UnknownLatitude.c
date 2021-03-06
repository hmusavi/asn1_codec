/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2BaseTypes"
 * 	found in "1609dot2-base-types.asn"
 * 	`asn1c -gen-OER`
 */

#include "UnknownLatitude.h"

int
UnknownLatitude_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value == 900000001)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NinetyDegreeInt,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_UnknownLatitude_constr_1 GCC_NOTUSED = {
	{ 4, 1 }	/* (900000001..900000001) */,
	-1};
static const ber_tlv_tag_t asn_DEF_UnknownLatitude_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
asn_TYPE_descriptor_t asn_DEF_UnknownLatitude = {
	"UnknownLatitude",
	"UnknownLatitude",
	NativeInteger_free,
	NativeInteger_print,
	UnknownLatitude_constraint,
	NativeInteger_decode_ber,
	NativeInteger_encode_der,
	NativeInteger_decode_xer,
	NativeInteger_encode_xer,
	NativeInteger_decode_oer,
	NativeInteger_encode_oer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_UnknownLatitude_tags_1,
	sizeof(asn_DEF_UnknownLatitude_tags_1)
		/sizeof(asn_DEF_UnknownLatitude_tags_1[0]), /* 1 */
	asn_DEF_UnknownLatitude_tags_1,	/* Same as above */
	sizeof(asn_DEF_UnknownLatitude_tags_1)
		/sizeof(asn_DEF_UnknownLatitude_tags_1[0]), /* 1 */
	&asn_OER_type_UnknownLatitude_constr_1,
	0,	/* No PER visible constraints */
	0, 0,	/* Defined elsewhere */
	0	/* No specifics */
};

