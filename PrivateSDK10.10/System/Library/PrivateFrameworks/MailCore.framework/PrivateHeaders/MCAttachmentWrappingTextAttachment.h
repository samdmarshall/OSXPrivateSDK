/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSTextAttachment.h"

@class MCAttachment;

@interface MCAttachmentWrappingTextAttachment : NSTextAttachment
{
    MCAttachment *_messageAttachment;
}

@property(readonly, nonatomic) MCAttachment *messageAttachment; // @synthesize messageAttachment=_messageAttachment;
- (void).cxx_destruct;
- (id)initWithFileWrapper:(id)arg1;
- (id)initWithAttachment:(id)arg1;

@end

