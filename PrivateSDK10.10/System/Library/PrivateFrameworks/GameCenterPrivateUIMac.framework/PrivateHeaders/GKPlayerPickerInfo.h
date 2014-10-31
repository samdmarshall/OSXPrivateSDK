/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class GKGameMatch, GKPlayer, NSAttributedString, NSDate;

@interface GKPlayerPickerInfo : NSObject
{
    BOOL _hasAchievement;
    BOOL _hasRank;
    BOOL _nearby;
    BOOL _canSelectPlayer;
    GKPlayer *_player;
    GKGameMatch *_gameMatch;
    NSAttributedString *_achievementString;
    NSAttributedString *_rankString;
    unsigned long long _selectionStatus;
    NSDate *_sortDate;
}

@property(retain, nonatomic) NSDate *sortDate; // @synthesize sortDate=_sortDate;
@property(readonly, nonatomic) BOOL canSelectPlayer; // @synthesize canSelectPlayer=_canSelectPlayer;
@property(readonly, nonatomic) unsigned long long selectionStatus; // @synthesize selectionStatus=_selectionStatus;
@property(nonatomic) BOOL nearby; // @synthesize nearby=_nearby;
@property(nonatomic) BOOL hasRank; // @synthesize hasRank=_hasRank;
@property(nonatomic) BOOL hasAchievement; // @synthesize hasAchievement=_hasAchievement;
@property(retain, nonatomic) NSAttributedString *rankString; // @synthesize rankString=_rankString;
@property(retain, nonatomic) NSAttributedString *achievementString; // @synthesize achievementString=_achievementString;
@property(retain, nonatomic) GKGameMatch *gameMatch; // @synthesize gameMatch=_gameMatch;
@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
- (void)_setSelectionStatus:(unsigned long long)arg1;
@property(readonly, nonatomic) BOOL playedGame;
- (void)prepareForLoad;
- (id)description;
- (void)dealloc;

@end

