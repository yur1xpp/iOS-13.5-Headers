/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MCUIUserEnrollmentAccountSpecifierProvider : NSObject {

	/*^block*/id _devicePasscodeVerificationCompletionHandler;

}

@property (nonatomic,copy) id devicePasscodeVerificationCompletionHandler;              //@synthesize devicePasscodeVerificationCompletionHandler=_devicePasscodeVerificationCompletionHandler - In the implementation block
+(id)labelTextForAccountSummaryCell;
+(id)titleForAccountSummaryGroup;
+(id)deleteAccountGroupFooterText;
+(id)warningTextForAccountDeletion;
-(void)didAcceptEnteredPIN:(id)arg1 ;
-(void)didCancelEnteringPIN;
-(void)preflightsAccountDeletion:(id)arg1 presentingViewController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_verifyDevicePasscodeWithPresentingViewController:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDevicePasscodeVerificationCompletionHandler:(id)arg1 ;
-(id)devicePasscodeVerificationCompletionHandler;
@end
