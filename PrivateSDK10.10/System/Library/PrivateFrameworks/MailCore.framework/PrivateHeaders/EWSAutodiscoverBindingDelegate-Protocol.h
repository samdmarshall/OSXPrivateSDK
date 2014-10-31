/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol EWSAutodiscoverBindingDelegate <NSObject>

@optional
- (void)autodiscoverBinding:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (void)autodiscoverBinding:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)autodiscoverBinding:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)autodiscoverBinding:(id)arg1 didFailWithError:(id)arg2;
- (void)autodiscoverBinding:(id)arg1 didFinishWithResponse:(id)arg2;
- (void)autodiscoverBinding:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (BOOL)autodiscoverBindingShouldUseCredentialStorage:(id)arg1;
- (void)autodiscoverBinding:(id)arg1 didReceiveCertificateError:(id)arg2;
@end

