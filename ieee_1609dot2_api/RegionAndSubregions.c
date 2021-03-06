/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2BaseTypes"
 * 	found in "1609dot2-base-types.asn"
 * 	`asn1c -gen-OER`
 */

#include "RegionAndSubregions.h"

asn_TYPE_member_t asn_MBR_RegionAndSubregions_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RegionAndSubregions, region),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Uint8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"region"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RegionAndSubregions, subregions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SequenceOfUint16,
		0,	/* Defer constraints checking to the member type */
		0,	/* No OER visible constraints */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"subregions"
		},
};
static const ber_tlv_tag_t asn_DEF_RegionAndSubregions_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RegionAndSubregions_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* region */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* subregions */
};
asn_SEQUENCE_specifics_t asn_SPC_RegionAndSubregions_specs_1 = {
	sizeof(struct RegionAndSubregions),
	offsetof(struct RegionAndSubregions, _asn_ctx),
	asn_MAP_RegionAndSubregions_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RegionAndSubregions = {
	"RegionAndSubregions",
	"RegionAndSubregions",
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
	asn_DEF_RegionAndSubregions_tags_1,
	sizeof(asn_DEF_RegionAndSubregions_tags_1)
		/sizeof(asn_DEF_RegionAndSubregions_tags_1[0]), /* 1 */
	asn_DEF_RegionAndSubregions_tags_1,	/* Same as above */
	sizeof(asn_DEF_RegionAndSubregions_tags_1)
		/sizeof(asn_DEF_RegionAndSubregions_tags_1[0]), /* 1 */
	0,	/* No OER visible constraints */
	0,	/* No PER visible constraints */
	asn_MBR_RegionAndSubregions_1,
	2,	/* Elements count */
	&asn_SPC_RegionAndSubregions_specs_1	/* Additional specs */
};

