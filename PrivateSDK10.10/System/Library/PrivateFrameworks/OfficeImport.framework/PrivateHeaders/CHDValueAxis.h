/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/CHDAxis.h>

// Not exported
@interface CHDValueAxis : CHDAxis
{
    _Bool mPercentageFormattingFlag;
    _Bool mAutoMajorUnitValue;
    _Bool mAutoMinorUnitValue;
    double mMajorUnitValue;
    double mMinorUnitValue;
    double mScalingLogBase;
}

- (void)adjustAxisPositionForHorizontalChart;
- (_Bool)isAutoMinorUnitValue;
- (_Bool)isAutoMajorUnitValue;
- (void)setPercentageFormattingFlag:(_Bool)arg1;
- (_Bool)isPercentageFormattingFlag;
- (void)setScalingLogBase:(double)arg1;
- (double)scalingLogBase;
- (void)setMinorUnitValue:(double)arg1;
- (double)minorUnitValue;
- (void)setMajorUnitValue:(double)arg1;
- (double)majorUnitValue;
- (id)initWithResources:(id)arg1;

@end

