/*
 * Generated by asn1c-0.9.22.1409 (http://lionet.info/asn1c)
 * From ASN.1 module "CREDSSP"
 * 	found in "credssp.asn1"
 * 	`asn1c -fnative-types -fskeletons-copy -fcompound-names`
 */

#ifndef	_TSPasswordCreds_H_
#define	_TSPasswordCreds_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* TSPasswordCreds */
typedef struct TSPasswordCreds {
	OCTET_STRING_t	 domainName;
	OCTET_STRING_t	 userName;
	OCTET_STRING_t	 password;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TSPasswordCreds_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TSPasswordCreds;

#ifdef __cplusplus
}
#endif

#endif	/* _TSPasswordCreds_H_ */
