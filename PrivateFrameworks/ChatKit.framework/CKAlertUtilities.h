/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKAlertUtilitiesProtocol;
#import <ChatKit/ChatKit-Structs.h>
@interface CKAlertUtilities : NSObject {

	id<CKAlertUtilitiesProtocol> _delegate;

}

@property (assign,nonatomic,__weak) id<CKAlertUtilitiesProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(CFDictionaryRef)_copyCTPhoneNumberSetting;
+(CFStringRef)_grabCTSIMStatus;
+(long long)missingAlertTypeToNotify;
-(id<CKAlertUtilitiesProtocol>)delegate;
-(void)setDelegate:(id<CKAlertUtilitiesProtocol>)arg1 ;
-(void)_displayMissingInformationAlert:(long long)arg1 ;
-(void)_didFinishCheckingMissingCarrierSetting;
-(void)_showNetworkPrefs:(long long)arg1 ;
-(void)checkMissingCarrierSetting;
@end
