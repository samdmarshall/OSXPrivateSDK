/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol ReadingListTableViewControllerDelegate <NSObject>
- (void)displayedItemsDidChange:(id)arg1;
- (id)tableViewController:(id)arg1 accessibilityDescriptionForItem:(id)arg2;
- (void)tableViewController:(id)arg1 didActivateItem:(id)arg2;
- (id)tableViewController:(id)arg1 menuForEvent:(id)arg2 withExistingMenu:(id)arg3 andItem:(id)arg4;
- (void)tableViewController:(id)arg1 receivedNavigationActionWithPolicy:(long long)arg2 forItem:(id)arg3;

@optional
- (void)tableViewDidMoveToWindow:(id)arg1;
- (void)tableViewController:(id)arg1 receivedRemoveActionForItem:(id)arg2;
@end

