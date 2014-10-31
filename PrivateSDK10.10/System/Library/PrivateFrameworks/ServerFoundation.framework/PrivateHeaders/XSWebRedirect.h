/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, NSURL;

@interface XSWebRedirect : NSObject <NSCoding, NSCopying>
{
    long long _matchType;
    NSString *_status;
    NSString *_urlPathOrRegularExpression;
    NSURL *_destinationURL;
}

@property(retain) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(retain) NSString *urlPathOrRegularExpression; // @synthesize urlPathOrRegularExpression=_urlPathOrRegularExpression;
@property(retain) NSString *status; // @synthesize status=_status;
@property(setter=setMatchType:) long long matchType; // @synthesize matchType=_matchType;
- (id)settings;
- (id)initWithSettings:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

