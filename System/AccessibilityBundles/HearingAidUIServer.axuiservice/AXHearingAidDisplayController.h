/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 8:06:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/AccessibilityBundles/HearingAidUIServer.axuiservice/HearingAidUIServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AXHAShortcutUpdateProtocol.h>

@class HearingAidUIServer, HACCShortcutViewController, NSString;

@interface AXHearingAidDisplayController : UIViewController <AXHAShortcutUpdateProtocol> {

	HearingAidUIServer* _parentController;
	HACCShortcutViewController* _moduleUIController;

}

@property (nonatomic,retain) HACCShortcutViewController * moduleUIController;              //@synthesize moduleUIController=_moduleUIController - In the implementation block
@property (assign,nonatomic) HearingAidUIServer * parentController;                        //@synthesize parentController=_parentController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)dismissWithCompletion:(/*^block*/id)arg1 ;
-(void)setParentController:(HearingAidUIServer *)arg1 ;
-(HearingAidUIServer *)parentController;
-(void)shortcutDidChangeSize:(id)arg1 ;
-(void)setModuleUIController:(HACCShortcutViewController *)arg1 ;
-(HACCShortcutViewController *)moduleUIController;
@end

