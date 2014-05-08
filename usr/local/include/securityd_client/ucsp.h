#ifndef	_ucsp_user_
#define	_ucsp_user_

/* Module ucsp */

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

#ifndef	ucsp_MSG_COUNT
#define	ucsp_MSG_COUNT	95
#endif	/* ucsp_MSG_COUNT */

#include <mach/std_types.h>
#include <mach/mig.h>
#include <mach/mig.h>
#include <mach/mach_types.h>
#include <securityd_client/ss_types.h>
#include <securityd_client/ucsp_types.h>

#ifdef __BeforeMigUserHeader
__BeforeMigUserHeader
#endif /* __BeforeMigUserHeader */

#include <sys/cdefs.h>
__BEGIN_DECLS


/* Routine setup */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_setup
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	mach_port_t tport,
	ClientSetupInfo info,
	FilePath FilePath
);

/* Routine setupThread */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_setupThread
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	mach_port_t tport
);

/* Routine authenticateDb */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_authenticateDb
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	IPCDbHandle db,
	CSSM_DB_ACCESS_TYPE accessType,
	Data accessCredentials,
	mach_msg_type_number_t accessCredentialsCnt
);

/* Routine releaseDb */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_releaseDb
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	IPCDbHandle db
);

/* Routine getDbName */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_getDbName
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	IPCDbHandle db,
	FilePathOut name
);

/* Routine setDbName */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_setDbName
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	IPCDbHandle db,
	FilePath name
);

/* Routine openToken */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_openToken
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	uint32 ssid,
	FilePath name,
	Data accessCredentials,
	mach_msg_type_number_t accessCredentialsCnt,
	IPCDbHandle *db
);

/* Routine findFirst */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_findFirst
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	IPCDbHandle db,
	Data query,
	mach_msg_type_number_t queryCnt,
	Data inAttributes,
	mach_msg_type_number_t inAttributesCnt,
	Data *outAttributes,
	mach_msg_type_number_t *outAttributesCnt,
	boolean_t getData,
	Data *data,
	mach_msg_type_number_t *dataCnt,
	IPCKeyHandle *key,
	IPCSearchHandle *search,
	IPCRecordHandle *record
);

/* Routine findNext */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_findNext
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	IPCSearchHandle search,
	Data inAttributes,
	mach_msg_type_number_t inAttributesCnt,
	Data *outAttributes,
	mach_msg_type_number_t *outAttributesCnt,
	boolean_t getData,
	Data *data,
	mach_msg_type_number_t *dataCnt,
	IPCKeyHandle *key,
	IPCRecordHandle *record
);

/* Routine findRecordHandle */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_findRecordHandle
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	IPCRecordHandle record,
	Data inAttributes,
	mach_msg_type_number_t inAttributesCnt,
	Data *outAttributes,
	mach_msg_type_number_t *outAttributesCnt,
	boolean_t getData,
	Data *data,
	mach_msg_type_number_t *dataCnt,
	IPCKeyHandle *key
);

/* Routine insertRecord */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_insertRecord
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	IPCDbHandle db,
	CSSM_DB_RECORDTYPE recordType,
	Data attributes,
	mach_msg_type_number_t attributesCnt,
	Data data,
	mach_msg_type_number_t dataCnt,
	IPCRecordHandle *record
);

/* Routine deleteRecord */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_deleteRecord
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	IPCDbHandle db,
	IPCRecordHandle record
);

/* Routine modifyRecord */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_modifyRecord
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	IPCDbHandle db,
	IPCRecordHandle *record,
	CSSM_DB_RECORDTYPE recordType,
	Data attributes,
	mach_msg_type_number_t attributesCnt,
	boolean_t setData,
	Data data,
	mach_msg_type_number_t dataCnt,
	CSSM_DB_MODIFY_MODE modifyMode
);

/* Routine releaseSearch */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_releaseSearch
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	IPCSearchHandle search
);

/* Routine releaseRecord */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_releaseRecord
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	IPCRecordHandle record
);

/* Routine createDb */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_createDb
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	IPCDbHandle *db,
	Data ident,
	mach_msg_type_number_t identCnt,
	Data accessCredentials,
	mach_msg_type_number_t accessCredentialsCnt,
	Data aclEntryPrototype,
	mach_msg_type_number_t aclEntryPrototypeCnt,
	DBParameters params
);

/* Routine decodeDb */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_decodeDb
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	IPCDbHandle *db,
	Data ident,
	mach_msg_type_number_t identCnt,
	Data accessCredentials,
	mach_msg_type_number_t accessCredentialsCnt,
	Pointer blob,
	mach_msg_type_number_t blobCnt
);

/* Routine encodeDb */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_encodeDb
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	IPCDbHandle db,
	Pointer *blob,
	mach_msg_type_number_t *blobCnt
);

/* Routine setDbParameters */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_setDbParameters
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	IPCDbHandle db,
	DBParameters params
);

/* Routine getDbParameters */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_getDbParameters
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	IPCDbHandle db,
	DBParameters *params
);

/* Routine changePassphrase */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_changePassphrase
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	IPCDbHandle db,
	Data accessCredentials,
	mach_msg_type_number_t accessCredentialsCnt
);

/* Routine lockAll */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_lockAll
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	boolean_t forSleep
);

/* Routine unlockDb */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_unlockDb
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	IPCDbHandle db
);

/* Routine unlockDbWithPassphrase */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_unlockDbWithPassphrase
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	IPCDbHandle db,
	Data passPhrase,
	mach_msg_type_number_t passPhraseCnt
);

/* Routine isLocked */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_isLocked
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	IPCDbHandle db,
	boolean_t *locked
);

/* Routine encodeKey */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_encodeKey
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	IPCKeyHandle key,
	Pointer *blob,
	mach_msg_type_number_t *blobCnt,
	boolean_t wantUid,
	Data *uid,
	mach_msg_type_number_t *uidCnt
);

/* Routine decodeKey */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_decodeKey
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	IPCKeyHandle *key,
	Data *header,
	mach_msg_type_number_t *headerCnt,
	IPCDbHandle db,
	Pointer blob,
	mach_msg_type_number_t blobCnt
);

/* Routine recodeKey */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_recodeKey
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	IPCDbHandle oldDb,
	IPCKeyHandle key,
	IPCDbHandle newDb,
	Pointer *newBlob,
	mach_msg_type_number_t *newBlobCnt
);

/* Routine releaseKey */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_releaseKey
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	IPCKeyHandle key
);

/* Routine queryKeySizeInBits */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_queryKeySizeInBits
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	IPCKeyHandle key,
	CSSM_KEY_SIZE *length
);

/* Routine getOutputSize */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_getOutputSize
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	Data context,
	mach_msg_type_number_t contextCnt,
	IPCKeyHandle key,
	uint32 inputSize,
	boolean_t encrypt,
	uint32 *outputSize
);

/* Routine getKeyDigest */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_getKeyDigest
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	IPCKeyHandle key,
	Data *digest,
	mach_msg_type_number_t *digestCnt
);

/* Routine generateSignature */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_generateSignature
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	Data context,
	mach_msg_type_number_t contextCnt,
	IPCKeyHandle key,
	CSSM_ALGORITHMS signOnlyAlgorithm,
	Data data,
	mach_msg_type_number_t dataCnt,
	Data *signature,
	mach_msg_type_number_t *signatureCnt
);

/* Routine verifySignature */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_verifySignature
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	Data context,
	mach_msg_type_number_t contextCnt,
	IPCKeyHandle key,
	CSSM_ALGORITHMS signOnlyAlgorithm,
	Data data,
	mach_msg_type_number_t dataCnt,
	Data signature,
	mach_msg_type_number_t signatureCnt
);

/* Routine generateMac */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_generateMac
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	Data context,
	mach_msg_type_number_t contextCnt,
	IPCKeyHandle key,
	Data data,
	mach_msg_type_number_t dataCnt,
	Data *signature,
	mach_msg_type_number_t *signatureCnt
);

/* Routine verifyMac */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_verifyMac
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	Data context,
	mach_msg_type_number_t contextCnt,
	IPCKeyHandle key,
	Data data,
	mach_msg_type_number_t dataCnt,
	Data signature,
	mach_msg_type_number_t signatureCnt
);

/* Routine encrypt */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_encrypt
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	Data context,
	mach_msg_type_number_t contextCnt,
	IPCKeyHandle key,
	Data clear,
	mach_msg_type_number_t clearCnt,
	Data *cipher,
	mach_msg_type_number_t *cipherCnt
);

/* Routine decrypt */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_decrypt
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	Data context,
	mach_msg_type_number_t contextCnt,
	IPCKeyHandle key,
	Data cipher,
	mach_msg_type_number_t cipherCnt,
	Data *clear,
	mach_msg_type_number_t *clearCnt
);

