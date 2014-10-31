/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "ALSessionDelegateProtocol-Protocol.h"

@class ALSession, NSMutableDictionary, NSObject<OS_dispatch_queue>, SMSystemScanner;

@interface SMAutoLoaderBrowser : NSObject <ALSessionDelegateProtocol>
{
    ALSession *_session;
    struct OpaqueSecIdentityRef *_localIdentity;
    SMSystemScanner *_scanner;
    NSMutableDictionary *_serviceToTxtRecordMap;
    NSObject<OS_dispatch_queue> *_serviceMapQueue;
}

+ (void)addLocalInstanceName:(id)arg1;
@property(retain) NSObject<OS_dispatch_queue> *serviceMapQueue; // @synthesize serviceMapQueue=_serviceMapQueue;
@property(retain) NSMutableDictionary *serviceToTxtRecordMap; // @synthesize serviceToTxtRecordMap=_serviceToTxtRecordMap;
@property __weak SMSystemScanner *scanner; // @synthesize scanner=_scanner;
@property struct OpaqueSecIdentityRef *localIdentity; // @synthesize localIdentity=_localIdentity;
@property(retain) ALSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)sessionInterrupted:(id)arg1 didReplaceActiveConnection:(BOOL)arg2;
- (void)session:(id)arg1 streamClosing:(id)arg2;
- (void)session:(id)arg1 newIncomingStream:(id)arg2;
- (void)sessionIsInterrupted:(id)arg1;
- (void)sessionIsActive:(id)arg1;
- (void)sessionHasFasterConnectionAvailable:(id)arg1;
- (void)sessionDeterminingFastestConnection:(id)arg1;
- (void)session:(id)arg1 didFailConnectionToPeerNamed:(id)arg2;
- (void)session:(id)arg1 peerNamed:(id)arg2 updatedTxtRecord:(id)arg3;
- (void)session:(id)arg1 resolvedPeerNamed:(id)arg2 txtRecord:(id)arg3;
- (void)session:(id)arg1 failedToResolvePeerNamed:(id)arg2;
- (void)session:(id)arg1 peerDisappeared:(id)arg2;
- (void)session:(id)arg1 discoveredPeerNamed:(id)arg2;
- (id)_decodedTxtRecordWithMyStringKeys:(id)arg1;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithScanner:(id)arg1;

@end

