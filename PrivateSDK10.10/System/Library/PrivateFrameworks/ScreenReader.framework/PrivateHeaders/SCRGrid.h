/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ScreenReader/SCRList.h>

// Not exported
@interface SCRGrid : SCRList
{
}

- (BOOL)shouldSynchVOCursorToSelectionChange;
- (void)addItemDescriptionToRequest:(id)arg1;
- (BOOL)_moveRightWithEvent:(id)arg1 request:(id)arg2 allowFullWrapping:(BOOL)arg3;
- (BOOL)_moveLeftWithEvent:(id)arg1 request:(id)arg2 allowFullWrapping:(BOOL)arg3;
- (BOOL)_moveDownWithEvent:(id)arg1 request:(id)arg2 allowFullWrapping:(BOOL)arg3;
- (BOOL)_moveUpWithEvent:(id)arg1 request:(id)arg2 allowFullWrapping:(BOOL)arg3;
- (BOOL)allowFocusThroughSingleChild;
- (void)updateOrientation;
- (unsigned long long)_columnCount;
- (unsigned long long)_rowCount;

@end

