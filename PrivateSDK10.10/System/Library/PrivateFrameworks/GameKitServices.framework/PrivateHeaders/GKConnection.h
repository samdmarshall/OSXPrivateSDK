/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface GKConnection : NSObject
{
}

+ (BOOL)isRelayEnabled;
+ (id)externalAddressForCDXSelfConnectionData:(id)arg1;
+ (id)externalAddressForSelfConnectionData:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)getLocalConnectionDataForLocalGaming;
- (id)networkStatistics;
- (id)networkStatisticsDictionaryForGCKStats:(void *)arg1;
- (void)cancelConnectParticipant:(id)arg1;
- (void)updateRelayWithParticipant:(id)arg1 withConnectionData:(id)arg2 withRelayInfo:(id)arg3 didInitiate:(BOOL)arg4;
- (void)initiateRelayWithParticipant:(id)arg1 withConnectionData:(id)arg2 withRelayInfo:(id)arg3 didInitiate:(BOOL)arg4;
- (void)connectParticipantsWithConnectionData:(id)arg1 withSessionInfo:(id)arg2;
- (void)setParticipantID:(id)arg1 forPeerID:(id)arg2;
- (BOOL)convertPeerID:(id)arg1 toParticipantID:(id *)arg2;
- (BOOL)convertParticipantID:(id)arg1 toPeerID:(id *)arg2;
- (void)getLocalConnectionDataWithCompletionHandler:(id)arg1;
- (void)connect;
- (unsigned int)gckPID;
@property id eventDelegate;
@property(nonatomic) struct opaqueRTCReporting *reportingAgent;
- (struct OpaqueGCKSession *)gckSession;
- (void)preRelease;
- (id)initWithParticipantID:(id)arg1;

@end