/* Routine generateKey */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_generateKey
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	IPCDbHandle db,
	Data context,
	mach_msg_type_number_t contextCnt,
	Data accessCredentials,
	mach_msg_type_number_t accessCredentialsCnt,
	Data aclEntryPrototype,
	mach_msg_type_number_t aclEntryPrototypeCnt,
	uint32 keyUsage,
	uint32 keyAttrs,
	IPCKeyHandle *key,
	Data *header,
	mach_msg_type_number_t *headerCnt
);

/* Routine generateKeyPair */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_generateKeyPair
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	IPCDbHandle db,
	Data context,
	mach_msg_type_number_t contextCnt,
	Data accessCredentials,
	mach_msg_type_number_t accessCredentialsCnt,
	Data aclEntryPrototype,
	mach_msg_type_number_t aclEntryPrototypeCnt,
	uint32 pubUsage,
	uint32 pubAttrs,
	uint32 privUsage,
	uint32 privAttrs,
	IPCKeyHandle *pubKey,
	Data *pubHeader,
	mach_msg_type_number_t *pubHeaderCnt,
	IPCKeyHandle *privKey,
	Data *privHeader,
	mach_msg_type_number_t *privHeaderCnt
);

/* Routine wrapKey */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_wrapKey
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	Data context,
	mach_msg_type_number_t contextCnt,
	IPCKeyHandle key,
	Data accessCredentials,
	mach_msg_type_number_t accessCredentialsCnt,
	IPCKeyHandle keyToBeWrapped,
	Data descriptiveData,
	mach_msg_type_number_t descriptiveDataCnt,
	Data *wrappedKey,
	mach_msg_type_number_t *wrappedKeyCnt
);

/* Routine unwrapKey */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_unwrapKey
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	IPCDbHandle db,
	Data context,
	mach_msg_type_number_t contextCnt,
	IPCKeyHandle key,
	Data accessCredentials,
	mach_msg_type_number_t accessCredentialsCnt,
	Data aclEntryPrototype,
	mach_msg_type_number_t aclEntryPrototypeCnt,
	IPCKeyHandle publicKey,
	Data wrappedKey,
	mach_msg_type_number_t wrappedKeyCnt,
	uint32 usage,
	uint32 attributes,
	Data *data,
	mach_msg_type_number_t *dataCnt,
	IPCKeyHandle *resultKey,
	Data *header,
	mach_msg_type_number_t *headerCnt
);

/* Routine deriveKey */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_deriveKey
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	IPCDbHandle db,
	Data context,
	mach_msg_type_number_t contextCnt,
	IPCKeyHandle baseKey,
	Data accessCredentials,
	mach_msg_type_number_t accessCredentialsCnt,
	Data aclEntryPrototype,
	mach_msg_type_number_t aclEntryPrototypeCnt,
	Data paramInput,
	mach_msg_type_number_t paramInputCnt,
	Data *paramOutput,
	mach_msg_type_number_t *paramOutputCnt,
	uint32 keyUsage,
	uint32 keyAttrs,
	IPCKeyHandle *key,
	Data *header,
	mach_msg_type_number_t *headerCnt
);

/* Routine generateRandom */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_generateRandom
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	uint32 ssid,
	Data context,
	mach_msg_type_number_t contextCnt,
	Data *data,
	mach_msg_type_number_t *dataCnt
);

/* Routine getOwner */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_getOwner
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	AclKind kind,
	IPCGenericHandle key,
	Data *proto,
	mach_msg_type_number_t *protoCnt
);

/* Routine setOwner */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_setOwner
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	AclKind kind,
	IPCGenericHandle key,
	Data accessCredentials,
	mach_msg_type_number_t accessCredentialsCnt,
	Data aclOwnerPrototype,
	mach_msg_type_number_t aclOwnerPrototypeCnt
);

/* Routine getAcl */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_getAcl
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	AclKind kind,
	IPCGenericHandle key,
	boolean_t haveTag,
	CssmString tag,
	uint32 *count,
	Data *acls,
	mach_msg_type_number_t *aclsCnt
);

/* Routine changeAcl */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_changeAcl
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	AclKind kind,
	IPCGenericHandle key,
	Data accessCredentials,
	mach_msg_type_number_t accessCredentialsCnt,
	CSSM_ACL_EDIT_MODE mode,
	IPCGenericHandle handle,
	Data aclEntryInput,
	mach_msg_type_number_t aclEntryInputCnt
);

/* Routine login */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_login
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	Data accessCredentials,
	mach_msg_type_number_t accessCredentialsCnt,
	Data name,
	mach_msg_type_number_t nameCnt
);

/* Routine logout */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_logout
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode
);

/* Routine getStatistics */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_getStatistics
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	uint32 ssid,
	CSSM_CSP_OPERATIONAL_STATISTICS *statistics
);

/* Routine getTime */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_getTime
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	uint32 ssid,
	CSSM_ALGORITHMS algorithm,
	Data *data,
	mach_msg_type_number_t *dataCnt
);

/* Routine getCounter */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_getCounter
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	uint32 ssid,
	Data *data,
	mach_msg_type_number_t *dataCnt
);

/* Routine selfVerify */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_selfVerify
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	uint32 ssid
);

/* Routine cspPassThrough */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_cspPassThrough
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	uint32 ssid,
	uint32 id,
	Data context,
	mach_msg_type_number_t contextCnt,
	IPCKeyHandle hKey,
	Data inData,
	mach_msg_type_number_t inDataCnt,
	Data *outData,
	mach_msg_type_number_t *outDataCnt
);

/* Routine dlPassThrough */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_dlPassThrough
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	uint32 ssid,
	uint32 id,
	Data inData,
	mach_msg_type_number_t inDataCnt,
	Data *outData,
	mach_msg_type_number_t *outDataCnt
);

/* Routine authorizationCreate */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_authorizationCreate
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	Data rights,
	mach_msg_type_number_t rightsCnt,
	uint32 flags,
	Data environment,
	mach_msg_type_number_t environmentCnt,
	AuthorizationBlob *authorization
);

/* Routine authorizationRelease */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_authorizationRelease
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	AuthorizationBlob authorization,
	uint32 flags
);

/* Routine authorizationCopyRights */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_authorizationCopyRights
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	AuthorizationBlob authorization,
	Data rights,
	mach_msg_type_number_t rightsCnt,
	uint32 flags,
	Data environment,
	mach_msg_type_number_t environmentCnt,
	Data *result,
	mach_msg_type_number_t *resultCnt
);

/* Routine authorizationCopyInfo */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_authorizationCopyInfo
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	AuthorizationBlob authorization,
	AuthorizationString tag,
	Data *info,
	mach_msg_type_number_t *infoCnt
);

/* Routine authorizationExternalize */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_authorizationExternalize
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	AuthorizationBlob authorization,
	AuthorizationExternalForm *form
);

/* Routine authorizationInternalize */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_authorizationInternalize
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	AuthorizationExternalForm form,
	AuthorizationBlob *authorization
);

/* Routine setSessionUserPrefs */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_setSessionUserPrefs
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	SecuritySessionId sessionId,
	Data userPrefs,
	mach_msg_type_number_t userPrefsCnt
);

/* Routine postNotification */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_postNotification
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	uint32 domain,
	uint32 event,
	Data data,
	mach_msg_type_number_t dataCnt,
	uint32 sequence
);

/* Routine extractMasterKey */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_extractMasterKey
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	IPCDbHandle db,
	Data context,
	mach_msg_type_number_t contextCnt,
	IPCDbHandle sourceDb,
	Data accessCredentials,
	mach_msg_type_number_t accessCredentialsCnt,
	Data aclEntryPrototype,
	mach_msg_type_number_t aclEntryPrototypeCnt,
	uint32 keyUsage,
	uint32 keyAttrs,
	IPCKeyHandle *key,
	Data *header,
	mach_msg_type_number_t *headerCnt
);

/* Routine authorizationdbGet */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_authorizationdbGet
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	AuthorizationString rightname,
	Data *rightdefinition,
	mach_msg_type_number_t *rightdefinitionCnt
);

/* Routine authorizationdbSet */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_authorizationdbSet
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	AuthorizationBlob authorization,
	AuthorizationString rightname,
	Data rightDefinition,
	mach_msg_type_number_t rightDefinitionCnt
);

/* Routine authorizationdbRemove */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_authorizationdbRemove
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	AuthorizationBlob authorization,
	AuthorizationString rightname
);

/* Routine addCodeEquivalence */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_addCodeEquivalence
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	Data oldCode,
	mach_msg_type_number_t oldCodeCnt,
	Data newCode,
	mach_msg_type_number_t newCodeCnt,
	FilePath name,
	boolean_t forSystem
);

