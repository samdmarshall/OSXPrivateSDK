/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSString.h"

@interface NSString (BRCCryptographicAdditions)
+ (id)brc_hexadecimalStringWithBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (id)brc_SHA1WithSalt:(id)arg1;
- (id)brc_SHA256;
@end

