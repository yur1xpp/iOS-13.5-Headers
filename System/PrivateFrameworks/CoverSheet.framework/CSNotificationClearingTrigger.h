/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSNotificationClearingTriggerDelegate;
@interface CSNotificationClearingTrigger : NSObject {

	BOOL _authenticated;
	BOOL _hadNotificationContentAtDisappearance;
	BOOL _didDisableCarDNDUntilEndOfDrive;
	BOOL _uiLocked;
	BOOL _screenOff;
	BOOL _triggerArmed;
	id<CSNotificationClearingTriggerDelegate> _delegate;

}

@property (assign,nonatomic) BOOL triggerArmed;                                                      //@synthesize triggerArmed=_triggerArmed - In the implementation block
@property (assign,nonatomic,__weak) id<CSNotificationClearingTriggerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL authenticated;                                                     //@synthesize authenticated=_authenticated - In the implementation block
@property (assign,nonatomic) BOOL hadNotificationContentAtDisappearance;                             //@synthesize hadNotificationContentAtDisappearance=_hadNotificationContentAtDisappearance - In the implementation block
@property (assign,nonatomic) BOOL didDisableCarDNDUntilEndOfDrive;                                   //@synthesize didDisableCarDNDUntilEndOfDrive=_didDisableCarDNDUntilEndOfDrive - In the implementation block
@property (assign,nonatomic) BOOL uiLocked;                                                          //@synthesize uiLocked=_uiLocked - In the implementation block
@property (assign,nonatomic) BOOL screenOff;                                                         //@synthesize screenOff=_screenOff - In the implementation block
-(id<CSNotificationClearingTriggerDelegate>)delegate;
-(void)setDelegate:(id<CSNotificationClearingTriggerDelegate>)arg1 ;
-(void)_reset;
-(id)initWithDelegate:(id)arg1 ;
-(void)setAuthenticated:(BOOL)arg1 ;
-(BOOL)authenticated;
-(void)setScreenOff:(BOOL)arg1 ;
-(BOOL)screenOff;
-(void)setUiLocked:(BOOL)arg1 ;
-(void)setHadNotificationContentAtDisappearance:(BOOL)arg1 ;
-(void)setDidDisableCarDNDUntilEndOfDrive:(BOOL)arg1 ;
-(void)_updateTriggerAndClearIfNeeded;
-(void)setTriggerArmed:(BOOL)arg1 ;
-(BOOL)_shouldArm;
-(BOOL)_wouldArmIfNotForDND;
-(BOOL)_wouldArmIfNotForDNDAndNotificationContent;
-(void)_clearIfNeeded;
-(BOOL)_wouldArmForDiscreteParameters;
-(BOOL)hadNotificationContentAtDisappearance;
-(BOOL)didDisableCarDNDUntilEndOfDrive;
-(BOOL)uiLocked;
-(BOOL)triggerArmed;
-(BOOL)_shouldFire;
@end

