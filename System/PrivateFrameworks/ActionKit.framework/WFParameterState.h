/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFParameterState <NSCopying,WFVariableSerialization>
@optional
+(Class)processingValueClass;
-(id)initWithVariable:(id)arg1;

@required
-(BOOL)isEqual:(id)arg1;
-(unsigned long long)hash;
-(id)containedVariables;
-(void)processWithContext:(id)arg1 userInputRequiredHandler:(/*^block*/id)arg2 valueHandler:(/*^block*/id)arg3;

@end

