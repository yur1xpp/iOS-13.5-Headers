/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SXComponentInteraction, UIViewController;

@interface SXComponentInteractionPreview : NSObject {

	SXComponentInteraction* _interaction;
	UIViewController* _viewController;

}

@property (nonatomic,readonly) SXComponentInteraction * interaction;                  //@synthesize interaction=_interaction - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(SXComponentInteraction *)interaction;
-(UIViewController *)viewController;
-(id)initWithInteraction:(id)arg1 viewController:(id)arg2 ;
@end
