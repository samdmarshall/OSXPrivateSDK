/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface SUTestDefaults : NSObject
{
    NSString *_testMode;
}

+ (id)sharedDefaults;
- (int)requiredPackageTrustLevelForCurrentMode;
- (BOOL)okayToUseNonProductionMode;
- (BOOL)inThirdPartyMode;
- (BOOL)inDevKeyMode;
- (BOOL)inProductionMode;
- (void)exitTestMode;
- (id)currentTestMode;
- (BOOL)attemptToEnterTestMode:(id)arg1;
- (void)dealloc;

@end

