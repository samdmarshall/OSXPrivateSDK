/* Generated from /Users/sam/Projects/AOS-Downloader/projects/Heimdal-398.1.2/lib/heimcred/hc_err.et */
/* $Id$ */

#ifndef __hc_err_h__
#define __hc_err_h__

struct et_list;

void initialize_hc_error_table_r(struct et_list **);

void initialize_hc_error_table(void);
#define init_hc_err_tbl initialize_hc_error_table

typedef enum hc_error_number{
	kHeimCredError_UnknownKey = 564480,
	kHeimCredError_MissingSchemaKey = 564481,
	kHeimCredError_NoSuchSchema = 564482,
	kHeimCredError_NoItemsMatchesQuery = 564483,
	kHeimCredError_ServerDisconnected = 564608,
	kHeimCredError_ServerReturnedError = 564609
} hc_error_number;

#define ERROR_TABLE_BASE_hc 564480

#define COM_ERR_BINDDOMAIN_hc "heim_com_err564480"

#endif /* __hc_err_h__ */
