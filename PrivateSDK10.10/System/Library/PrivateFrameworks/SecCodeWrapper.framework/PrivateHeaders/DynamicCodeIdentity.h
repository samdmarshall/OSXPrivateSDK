/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SecCodeWrapper/CodeIdentity.h>

@interface DynamicCodeIdentity : CodeIdentity
{
    int _pid;
}

+ (id)dynamicCodeIdentityForProcessIdentifier:(int)arg1 error:(id *)arg2;
+ (id)dynamicCodeIdentityForProcessIdentifier:(int)arg1;
+ (id)signingRoot;
+ (id)currentApplication;
- (id)description;
- (id)staticCodeIdentity;
- (id)guestWithProcessIdentifier:(int)arg1 error:(id *)arg2;
- (id)guestWithProcessIdentifier:(int)arg1;
- (id)initWithSecCodeRef:(struct __SecCode *)arg1;
- (id)initWithSecCodeRef:(struct __SecCode *)arg1 processIdentifier:(int)arg2;
- (BOOL)validateWithFlags:(unsigned int)arg1 additionalRequirement:(id)arg2 error:(id *)arg3;

@end

