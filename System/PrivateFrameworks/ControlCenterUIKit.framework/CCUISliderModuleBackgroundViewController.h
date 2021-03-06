/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUIKit/ControlCenterUIKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CCUIContentModuleBackgroundViewController.h>

@class UIImageView, CCUICAPackageView, MTVisualStylingProvider, NSString;

@interface CCUISliderModuleBackgroundViewController : UIViewController <CCUIContentModuleBackgroundViewController> {

	UIImageView* _headerImageView;
	CCUICAPackageView* _packageView;
	MTVisualStylingProvider* _visualStylingProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(void)setGlyphImage:(id)arg1 ;
-(void)setGlyphPackageDescription:(id)arg1 ;
-(void)setGlyphState:(id)arg1 ;
-(CGPoint)_headerCenterForBounds:(CGRect)arg1 ;
-(void)_updateHeaderGlyphVisualStyling;
-(CGRect)effectiveContentFrameForContainerFrame:(CGRect)arg1 ;
@end

