/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol MBWebKitViewControllerDelegate <NSObject>

@optional
- (void)mbWebkitViewControllerDidFail:(id)arg1 error:(id)arg2;
- (void)mbWebkitViewControllerDidFinishLoading:(id)arg1;
- (void)mbWebkitViewControllerDidSucceed:(id)arg1;
- (void)mbWebkitViewControllerDidDismiss:(id)arg1 reason:(id)arg2;
- (void)mbWebkitViewControllerDidCancel:(id)arg1;
@end

