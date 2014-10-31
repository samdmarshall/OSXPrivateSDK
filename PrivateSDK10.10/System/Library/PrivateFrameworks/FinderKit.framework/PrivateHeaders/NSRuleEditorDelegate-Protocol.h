/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol NSRuleEditorDelegate <NSObject>
- (id)ruleEditor:(id)arg1 displayValueForCriterion:(id)arg2 inRow:(long long)arg3;
- (id)ruleEditor:(id)arg1 child:(long long)arg2 forCriterion:(id)arg3 withRowType:(unsigned long long)arg4;
- (long long)ruleEditor:(id)arg1 numberOfChildrenForCriterion:(id)arg2 withRowType:(unsigned long long)arg3;

@optional
- (void)ruleEditorRowsDidChange:(id)arg1;
- (id)ruleEditor:(id)arg1 predicatePartsForCriterion:(id)arg2 withDisplayValue:(id)arg3 inRow:(long long)arg4;
@end

