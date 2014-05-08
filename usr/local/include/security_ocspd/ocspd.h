#ifndef	_ocspd_user_
#define	_ocspd_user_

/* Module ocspd */

#include <string.h>
#include <mach/ndr.h>
#include <mach/boolean.h>
#include <mach/kern_return.h>
#include <mach/notify.h>
#include <mach/mach_types.h>
#include <mach/message.h>
#include <mach/mig_errors.h>
#include <mach/port.h>

#ifdef AUTOTEST
#ifndef FUNCTION_PTR_T
#define FUNCTION_PTR_T
typedef void (*function_ptr_t)(mach_port_t, char *, mach_msg_type_number_t);
typedef struct {
        char            *name;
        function_ptr_t  function;
} function_table_entry;
typedef function_table_entry   *function_table_t;
#endif /* FUNCTION_PTR_T */
#endif /* AUTOTEST */

#ifndef	ocspd_MSG_COUNT
#define	ocspd_MSG_COUNT	10
#endif	/* ocspd_MSG_COUNT */

#include <mach/std_types.h>
#include <mach/mig.h>
#include <mach/mig.h>
#include <mach/mach_types.h>
#include <security_ocspd/ocspdTypes.h>
#include <stdint.h>

#ifdef __BeforeMigUserHeader
__BeforeMigUserHeader
#endif /* __BeforeMigUserHeader */

#include <sys/cdefs.h>
__BEGIN_DECLS


/* Routine ocspdFetch */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ocsp_client_ocspdFetch
(
	mach_port_t serverport,
	Data ocsp_req,
	mach_msg_type_number_t ocsp_reqCnt,
	Data *ocsp_rep,
	mach_msg_type_number_t *ocsp_repCnt
);

/* Routine ocspdCacheFlush */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ocsp_client_ocspdCacheFlush
(
	mach_port_t serverport,
	Data certID,
	mach_msg_type_number_t certIDCnt
);

/* Routine ocspdCacheFlushStale */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ocsp_client_ocspdCacheFlushStale
(
	mach_port_t serverport
);

/* Routine certFetch */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ocsp_client_certFetch
(
	mach_port_t serverport,
	Data cert_url,
	mach_msg_type_number_t cert_urlCnt,
	Data *cert_data,
	mach_msg_type_number_t *cert_dataCnt
);

/* Routine crlFetch */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ocsp_client_crlFetch
(
	mach_port_t serverport,
	Data crl_url,
	mach_msg_type_number_t crl_urlCnt,
	Data crl_issuer,
	mach_msg_type_number_t crl_issuerCnt,
	boolean_t cache_read,
	boolean_t cache_write,
	Data verify_time,
	mach_msg_type_number_t verify_timeCnt,
	Data *crl_data,
	mach_msg_type_number_t *crl_dataCnt
);

/* Routine crlRefresh */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ocsp_client_crlRefresh
(
	mach_port_t serverport,
	uint32_t stale_days,
	uint32_t expire_overlap_seconds,
	boolean_t purge_all,
	boolean_t full_crypto_verify
);

/* Routine crlFlush */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ocsp_client_crlFlush
(
	mach_port_t serverport,
	Data cert_url,
	mach_msg_type_number_t cert_urlCnt
);

/* Routine trustSettingsRead */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ocsp_client_trustSettingsRead
(
	mach_port_t serverport,
	uint32_t domain,
	Data *trustSettings,
	mach_msg_type_number_t *trustSettingsCnt,
	OSStatus *rcode
);

/* Routine trustSettingsWrite */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ocsp_client_trustSettingsWrite
(
	mach_port_t serverport,
	mach_port_t clientport,
	uint32_t domain,
	Data authBlob,
	mach_msg_type_number_t authBlobCnt,
	Data trustSettings,
	mach_msg_type_number_t trustSettingsCnt,
	OSStatus *rcode
);

/* Routine crlStatus */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ocsp_client_crlStatus
(
	mach_port_t serverport,
	Data serial_number,
	mach_msg_type_number_t serial_numberCnt,
	Data cert_issuers,
	mach_msg_type_number_t cert_issuersCnt,
	Data crl_issuer,
	mach_msg_type_number_t crl_issuerCnt,
	Data crl_url,
	mach_msg_type_number_t crl_urlCnt
);

__END_DECLS

/********************** Caution **************************/
/* The following data types should be used to calculate  */
/* maximum message sizes only. The actual message may be */
/* smaller, and the position of the arguments within the */
/* message layout may vary from what is presented here.  */
/* For example, if any of the arguments are variable-    */
/* sized, and less than the maximum is sent, the data    */
/* will be packed tight in the actual message to reduce  */
/* the presence of holes.                                */
/********************** Caution **************************/

/* typedefs for all requests */

