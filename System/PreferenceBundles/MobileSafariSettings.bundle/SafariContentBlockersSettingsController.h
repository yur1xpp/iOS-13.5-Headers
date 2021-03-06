/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 8:04:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafariSettings/SafariSettingsListController.h>
#import <libobjc.A.dylib/SFContentBlockerManagerObserver.h>

@class _UIContentUnavailableView, NSString;

@interface SafariContentBlockersSettingsController : SafariSettingsListController <SFContentBlockerManagerObserver> {

	_UIContentUnavailableView* _contentUnavailableView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)specifiers;
-(void)contentBlockerManagerExtensionListDidChange:(id)arg1 ;
-(void)_setValue:(id)arg1 forSpecifier:(id)arg2 ;
-(void)_hideContentUnavailableView;
-(void)_showContentUnavailableView;
-(id)_valueOfSpecifier:(id)arg1 ;
@end

