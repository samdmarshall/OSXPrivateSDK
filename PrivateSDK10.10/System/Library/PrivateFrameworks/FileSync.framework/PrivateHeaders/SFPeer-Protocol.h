/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@class NSArray, NSSet, NSString;

@protocol SFPeer
@property(copy) NSSet *inclusionList;
@property(copy) NSSet *exclusionList;
@property(readonly, copy) NSString *storeID;
@property(readonly, copy) NSString *rootPath;
@property(readonly, copy) NSString *peerRef;
@property BOOL nextSyncReadOnly;
@property(copy) NSString *name;
@property(readonly) BOOL isRemoteHomeDir;
@property(readonly) BOOL isRemote;
@property(copy) NSArray *inclusionSets;
@property(copy) NSArray *exclusionSets;
@property(readonly, copy) NSString *descriptionDebug;
@property BOOL abortOnWriteToReadOnly;

@optional
- (oneway void)printStateTree:(int)arg1 toPath:(id)arg2;
@end

