/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2BaseTypes"
 * 	found in "1609dot2-base-types.asn"
 * 	`asn1c -gen-OER -gen-PER`
 */

#include "Opaque.h"

/*
 * This type is implemented using OCTET_STRING,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_Opaque_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (4 << 2))
};
asn_TYPE_descriptor_t asn_DEF_Opaque = {
	"Opaque",
	"Opaque",
	OCTET_STRING_free,
	OCTET_STRING_print,
	OCTET_STRING_constraint,
	OCTET_STRING_decode_ber,
	OCTET_STRING_encode_der,
	OCTET_STRING_decode_xer,
	OCTET_STRING_encode_xer,
	OCTET_STRING_decode_oer,
	OCTET_STRING_encode_oer,
	OCTET_STRING_decode_uper,
	OCTET_STRING_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_Opaque_tags_1,
	sizeof(asn_DEF_Opaque_tags_1)
		/sizeof(asn_DEF_Opaque_tags_1[0]), /* 1 */
	asn_DEF_Opaque_tags_1,	/* Same as above */
	sizeof(asn_DEF_Opaque_tags_1)
		/sizeof(asn_DEF_Opaque_tags_1[0]), /* 1 */
	0,	/* No OER visible constraints */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_OCTET_STRING_specs	/* Additional specs */
};
