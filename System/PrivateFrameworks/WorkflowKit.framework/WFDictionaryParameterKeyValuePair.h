/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/WFVariableSerialization.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WFVariableString, WFPropertyListParameterValue, NSString;

@interface WFDictionaryParameterKeyValuePair : NSObject <WFVariableSerialization, NSCopying> {

	WFVariableString* _key;
	WFPropertyListParameterValue* _value;

}

@property (nonatomic,readonly) WFVariableString * key;                            //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) WFPropertyListParameterValue * value;              //@synthesize value=_value - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(WFVariableString *)key;
-(WFPropertyListParameterValue *)value;
-(id)initWithKey:(id)arg1 value:(id)arg2 ;
-(id)serializedRepresentation;
-(id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(id)containedVariables;
-(void)getProcessedPair:(/*^block*/id)arg1 context:(id)arg2 userInputRequiredHandler:(/*^block*/id)arg3 ;
@end

