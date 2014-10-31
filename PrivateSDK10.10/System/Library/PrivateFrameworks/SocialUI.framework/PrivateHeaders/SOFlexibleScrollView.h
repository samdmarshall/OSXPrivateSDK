/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSScrollView.h"

@interface SOFlexibleScrollView : NSScrollView
{
    struct CGSize _lastRecordedDocumentSize;
    BOOL _hasHorizontalIntrinsicSize;
    BOOL _hasVerticalIntrinsicSize;
}

+ (BOOL)requiresConstraintBasedLayout;
@property(nonatomic) BOOL hasVerticalIntrinsicSize; // @synthesize hasVerticalIntrinsicSize=_hasVerticalIntrinsicSize;
@property(nonatomic) BOOL hasHorizontalIntrinsicSize; // @synthesize hasHorizontalIntrinsicSize=_hasHorizontalIntrinsicSize;
@property(nonatomic) struct CGSize lastRecordedDocumentSize; // @synthesize lastRecordedDocumentSize=_lastRecordedDocumentSize;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)reflectScrolledClipView:(id)arg1;
- (void)setDocumentView:(id)arg1;

@end

