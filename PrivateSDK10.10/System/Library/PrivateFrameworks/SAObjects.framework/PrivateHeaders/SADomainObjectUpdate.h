/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SAObjects/SABaseClientBoundCommand.h>

#import "SADomainObjectCommand-Protocol.h"

@class NSString, SADomainObject;

@interface SADomainObjectUpdate : SABaseClientBoundCommand <SADomainObjectCommand>
{
}

+ (id)domainObjectUpdateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)domainObjectUpdate;
- (BOOL)requiresResponse;
@property(retain, nonatomic) SADomainObject *setFields;
@property(retain, nonatomic) SADomainObject *removeFields;
@property(retain, nonatomic) SADomainObject *identifier;
@property(retain, nonatomic) SADomainObject *addFields;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

