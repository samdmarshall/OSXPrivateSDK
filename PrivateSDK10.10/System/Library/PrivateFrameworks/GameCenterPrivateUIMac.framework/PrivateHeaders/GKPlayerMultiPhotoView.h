/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSImageView.h"

@class NSArray, NSMutableDictionary;

@interface GKPlayerMultiPhotoView : NSImageView
{
    NSArray *_players;
    NSMutableDictionary *_photoImages;
}

@property(retain, nonatomic) NSMutableDictionary *photoImages; // @synthesize photoImages=_photoImages;
@property(retain, nonatomic) NSArray *players; // @synthesize players=_players;
- (void)refreshPhotos;
- (void)updateImage;
- (void)dealloc;

@end

