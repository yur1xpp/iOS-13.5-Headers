/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/_SBUIBiometricOperationAssertion.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface _SBUIBiometricMatchingAssertion : _SBUIBiometricOperationAssertion <BSDescriptionProviding> {

	unsigned long long _matchMode;
	long long _restartCount;

}

@property (nonatomic,readonly) unsigned long long matchMode;              //@synthesize matchMode=_matchMode - In the implementation block
@property (assign,nonatomic) long long restartCount;                      //@synthesize restartCount=_restartCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 forReason:(id)arg2 queue:(id)arg3 invalidationBlock:(/*^block*/id)arg4 ;
-(long long)restartCount;
-(id)initWithMatchMode:(unsigned long long)arg1 reason:(id)arg2 invalidationBlock:(/*^block*/id)arg3 ;
-(unsigned long long)matchMode;
-(void)setRestartCount:(long long)arg1 ;
@end
