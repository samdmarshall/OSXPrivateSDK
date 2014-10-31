/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarAgentLink/CalStoreRemoteManagedGroup.h>

@class CalStoreRemoteManagedAccount, CalStoreRemoteManagedMigrationGroup, NSString;

@interface CalStoreRemoteManagedPrincipal : CalStoreRemoteManagedGroup
{
    CalStoreRemoteManagedAccount *_account;
    NSString *_fullName;
    BOOL _isDelegate;
    BOOL _isManuallyConfigured;
    CalStoreRemoteManagedMigrationGroup *_migrationGroup;
}

+ (BOOL)supportsSecureCoding;
+ (id)fetchObjectsWithPredicate:(id)arg1;
@property(retain, nonatomic) CalStoreRemoteManagedMigrationGroup *migrationGroup; // @synthesize migrationGroup=_migrationGroup;
@property(nonatomic) BOOL isManuallyConfigured; // @synthesize isManuallyConfigured=_isManuallyConfigured;
@property(nonatomic) BOOL isDelegate; // @synthesize isDelegate=_isDelegate;
@property(retain, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(retain, nonatomic) CalStoreRemoteManagedAccount *account; // @synthesize account=_account;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end

