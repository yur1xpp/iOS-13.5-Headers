/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <WorkflowUI/WFModuleSummaryEditor.h>
#import <libobjc.A.dylib/MPMediaPickerControllerDelegatePrivate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class UIViewController, NSString;

@interface WFMediaPickerParameterSummaryEditor : WFModuleSummaryEditor <MPMediaPickerControllerDelegatePrivate, UIPopoverPresentationControllerDelegate> {

	UIViewController* _presentedViewController;

}

@property (assign,nonatomic,__weak) UIViewController * presentedViewController;              //@synthesize presentedViewController=_presentedViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIViewController *)presentedViewController;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(void)setPresentedViewController:(UIViewController *)arg1 ;
-(void)mediaPicker:(id)arg1 didPickPlaybackArchive:(id)arg2 ;
-(void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2 ;
-(void)mediaPickerDidCancel:(id)arg1 ;
-(void)beginEditingSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4 ;
-(void)cancelEditingWithCompletionHandler:(/*^block*/id)arg1 ;
@end

