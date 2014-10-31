/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Install/IFInstallQueueElement.h>

@class IFInstallJob, IFInstallPlan, IFInstallQueue, IFPackageController, IFUpgradeHints, NSConditionLock, NSDictionary, NSMutableSet, NSString;

@interface IFInstallElement : IFInstallQueueElement
{
    IFInstallPlan *_installPlan;
    IFPackageController *_pkgController;
    NSString *_pkgTitle;
    IFInstallQueue *_installQ;
    NSMutableSet *_secEquivPaths;
    BOOL _isUpgrade;
    NSDictionary *_installState;
    IFInstallJob *_installJob;
    BOOL _hasDeferredPaths;
    BOOL _deferredPathsMustRestart;
    NSConditionLock *_debugLock;
    BOOL _debugStep;
    IFUpgradeHints *_hints;
    NSString *_lastAccessedHintRegex;
}

- (long long)run;
- (void)setDeferredPathsMustRestart:(BOOL)arg1;
- (void)setHasDeferredPaths:(BOOL)arg1;
- (BOOL)deferredPathsMustRestart;
- (BOOL)hasDeferredPaths;
- (id)deferredPath;
- (id)patchRootPath;
- (id)installPlanPath;
- (id)deleteFilePath;
- (id)workingDirectory;
- (id)targetVolume;
- (id)packageController;
- (id)secEquivPaths;
- (void)addSecEquivPath:(id)arg1;
- (void)addLSPath:(id)arg1;
- (id)installPlan;
- (BOOL)doingUpgrade;
- (id)sessionID;
- (id)logDescription;
- (id)description;
- (void)dealloc;
- (id)initWithPackageController:(id)arg1 withSessionState:(id)arg2 withInstallJob:(id)arg3 withInstallState:(id)arg4;
- (void)setInstallState:(id)arg1;
- (void)readHints;
- (id)buildInstallQueue;
- (void)stepInto;
- (void)stepOver;
- (void)pause;
- (void)runContinue;
- (id)queue;
- (unsigned int)hintFlagsForPath:(id)arg1 withPackage:(id)arg2;
- (id)lastAccessedHintRegex;

@end

