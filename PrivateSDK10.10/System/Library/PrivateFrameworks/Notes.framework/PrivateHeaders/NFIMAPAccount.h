/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Notes/NFAccount.h>

#import "IMAPPersistedAccount-Protocol.h"

@class ACAccountCredential, NFIMAPFolder, NSData, NSManagedObject<IMAPPersistedMailbox>, NSSet, NSString;

@interface NFIMAPAccount : NFAccount <IMAPPersistedAccount>
{
}

+ (id)keyPathsForValuesAffectingIsAOSAccount;
+ (id)createAccountWithEmailAddress:(id)arg1 context:(id)arg2;
+ (id)accountWithEmailAddress:(id)arg1 context:(id)arg2;
+ (id)accountWithUsername:(id)arg1 hostname:(id)arg2 context:(id)arg3;
+ (id)aosAccountWithUsername:(id)arg1 context:(id)arg2;
- (id)folderEntityName;
- (id)createDefaultFolderInContext:(id)arg1;
@property(readonly, nonatomic) __weak NFIMAPFolder *defaultFolder;
- (BOOL)validateRootFolder:(inout id *)arg1 error:(out id *)arg2;
- (long long)_portNumberForKeychain;
- (void)setPassword:(id)arg1;
- (id)password;
- (BOOL)isAOSAccount;
- (BOOL)participatesInInternetAccounts;
- (long long)accountClassPriority;
- (id)newMailboxWithName:(id)arg1 serverName:(id)arg2 parent:(id)arg3;
- (id)objectIDOfMailboxWithServerName:(id)arg1;
- (void)addMailboxes:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *mailboxes;
@property(readonly, nonatomic) NSManagedObject<IMAPPersistedMailbox> *inbox;
@property(readonly, nonatomic) NFIMAPFolder *defaultMailbox;
@property(copy, nonatomic) NSString *authenticationSchemeName;

// Remaining properties
@property(copy, nonatomic) NSString *accountDescription;
@property(nonatomic) BOOL allowInsecureAuthentication;
@property(copy, nonatomic) NSString *authentication; // @dynamic authentication;
@property(copy, nonatomic) NSString *canonicalEmailAddress;
@property(retain, nonatomic) ACAccountCredential *credential;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL enabled;
@property(nonatomic) long long gmailCapabilitiesSupport; // @dynamic gmailCapabilitiesSupport;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *hostname; // @dynamic hostname;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(nonatomic) long long port; // @dynamic port;
@property(retain, nonatomic) NFIMAPFolder *rootFolder; // @dynamic rootFolder;
@property(nonatomic) long long securityLayerType; // @dynamic securityLayerType;
@property(copy, nonatomic) NSString *serverPathPrefix; // @dynamic serverPathPrefix;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSData *tlsCertificate; // @dynamic tlsCertificate;
@property(copy, nonatomic) NSString *username;

@end

