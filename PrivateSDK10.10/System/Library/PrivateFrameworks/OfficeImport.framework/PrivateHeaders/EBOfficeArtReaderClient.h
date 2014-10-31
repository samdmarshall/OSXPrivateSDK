/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import <OfficeImport/OABReaderClient-Protocol.h>

// Not exported
@interface EBOfficeArtReaderClient : NSObject <OABReaderClient>
{
}

+ (BOOL)tablesAreAllowed;
+ (BOOL)escherIsFullySupported;
+ (void)readClientDataFromTableCell:(id)arg1 toTableCell:(id)arg2 state:(id)arg3;
+ (void)readClientDataFromGroup:(id)arg1 toGroup:(id)arg2 state:(id)arg3;
+ (void)readClientDataFromShape:(id)arg1 toGraphic:(id)arg2 state:(id)arg3;
+ (void)readEshClientAnchor:(const struct XlEshClientAnchor *)arg1 targetClientData:(id)arg2 state:(id)arg3;
+ (void)setAutoInsetForShape:(struct EshShape *)arg1;

@end