/* Routine removeCodeEquivalence */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_removeCodeEquivalence
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	Data code,
	mach_msg_type_number_t codeCnt,
	FilePath name,
	boolean_t forSystem
);

/* Routine setAlternateSystemRoot */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_setAlternateSystemRoot
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	FilePath path
);

/* SimpleRoutine childCheckIn */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_childCheckIn
(
	mach_port_t sport,
	mach_port_t servicePort,
	mach_port_t task_port
);

/* Routine commitDbForSync */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_commitDbForSync
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	IPCDbHandle srcDb,
	IPCDbHandle cloneDb,
	Pointer *blob,
	mach_msg_type_number_t *blobCnt
);

/* Routine registerHosting */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_registerHosting
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	mach_port_t hostingPort,
	uint32 flags
);

/* Routine hostingPort */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_hostingPort
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	pid_t hostPid,
	mach_port_t *hostingPort
);

/* Routine setGuest */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_setGuest
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	SecGuestRef guest,
	uint32 flags
);

/* Routine createGuest */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_createGuest
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	SecGuestRef host,
	uint32_t status,
	FilePath path,
	HashData cdhash,
	mach_msg_type_number_t cdhashCnt,
	Data attributes,
	mach_msg_type_number_t attributesCnt,
	uint32 flags,
	SecGuestRef *guest
);

/* Routine setGuestStatus */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_setGuestStatus
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	SecGuestRef guest,
	uint32_t status,
	Data attributes,
	mach_msg_type_number_t attributesCnt
);

/* Routine removeGuest */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_removeGuest
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	SecGuestRef host,
	SecGuestRef guest
);

/* Routine helpCheckLoad */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_helpCheckLoad
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	FilePath path,
	uint32_t addType
);

/* Routine recodeDbForSync */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_recodeDbForSync
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	IPCDbHandle dbToClone,
	IPCDbHandle srcDb,
	IPCDbHandle *newDb
);

/* Routine authenticateDbsForSync */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_authenticateDbsForSync
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	Data ipcDbHandleArray,
	mach_msg_type_number_t ipcDbHandleArrayCnt,
	Data agentData,
	mach_msg_type_number_t agentDataCnt,
	IPCDbHandle *newDb
);

/* Routine verifyPrivileged */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_verifyPrivileged
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode
);

/* Routine verifyPrivileged2 */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_verifyPrivileged2
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	mach_port_t *originPort
);

/* Routine stashDb */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_stashDb
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	IPCDbHandle db
);

/* Routine stashDbCheck */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_stashDbCheck
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	IPCDbHandle db
);

/* Routine verifyKeyStorePassphrase */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_verifyKeyStorePassphrase
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	uint32_t retries
);

/* Routine resetKeyStorePassphrase */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_resetKeyStorePassphrase
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode,
	Data passPhrase,
	mach_msg_type_number_t passPhraseCnt
);

