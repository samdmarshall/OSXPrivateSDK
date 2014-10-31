/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@class GEOCity, GEOCityPickerViewPrivController, NSButton, NSComboBox, NSObject<GEOCityPickerViewDelegate>, NSProgressIndicator;

@interface GEOCityPickerView : NSView
{
    GEOCityPickerViewPrivController *viewPrivController;
    GEOCity *selectedCity;
    BOOL enabled;
    NSObject<GEOCityPickerViewDelegate> *delegate;
    BOOL isUIBounded;
    NSComboBox *comboBox;
    NSButton *timeZoneButton;
    NSProgressIndicator *progressIndicator;
}

@property NSObject<GEOCityPickerViewDelegate> *delegate; // @synthesize delegate;
@property(getter=isEnabled) BOOL enabled; // @synthesize enabled;
- (id)viewPrivController;
- (void)selectDefaultCity;
- (void)selectCityWithGeonameID:(long long)arg1;
- (id)_geoKitManagedObjectContext;
@property(retain, nonatomic) GEOCity *selectedCity;
- (void)adjustBindings:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (void)_unbindPublicToPrivateProperties;
- (void)_bindPublicToPrivateProperties;
- (void)_bidirectionalUnbind:(id)arg1 betweenObject:(id)arg2 otherObject:(id)arg3;
- (void)_bidirectionalBind:(id)arg1 betweenObject:(id)arg2 otherObject:(id)arg3 options:(id)arg4;

@end

