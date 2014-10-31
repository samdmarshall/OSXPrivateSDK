/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSMutableArray;

@interface SSOperationProgress : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _canPause;
    double _changeRate;
    double _currentValue;
    double _estimatedTimeRemaining;
    double _maxValue;
    double _normalizedCurrentValue;
    double _normalizedMaxValue;
    long long _operationType;
    long long _units;
    NSMutableArray *_snapshotTimes;
    NSMutableArray *_snapshotValues;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long units; // @synthesize units=_units;
@property(nonatomic) long long operationType; // @synthesize operationType=_operationType;
@property(nonatomic) double normalizedMaxValue; // @synthesize normalizedMaxValue=_normalizedMaxValue;
@property(nonatomic) double normalizedCurrentValue; // @synthesize normalizedCurrentValue=_normalizedCurrentValue;
@property(nonatomic) double maxValue; // @synthesize maxValue=_maxValue;
@property(nonatomic) double estimatedTimeRemaining; // @synthesize estimatedTimeRemaining=_estimatedTimeRemaining;
@property(nonatomic) double currentValue; // @synthesize currentValue=_currentValue;
@property(nonatomic) double changeRate; // @synthesize changeRate=_changeRate;
@property(nonatomic) BOOL canPause; // @synthesize canPause=_canPause;
- (void).cxx_destruct;
- (void)_updateStatisticsFromSnapshots;
- (void)snapshot;
- (void)resetSnapshots;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

