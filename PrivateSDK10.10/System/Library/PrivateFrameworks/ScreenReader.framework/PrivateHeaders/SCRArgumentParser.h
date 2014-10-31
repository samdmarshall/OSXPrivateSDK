/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SCRCArgumentParser.h"

// Not exported
@interface SCRArgumentParser : SCRCArgumentParser
{
    BOOL _hasReceivedMessageFromLaunchdStart;
    BOOL _startedByLaunchd;
    BOOL _isKeyboardHelpOnlyEnabled;
    BOOL _shouldSkipSplash;
    BOOL _isQuickStarted;
    BOOL _isAutomaticStartAfterLogin;
    BOOL _bailAsSoonAsPossible;
    BOOL _isQuickStartRunning;
}

+ (id)versionString;
+ (id)processIdentifier;
- (BOOL)_checkAndRunSplash;
- (BOOL)_shouldStartVoiceOver;
- (BOOL)_isRunningAsRoot;
- (BOOL)_isMacBuddyRunning;
- (void)setHasReceivedMessageFromLaunchdStart:(BOOL)arg1;
- (id)_setStartedByLaunchd:(id)arg1;
- (BOOL)startedByLaunchd;
- (id)_setTargetApplications:(id)arg1;
- (id)_setQuickStart:(id)arg1;
- (id)_setAutomaticStartAfterLogin:(id)arg1;
- (id)_setKeyboardHelp:(id)arg1;
- (id)_setSkipSplash:(id)arg1;
- (id)_setLogMask:(id)arg1;
- (void)_handleCommand:(id)arg1;
- (void)_stopAndPlayMessage:(BOOL)arg1;
- (void)stop;
- (void)stopDueToSigTerm;
- (int)run;
- (BOOL)wasLastShutdownPlanned;
- (unsigned long long)_securitySessionID;
- (unsigned long long)_sessionID;
- (void)_setSessionID:(unsigned long long)arg1;
- (void)_initializeStartupOptions:(int)arg1;
- (id)initWithArgc:(int)arg1 argv:(const char **)arg2;

@end

