/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFMultipleValueParameterState.h>

@interface WFContactSubstitutableState : WFMultipleValueParameterState
+(Class)processingValueClass;
+(id)serializedRepresentationFromValue:(id)arg1 ;
+(id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(id)initWithValue:(id)arg1 ;
-(void)processWithContext:(id)arg1 userInputRequiredHandler:(/*^block*/id)arg2 valueHandler:(/*^block*/id)arg3 ;
-(id)collectionByConvertingStringItemsToHandles:(id)arg1 ;
-(void)processContentCollection:(id)arg1 fromVariable:(BOOL)arg2 valueHandler:(/*^block*/id)arg3 ;
-(BOOL)reinterpretsStringsAsContactHandlesFromVariable:(BOOL)arg1 ;
-(id)stringInterpretedAsContactHandle:(id)arg1 ;
-(id)valueItemClasses;
@end

