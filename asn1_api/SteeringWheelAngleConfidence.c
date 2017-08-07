/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603DA.asn"
 * 	`asn1c -gen-OER -gen-PER`
 */

#include "SteeringWheelAngleConfidence.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_SteeringWheelAngleConfidence_constr_1 GCC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_SteeringWheelAngleConfidence_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_SteeringWheelAngleConfidence_value2enum_1[] = {
	{ 0,	11,	"unavailable" },
	{ 1,	8,	"prec2deg" },
	{ 2,	8,	"prec1deg" },
	{ 3,	11,	"prec0-02deg" }
};
static const unsigned int asn_MAP_SteeringWheelAngleConfidence_enum2value_1[] = {
	3,	/* prec0-02deg(3) */
	2,	/* prec1deg(2) */
	1,	/* prec2deg(1) */
	0	/* unavailable(0) */
};
const asn_INTEGER_specifics_t asn_SPC_SteeringWheelAngleConfidence_specs_1 = {
	asn_MAP_SteeringWheelAngleConfidence_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_SteeringWheelAngleConfidence_enum2value_1,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_SteeringWheelAngleConfidence_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_SteeringWheelAngleConfidence = {
	"SteeringWheelAngleConfidence",
	"SteeringWheelAngleConfidence",
	NativeEnumerated_free,
	NativeEnumerated_print,
	NativeEnumerated_constraint,
	NativeEnumerated_decode_ber,
	NativeEnumerated_encode_der,
	NativeEnumerated_decode_xer,
	NativeEnumerated_encode_xer,
	NativeEnumerated_decode_oer,
	NativeEnumerated_encode_oer,
	NativeEnumerated_decode_uper,
	NativeEnumerated_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_SteeringWheelAngleConfidence_tags_1,
	sizeof(asn_DEF_SteeringWheelAngleConfidence_tags_1)
		/sizeof(asn_DEF_SteeringWheelAngleConfidence_tags_1[0]), /* 1 */
	asn_DEF_SteeringWheelAngleConfidence_tags_1,	/* Same as above */
	sizeof(asn_DEF_SteeringWheelAngleConfidence_tags_1)
		/sizeof(asn_DEF_SteeringWheelAngleConfidence_tags_1[0]), /* 1 */
	&asn_OER_type_SteeringWheelAngleConfidence_constr_1,
	&asn_PER_type_SteeringWheelAngleConfidence_constr_1,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_SteeringWheelAngleConfidence_specs_1	/* Additional specs */
};
