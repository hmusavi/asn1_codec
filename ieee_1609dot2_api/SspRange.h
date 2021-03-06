/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2BaseTypes"
 * 	found in "1609dot2-base-types.asn"
 * 	`asn1c -gen-OER`
 */

#ifndef	_SspRange_H_
#define	_SspRange_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SequenceOfOctetString.h"
#include <NULL.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SspRange_PR {
	SspRange_PR_NOTHING,	/* No components present */
	SspRange_PR_opaque,
	SspRange_PR_all
	/* Extensions may appear below */
	
} SspRange_PR;

/* SspRange */
typedef struct SspRange {
	SspRange_PR present;
	union SspRange_u {
		SequenceOfOctetString_t	 opaque;
		NULL_t	 all;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SspRange_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SspRange;
extern asn_CHOICE_specifics_t asn_SPC_SspRange_specs_1;
extern asn_TYPE_member_t asn_MBR_SspRange_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SspRange_H_ */
#include <asn_internal.h>
