/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Backup/BU_TMControl.h>

// Not exported
@interface BU_FlatControl : BU_TMControl
{
    CDStruct_0d55b27b state;
    struct TRef<CGColorSpace *, TRetainReleasePolicy<CGColorSpaceRef>> fColorSpace;
    struct TRef<CGColor *, TRetainReleasePolicy<CGColorRef>> fBackgroundColor;
    struct TRef<CGColor *, TRetainReleasePolicy<CGColorRef>> fForegroundColor;
    struct TNSRef<BU_ButtonPart *> fBackgroundLayer;
    struct TNSRef<BU_ButtonPart *> fForegroundLayer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)drawForeground:(struct CGContext *)arg1 bounds:(struct CGRect)arg2;
- (void)drawBackground:(struct CGContext *)arg1 bounds:(struct CGRect)arg2;
- (void)draw:(struct CGContext *)arg1 forPart:(id)arg2;
- (_Bool)mouseUpAtPoint:(struct CGPoint)arg1 withModifiers:(unsigned int)arg2;
- (_Bool)mouseDownAtPoint:(struct CGPoint)arg1 withModifiers:(unsigned int)arg2;
- (_Bool)pixelAccurateHitTest:(struct CGPoint)arg1;
- (_Bool)mouseDraggedToPoint:(struct CGPoint)arg1 withModifiers:(unsigned int)arg2;
- (void)setPressed:(_Bool)arg1;
- (_Bool)pressed;
- (void)setEnabled:(BOOL)arg1;
- (void)invalidate;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setHaveForegroundLayer;
- (void)setHaveBackgroundLayer;
- (void)setOpacity:(float)arg1;
- (id)init;

@end

