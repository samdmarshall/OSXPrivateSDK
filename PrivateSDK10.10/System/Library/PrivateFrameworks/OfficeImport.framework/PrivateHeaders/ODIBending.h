/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface ODIBending : NSObject
{
    float mSpaceWidth;
    float mSpaceHeight;
    BOOL mWithArrows;
    float mRectHeight;
    unsigned int mMaxNodeCount;
    unsigned int mMaxColumnCount;
}

+ (BOOL)mapIdentifier:(id)arg1 state:(id)arg2;
+ (unsigned int)mapLogicalBoundsWithShapeSize:(struct CGSize)arg1 spaceSize:(struct CGSize)arg2 maxNodeCount:(unsigned int)arg3 maxColumnCount:(unsigned int)arg4 state:(id)arg5;
- (void)mapWithState:(id)arg1;
- (void)setMaxColumnCount:(unsigned int)arg1;
- (void)setMaxNodeCount:(unsigned int)arg1;
- (void)setRectHeight:(float)arg1;
- (id)initWithArrows:(BOOL)arg1;

@end

