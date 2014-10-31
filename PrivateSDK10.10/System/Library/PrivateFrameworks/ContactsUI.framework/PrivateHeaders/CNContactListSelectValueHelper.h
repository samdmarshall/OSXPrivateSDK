/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import <ContactsUI/CNContactListSelectHelper-Protocol.h>

@class CNContactListValueHelperScope, NSString;

@interface CNContactListSelectValueHelper : NSObject <CNContactListSelectHelper>
{
    id <CNContactPickerInternalResponseDelegate> _delegate;
    CNContactListValueHelperScope *_scope;
}

- (void).cxx_destruct;
- (id)value;
- (void)performSelect;
- (id)initWithDelegate:(id)arg1 scope:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

