/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IASetupViewController.h"

#import "IADataPluginDelegate-Protocol.h"
#import "MCAccountSetupValidatorDelegate-Protocol.h"

@class IADataPlugin, IAMailAccountSetupInput, IAMailAccountSetupResult, MCAccountSetupValidator, NSLayoutConstraint, NSPopUpButton, NSString, NSTextField, NSView;

@interface MCIASetupViewController : IASetupViewController <IADataPluginDelegate, MCAccountSetupValidatorDelegate>
{
    id _localEventMonitor;
    id _globalEventMonitor;
    BOOL _showPathPrefix;
    BOOL _showIncomingTLSCertificate;
    BOOL _showOutgoingTLSCertificate;
    BOOL _manuallyConfigureIncoming;
    BOOL _manuallyConfigureOutgoing;
    BOOL _optionKeyPressed;
    NSView *_incomingAccountInfoView;
    NSView *_incomingAccountManualSetupView;
    NSView *_outgoingAccountInfoView;
    NSView *_outgoingAccountManualSetupView;
    NSTextField *_emailAddressTextField;
    NSTextField *_mailServerTextField;
    NSTextField *_incomingPortTextField;
    NSTextField *_smtpServerTextField;
    NSTextField *_outgoingPortTextField;
    NSPopUpButton *_incomingAuthenticationPopUp;
    NSPopUpButton *_incomingTLSCertificatePopUp;
    NSPopUpButton *_outgoingAuthenticationPopUp;
    NSPopUpButton *_outgoingTLSCertificatePopUp;
    NSLayoutConstraint *_accountTypeLabelHeightConstraint;
    NSLayoutConstraint *_accountTypeButtonHeightConstraint;
    NSLayoutConstraint *_accountTypeVerticalSpaceConstraint;
    NSLayoutConstraint *_pathPrefixLabelHeightConstraint;
    NSLayoutConstraint *_pathPrefixFieldHeightConstraint;
    NSLayoutConstraint *_pathPrefixVerticalSpaceConstraint;
    NSLayoutConstraint *_incomingTLSCertificateLabelHeightConstraint;
    NSLayoutConstraint *_incomingTLSCertificateButtonHeightConstraint;
    NSLayoutConstraint *_incomingTLSCertificateVerticalSpaceConstraint;
    NSLayoutConstraint *_outgoingTLSCertificateLabelHeightConstraint;
    NSLayoutConstraint *_outgoingTLSCertficiateButtonHeightConstraint;
    NSLayoutConstraint *_outgoingTLSCertificateVerticalSpaceConstraint;
    double _labelHeight;
    double _textFieldHeight;
    double _popUpButtonHeight;
    double _textFieldToTextFieldVerticalSpace;
    double _popUpButtonToPopUpButtonVerticalSpace;
    NSString *_progressText;
    id _completion;
    IADataPlugin *_iaDataPlugin;
    MCAccountSetupValidator *_validator;
    IAMailAccountSetupInput *_accountSetupInput;
    IAMailAccountSetupResult *_accountSetupResult;
}

