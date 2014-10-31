/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OSInstaller/OSIInstallQueueElement.h>

@class OSIReapableSpaceChecker;

@interface OSIReapPreviousSystem : OSIInstallQueueElement
{
    OSIReapableSpaceChecker *_checker;
    unsigned long long _spaceNeededToInstall;
    double _timeToComplete;
    double _timeSoFar;
}

- (void)_recreateFSFPath;
- (void)_pullFakeProgressTimer:(id)arg1;
- (void)cleanupPartialInstall;
- (void)_saveReaperPaths;
- (BOOL)createRecoveredItems;
- (id)_pathsToBackup;
- (void)_preserveLionCoreLocationPref;
- (BOOL)_archiveLogs;
- (double)estimatedTimeToComplete;
- (id)operationName;
- (BOOL)runReturningError:(id *)arg1;
- (id)initWithOptions:(id)arg1 requiredSpaceToInstall:(unsigned long long)arg2;

@end

