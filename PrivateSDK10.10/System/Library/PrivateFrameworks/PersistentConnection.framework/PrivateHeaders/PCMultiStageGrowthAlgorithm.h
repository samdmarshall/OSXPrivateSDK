/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "PCGrowthAlgorithm-Protocol.h"

@class NSDate, NSDictionary, NSString;

@interface PCMultiStageGrowthAlgorithm : NSObject <PCGrowthAlgorithm>
{
    double _currentKeepAliveInterval;
    double _minimumKeepAliveInterval;
    double _maximumKeepAliveInterval;
    double _lastKeepAliveInterval;
    int _growthStage;
    double _highWatermark;
    double _initialGrowthStageHighWatermark;
    double _initialGrowthStageLastAttempt;
    NSDate *_leaveSteadyStateDate;
    NSString *_loggingIdentifier;
    NSString *_algorithmName;
    unsigned long long _countOfGrowthActions;
}

+ (void)_loadDefaultValue:(double *)arg1 forKey:(struct __CFString *)arg2;
+ (void)_loadDefaults;
@property(readonly, nonatomic) NSString *loggingIdentifier; // @synthesize loggingIdentifier=_loggingIdentifier;
@property(nonatomic) double maximumKeepAliveInterval; // @synthesize maximumKeepAliveInterval=_maximumKeepAliveInterval;
@property(nonatomic) double minimumKeepAliveInterval; // @synthesize minimumKeepAliveInterval=_minimumKeepAliveInterval;
@property(readonly, nonatomic) double currentKeepAliveInterval; // @synthesize currentKeepAliveInterval=_currentKeepAliveInterval;
@property(readonly, nonatomic) unsigned long long countOfGrowthActions; // @synthesize countOfGrowthActions=_countOfGrowthActions;
- (id)_stringForStage:(int)arg1;
- (id)_stringForAction:(int)arg1;
@property(readonly, copy) NSString *description;
- (double)_steadyStateTimeout;
- (void)_processRefinedGrowthAction:(int)arg1;
- (void)_processSteadyStateAction:(int)arg1;
- (void)_processBackoffAction:(int)arg1;
- (void)_processInitialGrowthAction:(int)arg1;
- (void)processNextAction:(int)arg1;
- (void)_resetAlgorithmToInterval:(double)arg1;
- (void)_resetAlgorithmToInterval:(double)arg1 stage:(int)arg2;
@property(readonly, copy, nonatomic) NSDictionary *cacheInfo;
- (BOOL)useIntervalIfImprovement:(double)arg1;
- (void)_setCurrentKeepAliveInterval:(double)arg1;
- (void)dealloc;
- (id)initWithCacheInfo:(id)arg1 loggingIdentifier:(id)arg2 algorithmName:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

