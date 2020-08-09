/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/HMUserManagementRemoteHost.h>

@protocol HMUserManagementRemoteHost;
@interface HMAddUserRemoteViewController : _UIRemoteViewController <HMUserManagementRemoteHost> {

	id<HMUserManagementRemoteHost> _delegate;

}

@property (assign,nonatomic,__weak) id<HMUserManagementRemoteHost> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(id)requestViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
-(id<HMUserManagementRemoteHost>)delegate;
-(void)setDelegate:(id<HMUserManagementRemoteHost>)arg1 ;
-(void)viewDidLoad;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)userManagementDidFinishWithError:(id)arg1 ;
-(void)userManagementDidLoad;
@end
