/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SystemMigration/SMViewController.h>

@class NSArrayController, NSCollectionView, NSProgressIndicator, NSString, NSTextField, SMSystem_Daemon_AutoLoader;

@interface SMRecommendationViewController : SMViewController
{
    BOOL _discloseRecommendations;
    SMSystem_Daemon_AutoLoader *_system;
    NSProgressIndicator *_progressBar;
    NSTextField *_statusMessageField;
    NSTextField *_timeRemainingField;
    NSCollectionView *_recommendationCollectionView;
    NSArrayController *_recommendationsArrayController;
}

+ (id)keyPathsForValuesAffectingInstructionText;
+ (id)keyPathsForValuesAffectingHasRecommendations;
@property BOOL discloseRecommendations; // @synthesize discloseRecommendations=_discloseRecommendations;
@property NSArrayController *recommendationsArrayController; // @synthesize recommendationsArrayController=_recommendationsArrayController;
@property NSCollectionView *recommendationCollectionView; // @synthesize recommendationCollectionView=_recommendationCollectionView;
@property NSTextField *timeRemainingField; // @synthesize timeRemainingField=_timeRemainingField;
@property NSTextField *statusMessageField; // @synthesize statusMessageField=_statusMessageField;
@property NSProgressIndicator *progressBar; // @synthesize progressBar=_progressBar;
@property(retain) SMSystem_Daemon_AutoLoader *system; // @synthesize system=_system;
- (void).cxx_destruct;
@property(readonly) NSString *instructionText;
- (id)typeOfDongleNeeded:(unsigned long long)arg1;
@property(readonly) BOOL hasRecommendations;
- (void)awakeFromNib;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

