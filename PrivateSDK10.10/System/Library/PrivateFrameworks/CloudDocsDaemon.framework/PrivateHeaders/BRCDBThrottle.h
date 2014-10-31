/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudDocsDaemon/BRCThrottleBase.h>

@class BRCLocalContainer, BRCThrottledScheduler, NSObject<OS_dispatch_source>, PQLNameInjection;

// Not exported
@interface BRCDBThrottle : BRCThrottleBase
{
    BRCLocalContainer *_container;
    NSObject<OS_dispatch_source> *_timer;
    BOOL _scheduled;
    BRCThrottledScheduler *_scheduler;
    PQLNameInjection *_tableName;
    long long _nextRetryTimestamp;
    long long _lastRetryTimestamp;
}

+ (id)applyChangesThrottleForContainer:(id)arg1;
+ (id)readerThrottleForContainer:(id)arg1;
@property(readonly, nonatomic) __weak BRCLocalContainer *container; // @synthesize container=_container;
@property(nonatomic) long long lastRetryTimestamp; // @synthesize lastRetryTimestamp=_lastRetryTimestamp;
@property(nonatomic) long long nextRetryTimestamp; // @synthesize nextRetryTimestamp=_nextRetryTimestamp;
@property(readonly, nonatomic) PQLNameInjection *tableName; // @synthesize tableName=_tableName;
@property(nonatomic) __weak BRCThrottledScheduler *scheduler; // @synthesize scheduler=_scheduler;
- (void).cxx_destruct;
- (BOOL)dumpToContext:(id)arg1 error:(id *)arg2;
- (void)reschedule;
- (void)unschedule;
- (void)deactivate;
- (void)needsScheduleAt:(long long)arg1;
- (void)needsSchedule;
- (void)doneScheduling;
- (BOOL)clearThrottle:(long long)arg1;
- (BOOL)clearThrottles;
- (BOOL)cleanupStaleThrottles;
- (id)descriptionForThrottleID:(long long)arg1 context:(id)arg2;
- (BOOL)canRetryThrottleID:(long long)arg1;
- (void)retriedThrottleID:(long long)arg1 insertIfMissing:(BOOL)arg2;
- (void)retriedThrottleID:(long long)arg1;
- (BOOL)createTables;
- (id)initWithName:(id)arg1 parameters:(id)arg2 tableName:(id)arg3 container:(id)arg4;

@end

