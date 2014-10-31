/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@class NSLayoutConstraint, SOAdjustableLayoutView, SOFlexibleScrollView, SOTokenField;

@interface SORecipientBarView : NSView
{
    SOFlexibleScrollView *_recipientScrollView;
    SOTokenField *_recipientTokenField;
    SOAdjustableLayoutView *_recipientActionsView;
    NSView *_displayedRecipientActionsView;
    NSLayoutConstraint *_recipientActionsLeadingLock;
}

+ (BOOL)requiresConstraintBasedLayout;
@property(retain) NSLayoutConstraint *recipientActionsLeadingLock; // @synthesize recipientActionsLeadingLock=_recipientActionsLeadingLock;
@property(retain, nonatomic) NSView *displayedRecipientActionsView; // @synthesize displayedRecipientActionsView=_displayedRecipientActionsView;
@property(retain) SOAdjustableLayoutView *recipientActionsView; // @synthesize recipientActionsView=_recipientActionsView;
@property(retain) SOTokenField *recipientTokenField; // @synthesize recipientTokenField=_recipientTokenField;
@property(retain) SOFlexibleScrollView *recipientScrollView; // @synthesize recipientScrollView=_recipientScrollView;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_commonInit;
- (void)_preferredScrollerStyleDidChange;
- (void)_textViewChangedSelection:(id)arg1;

@end

