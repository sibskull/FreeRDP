/*
 * Generated by asn1c-0.9.22.1409 (http://lionet.info/asn1c)
 * From ASN.1 module "SPNEGO"
 * 	found in "spnego.asn1"
 * 	`asn1c -fnative-types -fskeletons-copy -fcompound-names`
 */

#ifndef	_NegTokenResp_H_
#define	_NegTokenResp_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "MechType.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NegTokenResp__negState {
	NegTokenResp__negState_accept_completed	= 0,
	NegTokenResp__negState_accept_incomplete	= 1,
	NegTokenResp__negState_reject	= 2,
	NegTokenResp__negState_request_mic	= 3
} e_NegTokenResp__negState;

/* NegTokenResp */
typedef struct NegTokenResp {
	long	*negState	/* OPTIONAL */;
	MechType_t	*supportedMech	/* OPTIONAL */;
	OCTET_STRING_t	*responseToken	/* OPTIONAL */;
	OCTET_STRING_t	*mechListMIC	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NegTokenResp_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_negState_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NegTokenResp;

#ifdef __cplusplus
}
#endif

#endif	/* _NegTokenResp_H_ */
