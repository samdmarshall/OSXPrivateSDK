/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ScreenSharing/SSMouseEvent.h>

// Not exported
@interface SSGestureEvent : SSMouseEvent
{
    long long mSubType;
    void *mReservedForInstanceVariablesGesture;
}

+ (id)gestureEventWithCoordinates:(struct SSPoint)arg1 subType:(long long)arg2;
@property(readonly) long long subType; // @synthesize subType=mSubType;
- (id)initWithCoordinates:(struct SSPoint)arg1 subType:(long long)arg2;

@end

