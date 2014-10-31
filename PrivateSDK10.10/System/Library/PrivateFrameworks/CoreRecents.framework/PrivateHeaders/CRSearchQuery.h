/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class NSArray, NSPredicate;

@interface CRSearchQuery : NSObject <NSSecureCoding>
{
    NSPredicate *_predicate;
    NSArray *_domains;
    unsigned long long _implicitGroupThreshold;
    unsigned long long _options;
    id _weightDecayer;
    id _comparator;
}

+ (id)rankedFrecencyComparatorWithPreferredSources:(SEL)arg1;
+ (id)frecencyComparatorForSearch:(SEL)arg1 preferredKinds:(id)arg2 sendingAddress:(id)arg3 queryOptions:(id)arg4;
+ (id)frecencyComparator;
+ (id)searchQueryForSearchTerm:(id)arg1 preferredKinds:(id)arg2 sendingAddress:(id)arg3 recentsDomain:(id)arg4;
+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) id comparator; // @synthesize comparator=_comparator;
@property(copy, nonatomic) id weightDecayer; // @synthesize weightDecayer=_weightDecayer;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) unsigned long long implicitGroupThreshold; // @synthesize implicitGroupThreshold=_implicitGroupThreshold;
@property(copy, nonatomic) NSArray *domains; // @synthesize domains=_domains;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

