/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface CNVCardEncoding : NSObject
{
    NSString *_name;
    unsigned long long _stringEncoding;
}

+ (id)utf8Encoding;
+ (id)macRomanEncoding;
+ (id)isoLatin1Encoding;
+ (id)asciiEncoding;
+ (id)encodingWithName:(id)arg1 stringEncoding:(unsigned long long)arg2;
+ (id)preferredEncodingInUserDefaults;
+ (id)encodingsFromUserDefaults;
+ (id)addPreferredEncoding:(id)arg1 toEncodings:(id)arg2;
+ (id)standardEncodings;
@property(readonly) unsigned long long stringEncoding; // @synthesize stringEncoding=_stringEncoding;
@property(readonly) NSString *name; // @synthesize name=_name;
- (id)initWithName:(id)arg1 stringEncoding:(unsigned long long)arg2;

@end

