/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ScreenSharing/SSInputEvent.h>

@interface SSMouseEvent : SSInputEvent
{
    struct SSPoint mCoordinates;
    void *mReservedForInstanceVariablesMouse;
}

+ (id)mouseEventWithCoordinates:(struct SSPoint)arg1;
@property(readonly) struct SSPoint coordinates; // @synthesize coordinates=mCoordinates;
- (id)initWithCoordinates:(struct SSPoint)arg1;

@end

