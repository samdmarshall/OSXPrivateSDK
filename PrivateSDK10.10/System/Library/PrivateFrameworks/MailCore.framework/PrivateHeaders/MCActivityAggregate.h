/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArrayController, NSDate, NSString;

@interface MCActivityAggregate : NSObject
{
    NSArrayController *_monitorController;
    unsigned long long _baseItemsDone;
    unsigned long long _baseItemsTotal;
    double _baseUnifiedDone;
    BOOL _canCancel;
    unsigned long long _itemsDone;
    unsigned long long _itemsTotal;
    double _unifiedDone;
    double _progress;
    BOOL _isProgressing;
    double _estimatedTimeRemaining;
    BOOL _isResetting;
    long long _activityType;
    NSString *_bkItemDescription;
    NSString *_status;
    double _startTime;
    NSDate *_lastUpdateTimestamp;
    NSString *_nameSingular;
    NSString *_namePlural;
}

+ (id)keyPathsForValuesAffectingIsProgressIndeterminate;
+ (BOOL)automaticallyNotifiesObserversOfEstimatedTimeRemaining;
+ (BOOL)automaticallyNotifiesObserversOfProgress;
+ (BOOL)automaticallyNotifiesObserversOfIsProgressing;
+ (BOOL)automaticallyNotifiesObserversOfCanCancel;
@property(copy) NSString *namePlural; // @synthesize namePlural=_namePlural;
@property(copy) NSString *nameSingular; // @synthesize nameSingular=_nameSingular;
@property(retain) NSDate *lastUpdateTimestamp; // @synthesize lastUpdateTimestamp=_lastUpdateTimestamp;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(copy) NSString *status; // @synthesize status=_status;
@property BOOL isResetting; // @synthesize isResetting=_isResetting;
@property(copy) NSString *bkItemDescription; // @synthesize bkItemDescription=_bkItemDescription;
@property long long activityType; // @synthesize activityType=_activityType;
- (void).cxx_destruct;
- (void)signalCancel:(id)arg1;
- (id)description;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_processMonitorUpdate;
- (void)_update;
- (void)_updateTimeBasedValues;
- (void)updateUnitBasedValues;
- (void)_updateAggregateValues;
- (void)_updateAggregateIsProgressing;
- (void)removeActivityMonitor:(id)arg1;
- (void)addActivityMonitor:(id)arg1;
- (void)reset;
- (void)_updateStatus;
@property(readonly, nonatomic) BOOL isProgressIndeterminate;
@property(nonatomic) double estimatedTimeRemaining;
@property(nonatomic) double progress;
@property(nonatomic) BOOL isProgressing;
@property(nonatomic) BOOL canCancel;
@property double unifiedDone;
@property unsigned long long itemsTotal;
@property unsigned long long itemsDone;
- (unsigned long long)currentItem;
@property(readonly, nonatomic) NSArrayController *monitorController;
- (void)dealloc;
- (id)init;

@end

