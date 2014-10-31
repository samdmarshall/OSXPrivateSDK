/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameCenterPrivateUIMac/NSCollectionReusableView.h>

@class LocalPlayerHeaderView, LocalPlayerSignInView, NSTabView;

@interface GKMeHeaderView : NSCollectionReusableView
{
    NSTabView *_tabView;
    LocalPlayerHeaderView *_headerView;
    LocalPlayerSignInView *_signinView;
}

@property(nonatomic) LocalPlayerSignInView *signinView; // @synthesize signinView=_signinView;
@property(nonatomic) LocalPlayerHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) NSTabView *tabView; // @synthesize tabView=_tabView;

@end