/* Routine changeKeyStorePassphrase */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_client_changeKeyStorePassphrase
(
	mach_port_t sport,
	mach_port_t rport,
	security_token_t *securitydCreds,
	CSSM_RETURN *rcode
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

#ifndef __Request__ucsp_subsystem__defined
#define __Request__ucsp_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t tport;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		ClientSetupInfo info;
		mach_msg_type_number_t FilePathOffset; /* MiG doesn't use it */
		mach_msg_type_number_t FilePathCnt;
		char FilePath[1024];
	} __Request__setup_t;
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
		mach_msg_port_descriptor_t tport;
		/* end of the kernel processed data */
	} __Request__setupThread_t;
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
		mach_msg_ool_descriptor_t accessCredentials;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		IPCDbHandle db;
		CSSM_DB_ACCESS_TYPE accessType;
		mach_msg_type_number_t accessCredentialsCnt;
	} __Request__authenticateDb_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		IPCDbHandle db;
	} __Request__releaseDb_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		IPCDbHandle db;
	} __Request__getDbName_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		IPCDbHandle db;
		mach_msg_type_number_t nameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t nameCnt;
		char name[1024];
	} __Request__setDbName_t;
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
		mach_msg_ool_descriptor_t accessCredentials;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		uint32 ssid;
		mach_msg_type_number_t nameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t nameCnt;
		char name[1024];
		mach_msg_type_number_t accessCredentialsCnt;
	} __Request__openToken_t;
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
		mach_msg_ool_descriptor_t query;
		mach_msg_ool_descriptor_t inAttributes;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		IPCDbHandle db;
		mach_msg_type_number_t queryCnt;
		mach_msg_type_number_t inAttributesCnt;
		boolean_t getData;
	} __Request__findFirst_t;
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
		mach_msg_ool_descriptor_t inAttributes;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		IPCSearchHandle search;
		mach_msg_type_number_t inAttributesCnt;
		boolean_t getData;
	} __Request__findNext_t;
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
		mach_msg_ool_descriptor_t inAttributes;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		IPCRecordHandle record;
		mach_msg_type_number_t inAttributesCnt;
		boolean_t getData;
	} __Request__findRecordHandle_t;
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
		mach_msg_ool_descriptor_t attributes;
		mach_msg_ool_descriptor_t data;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		IPCDbHandle db;
		CSSM_DB_RECORDTYPE recordType;
		mach_msg_type_number_t attributesCnt;
		mach_msg_type_number_t dataCnt;
	} __Request__insertRecord_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		IPCDbHandle db;
		IPCRecordHandle record;
	} __Request__deleteRecord_t;
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
		mach_msg_ool_descriptor_t attributes;
		mach_msg_ool_descriptor_t data;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		IPCDbHandle db;
		IPCRecordHandle record;
		CSSM_DB_RECORDTYPE recordType;
		mach_msg_type_number_t attributesCnt;
		boolean_t setData;
		mach_msg_type_number_t dataCnt;
		CSSM_DB_MODIFY_MODE modifyMode;
	} __Request__modifyRecord_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		IPCSearchHandle search;
	} __Request__releaseSearch_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		IPCRecordHandle record;
	} __Request__releaseRecord_t;
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
		mach_msg_ool_descriptor_t ident;
		mach_msg_ool_descriptor_t accessCredentials;
		mach_msg_ool_descriptor_t aclEntryPrototype;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t identCnt;
		mach_msg_type_number_t accessCredentialsCnt;
		mach_msg_type_number_t aclEntryPrototypeCnt;
		DBParameters params;
	} __Request__createDb_t;
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
		mach_msg_ool_descriptor_t ident;
		mach_msg_ool_descriptor_t accessCredentials;
		mach_msg_ool_descriptor_t blob;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t identCnt;
		mach_msg_type_number_t accessCredentialsCnt;
		mach_msg_type_number_t blobCnt;
	} __Request__decodeDb_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		IPCDbHandle db;
	} __Request__encodeDb_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		IPCDbHandle db;
		DBParameters params;
	} __Request__setDbParameters_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		IPCDbHandle db;
	} __Request__getDbParameters_t;
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
		mach_msg_ool_descriptor_t accessCredentials;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		IPCDbHandle db;
		mach_msg_type_number_t accessCredentialsCnt;
	} __Request__changePassphrase_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		boolean_t forSleep;
	} __Request__lockAll_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		IPCDbHandle db;
	} __Request__unlockDb_t;
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
		mach_msg_ool_descriptor_t passPhrase;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		IPCDbHandle db;
		mach_msg_type_number_t passPhraseCnt;
	} __Request__unlockDbWithPassphrase_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		IPCDbHandle db;
	} __Request__isLocked_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		IPCKeyHandle key;
		boolean_t wantUid;
	} __Request__encodeKey_t;
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
		mach_msg_ool_descriptor_t blob;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		IPCDbHandle db;
		mach_msg_type_number_t blobCnt;
	} __Request__decodeKey_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		IPCDbHandle oldDb;
		IPCKeyHandle key;
		IPCDbHandle newDb;
	} __Request__recodeKey_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		IPCKeyHandle key;
	} __Request__releaseKey_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		IPCKeyHandle key;
	} __Request__queryKeySizeInBits_t;
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
		mach_msg_ool_descriptor_t context;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t contextCnt;
		IPCKeyHandle key;
		uint32 inputSize;
		boolean_t encrypt;
	} __Request__getOutputSize_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		IPCKeyHandle key;
	} __Request__getKeyDigest_t;
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
		mach_msg_ool_descriptor_t context;
		mach_msg_ool_descriptor_t data;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t contextCnt;
		IPCKeyHandle key;
		CSSM_ALGORITHMS signOnlyAlgorithm;
		mach_msg_type_number_t dataCnt;
	} __Request__generateSignature_t;
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
		mach_msg_ool_descriptor_t context;
		mach_msg_ool_descriptor_t data;
		mach_msg_ool_descriptor_t signature;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t contextCnt;
		IPCKeyHandle key;
		CSSM_ALGORITHMS signOnlyAlgorithm;
		mach_msg_type_number_t dataCnt;
		mach_msg_type_number_t signatureCnt;
	} __Request__verifySignature_t;
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
		mach_msg_ool_descriptor_t context;
		mach_msg_ool_descriptor_t data;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t contextCnt;
		IPCKeyHandle key;
		mach_msg_type_number_t dataCnt;
	} __Request__generateMac_t;
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
		mach_msg_ool_descriptor_t context;
		mach_msg_ool_descriptor_t data;
		mach_msg_ool_descriptor_t signature;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t contextCnt;
		IPCKeyHandle key;
		mach_msg_type_number_t dataCnt;
		mach_msg_type_number_t signatureCnt;
	} __Request__verifyMac_t;
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
		mach_msg_ool_descriptor_t context;
		mach_msg_ool_descriptor_t clear;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t contextCnt;
		IPCKeyHandle key;
		mach_msg_type_number_t clearCnt;
	} __Request__encrypt_t;
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
		mach_msg_ool_descriptor_t context;
		mach_msg_ool_descriptor_t cipher;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t contextCnt;
		IPCKeyHandle key;
		mach_msg_type_number_t cipherCnt;
	} __Request__decrypt_t;
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
		mach_msg_ool_descriptor_t context;
		mach_msg_ool_descriptor_t accessCredentials;
		mach_msg_ool_descriptor_t aclEntryPrototype;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		IPCDbHandle db;
		mach_msg_type_number_t contextCnt;
		mach_msg_type_number_t accessCredentialsCnt;
		mach_msg_type_number_t aclEntryPrototypeCnt;
		uint32 keyUsage;
		uint32 keyAttrs;
	} __Request__generateKey_t;
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
		mach_msg_ool_descriptor_t context;
		mach_msg_ool_descriptor_t accessCredentials;
		mach_msg_ool_descriptor_t aclEntryPrototype;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		IPCDbHandle db;
		mach_msg_type_number_t contextCnt;
		mach_msg_type_number_t accessCredentialsCnt;
		mach_msg_type_number_t aclEntryPrototypeCnt;
		uint32 pubUsage;
		uint32 pubAttrs;
		uint32 privUsage;
		uint32 privAttrs;
	} __Request__generateKeyPair_t;
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
		mach_msg_ool_descriptor_t context;
		mach_msg_ool_descriptor_t accessCredentials;
		mach_msg_ool_descriptor_t descriptiveData;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t contextCnt;
		IPCKeyHandle key;
		mach_msg_type_number_t accessCredentialsCnt;
		IPCKeyHandle keyToBeWrapped;
		mach_msg_type_number_t descriptiveDataCnt;
	} __Request__wrapKey_t;
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
		mach_msg_ool_descriptor_t context;
		mach_msg_ool_descriptor_t accessCredentials;
		mach_msg_ool_descriptor_t aclEntryPrototype;
		mach_msg_ool_descriptor_t wrappedKey;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		IPCDbHandle db;
		mach_msg_type_number_t contextCnt;
		IPCKeyHandle key;
		mach_msg_type_number_t accessCredentialsCnt;
		mach_msg_type_number_t aclEntryPrototypeCnt;
		IPCKeyHandle publicKey;
		mach_msg_type_number_t wrappedKeyCnt;
		uint32 usage;
		uint32 attributes;
	} __Request__unwrapKey_t;
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
		mach_msg_ool_descriptor_t context;
		mach_msg_ool_descriptor_t accessCredentials;
		mach_msg_ool_descriptor_t aclEntryPrototype;
		mach_msg_ool_descriptor_t paramInput;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		IPCDbHandle db;
		mach_msg_type_number_t contextCnt;
		IPCKeyHandle baseKey;
		mach_msg_type_number_t accessCredentialsCnt;
		mach_msg_type_number_t aclEntryPrototypeCnt;
		mach_msg_type_number_t paramInputCnt;
		uint32 keyUsage;
		uint32 keyAttrs;
	} __Request__deriveKey_t;
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
		mach_msg_ool_descriptor_t context;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		uint32 ssid;
		mach_msg_type_number_t contextCnt;
	} __Request__generateRandom_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		AclKind kind;
		IPCGenericHandle key;
	} __Request__getOwner_t;
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
		mach_msg_ool_descriptor_t accessCredentials;
		mach_msg_ool_descriptor_t aclOwnerPrototype;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		AclKind kind;
		IPCGenericHandle key;
		mach_msg_type_number_t accessCredentialsCnt;
		mach_msg_type_number_t aclOwnerPrototypeCnt;
	} __Request__setOwner_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		AclKind kind;
		IPCGenericHandle key;
		boolean_t haveTag;
		mach_msg_type_number_t tagOffset; /* MiG doesn't use it */
		mach_msg_type_number_t tagCnt;
		char tag[68];
	} __Request__getAcl_t;
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
		mach_msg_ool_descriptor_t accessCredentials;
		mach_msg_ool_descriptor_t aclEntryInput;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		AclKind kind;
		IPCGenericHandle key;
		mach_msg_type_number_t accessCredentialsCnt;
		CSSM_ACL_EDIT_MODE mode;
		IPCGenericHandle handle;
		mach_msg_type_number_t aclEntryInputCnt;
	} __Request__changeAcl_t;
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
		mach_msg_ool_descriptor_t accessCredentials;
		mach_msg_ool_descriptor_t name;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t accessCredentialsCnt;
		mach_msg_type_number_t nameCnt;
	} __Request__login_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__logout_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint32 ssid;
	} __Request__getStatistics_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint32 ssid;
		CSSM_ALGORITHMS algorithm;
	} __Request__getTime_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint32 ssid;
	} __Request__getCounter_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint32 ssid;
	} __Request__selfVerify_t;
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
		mach_msg_ool_descriptor_t context;
		mach_msg_ool_descriptor_t inData;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		uint32 ssid;
		uint32 id;
		mach_msg_type_number_t contextCnt;
		IPCKeyHandle hKey;
		mach_msg_type_number_t inDataCnt;
	} __Request__cspPassThrough_t;
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
		mach_msg_ool_descriptor_t inData;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		uint32 ssid;
		uint32 id;
		mach_msg_type_number_t inDataCnt;
	} __Request__dlPassThrough_t;
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
		mach_msg_ool_descriptor_t rights;
		mach_msg_ool_descriptor_t environment;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t rightsCnt;
		uint32 flags;
		mach_msg_type_number_t environmentCnt;
	} __Request__authorizationCreate_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		AuthorizationBlob authorization;
		uint32 flags;
	} __Request__authorizationRelease_t;
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
		mach_msg_ool_descriptor_t rights;
		mach_msg_ool_descriptor_t environment;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		AuthorizationBlob authorization;
		mach_msg_type_number_t rightsCnt;
		uint32 flags;
		mach_msg_type_number_t environmentCnt;
	} __Request__authorizationCopyRights_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		AuthorizationBlob authorization;
		mach_msg_type_number_t tagOffset; /* MiG doesn't use it */
		mach_msg_type_number_t tagCnt;
		char tag[1024];
	} __Request__authorizationCopyInfo_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		AuthorizationBlob authorization;
	} __Request__authorizationExternalize_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		AuthorizationExternalForm form;
	} __Request__authorizationInternalize_t;
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
		mach_msg_ool_descriptor_t userPrefs;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		SecuritySessionId sessionId;
		mach_msg_type_number_t userPrefsCnt;
	} __Request__setSessionUserPrefs_t;
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
		mach_msg_ool_descriptor_t data;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		uint32 domain;
		uint32 event;
		mach_msg_type_number_t dataCnt;
		uint32 sequence;
	} __Request__postNotification_t;
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
		mach_msg_ool_descriptor_t context;
		mach_msg_ool_descriptor_t accessCredentials;
		mach_msg_ool_descriptor_t aclEntryPrototype;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		IPCDbHandle db;
		mach_msg_type_number_t contextCnt;
		IPCDbHandle sourceDb;
		mach_msg_type_number_t accessCredentialsCnt;
		mach_msg_type_number_t aclEntryPrototypeCnt;
		uint32 keyUsage;
		uint32 keyAttrs;
	} __Request__extractMasterKey_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t rightnameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t rightnameCnt;
		char rightname[1024];
	} __Request__authorizationdbGet_t;
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
		mach_msg_ool_descriptor_t rightDefinition;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		AuthorizationBlob authorization;
		mach_msg_type_number_t rightnameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t rightnameCnt;
		char rightname[1024];
		mach_msg_type_number_t rightDefinitionCnt;
	} __Request__authorizationdbSet_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		AuthorizationBlob authorization;
		mach_msg_type_number_t rightnameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t rightnameCnt;
		char rightname[1024];
	} __Request__authorizationdbRemove_t;
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
		mach_msg_ool_descriptor_t oldCode;
		mach_msg_ool_descriptor_t newCode;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t oldCodeCnt;
		mach_msg_type_number_t newCodeCnt;
		mach_msg_type_number_t nameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t nameCnt;
		char name[1024];
		boolean_t forSystem;
	} __Request__addCodeEquivalence_t;
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
		mach_msg_ool_descriptor_t code;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t codeCnt;
		mach_msg_type_number_t nameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t nameCnt;
		char name[1024];
		boolean_t forSystem;
	} __Request__removeCodeEquivalence_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t pathOffset; /* MiG doesn't use it */
		mach_msg_type_number_t pathCnt;
		char path[1024];
	} __Request__setAlternateSystemRoot_t;
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
		mach_msg_port_descriptor_t servicePort;
		mach_msg_port_descriptor_t task_port;
		/* end of the kernel processed data */
	} __Request__childCheckIn_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		IPCDbHandle srcDb;
		IPCDbHandle cloneDb;
	} __Request__commitDbForSync_t;
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
		mach_msg_port_descriptor_t hostingPort;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		uint32 flags;
	} __Request__registerHosting_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		pid_t hostPid;
	} __Request__hostingPort_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		SecGuestRef guest;
		uint32 flags;
	} __Request__setGuest_t;
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
		mach_msg_ool_descriptor_t attributes;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		SecGuestRef host;
		uint32_t status;
		mach_msg_type_number_t pathOffset; /* MiG doesn't use it */
		mach_msg_type_number_t pathCnt;
		char path[1024];
		mach_msg_type_number_t cdhashCnt;
		char cdhash[64];
		mach_msg_type_number_t attributesCnt;
		uint32 flags;
	} __Request__createGuest_t;
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
		mach_msg_ool_descriptor_t attributes;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		SecGuestRef guest;
		uint32_t status;
		mach_msg_type_number_t attributesCnt;
	} __Request__setGuestStatus_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		SecGuestRef host;
		SecGuestRef guest;
	} __Request__removeGuest_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t pathOffset; /* MiG doesn't use it */
		mach_msg_type_number_t pathCnt;
		char path[1024];
		uint32_t addType;
	} __Request__helpCheckLoad_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		IPCDbHandle dbToClone;
		IPCDbHandle srcDb;
	} __Request__recodeDbForSync_t;
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
		mach_msg_ool_descriptor_t ipcDbHandleArray;
		mach_msg_ool_descriptor_t agentData;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t ipcDbHandleArrayCnt;
		mach_msg_type_number_t agentDataCnt;
	} __Request__authenticateDbsForSync_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__verifyPrivileged_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__verifyPrivileged2_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		IPCDbHandle db;
	} __Request__stashDb_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		IPCDbHandle db;
	} __Request__stashDbCheck_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint32_t retries;
	} __Request__verifyKeyStorePassphrase_t;
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
		mach_msg_ool_descriptor_t passPhrase;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t passPhraseCnt;
	} __Request__resetKeyStorePassphrase_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__changeKeyStorePassphrase_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif
