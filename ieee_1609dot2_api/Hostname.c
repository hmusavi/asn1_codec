/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2BaseTypes"
 * 	found in "1609dot2-base-types.asn"
 * 	`asn1c -gen-OER`
 */

#include "Hostname.h"

int
Hostname_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const UTF8String_t *st = (const UTF8String_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = UTF8String_length(st);
	if((ssize_t)size < 0) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: UTF-8: broken encoding (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if((size <= 255)) {
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
 * This type is implemented using UTF8String,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_Hostname_constr_1 GCC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..MAX)) */};
static const ber_tlv_tag_t asn_DEF_Hostname_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (12 << 2))
};
asn_TYPE_descriptor_t asn_DEF_Hostname = {
	"Hostname",
	"Hostname",
	UTF8String_free,
	UTF8String_print,
	Hostname_constraint,
	UTF8String_decode_ber,
	UTF8String_encode_der,
	UTF8String_decode_xer,
	UTF8String_encode_xer,
	UTF8String_decode_oer,
	UTF8String_encode_oer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_Hostname_tags_1,
	sizeof(asn_DEF_Hostname_tags_1)
		/sizeof(asn_DEF_Hostname_tags_1[0]), /* 1 */
	asn_DEF_Hostname_tags_1,	/* Same as above */
	sizeof(asn_DEF_Hostname_tags_1)
		/sizeof(asn_DEF_Hostname_tags_1[0]), /* 1 */
	&asn_OER_type_Hostname_constr_1,
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	0	/* No specifics */
};

