/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iLifeMediaBrowser/ILMediaManager.h>

@interface ILClipboardMediaManager : ILMediaManager
{
}

+ (void)releaseSharedClipboardManager;
+ (id)sharedClipboardManager;
+ (id)clipboardPlugin;
- (void)readClipboardFromDisk;
- (void)writeClipboardToDisk;
- (id)createDefaultClipboardName;
- (id)performLoadData;
- (unsigned long long)mediaTypesSupported;
- (void)contextualMenuRemoveMediaObject:(id)arg1;
- (void)contextualMenuRemoveClipboard:(id)arg1;
- (id)contextMenuForMediaGroup:(id)arg1;
- (id)contextMenuForMediaObject:(id)arg1 inMediaGroup:(id)arg2;
- (void)renameClipboard:(id)arg1 toName:(id)arg2;
- (void)refreshClipboard:(id)arg1;
- (void)removeMediaObject:(id)arg1 fromClipboard:(id)arg2;
- (void)removeClipboard:(id)arg1;
- (id)createMediaObjectsForPaths:(id)arg1;
- (void)changeNameOfClipboard:(id)arg1 to:(id)arg2;
- (void)createClipboardWithFilePaths:(id)arg1;
- (void)addFilePaths:(id)arg1 toMediaGroup:(id)arg2;
- (void)createClipboardWithMediaObjects:(id)arg1;
- (id)createClipboard;
- (id)bundleIdentifier;
- (id)rootMediaGroupIcon;
- (id)rootMediaGroupTitle;
- (id)init;

@end

