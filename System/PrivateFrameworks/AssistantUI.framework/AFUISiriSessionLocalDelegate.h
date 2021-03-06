/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFUISiriSessionLocalDelegate <AFUISiriSessionListener>
@optional
-(BOOL)shouldNonLocalDelegateHandlePunchouts;
-(void)handlePunchoutCommand:(id)arg1 completion:(/*^block*/id)arg2;

@required
-(void)siriSessionShouldExtendAudioSessionForImminentPhoneCall;
-(void)siriSessionShouldEndExtendAudioSessionForImminentPhoneCall;
-(void)siriSession:(id)arg1 didChangeToState:(long long)arg2;
-(void)siriSessionDidReceiveDelayedActionCancelCommand:(id)arg1 completion:(/*^block*/id)arg2;
-(void)siriSessionDidReceiveDelayedActionCommand:(id)arg1 completion:(/*^block*/id)arg2;
-(void)siriSessionRecordingPreparationHasFinished:(id)arg1;
-(void)siriSession:(id)arg1 speechRecordingDidBeginOnAVRecordRoute:(id)arg2;
-(void)siriSessionDidResetContext:(id)arg1;
-(void)siriSession:(id)arg1 didReceiveDeviceUnlockRequestAndCancelRequest:(BOOL)arg2 withCompletion:(/*^block*/id)arg3;
-(void)siriSessionWillEnd:(id)arg1;
-(void)siriSessionDidEnd:(id)arg1;
-(void)siriSession:(id)arg1 didReceiveDeviceUnlockRequestWithCompletion:(/*^block*/id)arg2;

@end

