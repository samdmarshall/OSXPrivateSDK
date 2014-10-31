/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "ASRMasterProtocol-Protocol.h"

@class NSConnection, NSDictionary, NSDistantObject<ASRSlaveProtocol>, NSString, NSTask, NSTimer;

@interface RestoreHelper : NSObject <ASRMasterProtocol>
{
    NSString *_serverID;
    NSConnection *_server;
    NSString *_toolPath;
    struct AuthorizationOpaqueRef *_authRef;
    NSDistantObject<ASRSlaveProtocol> *_tool;
    NSTimer *_startTimer;
    NSTask *_asrTask;
    BOOL _toolDone;
    NSConnection *_toolConnection;
    NSDictionary *_operation;
    void *_statusFn;
    void *_completionFn;
    void *_context;
}

- (int)doCommand:(id)arg1 withStatusFn:(void *)arg2 completionFn:(void *)arg3 andContext:(void *)arg4;
- (void)dealloc;
- (id)init;
- (int)updateStatus:(id)arg1;
- (oneway void)executeCompleted:(int)arg1;
- (oneway void)registerHelperTool:(id)arg1;
- (void)commTimeout:(id)arg1;
- (int)askForPassword;
- (int)authWithFlags:(unsigned int)arg1;
- (BOOL)isAuthenticated;
- (int)authenticate;
- (void)toolDied:(id)arg1;
- (void)toolConnectionDied:(id)arg1;
- (void)gotConnection:(id)arg1;
- (BOOL)registerAsServer;
- (id)findRestoreTool;
- (int)doCommand:(id)arg1 withStatusFn:(void *)arg2 andContext:(void *)arg3;

@end

