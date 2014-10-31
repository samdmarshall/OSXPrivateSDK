/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iLifeMediaBrowser/ILMediaManager.h>

@class NSLock, NSMutableArray, NSString;

@interface ILFolderMediaManager : ILMediaManager
{
    NSMutableArray *_folderPaths;
    NSLock *_folderPathsLock;
    NSString *_currentLoadPath;
    BOOL _shouldAbortCurrentLoad;
    id _reserved4;
    id _reserved5;
    id _reserved6;
}

+ (id)sharedMediaManager;
- (void)removeAllFolderPaths;
- (void)removeFolderPaths:(id)arg1;
- (void)removeFolderPath:(id)arg1;
- (void)addFolderPath:(id)arg1;
- (void)addFolderPaths:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)_init;

@end

