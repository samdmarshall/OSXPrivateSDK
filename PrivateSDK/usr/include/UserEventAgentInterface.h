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

extern CFUUIDRef kUserEventAgentInterfaceID;
extern CFUUIDRef kUserEventAgentFactoryID;
extern CFUUIDRef kUserEventAgentTypeID;

#endif