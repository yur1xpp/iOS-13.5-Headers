/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKPaymentSetupProvisioningFieldsViewController.h>

@interface PKPaymentCardSecondaryManualEntryViewController : PKPaymentSetupProvisioningFieldsViewController {

	BOOL _suppressPrimarySetupFields;

}

@property (assign,nonatomic) BOOL suppressPrimarySetupFields;              //@synthesize suppressPrimarySetupFields=_suppressPrimarySetupFields - In the implementation block
-(void)viewDidLoad;
-(id)defaultHeaderViewTitle;
-(id)defaultHeaderViewSubTitle;
-(id)visibleFieldIdentifiers;
-(id)newPaymentEligibilityRequest;
-(id)readonlyFieldIdentifiers;
-(void)performNextActionForProvisioningState:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)defaultFields;
-(id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 setupFieldsModel:(id)arg4 ;
-(void)setSuppressPrimarySetupFields:(BOOL)arg1 ;
-(BOOL)suppressPrimarySetupFields;
@end
