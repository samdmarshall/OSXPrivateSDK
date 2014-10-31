/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSDate, NSImage, NSString;

@interface XSCertificate : NSObject
{
    struct OpaqueSecCertificateRef *_secCertificateRef;
    NSData *_certificateData;
    NSImage *_icon;
    NSData *_persistentReference;
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_exportIdentifier;
    NSString *_exportPathForCertificate;
    NSString *_exportPathForCertificateAuthorityChain;
    NSString *_exportPathForPrivateKey;
    NSString *_exportPathForConcatenation;
}

+ (id)certificateWithDictionary:(id)arg1;
@property(retain) NSString *exportPathForConcatenation; // @synthesize exportPathForConcatenation=_exportPathForConcatenation;
@property(retain) NSString *exportPathForPrivateKey; // @synthesize exportPathForPrivateKey=_exportPathForPrivateKey;
@property(retain) NSString *exportPathForCertificateAuthorityChain; // @synthesize exportPathForCertificateAuthorityChain=_exportPathForCertificateAuthorityChain;
@property(retain) NSString *exportPathForCertificate; // @synthesize exportPathForCertificate=_exportPathForCertificate;
@property(retain) NSString *exportIdentifier; // @synthesize exportIdentifier=_exportIdentifier;
@property(retain) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain) NSImage *icon; // @synthesize icon=_icon;
@property(retain) NSData *persistentReference; // @synthesize persistentReference=_persistentReference;
@property(retain) NSData *certificateData; // @synthesize certificateData=_certificateData;
@property(readonly) struct OpaqueSecCertificateRef *secCertificateRef; // @synthesize secCertificateRef=_secCertificateRef;
- (void)_updateFromCertificateRef;
- (void)_setSecCertificateRef:(struct OpaqueSecCertificateRef *)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSString *name;
@property(readonly) NSString *shortName;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;

@end

