/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSNumber;

// Not exported
@interface ProfilePlugin : NSObject
{
    id <ProfileDomainPayloadPluginProtocol> _pluginObj;
    NSNumber *_pluginVers;
    unsigned long long _pluginFlags;
}

@property unsigned long long pluginFlags; // @synthesize pluginFlags=_pluginFlags;
@property(retain) NSNumber *pluginVers; // @synthesize pluginVers=_pluginVers;
@property(retain) id <ProfileDomainPayloadPluginProtocol> pluginObj; // @synthesize pluginObj=_pluginObj;

@end

