/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface ISDialogTextField : NSObject
{
    long long _keyboardType;
    BOOL _secure;
    NSString *_title;
    NSString *_value;
}

+ (id)textFieldWithTitle:(id)arg1;
@property(retain) NSString *value; // @synthesize value=_value;
@property(retain) NSString *title; // @synthesize title=_title;
@property(getter=isSecure) BOOL secure; // @synthesize secure=_secure;
@property long long keyboardType; // @synthesize keyboardType=_keyboardType;
- (void).cxx_destruct;

@end

