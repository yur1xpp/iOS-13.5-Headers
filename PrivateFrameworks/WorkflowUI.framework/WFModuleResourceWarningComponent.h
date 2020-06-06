/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ComponentKit/CKCompositeComponent.h>

@protocol WFComponentNavigationContext;
@class NSError;

@interface WFModuleResourceWarningComponent : CKCompositeComponent {

	NSError* _resourceError;
	id<WFComponentNavigationContext> _navigationContext;

}
+(id)newWithResourceError:(id)arg1 navigationContext:(id)arg2 useImportStyle:(BOOL)arg3 importButtonGradient:(id)arg4 ;
-(void)recoverFromWarning:(id)arg1 buttonIndex:(unsigned long long)arg2 ;
@end
