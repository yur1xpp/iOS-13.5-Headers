/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUSwitchCellDelegate.h>

@class HFUserItem, HURemoteAccessItemManager, NSString;

@interface HURemoteAccessTableViewController : HUItemTableViewController <HUSwitchCellDelegate> {

	HFUserItem* _userItem;
	HURemoteAccessItemManager* _remoteAccessItemManager;

}

@property (nonatomic,copy,readonly) HFUserItem * userItem;                                            //@synthesize userItem=_userItem - In the implementation block
@property (nonatomic,copy,readonly) HURemoteAccessItemManager * remoteAccessItemManager;              //@synthesize remoteAccessItemManager=_remoteAccessItemManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(id)userHandle;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(BOOL)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2 ;
-(BOOL)shouldHideHeaderAboveSection:(long long)arg1 ;
-(BOOL)shouldHideFooterBelowSection:(long long)arg1 ;
-(HFUserItem *)userItem;
-(id)initWithItem:(id)arg1 home:(id)arg2 ;
-(HURemoteAccessItemManager *)remoteAccessItemManager;
@end
