#ifndef __SMCUSERCLIENT_H__
#define __SMCUSERCLIENT_H__

enum {
	kSMCUserClientOpen,
	kSMCUserClientClose,
};

enum {
	kSMCHandleYPCEvent,
};

enum {
	kSMCGetKeyInfo,
	kSMCWriteKey,
	kSMCReadKey,
};

enum {
	kSMCSuccess,
	kSMCKeyNotFound,
};

typedef struct SMCKeyInfoStruct {
	uint8_t dataSize;
} SMCKeyInfoStruct;

typedef struct SMCParamStruct {
	uint8_t data8;
	uint32_t result;
	uint32_t key;
	SMCKeyInfoStruct keyInfo;
	uint8_t bytes[32];
} SMCParamStruct;

#endif