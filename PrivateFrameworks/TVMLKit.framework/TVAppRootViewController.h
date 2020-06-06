/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UINavigationController, UIViewController, IKAppTabBar;


@protocol TVAppRootViewController <NSObject>
@property (nonatomic,readonly) UINavigationController * currentNavigationController; 
@property (nonatomic,readonly) UIViewController * currentViewController; 
@property (nonatomic,readonly) id<IKAppNavigationController> appNavigationController; 
@property (nonatomic,readonly) IKAppTabBar * appTabBar; 
@required
-(UIViewController *)currentViewController;
-(IKAppTabBar *)appTabBar;
-(id<IKAppNavigationController>)appNavigationController;
-(UINavigationController *)currentNavigationController;
-(void)setAppNavigationControllersDelegate:(id)arg1;

@end
