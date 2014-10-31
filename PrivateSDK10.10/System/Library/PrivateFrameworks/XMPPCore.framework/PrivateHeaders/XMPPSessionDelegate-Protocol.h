/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol XMPPSessionDelegate
- (void)session:(id)arg1 invitationReceived:(id)arg2 forChatRoom:(id)arg3;
- (void)session:(id)arg1 messageReceived:(id)arg2 forChatRoom:(id)arg3;
- (void)session:(id)arg1 messageReceived:(id)arg2;
- (void)session:(id)arg1 messageError:(id)arg2 forChatRoom:(id)arg3;
- (void)session:(id)arg1 messageError:(id)arg2 forJID:(id)arg3;
- (BOOL)session:(id)arg1 capabilities:(unsigned long long)arg2 areBetterThanCaps:(unsigned long long)arg3;
- (void)session:(id)arg1 propertiesChanged:(id)arg2 forJID:(id)arg3;
- (void)session:(id)arg1 stateChanged:(int)arg2 withConnection:(id)arg3;
- (void)session:(id)arg1 autoConnectDidFailForConnection:(id)arg2;
- (void)session:(id)arg1 didUpdateSupportsInvisible:(BOOL)arg2;
- (void)session:(id)arg1 tlsNegotiationFinished:(BOOL)arg2;
- (void)session:(id)arg1 connectedToHost:(id)arg2 port:(unsigned short)arg3 usingSSL:(BOOL)arg4;
@end

