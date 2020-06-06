/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFContentItemAction.h>

@interface WFContentItemPropertiesAction : WFContentItemAction
+(BOOL)outputIsExemptFromTaintTrackingInheritance;
-(id)name;
-(id)keywords;
-(id)properties;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(id)outputContentClasses;
-(id)outputMeasurementUnitType;
-(id)localizedDefaultOutputName;
-(BOOL)inputRequired;
-(id)parameterSummary;
-(id)inputParameterKey;
-(id)parameterDefinitions;
-(id)descriptionSummary;
-(id)allPossibleDescriptionResults;
-(id)descriptionResult;
-(id)selectedProperty;
-(void)finishWithItems:(id)arg1 property:(id)arg2 coercionPerformed:(BOOL)arg3 ;
@end