#endif /* !__Request__ucsp_subsystem__defined */

/* union of all requests */

#ifndef __RequestUnion__ucsp_client_ucsp_subsystem__defined
#define __RequestUnion__ucsp_client_ucsp_subsystem__defined
union __RequestUnion__ucsp_client_ucsp_subsystem {
	__Request__setup_t Request_ucsp_client_setup;
	__Request__setupThread_t Request_ucsp_client_setupThread;
	__Request__authenticateDb_t Request_ucsp_client_authenticateDb;
	__Request__releaseDb_t Request_ucsp_client_releaseDb;
	__Request__getDbName_t Request_ucsp_client_getDbName;
	__Request__setDbName_t Request_ucsp_client_setDbName;
	__Request__openToken_t Request_ucsp_client_openToken;
	__Request__findFirst_t Request_ucsp_client_findFirst;
	__Request__findNext_t Request_ucsp_client_findNext;
	__Request__findRecordHandle_t Request_ucsp_client_findRecordHandle;
	__Request__insertRecord_t Request_ucsp_client_insertRecord;
	__Request__deleteRecord_t Request_ucsp_client_deleteRecord;
	__Request__modifyRecord_t Request_ucsp_client_modifyRecord;
	__Request__releaseSearch_t Request_ucsp_client_releaseSearch;
	__Request__releaseRecord_t Request_ucsp_client_releaseRecord;
	__Request__createDb_t Request_ucsp_client_createDb;
	__Request__decodeDb_t Request_ucsp_client_decodeDb;
	__Request__encodeDb_t Request_ucsp_client_encodeDb;
	__Request__setDbParameters_t Request_ucsp_client_setDbParameters;
	__Request__getDbParameters_t Request_ucsp_client_getDbParameters;
	__Request__changePassphrase_t Request_ucsp_client_changePassphrase;
	__Request__lockAll_t Request_ucsp_client_lockAll;
	__Request__unlockDb_t Request_ucsp_client_unlockDb;
	__Request__unlockDbWithPassphrase_t Request_ucsp_client_unlockDbWithPassphrase;
	__Request__isLocked_t Request_ucsp_client_isLocked;
	__Request__encodeKey_t Request_ucsp_client_encodeKey;
	__Request__decodeKey_t Request_ucsp_client_decodeKey;
	__Request__recodeKey_t Request_ucsp_client_recodeKey;
	__Request__releaseKey_t Request_ucsp_client_releaseKey;
	__Request__queryKeySizeInBits_t Request_ucsp_client_queryKeySizeInBits;
	__Request__getOutputSize_t Request_ucsp_client_getOutputSize;
	__Request__getKeyDigest_t Request_ucsp_client_getKeyDigest;
	__Request__generateSignature_t Request_ucsp_client_generateSignature;
	__Request__verifySignature_t Request_ucsp_client_verifySignature;
	__Request__generateMac_t Request_ucsp_client_generateMac;
	__Request__verifyMac_t Request_ucsp_client_verifyMac;
	__Request__encrypt_t Request_ucsp_client_encrypt;
	__Request__decrypt_t Request_ucsp_client_decrypt;
	__Request__generateKey_t Request_ucsp_client_generateKey;
	__Request__generateKeyPair_t Request_ucsp_client_generateKeyPair;
	__Request__wrapKey_t Request_ucsp_client_wrapKey;
	__Request__unwrapKey_t Request_ucsp_client_unwrapKey;
	__Request__deriveKey_t Request_ucsp_client_deriveKey;
	__Request__generateRandom_t Request_ucsp_client_generateRandom;
	__Request__getOwner_t Request_ucsp_client_getOwner;
	__Request__setOwner_t Request_ucsp_client_setOwner;
	__Request__getAcl_t Request_ucsp_client_getAcl;
	__Request__changeAcl_t Request_ucsp_client_changeAcl;
	__Request__login_t Request_ucsp_client_login;
	__Request__logout_t Request_ucsp_client_logout;
	__Request__getStatistics_t Request_ucsp_client_getStatistics;
	__Request__getTime_t Request_ucsp_client_getTime;
	__Request__getCounter_t Request_ucsp_client_getCounter;
	__Request__selfVerify_t Request_ucsp_client_selfVerify;
	__Request__cspPassThrough_t Request_ucsp_client_cspPassThrough;
	__Request__dlPassThrough_t Request_ucsp_client_dlPassThrough;
	__Request__authorizationCreate_t Request_ucsp_client_authorizationCreate;
	__Request__authorizationRelease_t Request_ucsp_client_authorizationRelease;
	__Request__authorizationCopyRights_t Request_ucsp_client_authorizationCopyRights;
	__Request__authorizationCopyInfo_t Request_ucsp_client_authorizationCopyInfo;
	__Request__authorizationExternalize_t Request_ucsp_client_authorizationExternalize;
	__Request__authorizationInternalize_t Request_ucsp_client_authorizationInternalize;
	__Request__setSessionUserPrefs_t Request_ucsp_client_setSessionUserPrefs;
	__Request__postNotification_t Request_ucsp_client_postNotification;
	__Request__extractMasterKey_t Request_ucsp_client_extractMasterKey;
	__Request__authorizationdbGet_t Request_ucsp_client_authorizationdbGet;
	__Request__authorizationdbSet_t Request_ucsp_client_authorizationdbSet;
	__Request__authorizationdbRemove_t Request_ucsp_client_authorizationdbRemove;
	__Request__addCodeEquivalence_t Request_ucsp_client_addCodeEquivalence;
	__Request__removeCodeEquivalence_t Request_ucsp_client_removeCodeEquivalence;
	__Request__setAlternateSystemRoot_t Request_ucsp_client_setAlternateSystemRoot;
	__Request__childCheckIn_t Request_ucsp_client_childCheckIn;
	__Request__commitDbForSync_t Request_ucsp_client_commitDbForSync;
	__Request__registerHosting_t Request_ucsp_client_registerHosting;
	__Request__hostingPort_t Request_ucsp_client_hostingPort;
	__Request__setGuest_t Request_ucsp_client_setGuest;
	__Request__createGuest_t Request_ucsp_client_createGuest;
	__Request__setGuestStatus_t Request_ucsp_client_setGuestStatus;
	__Request__removeGuest_t Request_ucsp_client_removeGuest;
	__Request__helpCheckLoad_t Request_ucsp_client_helpCheckLoad;
	__Request__recodeDbForSync_t Request_ucsp_client_recodeDbForSync;
	__Request__authenticateDbsForSync_t Request_ucsp_client_authenticateDbsForSync;
	__Request__verifyPrivileged_t Request_ucsp_client_verifyPrivileged;
	__Request__verifyPrivileged2_t Request_ucsp_client_verifyPrivileged2;
	__Request__stashDb_t Request_ucsp_client_stashDb;
	__Request__stashDbCheck_t Request_ucsp_client_stashDbCheck;
	__Request__verifyKeyStorePassphrase_t Request_ucsp_client_verifyKeyStorePassphrase;
	__Request__resetKeyStorePassphrase_t Request_ucsp_client_resetKeyStorePassphrase;
	__Request__changeKeyStorePassphrase_t Request_ucsp_client_changeKeyStorePassphrase;
};
#endif /* !__RequestUnion__ucsp_client_ucsp_subsystem__defined */
/* typedefs for all replies */

