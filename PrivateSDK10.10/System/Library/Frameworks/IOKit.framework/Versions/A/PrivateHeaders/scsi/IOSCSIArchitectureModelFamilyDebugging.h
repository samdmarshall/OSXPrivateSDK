#ifndef _IOKIT_IO_SCSI_ARCHITECTURE_MODEL_FAMILY_DEBUGGING_H_
#define _IOKIT_IO_SCSI_ARCHITECTURE_MODEL_FAMILY_DEBUGGING_H_

#include <libkern/OSTypes.h>

// these values probably need to be changed

enum {
	kSAMClassUSB = 0xE2, // guess based on http://www.projectosx.com/forum/lofiversion/index.php/t1922.html
	kSAMClassFireWire,
	kSAMClassATAPI,
};

#endif