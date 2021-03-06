/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2"
 * 	found in "1609dot2-schema.asn"
 * 	`asn1c -gen-OER`
 */

#ifndef	_IssuerIdentifier_H_
#define	_IssuerIdentifier_H_


#include <asn_application.h>

/* Including external dependencies */
#include "HashedId8.h"
#include "HashAlgorithm.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IssuerIdentifier_PR {
	IssuerIdentifier_PR_NOTHING,	/* No components present */
	IssuerIdentifier_PR_sha256AndDigest,
	IssuerIdentifier_PR_self
	/* Extensions may appear below */
	
} IssuerIdentifier_PR;

/* IssuerIdentifier */
typedef struct IssuerIdentifier {
	IssuerIdentifier_PR present;
	union IssuerIdentifier_u {
		HashedId8_t	 sha256AndDigest;
		HashAlgorithm_t	 self;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IssuerIdentifier_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IssuerIdentifier;
extern asn_CHOICE_specifics_t asn_SPC_IssuerIdentifier_specs_1;
extern asn_TYPE_member_t asn_MBR_IssuerIdentifier_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _IssuerIdentifier_H_ */
#include <asn_internal.h>
