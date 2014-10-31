/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ScreenSharing/SSGestureEvent.h>

// Not exported
@interface SSGestureRotateEvent : SSGestureEvent
{
    double mRotation;
    void *mReservedForInstanceVariablesGestureRotate;
}

+ (id)gestureRotateEventWithCoordinates:(struct SSPoint)arg1 subType:(long long)arg2 rotation:(double)arg3;
@property(readonly) double rotation; // @synthesize rotation=mRotation;
- (id)initWithCoordinates:(struct SSPoint)arg1 subType:(long long)arg2 rotation:(double)arg3;

@end

