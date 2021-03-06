/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSEventMonitor.h>

@interface CSPhraseSpotterEnabledMonitor : CSEventMonitor {

	int _notifyToken;
	BOOL _isPhraseSpotterEnabled;

}
+(id)sharedInstance;
-(id)init;
-(BOOL)isEnabled;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_notifyObserver:(id)arg1 withEnabled:(BOOL)arg2 ;
-(void)_phraseSpotterEnabledDidChange;
-(BOOL)_checkPhraseSpotterEnabled;
-(void)_didReceivePhraseSpotterSettingChangedInQueue:(BOOL)arg1 ;
@end

