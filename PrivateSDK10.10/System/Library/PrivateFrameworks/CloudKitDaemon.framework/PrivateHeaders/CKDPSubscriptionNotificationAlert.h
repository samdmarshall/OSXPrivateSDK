/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

// Not exported
@interface CKDPSubscriptionNotificationAlert : PBCodable <NSCopying>
{
    NSString *_actionLocKey;
    NSString *_launchImage;
    NSMutableArray *_localizedArguments;
    NSString *_localizedKey;
    NSString *_soundName;
    NSString *_text;
}

@property(retain, nonatomic) NSString *soundName; // @synthesize soundName=_soundName;
@property(retain, nonatomic) NSString *launchImage; // @synthesize launchImage=_launchImage;
@property(retain, nonatomic) NSString *actionLocKey; // @synthesize actionLocKey=_actionLocKey;
@property(retain, nonatomic) NSMutableArray *localizedArguments; // @synthesize localizedArguments=_localizedArguments;
@property(retain, nonatomic) NSString *localizedKey; // @synthesize localizedKey=_localizedKey;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasSoundName;
@property(readonly, nonatomic) BOOL hasLaunchImage;
@property(readonly, nonatomic) BOOL hasActionLocKey;
- (id)localizedArgumentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedArgumentsCount;
- (void)addLocalizedArguments:(id)arg1;
- (void)clearLocalizedArguments;
@property(readonly, nonatomic) BOOL hasLocalizedKey;
@property(readonly, nonatomic) BOOL hasText;

@end

