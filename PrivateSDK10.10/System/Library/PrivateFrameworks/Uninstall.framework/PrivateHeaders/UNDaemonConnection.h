/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMachPort, NSMutableDictionary;

@interface UNDaemonConnection : NSObject
{
    NSMachPort *serverPort;
    NSMachPort *servicePort;
    NSMachPort *statusPort;
    NSMutableDictionary *requestLookup;
    struct dispatch_source_s *inSource;
    struct dispatch_source_s *outSource;
    BOOL inShutdown;
}

+ (id)copyOfConnection;
+ (id)copyOfConnectionWithAuth:(struct AuthorizationOpaqueRef *)arg1;
- (BOOL)abortUninstallOfID:(unsigned int)arg1;
- (unsigned int)requestUninstallOfBundlesAtPaths:(id)arg1 withRequest:(id)arg2;
- (BOOL)connectToDaemon:(struct AuthorizationOpaqueRef *)arg1;
- (void)dealloc;
- (void)finalize;
- (id)initWithAuthorization:(struct AuthorizationOpaqueRef *)arg1;
- (id)init;
- (void)removeRequestByID:(unsigned int)arg1;
- (void)disconnected;
- (id)requestForRequestID:(unsigned int)arg1;

@end