#ifndef __Reply__ucsp_subsystem__defined
#define __Reply__ucsp_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		CSSM_RETURN rcode;
	} __Reply__setup_t;
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
		CSSM_RETURN rcode;
	} __Reply__setupThread_t;
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
		CSSM_RETURN rcode;
	} __Reply__authenticateDb_t;
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
		CSSM_RETURN rcode;
	} __Reply__releaseDb_t;
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
		CSSM_RETURN rcode;
		mach_msg_type_number_t nameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t nameCnt;
		char name[1024];
	} __Reply__getDbName_t;
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
		CSSM_RETURN rcode;
	} __Reply__setDbName_t;
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
		CSSM_RETURN rcode;
		IPCDbHandle db;
	} __Reply__openToken_t;
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
		mach_msg_ool_descriptor_t outAttributes;
		mach_msg_ool_descriptor_t data;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		CSSM_RETURN rcode;
		mach_msg_type_number_t outAttributesCnt;
		mach_msg_type_number_t dataCnt;
		IPCKeyHandle key;
		IPCSearchHandle search;
		IPCRecordHandle record;
	} __Reply__findFirst_t;
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
		mach_msg_ool_descriptor_t outAttributes;
		mach_msg_ool_descriptor_t data;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		CSSM_RETURN rcode;
		mach_msg_type_number_t outAttributesCnt;
		mach_msg_type_number_t dataCnt;
		IPCKeyHandle key;
		IPCRecordHandle record;
	} __Reply__findNext_t;
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
		mach_msg_ool_descriptor_t outAttributes;
		mach_msg_ool_descriptor_t data;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		CSSM_RETURN rcode;
		mach_msg_type_number_t outAttributesCnt;
		mach_msg_type_number_t dataCnt;
		IPCKeyHandle key;
	} __Reply__findRecordHandle_t;
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
		CSSM_RETURN rcode;
		IPCRecordHandle record;
	} __Reply__insertRecord_t;
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
		CSSM_RETURN rcode;
	} __Reply__deleteRecord_t;
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
		CSSM_RETURN rcode;
		IPCRecordHandle record;
	} __Reply__modifyRecord_t;
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
		CSSM_RETURN rcode;
	} __Reply__releaseSearch_t;
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
		CSSM_RETURN rcode;
	} __Reply__releaseRecord_t;
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
		CSSM_RETURN rcode;
		IPCDbHandle db;
	} __Reply__createDb_t;
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
		CSSM_RETURN rcode;
		IPCDbHandle db;
	} __Reply__decodeDb_t;
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
		mach_msg_ool_descriptor_t blob;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		CSSM_RETURN rcode;
		mach_msg_type_number_t blobCnt;
	} __Reply__encodeDb_t;
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
		CSSM_RETURN rcode;
	} __Reply__setDbParameters_t;
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
		CSSM_RETURN rcode;
		DBParameters params;
	} __Reply__getDbParameters_t;
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
		CSSM_RETURN rcode;
	} __Reply__changePassphrase_t;
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
		CSSM_RETURN rcode;
	} __Reply__lockAll_t;
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
		CSSM_RETURN rcode;
	} __Reply__unlockDb_t;
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
		CSSM_RETURN rcode;
	} __Reply__unlockDbWithPassphrase_t;
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
		CSSM_RETURN rcode;
		boolean_t locked;
	} __Reply__isLocked_t;
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
		mach_msg_ool_descriptor_t blob;
		mach_msg_ool_descriptor_t uid;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		CSSM_RETURN rcode;
		mach_msg_type_number_t blobCnt;
		mach_msg_type_number_t uidCnt;
	} __Reply__encodeKey_t;
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
		mach_msg_ool_descriptor_t header;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		CSSM_RETURN rcode;
		IPCKeyHandle key;
		mach_msg_type_number_t headerCnt;
	} __Reply__decodeKey_t;
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
		mach_msg_ool_descriptor_t newBlob;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		CSSM_RETURN rcode;
		mach_msg_type_number_t newBlobCnt;
	} __Reply__recodeKey_t;
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
		CSSM_RETURN rcode;
	} __Reply__releaseKey_t;
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
		CSSM_RETURN rcode;
		CSSM_KEY_SIZE length;
	} __Reply__queryKeySizeInBits_t;
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
		CSSM_RETURN rcode;
		uint32 outputSize;
	} __Reply__getOutputSize_t;
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
		mach_msg_ool_descriptor_t digest;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		CSSM_RETURN rcode;
		mach_msg_type_number_t digestCnt;
	} __Reply__getKeyDigest_t;
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
		mach_msg_ool_descriptor_t signature;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		CSSM_RETURN rcode;
		mach_msg_type_number_t signatureCnt;
	} __Reply__generateSignature_t;
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
		CSSM_RETURN rcode;
	} __Reply__verifySignature_t;
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
		mach_msg_ool_descriptor_t signature;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		CSSM_RETURN rcode;
		mach_msg_type_number_t signatureCnt;
	} __Reply__generateMac_t;
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
		CSSM_RETURN rcode;
	} __Reply__verifyMac_t;
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
		mach_msg_ool_descriptor_t cipher;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		CSSM_RETURN rcode;
		mach_msg_type_number_t cipherCnt;
	} __Reply__encrypt_t;
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
		mach_msg_ool_descriptor_t clear;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		CSSM_RETURN rcode;
		mach_msg_type_number_t clearCnt;
	} __Reply__decrypt_t;
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
		mach_msg_ool_descriptor_t header;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		CSSM_RETURN rcode;
		IPCKeyHandle key;
		mach_msg_type_number_t headerCnt;
	} __Reply__generateKey_t;
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
		mach_msg_ool_descriptor_t pubHeader;
		mach_msg_ool_descriptor_t privHeader;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		CSSM_RETURN rcode;
		IPCKeyHandle pubKey;
		mach_msg_type_number_t pubHeaderCnt;
		IPCKeyHandle privKey;
		mach_msg_type_number_t privHeaderCnt;
	} __Reply__generateKeyPair_t;
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
		mach_msg_ool_descriptor_t wrappedKey;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		CSSM_RETURN rcode;
		mach_msg_type_number_t wrappedKeyCnt;
	} __Reply__wrapKey_t;
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
		mach_msg_ool_descriptor_t data;
		mach_msg_ool_descriptor_t header;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		CSSM_RETURN rcode;
		mach_msg_type_number_t dataCnt;
		IPCKeyHandle resultKey;
		mach_msg_type_number_t headerCnt;
	} __Reply__unwrapKey_t;
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
		mach_msg_ool_descriptor_t paramOutput;
		mach_msg_ool_descriptor_t header;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		CSSM_RETURN rcode;
		mach_msg_type_number_t paramOutputCnt;
		IPCKeyHandle key;
		mach_msg_type_number_t headerCnt;
	} __Reply__deriveKey_t;
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
		mach_msg_ool_descriptor_t data;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		CSSM_RETURN rcode;
		mach_msg_type_number_t dataCnt;
	} __Reply__generateRandom_t;
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
		mach_msg_ool_descriptor_t proto;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		CSSM_RETURN rcode;
		mach_msg_type_number_t protoCnt;
	} __Reply__getOwner_t;
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
		CSSM_RETURN rcode;
	} __Reply__setOwner_t;
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
		mach_msg_ool_descriptor_t acls;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		CSSM_RETURN rcode;
		uint32 count;
		mach_msg_type_number_t aclsCnt;
	} __Reply__getAcl_t;
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
		CSSM_RETURN rcode;
	} __Reply__changeAcl_t;
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
		CSSM_RETURN rcode;
	} __Reply__login_t;
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
		CSSM_RETURN rcode;
	} __Reply__logout_t;
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
		CSSM_RETURN rcode;
		CSSM_CSP_OPERATIONAL_STATISTICS statistics;
	} __Reply__getStatistics_t;
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
		mach_msg_ool_descriptor_t data;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		CSSM_RETURN rcode;
		mach_msg_type_number_t dataCnt;
	} __Reply__getTime_t;
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
		mach_msg_ool_descriptor_t data;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		CSSM_RETURN rcode;
		mach_msg_type_number_t dataCnt;
	} __Reply__getCounter_t;
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
		CSSM_RETURN rcode;
	} __Reply__selfVerify_t;
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
		mach_msg_ool_descriptor_t outData;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		CSSM_RETURN rcode;
		mach_msg_type_number_t outDataCnt;
	} __Reply__cspPassThrough_t;
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
		mach_msg_ool_descriptor_t outData;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		CSSM_RETURN rcode;
		mach_msg_type_number_t outDataCnt;
	} __Reply__dlPassThrough_t;
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
		CSSM_RETURN rcode;
		AuthorizationBlob authorization;
	} __Reply__authorizationCreate_t;
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
		CSSM_RETURN rcode;
	} __Reply__authorizationRelease_t;
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
		mach_msg_ool_descriptor_t result;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		CSSM_RETURN rcode;
		mach_msg_type_number_t resultCnt;
	} __Reply__authorizationCopyRights_t;
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
		mach_msg_ool_descriptor_t info;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		CSSM_RETURN rcode;
		mach_msg_type_number_t infoCnt;
	} __Reply__authorizationCopyInfo_t;
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
		CSSM_RETURN rcode;
		AuthorizationExternalForm form;
	} __Reply__authorizationExternalize_t;
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
		CSSM_RETURN rcode;
		AuthorizationBlob authorization;
	} __Reply__authorizationInternalize_t;
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
		CSSM_RETURN rcode;
	} __Reply__setSessionUserPrefs_t;
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
		CSSM_RETURN rcode;
	} __Reply__postNotification_t;
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
		mach_msg_ool_descriptor_t header;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		CSSM_RETURN rcode;
		IPCKeyHandle key;
		mach_msg_type_number_t headerCnt;
	} __Reply__extractMasterKey_t;
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
		mach_msg_ool_descriptor_t rightdefinition;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		CSSM_RETURN rcode;
		mach_msg_type_number_t rightdefinitionCnt;
	} __Reply__authorizationdbGet_t;
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
		CSSM_RETURN rcode;
	} __Reply__authorizationdbSet_t;
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
		CSSM_RETURN rcode;
	} __Reply__authorizationdbRemove_t;
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
		CSSM_RETURN rcode;
	} __Reply__addCodeEquivalence_t;
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
		CSSM_RETURN rcode;
	} __Reply__removeCodeEquivalence_t;
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
		CSSM_RETURN rcode;
	} __Reply__setAlternateSystemRoot_t;
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
	} __Reply__childCheckIn_t;
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
		mach_msg_ool_descriptor_t blob;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		CSSM_RETURN rcode;
		mach_msg_type_number_t blobCnt;
	} __Reply__commitDbForSync_t;
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
		CSSM_RETURN rcode;
	} __Reply__registerHosting_t;
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
		mach_msg_port_descriptor_t hostingPort;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		CSSM_RETURN rcode;
	} __Reply__hostingPort_t;
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
		CSSM_RETURN rcode;
	} __Reply__setGuest_t;
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
		CSSM_RETURN rcode;
		SecGuestRef guest;
	} __Reply__createGuest_t;
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
		CSSM_RETURN rcode;
	} __Reply__setGuestStatus_t;
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
		CSSM_RETURN rcode;
	} __Reply__removeGuest_t;
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
		CSSM_RETURN rcode;
	} __Reply__helpCheckLoad_t;
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
		CSSM_RETURN rcode;
		IPCDbHandle newDb;
	} __Reply__recodeDbForSync_t;
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
		CSSM_RETURN rcode;
		IPCDbHandle newDb;
	} __Reply__authenticateDbsForSync_t;
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
		CSSM_RETURN rcode;
	} __Reply__verifyPrivileged_t;
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
		mach_msg_port_descriptor_t originPort;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		CSSM_RETURN rcode;
	} __Reply__verifyPrivileged2_t;
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
		CSSM_RETURN rcode;
	} __Reply__stashDb_t;
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
		CSSM_RETURN rcode;
	} __Reply__stashDbCheck_t;
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
		CSSM_RETURN rcode;
	} __Reply__verifyKeyStorePassphrase_t;
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
		CSSM_RETURN rcode;
	} __Reply__resetKeyStorePassphrase_t;
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
		CSSM_RETURN rcode;
	} __Reply__changeKeyStorePassphrase_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif
