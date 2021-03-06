/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSString, NSData;

@interface AASecondaryAuthenticationResponse : AAResponse {

	NSString* _secondFactorToken;
	NSData* _buddyML;

}

@property (nonatomic,readonly) NSString * secondFactorToken;              //@synthesize secondFactorToken=_secondFactorToken - In the implementation block
@property (nonatomic,readonly) NSData * buddyML;                          //@synthesize buddyML=_buddyML - In the implementation block
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSString *)secondFactorToken;
-(NSData *)buddyML;
@end

