/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface IFDTargetController : NSObject
{
    struct IFDTargetController_Private *_private;
}

+ (void)initialize;
+ (void)_handleTargetRequests;
- (id)initWithInstallController:(id)arg1;
- (id)targetForSubPath:(id)arg1 ofTarget:(id)arg2;
- (BOOL)validSubTargetLocationPath:(id)arg1 forTarget:(id)arg2;
- (id)defaultSubTargetPath;
- (BOOL)allowsSubTargets;
- (id)volumeTargetAtPath:(id)arg1;
- (id)volumeTargets;
- (BOOL)isAnticipatingMoreVolumes;
- (BOOL)waitUntilTargetFoundAtPath:(id)arg1;
- (void)waitUntilTargetsFound;
- (BOOL)waitUntilTargetsProcessed;
- (BOOL)waitUntilTargetProcessed:(id)arg1;
- (BOOL)processTargetSync:(id)arg1;
- (id)dummyBlankTarget;
- (id)rootVolumeTarget;
- (BOOL)stillProcessingTargets;
- (void)setProcessRootVolumeOnly:(BOOL)arg1;
- (void)setProcessingEnabled:(BOOL)arg1;
- (id)distribution;
- (id)installController;
- (void)dealloc;
- (int)enabledInstallDomains;
- (int)availableInstallDomains;
- (id)targetForDomain:(int)arg1;
- (id)_targetsForDisk:(id)arg1;
- (void)_processWholeDiskForIncompatibility:(id)arg1;
- (void)_gatherSystemVersionOnTarget:(id)arg1;
- (void)_cacheReceiptInfoForTarget:(id)arg1;
- (BOOL)_performVolumeTargetCheck:(id)arg1 withCustomizationController:(id)arg2;
- (void)_processVolumeTarget:(id)arg1;
- (void)_propagateStatusToAlternateLocations:(id)arg1;
- (void)_noLongerAnticipatingVolumes:(id)arg1;
- (void)_volumeDisappeared:(id)arg1;
- (void)_volumeChanged:(id)arg1;
- (void)_volumeAppeared:(id)arg1;
- (void)_processQueue;
- (void)_processInitialDisks;
- (void)_setVolumeTarget:(id)arg1 forIdentifier:(id)arg2;
- (id)_getVolumeTarget:(id)arg1;

@end

