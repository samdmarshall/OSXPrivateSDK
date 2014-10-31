/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSException.h"

@class NSError, NSString;

@interface NSException (FileSync_Additions)
@property(readonly, nonatomic) int posixErrorCode;
- (void)logIfExternalExceptionAtLevel:(int)arg1;
@property(readonly, nonatomic) BOOL isTimeoutException;
@property(readonly, nonatomic) BOOL isReverificationException;
@property(readonly, nonatomic) BOOL isPermissionException;
@property(readonly, nonatomic) BOOL isNSVException;
@property(readonly, nonatomic) BOOL isIOException;
@property(readonly, nonatomic) BOOL isInternallyGeneratedException;
@property(readonly, nonatomic) BOOL isHardException;
@property(readonly, nonatomic) BOOL isFileNotFoundException;
@property(readonly, nonatomic) BOOL isFatalCoreDataException;
@property(readonly, nonatomic) BOOL isDiskFullException;
@property(readonly, nonatomic) BOOL isAbortException;
@property(readonly, retain, nonatomic) NSString *errorMessage;
@property(readonly, nonatomic) long long errorCode;
@property(readonly, retain, nonatomic) NSError *error;
@end

