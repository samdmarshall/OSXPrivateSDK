/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarPersistence/CalDAVEntityQueueableOperation.h>

#import "CoreDAVTaskGroupDelegate-Protocol.h"

@class CALEntity, NSMutableDictionary, NSMutableSet, NSString;

@interface CalDAVUploadDropBoxFileQueueableOperation : CalDAVEntityQueueableOperation <CoreDAVTaskGroupDelegate>
{
    NSString *_attachmentName;
    NSString *_dropBoxPath;
    CALEntity *_masterEntity;
    NSMutableSet *_attendeePrincipalURLs;
    NSMutableDictionary *_attachments;
    NSMutableDictionary *_contentTypes;
}

@property(retain) NSMutableDictionary *contentTypes; // @synthesize contentTypes=_contentTypes;
@property(retain) NSMutableDictionary *attachments; // @synthesize attachments=_attachments;
@property(retain) NSMutableSet *attendeePrincipalURLs; // @synthesize attendeePrincipalURLs=_attendeePrincipalURLs;
@property(retain) CALEntity *masterEntity; // @synthesize masterEntity=_masterEntity;
@property(retain) NSString *attachmentName; // @synthesize attachmentName=_attachmentName;
@property(retain) NSString *dropBoxPath; // @synthesize dropBoxPath=_dropBoxPath;
- (id)readableDescription;
- (void)abortOperation;
- (void)performOperation;
- (void)taskGroup:(id)arg1 didFinishWithError:(id)arg2;
- (void)_addDetailsForAttachmentWithFilename:(id)arg1;
- (id)_fileNamesToUpload;
- (void)_updateAttachments;
- (id)_serverURLForPath:(id)arg1;
- (void)_cacheEtag:(id)arg1 filename:(id)arg2;
- (id)_buildCustomErrorFromError:(id)arg1 withStatusCode:(int)arg2 dataLength:(id)arg3;
- (id)_managedItem;
- (void)dealloc;
- (id)initWithChangeRequest:(id)arg1 attachmentName:(id)arg2 entity:(id)arg3 fromSource:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

