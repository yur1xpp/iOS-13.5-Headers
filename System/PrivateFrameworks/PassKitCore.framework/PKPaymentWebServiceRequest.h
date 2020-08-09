/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKOverlayableWebServiceRequest.h>

@protocol PKPaymentWebServiceTargetDeviceProtocol;
@interface PKPaymentWebServiceRequest : PKOverlayableWebServiceRequest {

	id<PKPaymentWebServiceTargetDeviceProtocol> _targetDevice;

}

@property (nonatomic,retain) id<PKPaymentWebServiceTargetDeviceProtocol> targetDevice;              //@synthesize targetDevice=_targetDevice - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setTargetDevice:(id<PKPaymentWebServiceTargetDeviceProtocol>)arg1 ;
-(id<PKPaymentWebServiceTargetDeviceProtocol>)targetDevice;
-(id)_murlRequestWithServiceURL:(id)arg1 version:(id)arg2 endpointComponents:(id)arg3 queryParameters:(id)arg4 appleAccountInformation:(id)arg5 ;
-(id)_murlRequestWithURL:(id)arg1 ;
-(id)_murlRequestWithServiceURL:(id)arg1 endpointComponents:(id)arg2 queryParameters:(id)arg3 appleAccountInformation:(id)arg4 ;
-(void)_signRequest:(id)arg1 webService:(id)arg2 completion:(/*^block*/id)arg3 ;
@end
