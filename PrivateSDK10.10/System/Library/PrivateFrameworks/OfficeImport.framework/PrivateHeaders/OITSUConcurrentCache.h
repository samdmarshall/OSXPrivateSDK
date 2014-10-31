/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OITSUCache.h>

@class OITSUReadWriteQueue;

// Not exported
@interface OITSUConcurrentCache : OITSUCache
{
    OITSUReadWriteQueue *mReadWriteQueue;
}

@property(readonly, nonatomic) OITSUReadWriteQueue *readWriteQueue; // @synthesize readWriteQueue=mReadWriteQueue;
- (id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2;
- (void)addEntriesFromDictionary:(id)arg1;
- (BOOL)hasFlushableContent;
- (unsigned long long)count;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1 andWait:(BOOL)arg2;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)unload;
- (void)dealloc;
- (id)initWithName:(id)arg1;

@end

