/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface _MFZipStream : NSObject
{
    struct __sFILE {
        char *_field1;
        int _field2;
        int _field3;
        short _field4;
        short _field5;
        struct __sbuf _field6;
        int _field7;
        void *_field8;
        void *_field9;
        void *_field10;
        void *_field11;
        void *_field12;
        struct __sbuf _field13;
        struct __sFILEX *_field14;
        int _field15;
        unsigned char _field16[3];
        unsigned char _field17[1];
        struct __sbuf _field18;
        int _field19;
        long long _field20;
    } *_destination;
    struct z_stream_s _zipStream;
    unsigned char inBuffer[32768];
    unsigned char outBuffer[32768];
    BOOL _closed;
}

- (void)closeStream;
- (void)appendData:(id)arg1;
- (void)dealloc;
- (id)initWithDestinationPath:(id)arg1;

@end

