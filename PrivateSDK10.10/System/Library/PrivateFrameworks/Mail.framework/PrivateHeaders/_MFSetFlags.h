/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableArray;

@interface _MFSetFlags : NSObject
{
    NSMutableArray *_messages;
    NSDictionary *_flagsToSet;
}

@property(readonly, copy, nonatomic) NSDictionary *flagsToSet; // @synthesize flagsToSet=_flagsToSet;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)addMessages:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *messages;
- (id)init;
- (id)initWithFlagsDictionary:(id)arg1 messages:(id)arg2;

@end

