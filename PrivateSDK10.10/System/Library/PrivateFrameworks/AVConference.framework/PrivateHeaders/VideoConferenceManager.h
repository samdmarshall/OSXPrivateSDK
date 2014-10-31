/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "VideoConferenceDelegate-Protocol.h"

@class GKNATObserver, ICEResultWaitQueue, NSMutableArray, VideoConference;

// Not exported
@interface VideoConferenceManager : NSObject <VideoConferenceDelegate>
{
    unsigned char _clientUUID[16];
    struct _opaque_pthread_mutex_t stateLock;
    struct _opaque_pthread_mutex_t sipLock;
    NSMutableArray *vcList;
    VideoConference *activeConference;
    VideoConference *conferenceWithMic;
    ICEResultWaitQueue *resultQueue;
    struct tagHANDLE *hSIP;
    int sipRefCount;
    GKNATObserver *natObserver;
    BOOL isVTPInitialized;
}

+ (void)addNSError:(id)arg1 toConferenceXPCArgumentDictionary:(id)arg2;
+ (id)defaultVideoConferenceManager;
@property(readonly) NSMutableArray *vcList; // @synthesize vcList;
@property(readonly) ICEResultWaitQueue *resultQueue; // @synthesize resultQueue;
@property VideoConference *activeConference; // @synthesize activeConference;
- (void)getClientUUID:(unsigned char [16])arg1;
- (void)notifyPrimaryConnChangeToClient:(id)arg1 newConnResult:(struct tagCONNRESULT *)arg2;
- (void)broadcastCellTechChange:(int)arg1 cellularMaxPktLen:(unsigned short)arg2;
- (void)pauseVideoConferences:(BOOL)arg1;
- (id)conferenceForIncomingConnectionResult:(struct tagCONNRESULT *)arg1;
- (id)conferenceForParticipantID:(id)arg1;
- (BOOL)hasVideoConference:(id)arg1;
- (id)conferenceForCallID:(unsigned int)arg1;
@property VideoConference *conferenceWithMic;
- (void)removeVideoConference:(id)arg1;
- (void)addVideoConference:(id)arg1;
- (void)stopSIP;
- (void)cleanupVTP;
- (BOOL)isSIPHandleValid:(struct tagHANDLE *)arg1;
- (void)startSIP;
- (void)createSIP;
- (struct tagHANDLE *)SIPHandle;
- (void)videoConference:(id)arg1 closeConnectionForCallID:(unsigned int)arg2;
- (void)videoConference:(id)arg1 localAudioEnabled:(BOOL)arg2 forCallID:(unsigned int)arg3 error:(id)arg4;
- (void)videoConference:(id)arg1 remoteAudioEnabled:(BOOL)arg2 forCallID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 didReceiveData:(id)arg2 forCallID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 didChangeLocalVariablesForCallID:(unsigned int)arg2;
- (void)videoConference:(id)arg1 didReceiveARPLData:(id)arg2 fromCallID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 withCallID:(unsigned int)arg2 networkHint:(BOOL)arg3;
- (void)videoConference:(id)arg1 videoQualityNotificationForCallID:(unsigned int)arg2 isDegraded:(BOOL)arg3 isRemote:(BOOL)arg4;
- (void)videoConference:(id)arg1 cancelRelayRequest:(unsigned int)arg2 requestDict:(id)arg3;
- (void)videoConference:(id)arg1 sendRelayUpdate:(unsigned int)arg2 updateDict:(id)arg3;
- (void)videoConference:(id)arg1 inititiateRelayRequest:(unsigned int)arg2 requestDict:(id)arg3;
- (void)videoConference:(id)arg1 updateOutputMeterLevel:(float)arg2;
- (void)videoConference:(id)arg1 updateInputMeterLevel:(float)arg2;
- (void)videoConference:(id)arg1 updateOutputFrequencyLevel:(id)arg2;
- (void)videoConference:(id)arg1 updateInputFrequencyLevel:(id)arg2;
- (void)videoConference:(id)arg1 didRemoteScreenAttributesChange:(id)arg2 forCallID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 didRemoteVideoAttributesChange:(id)arg2 forCallID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 remoteVideoPaused:(BOOL)arg2 callID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 remoteAudioPaused:(BOOL)arg2 callID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 didReceiveFirstRemoteFrameForCallID:(unsigned int)arg2;
- (void)videoConference:(id)arg1 remoteMediaStalled:(BOOL)arg2 callID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 receivedNoRemotePacketsForTime:(double)arg2 callID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 didStopWithCallID:(unsigned int)arg2 error:(id)arg3 callMetadata:(id)arg4;
- (void)videoConference:(id)arg1 didStartSession:(BOOL)arg2 withCallID:(unsigned int)arg3 withUserInfo:(id)arg4 error:(id)arg5;
- (void)videoConference:(id)arg1 didStartSession:(BOOL)arg2 withCallID:(unsigned int)arg3 error:(id)arg4;
- (void)videoConference:(id)arg1 sendIPChangeRequest:(id)arg2 withCallID:(unsigned int)arg3;
- (id)init;
- (void)registerBlocksForConference;

@end

