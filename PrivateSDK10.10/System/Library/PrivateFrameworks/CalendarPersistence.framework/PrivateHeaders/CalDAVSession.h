/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarPersistence/CalSession.h>

@class CalDAVAccountInfoProvider, CalDAVOperationQueue, NSDate, NSMutableDictionary, NSString;

@interface CalDAVSession : CalSession
{
    NSMutableDictionary *_calendarSources;
    CalDAVOperationQueue *_queue;
    NSString *_pushToken;
    BOOL _pushActive;
    BOOL _isDelegate;
    NSDate *_fullRefreshDate;
    CalDAVAccountInfoProvider *_accountInfoProvider;
}

@property(retain) NSDate *fullRefreshDate; // @synthesize fullRefreshDate=_fullRefreshDate;
@property BOOL isDelegate; // @synthesize isDelegate=_isDelegate;
@property(retain) NSMutableDictionary *calendarSources; // @synthesize calendarSources=_calendarSources;
@property(retain) CalDAVAccountInfoProvider *accountInfoProvider; // @synthesize accountInfoProvider=_accountInfoProvider;
@property(retain) NSString *pushToken; // @synthesize pushToken=_pushToken;
- (id)description;
- (id)debugInfo;
- (void)systemNetworkDidChange;
- (id)managedPrincipalInContext:(id)arg1;
- (BOOL)attemptAutomaticConnect;
- (void)deletePersistedErrorAndNotify;
- (BOOL)persistError:(id)arg1 forChangeRequestID:(id)arg2;
- (BOOL)persistErrorAndNotify;
- (BOOL)processChangeRequests:(BOOL)arg1;
- (BOOL)updatePushState:(BOOL)arg1;
- (void)removeSourceWithID:(id)arg1;
- (id)sourceWithID:(id)arg1 shouldCreate:(BOOL)arg2;
- (id)sourceWithID:(id)arg1;
- (BOOL)needsSync;
- (double)timeSinceLastSync;
- (void)timerFiredWithInfo:(id)arg1;
- (id)_createScheduleCriteria;
- (void)reschedule;
- (void)synchronizeDelegatesWithCompletion:(id)arg1;
- (void)synchronizeWithFlags:(long long)arg1 previousMigrateDelay:(long long)arg2;
- (void)synchronizeWithFlags:(long long)arg1;
- (void)synchronizeAndMigrateWithPreviousDelay:(long long)arg1;
- (BOOL)_isPendingRefresh;
- (BOOL)_isRefreshing;
- (id)operationQueue;
- (void)goOffline;
- (void)goOnline;
- (void)updateAccountInfoProvider;
- (void)passwordChanged:(id)arg1;
- (void)_setupQueueIfNecessary;
- (void)reactivate;
- (BOOL)activate;
- (void)deactivate;
- (void)dealloc;
- (id)initWithObjectID:(id)arg1;

@end

