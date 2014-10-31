/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "CKDAccountInfoProvider-Protocol.h"

@class ACAccountStore, ACAccountType, CKDBackingAccount, CKDClientContext, NSString;

// Not exported
@interface CKDAccount : NSObject <CKDAccountInfoProvider>
{
    BOOL _isUnitTestingAccount;
    BOOL _accountWantsPushRegistration;
    BOOL _isAnonymousAccount;
    BOOL _haveWarnedAboutServerPreferredPushEnvironment;
    ACAccountStore *_accountStore;
    ACAccountType *_acAccountType;
    CKDBackingAccount *_backingAccount;
    CKDClientContext *_context;
}

@property(nonatomic) BOOL haveWarnedAboutServerPreferredPushEnvironment; // @synthesize haveWarnedAboutServerPreferredPushEnvironment=_haveWarnedAboutServerPreferredPushEnvironment;
@property(nonatomic) BOOL isAnonymousAccount; // @synthesize isAnonymousAccount=_isAnonymousAccount;
@property(nonatomic) __weak CKDClientContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) CKDBackingAccount *backingAccount; // @synthesize backingAccount=_backingAccount;
@property(retain, nonatomic) ACAccountType *acAccountType; // @synthesize acAccountType=_acAccountType;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(nonatomic) BOOL accountWantsPushRegistration; // @synthesize accountWantsPushRegistration=_accountWantsPushRegistration;
@property(nonatomic) BOOL isUnitTestingAccount; // @synthesize isUnitTestingAccount=_isUnitTestingAccount;
- (void).cxx_destruct;
- (void)noteTimeSpentInNetworking:(double)arg1;
- (void)noteFailedProtocolRequest;
- (void)noteFailedNetworkRequest;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1;
- (id)enabledKeyboards;
- (id)regionCode;
- (id)languageCode;
- (BOOL)shouldFailAllTasks;
- (void)renewAuthTokenWithCompletionHandler:(id)arg1;
- (id)deviceName;
- (id)hardwareID;
@property(readonly, nonatomic) BOOL cloudPhotosIsEnabled;
@property(readonly, nonatomic) BOOL cloudKitIsEnabled;
- (BOOL)canAccessAccount;
@property(readonly, nonatomic) BOOL allowsCellularAccess;
- (id)iCloudAuthToken;
- (id)cloudKitAuthToken;
- (id)containerScopedUserID;
- (id)dsid;
- (id)baseURLForServerType:(long long)arg1 partitionType:(long long)arg2;
- (id)_urlBySettingCustomBaseURL:(id)arg1 onURL:(id)arg2;
@property(readonly, copy) NSString *description;
- (id)serverPreferredPushEnvironment;
- (id)trafficContainerIdentifier;
- (id)applicationBundle;
- (id)bundleID;
- (id)containerID;
@property(readonly, nonatomic) NSString *accountID;
@property(readonly, nonatomic) BOOL isFakeAccount;
- (void)renewMescalSessionForRequest:(id)arg1 withCompletionHandler:(id)arg2;
- (void)resetMescalSession;
- (id)mescalSession;
- (void)fetchDeviceIDUsingBackgroundSession:(BOOL)arg1 allowsCellularAccess:(BOOL)arg2 withCompletionHandler:(id)arg3;
- (void)fetchContainerScopedUserIDUsingBackgroundSession:(BOOL)arg1 allowsCellularAccess:(BOOL)arg2 withCompletionHandler:(id)arg3;
- (void)fetchPublicURLUsingBackgroundSession:(BOOL)arg1 allowsCellularAccess:(BOOL)arg2 serverType:(long long)arg3 completionHandler:(id)arg4;
- (void)fetchConfigurationUsingBackgroundSession:(BOOL)arg1 allowsCellularAccess:(BOOL)arg2 withCompletionHandler:(id)arg3;
- (id)config;
@property(readonly, nonatomic) NSString *accountIdentifier;
- (id)initFakeAccountWithEmail:(id)arg1 password:(id)arg2 context:(id)arg3;
- (id)initWithAccountID:(id)arg1 context:(id)arg2;
- (id)initAnonymousAccountWithContext:(id)arg1;
- (id)initPrimaryAccountWithContext:(id)arg1;
- (id)_initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

