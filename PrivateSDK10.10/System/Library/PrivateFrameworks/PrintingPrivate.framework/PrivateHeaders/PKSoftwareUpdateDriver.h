/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PrintingPrivate/PKDriver.h>

@class NSArray, NSDictionary, PMXPCSupport;

@interface PKSoftwareUpdateDriver : PKDriver
{
    PMXPCSupport *softwareUpdateSupport;
    NSDictionary *suProperties;
}

+ (id)softwareUpdateDriverWithPrinter:(id)arg1 properties:(id)arg2;
+ (BOOL)softwareUpdateAvailableForPPD:(struct ppd_file_s *)arg1 matching:(id *)arg2 properties:(id *)arg3;
+ (BOOL)softwareUpdateAvailableForPPDFile:(id)arg1 matching:(id *)arg2 properties:(id *)arg3;
+ (BOOL)softwareUpdateAvailableFor:(id)arg1 properties:(id *)arg2;
@property(retain) NSDictionary *suProperties; // @synthesize suProperties;
@property(retain) PMXPCSupport *softwareUpdateSupport; // @synthesize softwareUpdateSupport;
- (BOOL)cancel;
- (id)ppdForPrinter:(id)arg1 selection:(BOOL)arg2 error:(id *)arg3;
- (id)originalDeviceID;
- (void)setDelegate:(id)arg1;
- (unsigned long long)kind;
@property(readonly) BOOL isCacheCurrent; // @dynamic isCacheCurrent;
@property(readonly) BOOL hasConflicts; // @dynamic hasConflicts;
@property(readonly) NSArray *conflicts; // @dynamic conflicts;
- (void)dealloc;

@end

