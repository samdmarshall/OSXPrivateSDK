/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import <GameCenterFoundation/GKCache-Protocol.h>

@class GKLinkedList, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface GKThreadsafeCache : NSObject <GKCache>
{
    NSMutableDictionary *_dictionary;
    NSMutableDictionary *_missingEntryQueues;
    GKLinkedList *_cacheList;
    unsigned long long _maxCount;
    unsigned long long _count;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

@property(nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(nonatomic) unsigned long long maxCount; // @synthesize maxCount=_maxCount;
@property(retain, nonatomic) GKLinkedList *cacheList; // @synthesize cacheList=_cacheList;
@property(retain, nonatomic) NSMutableDictionary *missingEntryQueues; // @synthesize missingEntryQueues=_missingEntryQueues;
@property(retain, nonatomic) NSMutableDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1 withMissingHandler:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)internalSetObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)internalObjectForKey:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 maxCount:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

