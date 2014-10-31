/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSString, WBSHistoryItem, WBSHistoryVisit;

// Not exported
@interface WBSCloudHistoryVisitIdentifier : NSObject <NSCopying>
{
    NSString *_urlString;
    double _visitTime;
    WBSHistoryItem *_associatedHistoryItem;
    WBSHistoryVisit *_associatedHistoryVisit;
}

@property(retain, nonatomic) WBSHistoryVisit *associatedHistoryVisit; // @synthesize associatedHistoryVisit=_associatedHistoryVisit;
@property(retain, nonatomic) WBSHistoryItem *associatedHistoryItem; // @synthesize associatedHistoryItem=_associatedHistoryItem;
@property(nonatomic) double visitTime; // @synthesize visitTime=_visitTime;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURLString:(id)arg1 visitTime:(double)arg2;

@end

