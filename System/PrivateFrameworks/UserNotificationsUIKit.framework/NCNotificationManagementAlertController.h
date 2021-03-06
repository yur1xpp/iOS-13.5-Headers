/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIAlertController.h>
#import <libobjc.A.dylib/NCNotificationManagementController.h>

@protocol NCNotificationManagementControllerSettingsDelegate;
@class NCNotificationRequest, NSString;

@interface NCNotificationManagementAlertController : UIAlertController <NCNotificationManagementController> {

	id<NCNotificationManagementControllerSettingsDelegate> _settingsDelegate;
	NCNotificationRequest* _request;

}

@property (nonatomic,retain) NCNotificationRequest * request;                                                             //@synthesize request=_request - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NCNotificationManagementControllerSettingsDelegate> settingsDelegate;              //@synthesize settingsDelegate=_settingsDelegate - In the implementation block
-(void)setRequest:(NCNotificationRequest *)arg1 ;
-(NCNotificationRequest *)request;
-(void)viewDidLoad;
-(BOOL)shouldAutorotate;
-(id)initWithRequest:(id)arg1 withPresentingView:(id)arg2 settingsDelegate:(id)arg3 ;
-(void)setSettingsDelegate:(id<NCNotificationManagementControllerSettingsDelegate>)arg1 ;
-(id<NCNotificationManagementControllerSettingsDelegate>)settingsDelegate;
-(void)_configureView;
@end

