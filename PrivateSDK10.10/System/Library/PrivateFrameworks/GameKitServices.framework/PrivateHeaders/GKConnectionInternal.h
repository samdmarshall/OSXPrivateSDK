/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKitServices/GKConnection.h>

#import "CDXClientDelegate-Protocol.h"
#import "CDXClientSessionDelegate-Protocol.h"

@class CDXClient, NSData, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_source>, NSString, TimingCollection;

// Not exported
@interface GKConnectionInternal : GKConnection <CDXClientDelegate, CDXClientSessionDelegate>
{
    unsigned int _gckPID;
    NSString *_pidGUID;
    struct OpaqueGCKSession *_gckSession;
    NSMutableArray *_gckEventList;
    BOOL _toForwardEVents;
    id _eventDelegate;
    CDXClient *_cdxClient;
    NSMutableDictionary *_cdxSessions;
    NSData *_preblob;
    id _preblobCallback;
    double _preblobCallbackCancelTime;
    struct _opaque_pthread_mutex_t _xPreblobFetch;
    struct _opaque_pthread_cond_t _cPreblobFetch;
    struct _opaque_pthread_mutex_t _xPrepareThread;
    struct _opaque_pthread_cond_t _cPrepareThread;
    int _fPrepareThread;
    double _wakeTime;
    NSMutableDictionary *_preblobToPIDMap;
    NSMutableDictionary *_pidToPreblobMap;
    NSMutableDictionary *_pidToConnectionDataMap;
    NSMutableArray *_pendingConnectionPIDList;
    BOOL _fAllowMoreRelay;
    NSMutableArray *_allowRelayPIDList;
    NSMutableDictionary *_pidToPlayerIDMap;
    NSMutableDictionary *_pidToConnectTimeoutSource;
    struct _opaque_pthread_mutex_t _xRelay;
    NSMutableDictionary *_pidToRelayInitiateInfoMap;
    NSMutableDictionary *_pidToRelayConnectionDataMap;
    NSMutableDictionary *_pidToRelayUpdateInfoMap;
    NSMutableDictionary *_initRelayQueue;
    NSMutableDictionary *_updateRelayQueue;
    int _fPreReleased;
    int _localGamingCDXSocket;
    unsigned short _localGamingCDXPort;
    NSObject<OS_dispatch_source> *_localGamingCDXListenSource;
    NSMutableDictionary *_localGamingSocketToPIDMap;
    NSMutableDictionary *_localGamingSocketToConnectionDataMap;
    NSMutableSet *_pidsPreparedForConnection;
    struct opaqueRTCReporting *_reportingAgent;
    TimingCollection *_perfTimers;
}

@property(retain) NSMutableDictionary *cdxSessions; // @synthesize cdxSessions=_cdxSessions;
@property(retain, nonatomic) CDXClient *cdxClient; // @synthesize cdxClient=_cdxClient;
- (void)setReportingAgent:(struct opaqueRTCReporting *)arg1;
- (struct opaqueRTCReporting *)reportingAgent;
@property(retain) NSMutableDictionary *pidToConnectTimeoutSource; // @synthesize pidToConnectTimeoutSource=_pidToConnectTimeoutSource;
- (id)getLocalConnectionDataForLocalGaming;
- (BOOL)startListeningForLocalGamingCDX;
- (void)localGamingReceiveDataHandler:(id)arg1 data:(id)arg2 time:(double)arg3 error:(id)arg4;
- (BOOL)localGamingCheckEstablishConnection:(id)arg1 connectionData:(id)arg2;
- (id)networkStatistics;
- (id)networkStatisticsDictionaryForGCKStats:(void *)arg1;
- (void)cancelConnectParticipant:(id)arg1;
- (void)updateRelayWithParticipant:(id)arg1 withConnectionData:(id)arg2 withRelayInfo:(id)arg3 didInitiate:(BOOL)arg4;
- (void)internalUpdateRelayWithParticipant:(id)arg1 withConnectionData:(id)arg2 withRelayInfo:(id)arg3 didInitiate:(BOOL)arg4;
- (void)initiateRelayWithParticipant:(id)arg1 withConnectionData:(id)arg2 withRelayInfo:(id)arg3 didInitiate:(BOOL)arg4;
- (void)internalInitiateRelayWithParticipant:(id)arg1 withConnectionData:(id)arg2 withRelayInfo:(id)arg3 didInitiate:(BOOL)arg4;
- (void)doRelayCheckForRemotePeerID:(id)arg1;
- (id)newRelayUpdateDictionaryForParticipant:(id)arg1 didInitiate:(BOOL)arg2;
- (id)createInitiateRelayDictionaryForParticipant:(id)arg1 remotePeerID:(id)arg2;
- (void)setParticipantID:(id)arg1 forPeerID:(id)arg2;
- (BOOL)convertPeerID:(id)arg1 toParticipantID:(id *)arg2;
- (BOOL)convertParticipantID:(id)arg1 toPeerID:(id *)arg2;
- (void)CDXClientSession:(id)arg1 receivedData:(id)arg2 from:(long long)arg3;
- (id)extractBlobUsingData:(id)arg1 withSourcePID:(unsigned int)arg2 destPID:(unsigned int)arg3;
- (void)CDXClient:(id)arg1 preblob:(id)arg2;
- (void)CDXClient:(id)arg1 error:(id)arg2;
- (id)createInsecureTicketUsingSortedConnectionsFromList:(id)arg1;
- (unsigned int)gckPID;
- (id)eventDelegate;
- (void)setEventDelegate:(id)arg1;
- (void)addEvent:(CDStruct_68f9d01f *)arg1 remotePeer:(unsigned int)arg2;
- (struct OpaqueGCKSession *)gckSession;
- (void)internal_setRemoteConnectionData:(id)arg1 fromParticipantID:(id)arg2 pendingConnectionPIDList:(id)arg3;
- (void)connectParticipantsWithConnectionData:(id)arg1 withSessionInfo:(id)arg2;
- (BOOL)shouldWeInitiateRelayWithPID:(unsigned int)arg1;
- (void)connectPendingConnectionsFromList:(id)arg1 sessionInfo:(id)arg2;
- (void)getLocalConnectionDataWithCompletionHandler:(id)arg1;
- (id)asyncWorkQueue;
- (id)timerQueue;
- (void)dealloc;
- (void)preRelease;
- (id)initWithParticipantID:(id)arg1;

@end