+ (id)keyPathsForValuesAffectingAccountType;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property(retain, nonatomic) IAMailAccountSetupResult *accountSetupResult; // @synthesize accountSetupResult=_accountSetupResult;
@property(retain, nonatomic) IAMailAccountSetupInput *accountSetupInput; // @synthesize accountSetupInput=_accountSetupInput;
@property(nonatomic) BOOL optionKeyPressed; // @synthesize optionKeyPressed=_optionKeyPressed;
@property(nonatomic) BOOL manuallyConfigureOutgoing; // @synthesize manuallyConfigureOutgoing=_manuallyConfigureOutgoing;
@property(nonatomic) BOOL manuallyConfigureIncoming; // @synthesize manuallyConfigureIncoming=_manuallyConfigureIncoming;
@property(retain, nonatomic) MCAccountSetupValidator *validator; // @synthesize validator=_validator;
@property(readonly, nonatomic) IADataPlugin *iaDataPlugin; // @synthesize iaDataPlugin=_iaDataPlugin;
@property(copy, nonatomic) id completion; // @synthesize completion=_completion;
@property(nonatomic) BOOL showOutgoingTLSCertificate; // @synthesize showOutgoingTLSCertificate=_showOutgoingTLSCertificate;
@property(nonatomic) BOOL showIncomingTLSCertificate; // @synthesize showIncomingTLSCertificate=_showIncomingTLSCertificate;
@property(nonatomic) BOOL showPathPrefix; // @synthesize showPathPrefix=_showPathPrefix;
@property(copy, nonatomic) NSString *progressText; // @synthesize progressText=_progressText;
@property(nonatomic) double popUpButtonToPopUpButtonVerticalSpace; // @synthesize popUpButtonToPopUpButtonVerticalSpace=_popUpButtonToPopUpButtonVerticalSpace;
@property(nonatomic) double textFieldToTextFieldVerticalSpace; // @synthesize textFieldToTextFieldVerticalSpace=_textFieldToTextFieldVerticalSpace;
@property(nonatomic) double popUpButtonHeight; // @synthesize popUpButtonHeight=_popUpButtonHeight;
@property(nonatomic) double textFieldHeight; // @synthesize textFieldHeight=_textFieldHeight;
@property(nonatomic) double labelHeight; // @synthesize labelHeight=_labelHeight;
@property(nonatomic) __weak NSLayoutConstraint *outgoingTLSCertificateVerticalSpaceConstraint; // @synthesize outgoingTLSCertificateVerticalSpaceConstraint=_outgoingTLSCertificateVerticalSpaceConstraint;
@property(nonatomic) __weak NSLayoutConstraint *outgoingTLSCertficiateButtonHeightConstraint; // @synthesize outgoingTLSCertficiateButtonHeightConstraint=_outgoingTLSCertficiateButtonHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *outgoingTLSCertificateLabelHeightConstraint; // @synthesize outgoingTLSCertificateLabelHeightConstraint=_outgoingTLSCertificateLabelHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *incomingTLSCertificateVerticalSpaceConstraint; // @synthesize incomingTLSCertificateVerticalSpaceConstraint=_incomingTLSCertificateVerticalSpaceConstraint;
@property(nonatomic) __weak NSLayoutConstraint *incomingTLSCertificateButtonHeightConstraint; // @synthesize incomingTLSCertificateButtonHeightConstraint=_incomingTLSCertificateButtonHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *incomingTLSCertificateLabelHeightConstraint; // @synthesize incomingTLSCertificateLabelHeightConstraint=_incomingTLSCertificateLabelHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *pathPrefixVerticalSpaceConstraint; // @synthesize pathPrefixVerticalSpaceConstraint=_pathPrefixVerticalSpaceConstraint;
@property(nonatomic) __weak NSLayoutConstraint *pathPrefixFieldHeightConstraint; // @synthesize pathPrefixFieldHeightConstraint=_pathPrefixFieldHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *pathPrefixLabelHeightConstraint; // @synthesize pathPrefixLabelHeightConstraint=_pathPrefixLabelHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *accountTypeVerticalSpaceConstraint; // @synthesize accountTypeVerticalSpaceConstraint=_accountTypeVerticalSpaceConstraint;
@property(nonatomic) __weak NSLayoutConstraint *accountTypeButtonHeightConstraint; // @synthesize accountTypeButtonHeightConstraint=_accountTypeButtonHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *accountTypeLabelHeightConstraint; // @synthesize accountTypeLabelHeightConstraint=_accountTypeLabelHeightConstraint;
@property(nonatomic) __weak NSPopUpButton *outgoingTLSCertificatePopUp; // @synthesize outgoingTLSCertificatePopUp=_outgoingTLSCertificatePopUp;
@property(nonatomic) __weak NSPopUpButton *outgoingAuthenticationPopUp; // @synthesize outgoingAuthenticationPopUp=_outgoingAuthenticationPopUp;
@property(nonatomic) __weak NSPopUpButton *incomingTLSCertificatePopUp; // @synthesize incomingTLSCertificatePopUp=_incomingTLSCertificatePopUp;
@property(nonatomic) __weak NSPopUpButton *incomingAuthenticationPopUp; // @synthesize incomingAuthenticationPopUp=_incomingAuthenticationPopUp;
@property(nonatomic) __weak NSTextField *outgoingPortTextField; // @synthesize outgoingPortTextField=_outgoingPortTextField;
@property(nonatomic) __weak NSTextField *smtpServerTextField; // @synthesize smtpServerTextField=_smtpServerTextField;
@property(nonatomic) __weak NSTextField *incomingPortTextField; // @synthesize incomingPortTextField=_incomingPortTextField;
@property(nonatomic) __weak NSTextField *mailServerTextField; // @synthesize mailServerTextField=_mailServerTextField;
@property(nonatomic) __weak NSTextField *emailAddressTextField; // @synthesize emailAddressTextField=_emailAddressTextField;
@property(retain, nonatomic) NSView *outgoingAccountManualSetupView; // @synthesize outgoingAccountManualSetupView=_outgoingAccountManualSetupView;
@property(retain, nonatomic) NSView *outgoingAccountInfoView; // @synthesize outgoingAccountInfoView=_outgoingAccountInfoView;
@property(retain, nonatomic) NSView *incomingAccountManualSetupView; // @synthesize incomingAccountManualSetupView=_incomingAccountManualSetupView;
@property(retain, nonatomic) NSView *incomingAccountInfoView; // @synthesize incomingAccountInfoView=_incomingAccountInfoView;
- (void).cxx_destruct;
- (id)_uniqueDisplayNameForAccount;
- (void)updateAccountSetupResultWithOutgoingAccount:(id)arg1;
- (void)updateAccountSetupResultWithIncomingAccount:(id)arg1;
- (void)updateAccountSetupInput;
@property(nonatomic) long long accountType;
@property(copy, nonatomic) NSString *emailAddress;
@property(readonly, nonatomic) BOOL popDisabled;
@property(readonly, nonatomic) BOOL outgoingAccountDisabled;
- (id)delegateApplicationName;
- (void)validatorDidFinish:(id)arg1;
- (id)_configureAuthenticationPopUp:(id)arg1 withAuthSchemes:(id)arg2 currentAuthScheme:(id)arg3 allowNone:(BOOL)arg4;
- (void)validatorDidFail:(id)arg1;
- (void)validator:(id)arg1 didChangeState:(long long)arg2;
- (BOOL)plugin:(id)arg1 handleCertificateError:(id)arg2;
- (void)plugin:(id)arg1 didChangeAccountUID:(id)arg2;
- (void)plugin:(id)arg1 didDeleteAccountUID:(id)arg2;
- (void)plugin:(id)arg1 didCreateAccountUID:(id)arg2;
- (void)plugin:(id)arg1 accountSetupDidFinish:(id)arg2 withResult:(id)arg3;
- (void)plugin:(id)arg1 accountSetupDidFail:(id)arg2 withError:(id)arg3;
- (void)plugin:(id)arg1 accountSetupUpdate:(id)arg2 withStatus:(long long)arg3;
- (BOOL)showBackButton;
- (id)title;
- (BOOL)showCreateButton;
- (BOOL)inputValidForNext;
- (void)cancel;
- (BOOL)_sendIAAccountCreationNotificationForUID:(id)arg1 withError:(id)arg2;
- (void)_createAccountWithSetupResult:(id)arg1;
- (void)_updateAccountSetupResultWithReceivingAccountInfo:(id)arg1 deliveryAccountInfo:(id)arg2;
- (void)_cancelValidation;
- (void)_kickOffOutgoingAccountValidation;
- (void)_kickOffIncomingAccountValidation;
- (void)createWithCompletion:(id)arg1;
- (void)back;
- (void)next;
- (void)didUpdateCurrentView:(id)arg1;
- (id)viewForAccount:(id)arg1;
- (void)_updateOutgoingTLSCertificateConstraintsWithAuthMechanism:(id)arg1;
- (void)_updateIncomingTLSCertificateConstraintsWithAuthMechanism:(id)arg1;
- (void)_updatePathPrefixConstraintsWithAccountType:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)loadView;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

