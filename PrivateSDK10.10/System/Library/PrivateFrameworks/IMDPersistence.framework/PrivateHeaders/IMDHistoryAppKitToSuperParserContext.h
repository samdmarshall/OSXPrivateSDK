/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IMAttributedStringParserContext.h"

@class NSArray, NSColor, NSMutableArray, NSMutableAttributedString;

@interface IMDHistoryAppKitToSuperParserContext : IMAttributedStringParserContext
{
    NSMutableAttributedString *_superFormat;
    NSColor *_bodyBackgroundColor;
    NSColor *_bodyForegroundColor;
    long long _baseWritingDirection;
    BOOL _didAddBodyAttributes;
    NSMutableArray *_mutableFileTransferGUIDs;
    NSMutableArray *_attachmentDicts;
}

@property(readonly) NSMutableArray *mutableFileTransferGUIDs; // @synthesize mutableFileTransferGUIDs=_mutableFileTransferGUIDs;
@property(retain) NSMutableArray *attachmentDicts; // @synthesize attachmentDicts=_attachmentDicts;
@property(readonly) NSArray *fileTransferGUIDs; // @dynamic fileTransferGUIDs;
- (id)superFormatString;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange)arg3;
- (id)resultsForLogging;
- (id)name;
- (id)_attributesForAttachmentWithAttributes:(id)arg1;
- (void)dealloc;
- (id)initWithAttributedString:(id)arg1 baseWritingDirection:(long long)arg2 bodyBackgroundColor:(id)arg3 bodyForegroundColor:(id)arg4;

@end

