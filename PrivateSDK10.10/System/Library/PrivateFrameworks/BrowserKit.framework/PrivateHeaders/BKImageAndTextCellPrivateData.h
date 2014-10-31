/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray;

// Not exported
@interface BKImageAndTextCellPrivateData : NSObject <NSCopying>
{
    NSArray *_badgeDescriptions;
    NSArray *_badges;
    NSDictionary *_badgeFacets;
    NSDictionary *_badgeRenditionKeys;
    NSMutableArray *_badgeCells;
    BOOL _rolloverState;
}

@property BOOL rolloverState; // @synthesize rolloverState=_rolloverState;
@property(retain) NSMutableArray *badgeCells; // @synthesize badgeCells=_badgeCells;
@property(retain) NSDictionary *badgeRenditionKeys; // @synthesize badgeRenditionKeys=_badgeRenditionKeys;
@property(retain) NSDictionary *badgeFacets; // @synthesize badgeFacets=_badgeFacets;
@property(retain) NSArray *badges; // @synthesize badges=_badges;
@property(retain) NSArray *badgeDescriptions; // @synthesize badgeDescriptions=_badgeDescriptions;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

