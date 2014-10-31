/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Parsec/PRSCardSection.h>

#import "NSCoding-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSArray;

@interface PRSTrailersCardSection : PRSCardSection <NSCoding, NSSecureCoding>
{
    NSArray *_trailers;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *trailers; // @synthesize trailers=_trailers;
- (void).cxx_destruct;
- (long long)type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 dict:(id)arg2;
- (id)initWithTitle:(id)arg1 trailers:(id)arg2;

@end