#ifndef __Request__ocspd_subsystem__defined
#define __Request__ocspd_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t ocsp_req;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t ocsp_reqCnt;
	} __Request__ocspdFetch_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t certID;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t certIDCnt;
	} __Request__ocspdCacheFlush_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__ocspdCacheFlushStale_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t cert_url;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t cert_urlCnt;
	} __Request__certFetch_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t crl_url;
		mach_msg_ool_descriptor_t crl_issuer;
		mach_msg_ool_descriptor_t verify_time;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t crl_urlCnt;
		mach_msg_type_number_t crl_issuerCnt;
		boolean_t cache_read;
		boolean_t cache_write;
		mach_msg_type_number_t verify_timeCnt;
	} __Request__crlFetch_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint32_t stale_days;
		uint32_t expire_overlap_seconds;
		boolean_t purge_all;
		boolean_t full_crypto_verify;
	} __Request__crlRefresh_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t cert_url;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t cert_urlCnt;
	} __Request__crlFlush_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint32_t domain;
	} __Request__trustSettingsRead_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t clientport;
		mach_msg_ool_descriptor_t authBlob;
		mach_msg_ool_descriptor_t trustSettings;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		uint32_t domain;
		mach_msg_type_number_t authBlobCnt;
		mach_msg_type_number_t trustSettingsCnt;
	} __Request__trustSettingsWrite_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t serial_number;
		mach_msg_ool_descriptor_t cert_issuers;
		mach_msg_ool_descriptor_t crl_issuer;
		mach_msg_ool_descriptor_t crl_url;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t serial_numberCnt;
		mach_msg_type_number_t cert_issuersCnt;
		mach_msg_type_number_t crl_issuerCnt;
		mach_msg_type_number_t crl_urlCnt;
	} __Request__crlStatus_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif
#endif /* !__Request__ocspd_subsystem__defined */

/* union of all requests */

#ifndef __RequestUnion__ocsp_client_ocspd_subsystem__defined
#define __RequestUnion__ocsp_client_ocspd_subsystem__defined
union __RequestUnion__ocsp_client_ocspd_subsystem {
	__Request__ocspdFetch_t Request_ocsp_client_ocspdFetch;
	__Request__ocspdCacheFlush_t Request_ocsp_client_ocspdCacheFlush;
	__Request__ocspdCacheFlushStale_t Request_ocsp_client_ocspdCacheFlushStale;
	__Request__certFetch_t Request_ocsp_client_certFetch;
	__Request__crlFetch_t Request_ocsp_client_crlFetch;
	__Request__crlRefresh_t Request_ocsp_client_crlRefresh;
	__Request__crlFlush_t Request_ocsp_client_crlFlush;
	__Request__trustSettingsRead_t Request_ocsp_client_trustSettingsRead;
	__Request__trustSettingsWrite_t Request_ocsp_client_trustSettingsWrite;
	__Request__crlStatus_t Request_ocsp_client_crlStatus;
};
#endif /* !__RequestUnion__ocsp_client_ocspd_subsystem__defined */
/* typedefs for all replies */

#ifndef __Reply__ocspd_subsystem__defined
#define __Reply__ocspd_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t ocsp_rep;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t ocsp_repCnt;
	} __Reply__ocspdFetch_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__ocspdCacheFlush_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__ocspdCacheFlushStale_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t cert_data;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t cert_dataCnt;
	} __Reply__certFetch_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t crl_data;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t crl_dataCnt;
	} __Reply__crlFetch_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__crlRefresh_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__crlFlush_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t trustSettings;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t trustSettingsCnt;
		OSStatus rcode;
	} __Reply__trustSettingsRead_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		OSStatus rcode;
	} __Reply__trustSettingsWrite_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__crlStatus_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif
#endif /* !__Reply__ocspd_subsystem__defined */

/* union of all replies */

#ifndef __ReplyUnion__ocsp_client_ocspd_subsystem__defined
#define __ReplyUnion__ocsp_client_ocspd_subsystem__defined
union __ReplyUnion__ocsp_client_ocspd_subsystem {
	__Reply__ocspdFetch_t Reply_ocsp_client_ocspdFetch;
	__Reply__ocspdCacheFlush_t Reply_ocsp_client_ocspdCacheFlush;
	__Reply__ocspdCacheFlushStale_t Reply_ocsp_client_ocspdCacheFlushStale;
	__Reply__certFetch_t Reply_ocsp_client_certFetch;
	__Reply__crlFetch_t Reply_ocsp_client_crlFetch;
	__Reply__crlRefresh_t Reply_ocsp_client_crlRefresh;
	__Reply__crlFlush_t Reply_ocsp_client_crlFlush;
	__Reply__trustSettingsRead_t Reply_ocsp_client_trustSettingsRead;
	__Reply__trustSettingsWrite_t Reply_ocsp_client_trustSettingsWrite;
	__Reply__crlStatus_t Reply_ocsp_client_crlStatus;
};
#endif /* !__RequestUnion__ocsp_client_ocspd_subsystem__defined */

#ifndef subsystem_to_name_map_ocspd
#define subsystem_to_name_map_ocspd \
    { "ocspdFetch", 33003 },\
    { "ocspdCacheFlush", 33004 },\
    { "ocspdCacheFlushStale", 33005 },\
    { "certFetch", 33006 },\
    { "crlFetch", 33007 },\
    { "crlRefresh", 33008 },\
    { "crlFlush", 33009 },\
    { "trustSettingsRead", 33010 },\
    { "trustSettingsWrite", 33011 },\
    { "crlStatus", 33012 }
#endif

#ifdef __AfterMigUserHeader
__AfterMigUserHeader
#endif /* __AfterMigUserHeader */

#endif	 /* _ocspd_user_ */
