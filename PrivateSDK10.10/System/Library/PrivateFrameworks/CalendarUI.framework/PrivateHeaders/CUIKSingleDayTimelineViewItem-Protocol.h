/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class EKEvent, NSDate;

@protocol CUIKSingleDayTimelineViewItem <NSObject>
+ (double)barToBarHorizontalDistanceIncludingBarWidth;
@property(readonly) BOOL visibleHeightLocked;
@property struct CGRect unPinnedViewFrame;
@property(readonly, nonatomic) EKEvent *event;
@property(readonly, nonatomic) double viewMaxNaturalTextHeight;
@property(readonly, nonatomic) double enoughHeightForOneLine;
@property(readonly, nonatomic) BOOL hideTravelTime;
@property(readonly, nonatomic) NSDate *end;
@property(readonly, nonatomic) NSDate *start;
@property(readonly, nonatomic) NSDate *startWithTravelTime;
- (void)setTravelTimeHeight:(double)arg1;
- (void)setVisibleHeight:(double)arg1;
- (struct CGRect)stagedFrame;
- (void)setStagedFrame:(struct CGRect)arg1;
@end

