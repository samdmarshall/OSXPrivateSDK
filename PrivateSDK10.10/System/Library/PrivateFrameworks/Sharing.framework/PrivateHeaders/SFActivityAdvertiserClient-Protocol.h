/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol SFActivityAdvertiserClient <NSObject>
- (void)didSendPayloadForActivityIdentifier:(id)arg1 toDeviceIdentifier:(id)arg2 error:(id)arg3;
- (void)activityPayloadForAdvertisementPayload:(id)arg1 requestedByDeviceIdentifier:(id)arg2 withCompletionHandler:(id)arg3;
@end

