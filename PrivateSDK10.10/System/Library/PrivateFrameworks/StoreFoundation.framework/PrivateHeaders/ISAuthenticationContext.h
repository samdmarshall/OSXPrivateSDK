/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class NSDictionary, NSNumber, NSString;

@interface ISAuthenticationContext : NSObject <NSSecureCoding>
{
    NSNumber *_accountID;
    NSDictionary *_additionalQueryParameters;
    NSDictionary *_dialogDictionary;
    long long _bagType;
    NSDictionary *_signUpQueryParameters;
    BOOL _shouldFollowAccountButtons;
    long long _style;
    BOOL _useCachedCredentials;
    long long _authenticationReason;
    NSString *_appleIDOverride;
    BOOL _enforceAppleIDOverride;
    NSString *_applicationName;
    BOOL _demoMode;
    BOOL _demoAutologinMode;
    NSString *_demoAccountName;
    NSString *_demoAccountPassword;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NSString *demoAccountPassword; // @synthesize demoAccountPassword=_demoAccountPassword;
@property(retain) NSString *demoAccountName; // @synthesize demoAccountName=_demoAccountName;
@property BOOL demoAutologinMode; // @synthesize demoAutologinMode=_demoAutologinMode;
@property BOOL demoMode; // @synthesize demoMode=_demoMode;
@property(retain) NSDictionary *dialogDictionary; // @synthesize dialogDictionary=_dialogDictionary;
@property(retain) NSString *applicationName; // @synthesize applicationName=_applicationName;
@property BOOL enforceAppleIDOverride; // @synthesize enforceAppleIDOverride=_enforceAppleIDOverride;
@property(retain) NSString *appleIDOverride; // @synthesize appleIDOverride=_appleIDOverride;
@property long long authenticationReason; // @synthesize authenticationReason=_authenticationReason;
@property BOOL useCachedCredentials; // @synthesize useCachedCredentials=_useCachedCredentials;
@property BOOL shouldFollowAccountButtons; // @synthesize shouldFollowAccountButtons=_shouldFollowAccountButtons;
@property(retain) NSDictionary *signUpQueryParameters; // @synthesize signUpQueryParameters=_signUpQueryParameters;
@property long long bagType; // @synthesize bagType=_bagType;
@property long long authenticationStyle; // @synthesize authenticationStyle=_style;
@property(retain) NSDictionary *additionalQueryParameters; // @synthesize additionalQueryParameters=_additionalQueryParameters;
@property(readonly) NSNumber *accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAccountID:(id)arg1;
- (id)init;

@end

