/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameCenterPrivateUIMac/GKPlayerDetailCollectionViewController.h>

@interface GKNonFriendDetailViewController : GKPlayerDetailCollectionViewController
{
    BOOL _profileWasShownFromRecommendations;
}

+ (Class)headerViewClass;
@property(nonatomic) BOOL profileWasShownFromRecommendations; // @synthesize profileWasShownFromRecommendations=_profileWasShownFromRecommendations;
- (void)updateSegmentMessages;
- (BOOL)shouldShowRemoveAction;
- (void)sendRequest:(id)arg1;
- (void)sendRequestTapped:(id)arg1;
- (void)handleActionButton:(long long)arg1;
- (void)report:(id)arg1;
- (void)configureReportFooter:(id)arg1;
- (void)configureDataSource;
- (void)setHeaderView:(id)arg1;
- (double)preferredHeaderHeight;

@end

