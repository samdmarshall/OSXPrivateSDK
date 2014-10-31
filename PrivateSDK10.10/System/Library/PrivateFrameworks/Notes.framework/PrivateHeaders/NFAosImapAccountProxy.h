/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Notes/NFIMAPAccountProxy.h>

@interface NFAosImapAccountProxy : NFIMAPAccountProxy
{
    id _aoskitLock;
    struct AOSAccount *_aoskitAccount;
    struct AOSTransactionC *_mailPropertiesTransaction;
}

+ (BOOL)isAOSEmailAddress:(id)arg1;
- (void).cxx_destruct;
- (void)presentOverQuotaAlert;
- (id)_aoskitPropertyForKey:(struct __CFString *)arg1;
- (void)_updateMailPropertiesBypassingCache:(BOOL)arg1;
- (void)_updateAoskitAccount:(BOOL)arg1;
- (void)_setMailPropertiesTransaction:(struct AOSTransactionC *)arg1;
- (struct AOSTransactionC *)_copyMailPropertiesTransaction;
- (void)_setAoskitAccount:(struct AOSAccount *)arg1;
- (struct AOSAccount *)_copyAoskitAccount;
- (BOOL)canAuthenticateWithScheme:(id)arg1;
- (BOOL)shouldRetryConnectionWithoutCertificateCheckingAfterError:(id)arg1 host:(id)arg2 didPromptUser:(char *)arg3;
- (id)appleAuthenticationToken;
- (id)applePersonID;
- (void)setPassword:(id)arg1;
- (id)password;
- (void)setSessionPassword:(id)arg1;
- (void)setUsername:(id)arg1;
- (void)setHostname:(id)arg1;
- (id)hostname;
- (void)autodiscoverSettings;
- (void)dealloc;
- (id)initWithManagedObject:(id)arg1;

@end

