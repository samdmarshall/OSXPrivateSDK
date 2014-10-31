/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <WhitePages/WPODRecord.h>

@class NSString, WPMap, WPMultiAddress;

@interface WPPerson : WPODRecord
{
    WPMultiAddress *_multiAddress;
    WPMap *_cachedMap;
    NSString *_displayedName;
}

+ (id)defaultLargeImage;
+ (id)defaultImage;
+ (id)peopleWithName:(id)arg1 attributesToBeReturned:(id)arg2 session:(id)arg3;
+ (id)peopleWithName:(id)arg1 attributesToBeReturned:(id)arg2;
+ (id)personWithGUID:(id)arg1 attributesToBeReturned:(id)arg2 session:(id)arg3;
+ (id)personWithGUID:(id)arg1 attributesToBeReturned:(id)arg2;
+ (void)setPersonDisplayNameMode:(int)arg1;
+ (int)personDisplayNameMode;
+ (id)personWithODRecord:(id)arg1 session:(id)arg2;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
- (void)reset;
- (void)setSubordinates:(id)arg1;
- (void)setSupervisor:(id)arg1;
- (void)setMap:(id)arg1;
- (void)setAddress:(id)arg1;
- (id)addPrefix:(id)arg1 toHandles:(id)arg2;
- (void)setHandles:(id)arg1 forType:(id)arg2;
- (void)setDepartment:(id)arg1;
- (void)setJobTitle:(id)arg1;
- (void)setBlog:(id)arg1;
- (void)setCompany:(id)arg1;
- (void)setBirthdate:(id)arg1;
- (void)setLast:(id)arg1;
- (void)setFirst:(id)arg1;
- (id)groups;
- (id)addressLabelForIndex:(unsigned long long)arg1;
- (id)addressLabels;
- (id)subordinates;
- (id)supervisor;
- (id)mainAddress;
- (id)mainMobile;
- (id)mainPhone;
- (id)mainEmail;
- (id)addresses;
- (id)pagerContactPhones;
- (id)pagerPhones;
- (id)FAXContactPhones;
- (id)FAXPhones;
- (id)mobileContactPhones;
- (id)mobilePhones;
- (id)homeContactPhones;
- (id)homePhones;
- (id)workContactPhones;
- (id)workPhones;
- (id)emailContacts;
- (id)emails;
- (id)blog;
- (id)mainURL;
- (id)mainICQHandle;
- (id)mainYahooHandle;
- (id)mainMSNHandle;
- (id)mainJabberHandle;
- (id)mainAIMHandle;
- (id)URLs;
- (id)ICQHandles;
- (id)YahooHandles;
- (id)MSNHandles;
- (id)JabberHandles;
- (id)AIMHandles;
- (id)map;
- (id)mapGUID;
- (id)reflectedImage;
- (void)setBadgeImage:(id)arg1;
- (id)badgeImage;
- (id)printableAttributedString;
- (id)directReportsLabel;
- (id)supervisorLabel;
- (id)companyAndDepartment;
- (id)department;
- (id)jobTitle;
- (id)company;
- (id)birthdate;
- (id)secondaryInfoString;
- (id)displayedNameAndEmail;
- (void)resetDisplayedName;
- (void)displayedNameModeHasChanged:(id)arg1;
- (id)displayedNameUsingFirstNameAndLastNameOnly:(BOOL)arg1;
- (id)displayedName;
- (id)displayedNameUsingFirstNameAndLastNameOnly;
- (id)displayedStringForPickerTextField:(id)arg1;
- (id)displayedStringForPickerTableView:(id)arg1;
- (id)recordPickerDisplayedString;
- (id)last;
- (id)first;
- (id)GUID;
- (id)pluralRecordCategory;
- (id)singularRecordCategory;
- (id)recordType;
- (id)description;
- (void)dealloc;
- (id)initRecordWithODRecord:(id)arg1 session:(id)arg2;

@end

