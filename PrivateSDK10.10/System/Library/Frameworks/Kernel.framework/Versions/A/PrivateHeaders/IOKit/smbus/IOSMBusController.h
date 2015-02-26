#ifndef __IOSMBUSCONTROLLER_H__
#define __IOSMBUSCONTROLLER_H__

#include <stdbool.h>
#include <IOKit/IOCommandGate.h>

enum {
	kIOSMBusStatusOK,
	kIOSMBusStatusUnknownFailure,
	kIOSMBusStatusDeviceAddressNotAcknowledged,
	kIOSMBusStatusDeviceError,
	kIOSMBusStatusDeviceCommandAccessDenied,
	kIOSMBusStatusDeviceAccessDenied,
	kIOSMBusStatusUnknownHostError,
	kIOSMBusStatusTimeout,
	kIOSMBusStatusBusy,
	kIOSMBusStatusHostUnsupportedProtocol,
	kIOSMBusStatusPECError,
};

enum {
	kIOSMBusProtocolWriteWord,
	kIOSMBusProtocolReadWord,
	kIOSMBusProtocolWriteBlock,
	kIOSMBusProtocolReadBlock,
	kIOSMBusProtocolWriteByte,
	kIOSMBusProtocolReadByte,
	kIOSMBusProtocolSendByte
};

enum {
	kIOMessageSMBusAlarm,
};

typedef struct IOSMBusAlarmMessage {
	uint8_t fromAddress;
	uint8_t data[2];
} IOSMBusAlarmMessage;

typedef uint32_t IOSMBusStatus;

typedef struct IOSMBusTransaction {
	uint8_t address;
	uint8_t command;
	uint8_t protocol;
	uint8_t sendDataCount;
	uint8_t sendData[32];
	IOSMBusStatus status;
	uint32_t receiveDataCount;
	uint8_t receiveData[32];
} IOSMBusTransaction;

typedef bool IOSMBusTransactionCompletion;

class IOSMBusController : public IOService {
public:
    IOReturn performTransaction(IOSMBusTransaction * transaction,
   				    IOSMBusTransactionCompletion completion = 0,
   				    OSObject * target = 0,
   				    void * reference = 0);
};

#endif