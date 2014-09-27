### adv_cmds-153

Status: Success

* Change colldef to only 64bit
* Change pkill to only 64bit

### AppleFileSystemDriver-17

Status: Success

* Change targets to be 64bit only.

### AppleRAID-4.0.6

Status: Partial

* artest does not build because of missing MediaKit headers

### AppleUSBCDCDriver-4201.2.5

Status: Success

### AppleUSBIrDA-154.2.4

Status: Success

* Change AppleUSBIrDA kext to be 64bit only

### autofs-234

Status: Partial

### awk-18

Status: Success

### bash-92

Status: Success

### basic-cmds-55

Status: Success

* Build succeeds but has a failure to install/copy man pages

### bless-98

Status: Fail

* Missing MediaKit headers

### BootCache-106

Status: Partial

* BootCacheControl target fails, missing `#include <IOKit/storage/CoreStorage/CoreStorageCryptoIDs.h>`

### bootp-268.1

Status: Partial

* Change `#include <net/firewire.h>` to `#include <Kernel/net/firewire.h>` in bootp_transmit.c
* Header resolution problems, **look into this**

### bzip2-29

Status: Success

### cddaf-252

Status: Success

### Chess-310.5

Status: Success

* Remove libCrashReporterClient.a from MBChess target

### CommonCrypto-60049

Status: Partial

* Missing many parts of corecrypto
* see http://www.opensource.apple.com/source/CommonCrypto/CommonCrypto-55010/Source/CommonCryptoSPI/

### configd-596.15

Status: Partial

### copyfile-103.92.1

Status: Success

### cracklib-37765

Status: Success

### cron-39

Status: Success

### crontabs-51

Status: Success

### curl-78.94.1

Status: Fail

* Requires OpenLDAP

### dcerpc-58

Status: Partial

* Build dceidl target first, and include it in $PATH so the rest will build
* Errors on linking with SMB

### DiskArbitration-266

Status: Partial

* autodiskmount target doesn't link correctly

### diskdev_cmds-572.1.1

Status: Success

### disklabel-6

Status: Success

### doc_cmds-49

Status: Success

### dtrace-118.1

Status: Success

### eap8021x-180

Status: Success

### expat-12

Status: Success

### file_cmds-230

Status: Success

* Errors on unused copyright variables

### file-46

Status: Success

### gnudiff-19

Status: Success

### gpt-12

Status: Success

### gssd-62

Status: Success

* Change symlink to point ot SDKROOT

### Heimdal-323.92.1

Status: Partial

* Disable `-Werror`
* Comment out `#define HAVE_TRUSTEVALUATIONAGENT 1`
* Comment out `#include "heimbase.h"`, `#include "heimbasepriv.h"` in krb5_locl.h
* Change `#include "heimbase_impl.h"` to `#include <heimbase_impl.h>` in krb5_locl.h
* Move HeimdalCompilers executables to be included in $PATH
* Add `#include <CoreFoundation/CFRuntime.h>` and `#include <CoreFoundation/CFPriv.h>` to lib/gssapi/cf/item.c

Build Order:

1. HeimdalCompilers
2. HeimdalFrameworksFoundation
3. Heimdal
4. HeimdalMacOSX

### hfs-226.1.1

Status: Success

### IOATAFamily-252.0.3

Status: Success

### IOATAPIProtocolTransport-350.0.3

Status: Fail

* Missing IOKit/scsi/IOSCSIArchitectureModelFamilyTimestamps.h

### IOAudioFamily-197.4.2

Status: Success

* Remove `-fcheck-new` flags

### IOBDStorageFamily-14

Status: Fail

* Missing iconcompiler binary

### IOCDStorageFamily-51

Status: Fail

* Missing iconcompiler binary

### IODVDStorageFamily-35

Status: Fail

* Missing iconcompiler binary

### IOFireWireAVC-422.4.0

Status: Success

### IOFireWireFamily-455.4.0

Status: Success

### IOFireWireIP-226.4

Status: Success

### IOFireWireSBP2-426.4.1

Status: Success

### IOFireWireSerialBusProtocolTransport-251.0.1

Status: Fail

* Missing IOKit/scsi/IOSCSIArchitectureModelFamilyTimestamps.h

### IOFWDVComponents-207.4.1

Status: Success

### IOGraphics-471.92.1

Status: Success

### IOHIDFamily-503.200.2

Status: Fail

* Missing types

### IOKitTools-89.1.1

Status: Success

### IOKitUser-907.100.13

Status: Partial

### IONetworkingFamily-100

Status: Fail

### IOPCIFamily-224.92.1

Status: Success

### IOSCSIParallelFamily-300.0.2

Status: Fail

* Missing Headers

### KerberosHelper-148

Status: Success

### smb-697.92.4

Status: Success

### libutil-34

Status: Success

* Change `#include <mntopts.h>` to `#include "mntopts.h"` in getmntopts.c
* Change `#include <libutil.h>` to `#include "libutil.h"` in humanize_number.c, pidfile.c, trimdomain.c

### liby-20

Status: Success

### Security-55471.14.8
* Mostly builds, except for missing:
  * corecrypto/ccec.h (see #4)
  * corecrypto/ccec_priv.h
* libsecurity_filedb
  * remove -Werror
  * change `#include <sandbox.h>` to `#include <sandbox_private.h>` in AtomicFile.cpp

### libArchive
* Success
  * Comment out `#define HAVE_QUARANTINE 1`
  * Comment out `#define HAVE_LZMA_H 1`

### libClosure-63
* Success

### libDispatch-339.92.1
* Success

### libEdit-39
* Success

### libFFI-19.1
* Success

### libfs-13
* Success

### libNotify-121
* Add `#include <sys/fileport.h>` to:
  * notify_client.c
  * notify_proc.c

### libresolv-54
* Success

### libsecurity-agent-55000
* Success

### libsecurity-ldap-dl-55002
* Success

### libunwind-35.3
* Success (build in release mode, not debug)

### xar-202
* Success

### UserNotification-28
* Success