/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Safari/WBSParsecSearchResult.h>

@class MKMapItem, NSArray, NSData, NSString, WBSParsecSearchMapsResultExtraCompletionItem;

// Not exported
@interface WBSParsecSearchMapsResult : WBSParsecSearchResult
{
    MKMapItem *_mapItem;
    NSString *_mapsDataType;
    NSData *_mapsData;
    NSArray *_additionalMapItems;
    NSString *_mapsResultType;
    WBSParsecSearchMapsResultExtraCompletionItem *_extraCompletionItem;
}

@property(readonly, nonatomic) WBSParsecSearchMapsResultExtraCompletionItem *extraCompletionItem; // @synthesize extraCompletionItem=_extraCompletionItem;
@property(readonly, nonatomic) NSString *mapsResultType; // @synthesize mapsResultType=_mapsResultType;
@property(readonly, nonatomic) NSArray *additionalMapItems; // @synthesize additionalMapItems=_additionalMapItems;
@property(readonly, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(readonly, nonatomic) NSData *mapsData; // @synthesize mapsData=_mapsData;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

