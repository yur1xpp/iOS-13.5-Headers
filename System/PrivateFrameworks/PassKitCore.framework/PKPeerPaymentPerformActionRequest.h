/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSString;

@interface PKPeerPaymentPerformActionRequest : PKPeerPaymentWebServiceRequest {

	NSString* _paymentIdentifier;
	NSString* _action;

}

@property (nonatomic,copy) NSString * paymentIdentifier;              //@synthesize paymentIdentifier=_paymentIdentifier - In the implementation block
@property (nonatomic,copy) NSString * action;                         //@synthesize action=_action - In the implementation block
-(NSString *)action;
-(void)setAction:(NSString *)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 ;
-(void)setPaymentIdentifier:(NSString *)arg1 ;
-(NSString *)paymentIdentifier;
@end