#endif /* !__Reply__ucsp_subsystem__defined */

/* union of all replies */

#ifndef __ReplyUnion__ucsp_client_ucsp_subsystem__defined
#define __ReplyUnion__ucsp_client_ucsp_subsystem__defined
union __ReplyUnion__ucsp_client_ucsp_subsystem {
	__Reply__setup_t Reply_ucsp_client_setup;
	__Reply__setupThread_t Reply_ucsp_client_setupThread;
	__Reply__authenticateDb_t Reply_ucsp_client_authenticateDb;
	__Reply__releaseDb_t Reply_ucsp_client_releaseDb;
	__Reply__getDbName_t Reply_ucsp_client_getDbName;
	__Reply__setDbName_t Reply_ucsp_client_setDbName;
	__Reply__openToken_t Reply_ucsp_client_openToken;
	__Reply__findFirst_t Reply_ucsp_client_findFirst;
	__Reply__findNext_t Reply_ucsp_client_findNext;
	__Reply__findRecordHandle_t Reply_ucsp_client_findRecordHandle;
	__Reply__insertRecord_t Reply_ucsp_client_insertRecord;
	__Reply__deleteRecord_t Reply_ucsp_client_deleteRecord;
	__Reply__modifyRecord_t Reply_ucsp_client_modifyRecord;
	__Reply__releaseSearch_t Reply_ucsp_client_releaseSearch;
	__Reply__releaseRecord_t Reply_ucsp_client_releaseRecord;
	__Reply__createDb_t Reply_ucsp_client_createDb;
	__Reply__decodeDb_t Reply_ucsp_client_decodeDb;
	__Reply__encodeDb_t Reply_ucsp_client_encodeDb;
	__Reply__setDbParameters_t Reply_ucsp_client_setDbParameters;
	__Reply__getDbParameters_t Reply_ucsp_client_getDbParameters;
	__Reply__changePassphrase_t Reply_ucsp_client_changePassphrase;
	__Reply__lockAll_t Reply_ucsp_client_lockAll;
	__Reply__unlockDb_t Reply_ucsp_client_unlockDb;
	__Reply__unlockDbWithPassphrase_t Reply_ucsp_client_unlockDbWithPassphrase;
	__Reply__isLocked_t Reply_ucsp_client_isLocked;
	__Reply__encodeKey_t Reply_ucsp_client_encodeKey;
	__Reply__decodeKey_t Reply_ucsp_client_decodeKey;
	__Reply__recodeKey_t Reply_ucsp_client_recodeKey;
	__Reply__releaseKey_t Reply_ucsp_client_releaseKey;
	__Reply__queryKeySizeInBits_t Reply_ucsp_client_queryKeySizeInBits;
	__Reply__getOutputSize_t Reply_ucsp_client_getOutputSize;
	__Reply__getKeyDigest_t Reply_ucsp_client_getKeyDigest;
	__Reply__generateSignature_t Reply_ucsp_client_generateSignature;
	__Reply__verifySignature_t Reply_ucsp_client_verifySignature;
	__Reply__generateMac_t Reply_ucsp_client_generateMac;
	__Reply__verifyMac_t Reply_ucsp_client_verifyMac;
	__Reply__encrypt_t Reply_ucsp_client_encrypt;
	__Reply__decrypt_t Reply_ucsp_client_decrypt;
	__Reply__generateKey_t Reply_ucsp_client_generateKey;
	__Reply__generateKeyPair_t Reply_ucsp_client_generateKeyPair;
	__Reply__wrapKey_t Reply_ucsp_client_wrapKey;
	__Reply__unwrapKey_t Reply_ucsp_client_unwrapKey;
	__Reply__deriveKey_t Reply_ucsp_client_deriveKey;
	__Reply__generateRandom_t Reply_ucsp_client_generateRandom;
	__Reply__getOwner_t Reply_ucsp_client_getOwner;
	__Reply__setOwner_t Reply_ucsp_client_setOwner;
	__Reply__getAcl_t Reply_ucsp_client_getAcl;
	__Reply__changeAcl_t Reply_ucsp_client_changeAcl;
	__Reply__login_t Reply_ucsp_client_login;
	__Reply__logout_t Reply_ucsp_client_logout;
	__Reply__getStatistics_t Reply_ucsp_client_getStatistics;
	__Reply__getTime_t Reply_ucsp_client_getTime;
	__Reply__getCounter_t Reply_ucsp_client_getCounter;
	__Reply__selfVerify_t Reply_ucsp_client_selfVerify;
	__Reply__cspPassThrough_t Reply_ucsp_client_cspPassThrough;
	__Reply__dlPassThrough_t Reply_ucsp_client_dlPassThrough;
	__Reply__authorizationCreate_t Reply_ucsp_client_authorizationCreate;
	__Reply__authorizationRelease_t Reply_ucsp_client_authorizationRelease;
	__Reply__authorizationCopyRights_t Reply_ucsp_client_authorizationCopyRights;
	__Reply__authorizationCopyInfo_t Reply_ucsp_client_authorizationCopyInfo;
	__Reply__authorizationExternalize_t Reply_ucsp_client_authorizationExternalize;
	__Reply__authorizationInternalize_t Reply_ucsp_client_authorizationInternalize;
	__Reply__setSessionUserPrefs_t Reply_ucsp_client_setSessionUserPrefs;
	__Reply__postNotification_t Reply_ucsp_client_postNotification;
	__Reply__extractMasterKey_t Reply_ucsp_client_extractMasterKey;
	__Reply__authorizationdbGet_t Reply_ucsp_client_authorizationdbGet;
	__Reply__authorizationdbSet_t Reply_ucsp_client_authorizationdbSet;
	__Reply__authorizationdbRemove_t Reply_ucsp_client_authorizationdbRemove;
	__Reply__addCodeEquivalence_t Reply_ucsp_client_addCodeEquivalence;
	__Reply__removeCodeEquivalence_t Reply_ucsp_client_removeCodeEquivalence;
	__Reply__setAlternateSystemRoot_t Reply_ucsp_client_setAlternateSystemRoot;
	__Reply__childCheckIn_t Reply_ucsp_client_childCheckIn;
	__Reply__commitDbForSync_t Reply_ucsp_client_commitDbForSync;
	__Reply__registerHosting_t Reply_ucsp_client_registerHosting;
	__Reply__hostingPort_t Reply_ucsp_client_hostingPort;
	__Reply__setGuest_t Reply_ucsp_client_setGuest;
	__Reply__createGuest_t Reply_ucsp_client_createGuest;
	__Reply__setGuestStatus_t Reply_ucsp_client_setGuestStatus;
	__Reply__removeGuest_t Reply_ucsp_client_removeGuest;
	__Reply__helpCheckLoad_t Reply_ucsp_client_helpCheckLoad;
	__Reply__recodeDbForSync_t Reply_ucsp_client_recodeDbForSync;
	__Reply__authenticateDbsForSync_t Reply_ucsp_client_authenticateDbsForSync;
	__Reply__verifyPrivileged_t Reply_ucsp_client_verifyPrivileged;
	__Reply__verifyPrivileged2_t Reply_ucsp_client_verifyPrivileged2;
	__Reply__stashDb_t Reply_ucsp_client_stashDb;
	__Reply__stashDbCheck_t Reply_ucsp_client_stashDbCheck;
	__Reply__verifyKeyStorePassphrase_t Reply_ucsp_client_verifyKeyStorePassphrase;
	__Reply__resetKeyStorePassphrase_t Reply_ucsp_client_resetKeyStorePassphrase;
	__Reply__changeKeyStorePassphrase_t Reply_ucsp_client_changeKeyStorePassphrase;
};
#endif /* !__RequestUnion__ucsp_client_ucsp_subsystem__defined */

