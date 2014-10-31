/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class NSString, NSURL;

// Not exported
@interface ImportedBrowserCredential : NSObject <NSSecureCoding>
{
    NSString *_user;
    NSString *_password;
    NSURL *_url;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, copy, nonatomic) NSString *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)encryptedURLCredentialWithPersistence:(unsigned long long)arg1;
- (id)urlCredentialWithPersistence:(unsigned long long)arg1;
- (id)initWithUser:(id)arg1 password:(id)arg2 url:(id)arg3;

@end

