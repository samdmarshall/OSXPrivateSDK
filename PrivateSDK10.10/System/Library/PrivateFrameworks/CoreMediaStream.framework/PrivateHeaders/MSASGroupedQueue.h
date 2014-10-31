/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MSASServerSideModel, MSTimerGate, NSObject<OS_dispatch_queue>;

@interface MSASGroupedQueue : NSObject
{
    BOOL _isShuttingDown;
    BOOL _isAssertingBusyAssertion;
    int _maxGroupedCallbackEventBatchCount;
    MSASServerSideModel *_model;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_memberQueue;
    double _maxGroupedCallbackEventIdleInterval;
    double _maxGroupedCallbackEventStaleness;
    MSTimerGate *_idleTimerGate;
    MSTimerGate *_stalenessTimerGate;
}

@property(nonatomic) BOOL isShuttingDown; // @synthesize isShuttingDown=_isShuttingDown;
@property(retain, nonatomic) MSTimerGate *stalenessTimerGate; // @synthesize stalenessTimerGate=_stalenessTimerGate;
@property(retain, nonatomic) MSTimerGate *idleTimerGate; // @synthesize idleTimerGate=_idleTimerGate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // @synthesize memberQueue=_memberQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) __weak MSASServerSideModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)workQueueDidEnqueueSubsequentItem;
- (void)workQueueDidEnqueueFirstItem;
- (void)workQueueClearStalenessTimer;
- (void)workQueueRestartStalenessTimer;
- (void)workQueueClearIdleTimer;
- (void)workQueueRestartIdleTimer;
- (void)workQueueFlushQueue;
- (BOOL)hasEnqueuedItems;
- (void)flushQueueCompletionBlock:(id)arg1;
- (void)shutDownFlush:(BOOL)arg1 completionBlock:(id)arg2;
- (void)memberQueueSetIsAssertingBusyAssertion:(BOOL)arg1;
- (BOOL)memberQueueIsAssertingBusyAssertion;
@property(readonly, nonatomic) BOOL isAssertingBusyAssertion; // @synthesize isAssertingBusyAssertion=_isAssertingBusyAssertion;
- (void)workQueueDeassertBusyAssertion;
- (void)workQueueAssertBusyAssertion;
- (void)deassertBusyAssertion;
- (void)assertBusyAssertion;
@property(nonatomic) double maxGroupedCallbackEventIdleInterval; // @synthesize maxGroupedCallbackEventIdleInterval=_maxGroupedCallbackEventIdleInterval;
@property(nonatomic) double maxGroupedCallbackEventStaleness; // @synthesize maxGroupedCallbackEventStaleness=_maxGroupedCallbackEventStaleness;
@property(nonatomic) int maxGroupedCallbackEventBatchCount; // @synthesize maxGroupedCallbackEventBatchCount=_maxGroupedCallbackEventBatchCount;
- (void)dealloc;
- (id)init;

@end

