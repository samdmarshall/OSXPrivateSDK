/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"

@interface PAPageResidency : NSObject <NSCoding>
{
    unsigned int residentPages;
    unsigned int dirtyPages;
    unsigned int copiedPages;
    unsigned int reclaimablePages;
    unsigned int swappedPages;
    unsigned int speculativePages;
    unsigned int residentNonSpecPages;
    BOOL isDetailed;
}

@property BOOL isDetailed; // @synthesize isDetailed;
@property unsigned int residentNonSpecPages; // @synthesize residentNonSpecPages;
@property unsigned int speculativePages; // @synthesize speculativePages;
@property unsigned int swappedPages; // @synthesize swappedPages;
@property unsigned int reclaimablePages; // @synthesize reclaimablePages;
@property unsigned int copiedPages; // @synthesize copiedPages;
@property unsigned int dirtyPages; // @synthesize dirtyPages;
@property unsigned int residentPages; // @synthesize residentPages;
- (long long)compareSpec:(id)arg1;
- (long long)compareClean:(id)arg1;
- (long long)compareDirtyAndSwapped:(id)arg1;
- (long long)compareDirty:(id)arg1;
- (long long)compareNonSpecResident:(id)arg1;
- (long long)compareResident:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)cleanNonSpecBytes;
- (unsigned long long)residentNonSpecBytes;
- (unsigned long long)speculativeBytes;
- (unsigned long long)swappedBytes;
- (unsigned long long)reclaimableBytes;
- (unsigned long long)copiedBytes;
- (unsigned long long)dirtyBytes;
- (unsigned long long)residentBytes;
- (id)resBytesString;
- (id)resString;
- (void)subtractResidency:(id)arg1;
- (void)addResidency:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPageResidency:(id)arg1;
- (id)init;
- (BOOL)isSane;

@end

