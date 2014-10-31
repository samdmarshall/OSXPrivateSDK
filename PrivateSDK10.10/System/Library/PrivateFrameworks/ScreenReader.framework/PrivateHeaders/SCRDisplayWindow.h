/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ScreenReader/SCRDisplayOverlay.h>

#import "SCRMouseProtocol-Protocol.h"

// Not exported
@interface SCRDisplayWindow : SCRDisplayOverlay <SCRMouseProtocol>
{
    struct CGPoint _lastMouseDownWindowLocation;
    struct CGPoint _lastMouseDownScreenLocation;
    double _borderCornerRadius;
    double _borderWidth;
    double _borderColorRed;
    double _borderColorGreen;
    double _borderColorBlue;
    double _borderColorAlpha;
}

- (BOOL)handleMouseScrollAxes1:(short)arg1 axes2:(short)arg2 axes3:(short)arg3;
- (BOOL)handleMouseUp:(struct CGPoint)arg1 isDoubleClick:(BOOL)arg2;
- (BOOL)handleDrag:(struct CGPoint)arg1 start:(struct CGPoint)arg2;
- (BOOL)handleMouseDown:(struct CGPoint)arg1;
- (struct CGPoint)lastMouseDownWindowLocation;
- (struct CGPoint)lastMouseDownScreenLocation;
- (void)handleMouseDragEvent:(struct _CGSEventRecord)arg1;
- (void)handleDoubleClickAtWindowLocation:(struct CGPoint)arg1;
- (void)_validateWindowBounds;
- (void)handleMouseUpEvent:(struct _CGSEventRecord)arg1;
- (void)handleMouseDownEvent:(struct _CGSEventRecord)arg1;
- (void)handleScrollWheelEvent:(struct _CGSEventRecord)arg1;
- (void)handleMouseEvent:(struct _CGSEventRecord)arg1;
- (void)drawInContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (void)setBorderColorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (double)borderCornerRadius;
- (void)setBorderCornerRadius:(double)arg1;
- (BOOL)hasContents;
- (id)initWithScreenRect:(struct CGRect)arg1;

@end

