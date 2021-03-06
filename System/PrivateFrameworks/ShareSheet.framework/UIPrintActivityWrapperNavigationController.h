/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UINavigationController.h>
#import <UIKit/UIPrintInteractionControllerDelegate.h>

@class UIPrintInteractionController, NSString;

@interface UIPrintActivityWrapperNavigationController : UINavigationController <UIPrintInteractionControllerDelegate> {

	/*^block*/id _completionHandler;
	BOOL _presentedPrintInteractionController;
	UIPrintInteractionController* _printInteractionController;

}

@property (assign,nonatomic) BOOL presentedPrintInteractionController;                               //@synthesize presentedPrintInteractionController=_presentedPrintInteractionController - In the implementation block
@property (nonatomic,retain) UIPrintInteractionController * printInteractionController;              //@synthesize printInteractionController=_printInteractionController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(UIPrintInteractionController *)printInteractionController;
-(void)setPrintInteractionController:(UIPrintInteractionController *)arg1 ;
-(BOOL)presentedPrintInteractionController;
-(void)setPresentedPrintInteractionController:(BOOL)arg1 ;
-(id)initWithPrintInteractionController:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

