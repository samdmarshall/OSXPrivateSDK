/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, NSURL;

@interface EWSAutodiscoverResponse : NSObject
{
    NSString *_displayName;
    NSString *_emailAddress;
    NSString *_user;
    NSURL *_internalURL;
    NSURL *_externalURL;
    NSURL *_autodiscoverURL;
}

@property(readonly, nonatomic) NSURL *autodiscoverURL; // @synthesize autodiscoverURL=_autodiscoverURL;
@property(readonly, nonatomic) NSURL *externalURL; // @synthesize externalURL=_externalURL;
@property(readonly, nonatomic) NSURL *internalURL; // @synthesize internalURL=_internalURL;
@property(copy, nonatomic) NSString *user; // @synthesize user=_user;
@property(copy, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void)dealloc;
- (id)description;
- (id)initWithDisplayName:(id)arg1 internalURL:(id)arg2 externalURL:(id)arg3 autodiscoverURL:(id)arg4;

@end

