/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Mail/MFMessageSortingValue.h>

@class NSString;

@interface _MFMessageSortingValueSubject : MFMessageSortingValue
{
    unsigned char _subjectPrefixLength;
    NSString *_subject;
}

@property(nonatomic) unsigned char subjectPrefixLength; // @synthesize subjectPrefixLength=_subjectPrefixLength;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
- (id)description;
- (void)dealloc;

@end

