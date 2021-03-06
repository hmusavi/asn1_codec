/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2BaseTypes"
 * 	found in "1609dot2-base-types.asn"
 * 	`asn1c -gen-OER`
 */

#ifndef	_SymmAlgorithm_H_
#define	_SymmAlgorithm_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SymmAlgorithm {
	SymmAlgorithm_aes128Ccm	= 0
	/*
	 * Enumeration is extensible
	 */
} e_SymmAlgorithm;

/* SymmAlgorithm */
typedef long	 SymmAlgorithm_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SymmAlgorithm;
extern asn_INTEGER_specifics_t asn_SPC_SymmAlgorithm_specs_1;
asn_struct_free_f SymmAlgorithm_free;
asn_struct_print_f SymmAlgorithm_print;
asn_constr_check_f SymmAlgorithm_constraint;
ber_type_decoder_f SymmAlgorithm_decode_ber;
der_type_encoder_f SymmAlgorithm_encode_der;
xer_type_decoder_f SymmAlgorithm_decode_xer;
xer_type_encoder_f SymmAlgorithm_encode_xer;
oer_type_decoder_f SymmAlgorithm_decode_oer;
oer_type_encoder_f SymmAlgorithm_encode_oer;

#ifdef __cplusplus
}
#endif

#endif	/* _SymmAlgorithm_H_ */
#include <asn_internal.h>
