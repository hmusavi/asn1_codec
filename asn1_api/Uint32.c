/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2BaseTypes"
 * 	found in "1609dot2-base-types.asn"
 * 	`asn1c -gen-OER -gen-PER`
 */

#include "Uint32.h"

int
Uint32_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	/* Constraint check succeeded */
	return 0;
}

/*
 * This type is implemented using NativeInteger,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_Uint32_constr_1 GCC_NOTUSED = {
	{ 4, 1 }	/* (0..4294967295) */,
	-1};
asn_per_constraints_t asn_PER_type_Uint32_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 32, -1,  0,  4294967295 }	/* (0..4294967295) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
const asn_INTEGER_specifics_t asn_SPC_Uint32_specs_1 = {
	0,	0,	0,	0,	0,
	0,	/* Native long size */
	1	/* Unsigned representation */
};
static const ber_tlv_tag_t asn_DEF_Uint32_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
asn_TYPE_descriptor_t asn_DEF_Uint32 = {
	"Uint32",
	"Uint32",
	NativeInteger_free,
	NativeInteger_print,
	Uint32_constraint,
	NativeInteger_decode_ber,
	NativeInteger_encode_der,
	NativeInteger_decode_xer,
	NativeInteger_encode_xer,
	NativeInteger_decode_oer,
	NativeInteger_encode_oer,
	NativeInteger_decode_uper,
	NativeInteger_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_Uint32_tags_1,
	sizeof(asn_DEF_Uint32_tags_1)
		/sizeof(asn_DEF_Uint32_tags_1[0]), /* 1 */
	asn_DEF_Uint32_tags_1,	/* Same as above */
	sizeof(asn_DEF_Uint32_tags_1)
		/sizeof(asn_DEF_Uint32_tags_1[0]), /* 1 */
	&asn_OER_type_Uint32_constr_1,
	&asn_PER_type_Uint32_constr_1,
	0, 0,	/* No members */
	&asn_SPC_Uint32_specs_1	/* Additional specs */
};
