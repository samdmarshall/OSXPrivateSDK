/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Parsec/PRSFeedback.h>

@class NSString;

@interface PRSEngagementFeedback : PRSFeedback
{
    NSString *_local_result;
    NSString *_fbr;
    NSString *_parsec_result;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *parsec_result; // @synthesize parsec_result=_parsec_result;
@property(retain, nonatomic) NSString *fbr; // @synthesize fbr=_fbr;
@property(retain, nonatomic) NSString *local_result; // @synthesize local_result=_local_result;
- (void).cxx_destruct;
- (void)validate;
- (id)plist;
- (id)type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInput:(id)arg1 timestamp:(long long)arg2;

@end

