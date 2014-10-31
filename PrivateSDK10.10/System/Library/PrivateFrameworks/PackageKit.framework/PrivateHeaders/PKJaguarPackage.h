/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PackageKit/PKPackage.h>

@class NSBundle;

@interface PKJaguarPackage : PKPackage
{
    NSBundle *_bundle;
}

+ (BOOL)_isArchiveSupported:(id)arg1;
+ (id)_payloadForPackagePath:(id)arg1;
+ (BOOL)canInitWithURL:(id)arg1;
- (id)_parseHintsFile:(id)arg1;
- (id)payloadExtractorWithDestination:(id)arg1 externalRoot:(id)arg2 error:(id *)arg3;
- (id)restrictedRootManifestData;
- (id)BOMData;
- (id)_resourceRelativePathForScript:(id)arg1;
- (id)_postupgradeScriptPath;
- (id)_preupgradeScriptPath;
- (id)_postflightScriptPath;
- (id)_preflightScriptPath;
- (id)_scriptsDirectory;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

@end

