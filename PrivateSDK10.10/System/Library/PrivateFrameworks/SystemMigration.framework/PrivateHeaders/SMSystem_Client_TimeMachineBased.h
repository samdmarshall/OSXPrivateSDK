/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SystemMigration/SMSystem_Client.h>

@class NSDate, NSString;

@interface SMSystem_Client_TimeMachineBased : SMSystem_Client
{
    BOOL isLiteBackup;
    NSString *storageVolume;
    NSDate *backupCompletedDate;
    NSString *machineName;
}

+ (id)guiInterestedKeys;
+ (id)guiMonitorKeys;
@property(retain) NSString *machineName; // @synthesize machineName;
@property(retain) NSDate *backupCompletedDate; // @synthesize backupCompletedDate;
@property(retain) NSString *storageVolume; // @synthesize storageVolume;
@property BOOL isLiteBackup; // @synthesize isLiteBackup;
- (void).cxx_destruct;
- (id)volumeIconAccesibilityLabel;
- (id)displayState;
- (id)displayName;
- (long long)defaultUIRank;

@end

