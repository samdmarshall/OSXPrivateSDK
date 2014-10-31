#ifndef __USEREVENTAGENTINTERFACE__
#define __USEREVENTAGENTINTERFACE__

#include <CoreFoundation/CFPlugInCOM.h>

typedef struct UserEventAgentInterfaceStruct {
	void * _reserved;
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(void *thisPointer, REFIID iid, LPVOID *ppv);
    ULONG (STDMETHODCALLTYPE *AddRef)(void *thisPointer);
    ULONG (STDMETHODCALLTYPE *Release)(void *thisPointer);
    void (STDMETHODCALLTYPE *Install)(void *thisPointer);
} UserEventAgentInterfaceStruct;

enum UserEventAgentLaunchdActionType {
	kUserEventAgentLaunchdAdd,
	kUserEventAgentLaunchdRemove,
};

typedef uint32_t UserEventAgentLaunchdAction;

extern CFUUIDRef kUserEventAgentInterfaceID;
extern CFUUIDRef kUserEventAgentFactoryID;
extern CFUUIDRef kUserEventAgentTypeID;

typedef void (*ManagedEventsCallback)(UserEventAgentLaunchdAction action, CFNumberRef token, CFTypeRef eventMatchDict, void* vContext);

extern void* UserEventAgentRegisterForLaunchEvents(const char* sPluginIdentifier, ManagedEventsCallback callback, void* plugin);
extern void UserEventAgentFireEvent(void *plugincontext, uint64_t tokenUint64, xpc_object_t jobRequest);

#endif