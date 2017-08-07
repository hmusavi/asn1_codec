/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SEMI"
 * 	found in "SEMI_v2.3.0_070616.asn"
 * 	`asn1c -gen-OER -gen-PER`
 */

#ifndef	_IntersectionSituationDataBundle_H_
#define	_IntersectionSituationDataBundle_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SemiDialogID.h"
#include "SemiSequenceID.h"
#include "GroupID.h"
#include "TemporaryID.h"
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct IntersectionBundle;

/* IntersectionSituationDataBundle */
typedef struct IntersectionSituationDataBundle {
	SemiDialogID_t	 dialogID;
	SemiSequenceID_t	 seqID;
	GroupID_t	 groupID;
	TemporaryID_t	 requestID;
	long	 recordCount;
	long	 bundleCount;
	struct isdBundles {
		A_SEQUENCE_OF(struct IntersectionBundle) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} isdBundles;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IntersectionSituationDataBundle_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IntersectionSituationDataBundle;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "IntersectionBundle.h"

#endif	/* _IntersectionSituationDataBundle_H_ */
#include <asn_internal.h>