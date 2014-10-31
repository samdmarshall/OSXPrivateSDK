/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData;

@interface CoreWiFiPMKID : NSObject
{
    NSData *pmk;
    NSData *spa;
    NSData *aa;
    NSData *pmkid;
    unsigned long long timeCreated;
    unsigned long long timeLifetime;
    unsigned long long timeToExpire;
}

+ (BOOL)clearPMKs:(id)arg1 error:(id *)arg2;
+ (BOOL)clearPMKs:(id *)arg1;
+ (id)queryCache:(id *)arg1;
@property(nonatomic) unsigned long long timeToExpire; // @synthesize timeToExpire;
@property(nonatomic) unsigned long long timeLifetime; // @synthesize timeLifetime;
@property(nonatomic) unsigned long long timeCreated; // @synthesize timeCreated;
@property(retain, nonatomic) NSData *pmkid; // @synthesize pmkid;
@property(retain, nonatomic) NSData *aa; // @synthesize aa;
@property(retain, nonatomic) NSData *spa; // @synthesize spa;
@property(retain, nonatomic) NSData *pmk; // @synthesize pmk;
- (id)skeleton;
- (id)description;
- (void)dealloc;
- (id)initWithSkeleton:(id)arg1;
- (id)initWithPMK:(id)arg1 withAA:(id)arg2 withSPA:(id)arg3 withLifetime:(id)arg4;
- (id)init;

@end

