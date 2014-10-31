/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MMCSCPassPhraseRecoveryViewControllerDelegate-Protocol.h"
#import "MMCSCPinRecoveryViewControllerDelegate-Protocol.h"
#import "MMCSCSMSTargetRecoveryViewControllerDelegate-Protocol.h"

@class MMCSCPassPhraseRecoveryViewController, MMCSCPinRecoveryViewController, MMCSCSMSTargetRecoveryViewController, NSMutableDictionary, NSString, NSWindow;

@interface MMCSCRecoveryController : NSObject <MMCSCPinRecoveryViewControllerDelegate, MMCSCPassPhraseRecoveryViewControllerDelegate, MMCSCSMSTargetRecoveryViewControllerDelegate>
{
    id <MMCSCRecoveryControllerDelegate> _delegate;
    NSWindow *_dialog;
    NSWindow *_parentWindow;
    MMCSCPinRecoveryViewController *_cscPinVC;
    MMCSCPassPhraseRecoveryViewController *_cscPassPhraseVC;
    MMCSCSMSTargetRecoveryViewController *_cscSMSTargetVC;
    NSString *_accountID;
    NSString *_passPhrase;
    NSString *_verificationToken;
    NSString *_smsTargetCountryCode;
    NSString *_smsTarget;
    BOOL _isFirstDevice;
    BOOL _useComplexPassphraseView;
    BOOL _needsVerification;
    BOOL _usesRandomPassphrase;
    NSMutableDictionary *_recoveryContext;
}

@property(retain) MMCSCSMSTargetRecoveryViewController *cscSMSTargetVC; // @synthesize cscSMSTargetVC=_cscSMSTargetVC;
@property(retain) MMCSCPassPhraseRecoveryViewController *cscPassPhraseVC; // @synthesize cscPassPhraseVC=_cscPassPhraseVC;
@property(retain) MMCSCPinRecoveryViewController *cscPinVC; // @synthesize cscPinVC=_cscPinVC;
@property(retain) NSMutableDictionary *recoveryContext; // @synthesize recoveryContext=_recoveryContext;
@property(copy) NSString *smsTarget; // @synthesize smsTarget=_smsTarget;
@property(copy) NSString *smsTargetCountryCode; // @synthesize smsTargetCountryCode=_smsTargetCountryCode;
@property(copy) NSString *verificationToken; // @synthesize verificationToken=_verificationToken;
@property(copy) NSString *passPhrase; // @synthesize passPhrase=_passPhrase;
@property(retain) NSWindow *dialog; // @synthesize dialog=_dialog;
@property(retain) NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
@property BOOL needsVerification; // @synthesize needsVerification=_needsVerification;
@property BOOL usesRandomPassphrase; // @synthesize usesRandomPassphrase=_usesRandomPassphrase;
@property BOOL useComplexPassphraseView; // @synthesize useComplexPassphraseView=_useComplexPassphraseView;
@property BOOL isFirstDevice; // @synthesize isFirstDevice=_isFirstDevice;
@property(copy) NSString *accountID; // @synthesize accountID=_accountID;
@property id <MMCSCRecoveryControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)mmCSCSMSTargetRecoveryViewControllerDidCancel:(id)arg1;
- (void)mmCSCSMSTargetRecoveryViewControllerDidEnd:(id)arg1;
- (void)mmCSCPassPhraseRecoveryViewControllerDidCancel:(id)arg1;
- (void)mmCSCPassPhraseRecoveryViewControllerDidEnd:(id)arg1;
- (void)mmCSCPassPhraseRecoveryViewControllerDidForget:(id)arg1;
- (void)mmCSCPinRecoveryViewControllerDidCancel:(id)arg1;
- (void)mmCSCPinRecoveryViewControllerDidEnd:(id)arg1;
- (void)mmCSCPinRecoveryViewControllerDidForget:(id)arg1;
- (void)animateFromView:(id)arg1 toView:(id)arg2;
- (void)_handleSMSRetryError;
- (void)_handleSoftLimitRecoveryError:(id)arg1;
- (void)_handleSecurityCodeVerificationAndRestore:(id)arg1;
- (void)modalDialogCancelled;
- (void)endModalDialog;
- (void)beginDialogWithParentWindow:(id)arg1 completionHandler:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

