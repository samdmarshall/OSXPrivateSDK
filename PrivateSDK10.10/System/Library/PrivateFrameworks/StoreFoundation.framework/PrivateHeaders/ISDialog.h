/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class ISDialogButton, NSArray, NSDictionary, NSLock, NSMutableDictionary, NSString;

@interface ISDialog : NSObject <NSSecureCoding>
{
    BOOL _allowDuplicates;
    BOOL _authorizationIsForced;
    NSArray *_buttons;
    long long _defaultButtonIndex;
    BOOL _dismissOnLock;
    BOOL _expectsResponse;
    BOOL _groupsTextFields;
    long long _kind;
    NSLock *_lock;
    NSString *_message;
    BOOL _oneButtonPerLine;
    NSArray *_textFields;
    NSString *_title;
    NSMutableDictionary *_userInfo;
    NSDictionary *_baseDictionary;
    NSDictionary *_authenticationParameters;
    id <ISDialogDelegate> _delegate;
    ISDialogButton *_okButton;
    ISDialogButton *_cancelButton;
    ISDialogButton *_otherButton;
    ISDialogButton *_suppressionCheckbox;
}

+ (void)dismissDialogWithDictionary:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)dialogWithError:(id)arg1;
+ (id)dialogWithDictionary:(id)arg1;
@property(nonatomic) __weak id <ISDialogDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) ISDialogButton *suppressionCheckbox; // @synthesize suppressionCheckbox=_suppressionCheckbox;
@property(readonly) ISDialogButton *otherButton; // @synthesize otherButton=_otherButton;
@property(readonly) ISDialogButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(readonly) ISDialogButton *okButton; // @synthesize okButton=_okButton;
@property(readonly) NSDictionary *authenticationParameters; // @synthesize authenticationParameters=_authenticationParameters;
@property(readonly) NSDictionary *baseDictionary; // @synthesize baseDictionary=_baseDictionary;
@property(retain) NSString *title; // @synthesize title=_title;
@property(retain) NSArray *textFields; // @synthesize textFields=_textFields;
@property BOOL oneButtonPerLine; // @synthesize oneButtonPerLine=_oneButtonPerLine;
@property(retain) NSString *message; // @synthesize message=_message;
@property long long kind; // @synthesize kind=_kind;
@property BOOL groupsTextFields; // @synthesize groupsTextFields=_groupsTextFields;
@property BOOL expectsResponse; // @synthesize expectsResponse=_expectsResponse;
@property BOOL dismissOnLock; // @synthesize dismissOnLock=_dismissOnLock;
@property long long defaultButtonIndex; // @synthesize defaultButtonIndex=_defaultButtonIndex;
@property(retain) NSArray *buttons; // @synthesize buttons=_buttons;
@property BOOL authorizationIsForced; // @synthesize authorizationIsForced=_authorizationIsForced;
@property BOOL allowDuplicates; // @synthesize allowDuplicates=_allowDuplicates;
- (void).cxx_destruct;
- (void)stopModalForDialog:(id)arg1;
- (void)handleDismissNoficiation:(id)arg1;
@property(readonly) BOOL needsDedicatedUI;
- (BOOL)shouldDismissWithReturnCode:(long long)arg1 userInfo:(id *)arg2;
- (void)dismissDialogWithExitCode:(long long)arg1;
- (id)_runModalWithSettings:(id)arg1;
- (void)performAction:(long long)arg1;
- (void)beginSheetModalForWindow:(id)arg1 completionHandler:(id)arg2;
- (id)runModal;
- (long long)_kindForString:(id)arg1;
- (id)valueForUserInfoKey:(id)arg1;
- (void)setValue:(id)arg1 forUserInfoKey:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)copyUserNotification;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2;
- (id)initWithError:(id)arg1;
- (id)initWithDialogDictionary:(id)arg1;
- (id)init;
- (id)initWithAuthenticationChallege:(id)arg1;

@end

