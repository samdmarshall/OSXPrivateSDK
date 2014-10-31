/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface CKLaterAgent : NSObject
{
}

+ (BOOL)isRestartCountdownShown;
+ (long long)showRestartCountdownNotification;
+ (BOOL)requestUserConfirmationOfFirmwareWarningWithProductKey:(id)arg1;
+ (BOOL)requestUserConfirmationOfLicenseAgreementWithProductKey:(id)arg1;
+ (void)performUserInteractionForAvailableUpdatesWithMode:(long long)arg1 handler:(id)arg2;
+ (BOOL)isArmedForInstallLater;
+ (void)disarmObserver;
+ (void)armObserverWithMode:(long long)arg1;
+ (void)_sendAgentMessage:(id)arg1 withReplyHandler:(id)arg2;
+ (void)_sendAgentCommand:(long long)arg1 mode:(long long)arg2;

@end

