/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OADColor.h>

// Not exported
@interface OADAdjustedColor : OADColor
{
    OADColor *mBaseColor;
    int mAdjustmentType;
    unsigned char mAdjustmentParam;
    BOOL mInvert;
    BOOL mInvert128;
    BOOL mGray;
}

- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (BOOL)gray;
- (BOOL)invert128;
- (BOOL)invert;
- (unsigned char)adjustmentParam;
- (int)adjustmentType;
- (id)baseColor;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBaseColor:(id)arg1 adjustmentType:(int)arg2 adjustmentParam:(unsigned char)arg3 invert:(BOOL)arg4 invert128:(BOOL)arg5 gray:(BOOL)arg6;

@end

