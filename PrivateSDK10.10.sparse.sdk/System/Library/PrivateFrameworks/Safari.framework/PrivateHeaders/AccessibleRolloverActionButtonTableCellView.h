/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Safari/RolloverActionButtonTableCellView.h>

// Not exported
@interface AccessibleRolloverActionButtonTableCellView : RolloverActionButtonTableCellView
{
    id <AccessibleRolloverActionButtonTableCellViewDelegate> _accessibilityDelegate;
}

@property(nonatomic) __weak id <AccessibleRolloverActionButtonTableCellViewDelegate> accessibilityDelegate; // @synthesize accessibilityDelegate=_accessibilityDelegate;
- (void).cxx_destruct;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;

@end