#ifndef subsystem_to_name_map_ucsp
#define subsystem_to_name_map_ucsp \
    { "setup", 1000 },\
    { "setupThread", 1002 },\
    { "authenticateDb", 1003 },\
    { "releaseDb", 1004 },\
    { "getDbName", 1005 },\
    { "setDbName", 1006 },\
    { "openToken", 1007 },\
    { "findFirst", 1008 },\
    { "findNext", 1009 },\
    { "findRecordHandle", 1010 },\
    { "insertRecord", 1011 },\
    { "deleteRecord", 1012 },\
    { "modifyRecord", 1013 },\
    { "releaseSearch", 1014 },\
    { "releaseRecord", 1015 },\
    { "createDb", 1016 },\
    { "decodeDb", 1018 },\
    { "encodeDb", 1019 },\
    { "setDbParameters", 1020 },\
    { "getDbParameters", 1021 },\
    { "changePassphrase", 1022 },\
    { "lockAll", 1023 },\
    { "unlockDb", 1024 },\
    { "unlockDbWithPassphrase", 1025 },\
    { "isLocked", 1026 },\
    { "encodeKey", 1027 },\
    { "decodeKey", 1028 },\
    { "recodeKey", 1029 },\
    { "releaseKey", 1030 },\
    { "queryKeySizeInBits", 1031 },\
    { "getOutputSize", 1032 },\
    { "getKeyDigest", 1033 },\
    { "generateSignature", 1034 },\
    { "verifySignature", 1035 },\
    { "generateMac", 1036 },\
    { "verifyMac", 1037 },\
    { "encrypt", 1038 },\
    { "decrypt", 1039 },\
    { "generateKey", 1040 },\
    { "generateKeyPair", 1041 },\
    { "wrapKey", 1042 },\
    { "unwrapKey", 1043 },\
    { "deriveKey", 1044 },\
    { "generateRandom", 1045 },\
    { "getOwner", 1046 },\
    { "setOwner", 1047 },\
    { "getAcl", 1048 },\
    { "changeAcl", 1049 },\
    { "login", 1050 },\
    { "logout", 1051 },\
    { "getStatistics", 1052 },\
    { "getTime", 1053 },\
    { "getCounter", 1054 },\
    { "selfVerify", 1055 },\
    { "cspPassThrough", 1056 },\
    { "dlPassThrough", 1057 },\
    { "authorizationCreate", 1058 },\
    { "authorizationRelease", 1059 },\
    { "authorizationCopyRights", 1060 },\
    { "authorizationCopyInfo", 1061 },\
    { "authorizationExternalize", 1062 },\
    { "authorizationInternalize", 1063 },\
    { "setSessionUserPrefs", 1068 },\
    { "postNotification", 1069 },\
    { "extractMasterKey", 1070 },\
    { "authorizationdbGet", 1071 },\
    { "authorizationdbSet", 1072 },\
    { "authorizationdbRemove", 1073 },\
    { "addCodeEquivalence", 1074 },\
    { "removeCodeEquivalence", 1075 },\
    { "setAlternateSystemRoot", 1076 },\
    { "childCheckIn", 1077 },\
    { "commitDbForSync", 1078 },\
    { "registerHosting", 1079 },\
    { "hostingPort", 1080 },\
    { "setGuest", 1081 },\
    { "createGuest", 1082 },\
    { "setGuestStatus", 1083 },\
    { "removeGuest", 1084 },\
    { "helpCheckLoad", 1085 },\
    { "recodeDbForSync", 1086 },\
    { "authenticateDbsForSync", 1087 },\
    { "verifyPrivileged", 1088 },\
    { "verifyPrivileged2", 1089 },\
    { "stashDb", 1090 },\
    { "stashDbCheck", 1091 },\
    { "verifyKeyStorePassphrase", 1092 },\
    { "resetKeyStorePassphrase", 1093 },\
    { "changeKeyStorePassphrase", 1094 }
#endif

#ifdef __AfterMigUserHeader
__AfterMigUserHeader
#endif /* __AfterMigUserHeader */

#endif	 /* _ucsp_user_ */
