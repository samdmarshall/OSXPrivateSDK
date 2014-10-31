/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudDocsDaemon/BRCOperation.h>

#import "BRCOperationSubclass-Protocol.h"

@class BRCBatch, BRCOperationMultiplexer, NSString;

// Not exported
@interface BRCMultiplexableOperation : BRCOperation <BRCOperationSubclass>
{
    BRCOperationMultiplexer *_multiplexer;
    BOOL _autoRetry;
    BOOL _hasSentCompletion;
    id _progressBlock;
    BRCBatch *_batch;
    unsigned long long _size;
    double _progress;
}

@property(nonatomic) BOOL hasSentCompletion; // @synthesize hasSentCompletion=_hasSentCompletion;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(nonatomic) BOOL autoRetry; // @synthesize autoRetry=_autoRetry;
@property(retain, nonatomic) BRCBatch *batch; // @synthesize batch=_batch;
@property(copy, nonatomic) id progressBlock; // @synthesize progressBlock=_progressBlock;
- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (BOOL)shouldRetryForError:(id)arg1;
- (void)cancel;
@property(readonly, copy) NSString *description;
- (id)initWithName:(id)arg1 multiplexer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

