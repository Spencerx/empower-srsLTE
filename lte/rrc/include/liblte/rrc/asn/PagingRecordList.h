/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_PagingRecordList_H_
#define	_PagingRecordList_H_


#include <liblte/rrc/asn/asn_application.h>

/* Including external dependencies */
#include <liblte/rrc/asn/asn_SEQUENCE_OF.h>
#include <liblte/rrc/asn/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PagingRecord;

/* PagingRecordList */
typedef struct PagingRecordList {
	A_SEQUENCE_OF(struct PagingRecord) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PagingRecordList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PagingRecordList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "liblte/rrc/asn/PagingRecord.h"

#endif	/* _PagingRecordList_H_ */
#include <liblte/rrc/asn/asn_internal.h>