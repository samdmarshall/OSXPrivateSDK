/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SFActivityAdvertiserClient-Protocol.h"
#import "SFCompanionXPCManagerObserver-Protocol.h"

@class NSString, SFInternalAdvertisement;

@interface SFActivityAdvertiser : NSObject <SFCompanionXPCManagerObserver, SFActivityAdvertiserClient>
{
    id <SFActivityAdvertiserDelegate> _delegate;
    id <SFActivityAdvertiserProtocol> _connectionProxy;
    SFInternalAdvertisement *_currentAdvertisement;
}

+ (id)sharedAdvertiser;
@property(retain) SFInternalAdvertisement *currentAdvertisement; // @synthesize currentAdvertisement=_currentAdvertisement;
@property(retain) id <SFActivityAdvertiserProtocol> connectionProxy; // @synthesize connectionProxy=_connectionProxy;
@property id <SFActivityAdvertiserDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didSendPayloadForActivityIdentifier:(id)arg1 toDeviceIdentifier:(id)arg2 error:(id)arg3;
- (void)activityPayloadForAdvertisementPayload:(id)arg1 requestedByDeviceIdentifier:(id)arg2 withCompletionHandler:(id)arg3;
- (void)advertiseAdvertisementPayload:(id)arg1 options:(id)arg2;
- (void)xpcManagerConnectionInterrupted;
- (void)setupXPCConnection;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

