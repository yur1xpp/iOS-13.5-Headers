/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPassbookPeerPaymentSettingsDataSource.h>
#import <libobjc.A.dylib/PKPassbookPeerPaymentSettingsDelegate.h>

@class PKPaymentWebService, PKPeerPaymentWebService, NSString;

@interface PKPassbookPeerPaymentSettingsDefaultBehavior : NSObject <PKPassbookPeerPaymentSettingsDataSource, PKPassbookPeerPaymentSettingsDelegate> {

	PKPaymentWebService* _paymentWebService;
	PKPeerPaymentWebService* _peerPaymentWebService;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)peerPaymentWebService;
-(void)peerPaymentRegistrationStatusHasChanged:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_registerForPeerPaymentWithCompletion:(/*^block*/id)arg1 ;
-(void)_unregisterForPeerPaymentWithCompletion:(/*^block*/id)arg1 ;
@end

