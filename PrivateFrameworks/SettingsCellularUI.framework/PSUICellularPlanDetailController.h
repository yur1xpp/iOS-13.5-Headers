/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PSUISubscriptionContextMenusGroup;

@interface PSUICellularPlanDetailController : PSListController {

	PSUISubscriptionContextMenusGroup* _subscriptionContextMenus;

}

@property (nonatomic,retain) PSUISubscriptionContextMenusGroup * subscriptionContextMenus;              //@synthesize subscriptionContextMenus=_subscriptionContextMenus - In the implementation block
-(id)init;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)willEnterForeground;
-(id)specifiers;
-(id)selectSpecifier:(id)arg1 ;
-(PSUISubscriptionContextMenusGroup *)subscriptionContextMenus;
-(void)setSubscriptionContextMenus:(PSUISubscriptionContextMenusGroup *)arg1 ;
@end
