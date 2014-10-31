/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "GEOResourceManifestServerProxy-Protocol.h"

@class GEOResourceManifestConfiguration, NSHashTable, NSLock, NSString;

// Not exported
@interface GEOResourceManifestServerRemoteProxy : NSObject <GEOResourceManifestServerProxy>
{
    id <GEOResourceManifestServerProxyDelegate> _delegate;
    struct _xpc_connection_s *_conn;
    NSLock *_connLock;
    NSHashTable *_cancellingConnections;
    NSLock *_cancellingConnectionsLock;
    unsigned long long _retryCount;
    BOOL _isUpdatingManifest;
    BOOL _isLoadingResources;
    struct dispatch_queue_s *_serverQueue;
    GEOResourceManifestConfiguration *_configuration;
    NSLock *_authTokenLock;
    NSString *_authToken;
}

@property(nonatomic) id <GEOResourceManifestServerProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleMessage:(id)arg1 xpcMessage:(void *)arg2;
- (void)setManifestToken:(id)arg1 completionHandler:(id)arg2;
- (void)getResourceManifestWithHandler:(id)arg1;
- (void)forceUpdate:(id)arg1;
- (void)updateIfNecessary:(id)arg1;
- (oneway void)resetActiveTileGroup;
- (oneway void)setActiveTileGroupIdentifier:(id)arg1;
- (void)closeConnection;
- (void)openConnection;
- (void)_setupConnection;
- (id)configuration;
- (id)authToken;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 configuration:(id)arg2;
- (struct dispatch_queue_s *)serverQueue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

