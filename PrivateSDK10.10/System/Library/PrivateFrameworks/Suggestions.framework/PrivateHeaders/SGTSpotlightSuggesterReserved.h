/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableDictionary, NSString;

// Not exported
@interface SGTSpotlightSuggesterReserved : NSObject
{
    NSArray *attributeNames;
    NSString *baseQuery;
    struct dispatch_queue_s *queryQueue;
    long long queryID;
    struct __MDQuery *query;
    struct __MDQuery *warmingQuery;
    struct dispatch_source_s *warmingQueryTimer;
    NSArray *searchScope;
    NSArray *additionalAttributeNames;
    NSArray *sortingAttributeNames;
    NSMutableDictionary *shortNameToAttributes;
    struct dispatch_source_s *fallbackTimer;
    BOOL matchesFinderFilesOnly;
    BOOL matchesSupportFiles;
    BOOL runWarmingQuery;
}

- (void)finalize;
- (void)dealloc;

@end

