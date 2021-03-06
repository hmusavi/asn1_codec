/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2"
 * 	found in "1609dot2-schema.asn"
 * 	`asn1c -gen-OER`
 */

#include "ImplicitCertificate.h"

int
ImplicitCertificate_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		/* Nothing is here. See below */
	}
	
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_CertificateBase.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using CertificateBase,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_ImplicitCertificate_constr_1 GCC_NOTUSED = {
	{ 0, 0 },
	-1};
static const ber_tlv_tag_t asn_DEF_ImplicitCertificate_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ImplicitCertificate = {
	"ImplicitCertificate",
	"ImplicitCertificate",
	SEQUENCE_free,
	SEQUENCE_print,
	ImplicitCertificate_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_oer,
	SEQUENCE_encode_oer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ImplicitCertificate_tags_1,
	sizeof(asn_DEF_ImplicitCertificate_tags_1)
		/sizeof(asn_DEF_ImplicitCertificate_tags_1[0]), /* 1 */
	asn_DEF_ImplicitCertificate_tags_1,	/* Same as above */
	sizeof(asn_DEF_ImplicitCertificate_tags_1)
		/sizeof(asn_DEF_ImplicitCertificate_tags_1[0]), /* 1 */
	&asn_OER_type_ImplicitCertificate_constr_1,
	0,	/* No PER visible constraints */
	asn_MBR_CertificateBase_1,
	5,	/* Elements count */
	&asn_SPC_CertificateBase_specs_1	/* Additional specs */
};

