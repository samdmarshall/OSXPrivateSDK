/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSActionCell.h"

@class NSBezierPath;

@interface NSProDialCell : NSActionCell
{
    double _initialTrackingPointAngle;
    NSBezierPath *_diameterPath;
    struct __PDCFlags {
        unsigned int isTracking:1;
        unsigned int isDebug:1;
        unsigned int snapToMouse:1;
        unsigned int reserved:29;
    } _pdcFlags;
    double _constraintUnit;
    double _minValueAngle;
    double _maxValue;
    double _minValue;
    void *_proReserved1;
    void *_proReserved2;
    void *_proReserved3;
}

- (double)_valueForAngle:(double)arg1;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (id)_stringForPoint:(struct CGPoint)arg1;
- (void)stopTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3 mouseIsUp:(BOOL)arg4;
- (BOOL)startTrackingAt:(struct CGPoint)arg1 inView:(id)arg2;
- (BOOL)_shouldContinueTrackingAtPoint:(struct CGPoint)arg1;
- (void)setSnapToMouse:(BOOL)arg1;
- (void)setMinValueAngle:(double)arg1;
- (void)setMinValue:(double)arg1;
- (void)setMaxValue:(double)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)setConstraintUnit:(double)arg1;
- (double)_radiusToDimpleCenter;
- (double)_radiansForDegrees:(double)arg1;
- (double)_radius;
- (struct CGPoint)_perimeterPointForAngle:(double)arg1 withRadius:(double)arg2;
- (id)_pathForLineFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (id)_pathForCircleWithCenter:(struct CGPoint)arg1 andDiameter:(double)arg2;
- (double)minValue;
- (double)maxValue;
- (double)minValueAngle;
- (long long)_kThemeSize;
- (long long)_currentThemeStateInView:(id)arg1;
- (BOOL)isValidControlSize:(unsigned long long)arg1;
- (BOOL)_isContainedPoint:(struct CGPoint)arg1;
- (void)_init;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_drawDimpleInView:(id)arg1;
- (double)_drawingAngleValue;
- (double)_dimpleRadius;
- (double)_dimpleMargin;
- (id)_dialImage;
- (void)updateRenditionKey:(id)arg1 getFocus:(char *)arg2 userInfo:(id)arg3;
- (id)_baseFacet;
- (double)_degreesForRadians:(double)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (BOOL)continueTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3;
- (double)constraintUnit;
- (double)_constrained:(double)arg1;
- (void)_commonInit;
- (struct CGPoint)_centerPoint;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (struct CGSize)cellSize;
- (double)_angleValue;
- (double)_angleForPoint:(struct CGPoint)arg1;

@end

