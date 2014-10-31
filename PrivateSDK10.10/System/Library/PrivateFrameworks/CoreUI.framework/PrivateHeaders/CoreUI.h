/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface CoreUI : NSObject
{
}

+ (BOOL)isSharedCacheSizeTestEnabled;
+ (id)versionCreditsString;
+ (void)installForCustomLook:(id)arg1;
+ (void)_setCustomLookDelegate:(id)arg1;
+ (id)_customLookDelegate;
+ (void)install;
+ (BOOL)_isInIBCocoaSimulator;
+ (void)_determineCompatibilityMode;
+ (id)defaultsDomainName;
+ (void)setBool:(BOOL)arg1 forDefaultsKey:(id)arg2;
+ (void)setValue:(id)arg1 forDefaultsKey:(id)arg2;
+ (long long)integerForDefaultsKey:(id)arg1;
+ (id)stringForDefaultsKey:(id)arg1;
+ (BOOL)boolForDefaultsKey:(id)arg1;
+ (BOOL)defaultExistsForKey:(id)arg1;
+ (long long)lookCongruencyForObject:(id)arg1;
+ (struct _themelook *)currentSystemThemeLook;
+ (void)changeToLook:(struct _themelook *)arg1;
+ (void)_invalidateVisibleWindows;
+ (BOOL)_isCurrentLook:(struct _themelook *)arg1;
+ (void)_setCurrentSystemThemeLook:(struct _themelook *)arg1;
+ (void)_updateMenuBarDrawingStyleForLook:(struct _themelook *)arg1;
+ (BOOL)_hasDarkMenuBarForLook:(struct _themelook *)arg1;
+ (void)_setThemeLookDelegate:(id)arg1;
+ (id)_themeLookDelegate;
+ (long long)maximumLookGradation;
+ (long long)currentLookGradation;
+ (void)changeToLookGradation:(long long)arg1;
+ (void)_changeToLookGradation:(long long)arg1 forceRedraw:(BOOL)arg2;

@end

