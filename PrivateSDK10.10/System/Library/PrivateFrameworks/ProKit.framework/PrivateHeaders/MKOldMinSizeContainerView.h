/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@class MKOldViewModule;

// Not exported
@interface MKOldMinSizeContainerView : NSView
{
    MKOldViewModule *_containedModule;
}

- (struct CGSize)maxSize;
- (struct CGSize)minSize;
- (void)setFrameSize:(struct CGSize)arg1;
- (BOOL)isFlipped;
- (BOOL)autoresizesSubviews;
- (void)setAutoresizesSubviews:(BOOL)arg1;
- (void)setContainedModule:(id)arg1;
- (id)containedModule;
- (id)initWithFrame:(struct CGRect)arg1;

@end

