/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <ComponentKit/CKCompositeComponent.h>

@class WFRowTemplateParameterState;

@interface WFRowTemplateParameterComponent : CKCompositeComponent {

	WFRowTemplateParameterState* _state;
	unsigned long long _rowIndex;
	CKTypedComponentAction<unsigned long> _deleteAction;

}
+(id)numberFormatter;
+(id)itemFont;
+(id)newWithState:(id)arg1 rowIndex:(unsigned long long)arg2 updateBlock:(/*^block*/id)arg3 deleteAction:(CKTypedComponentAction<unsigned long>)arg4 tappedAction:(CKTypedComponentAction<>)arg5 options:(WFRowTemplateParameterComponentOptions)arg6 style:(const WFWrappingStackLayoutComponentStyle*)arg7 size:(const CKComponentSize*)arg8 variableProvider:(id)arg9 variableUIDelegate:(id)arg10 navigationContext:(id)arg11 ;
-(void)deleteButtonPressed;
@end
