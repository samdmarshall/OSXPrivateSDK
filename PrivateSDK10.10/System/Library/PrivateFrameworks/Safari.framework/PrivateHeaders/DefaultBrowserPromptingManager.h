/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface DefaultBrowserPromptingManager : NSObject
{
    BOOL _safariWasLaunchedFromTrySafariNotification;
    struct unique_ptr<Safari::AutomaticTerminationDisabler, std::__1::default_delete<Safari::AutomaticTerminationDisabler>> _automaticTerminationDisabler;
    BOOL _shouldAdvanceStateWhenMakingSafariDefaultBrowserOnQuit;
    BOOL _shouldMakeSafariDefaultBrowserOnQuit;
    int _promptingState;
}

+ (id)sharedManager;
@property(nonatomic) BOOL shouldMakeSafariDefaultBrowserOnQuit; // @synthesize shouldMakeSafariDefaultBrowserOnQuit=_shouldMakeSafariDefaultBrowserOnQuit;
@property(nonatomic) int promptingState; // @synthesize promptingState=_promptingState;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_hideDefaultBrowserBanner;
- (void)_testDriveWillPromptOrAttemptedToSetSafariAsDefaultBrowser:(id)arg1;
- (void)_registerForTestDriveNotifications;
- (void)_advancePromptingState;
- (void)_setDateOfLastPromptToNow;
- (void)_willPowerOff:(id)arg1;
- (void)_handleTrySafariEvent:(id)arg1 withReplyEvent:(id)arg2;
- (void)_showDefaultBrowserBannerIfNecessary;
- (BOOL)_shouldShowDefaultBrowserBanner;
- (double)_intervalToWaitBeforeFourthPrompt;
- (double)_intervalToWaitBeforeThirdPrompt;
- (void)_intializePromptingStateFromUserDefaults;
- (void)scheduleMakingSafariDefaultBrowserOnQuitFromTestDriveEnding;
- (void)willHideDefaultBrowserBanner;
- (void)makeSafariDefaultBrowserOnQuitIfNecessary;
- (void)performDelayedLaunchOperations;
- (void)registerTrySafariEventHandler;
- (void)dealloc;
- (id)init;

@end

