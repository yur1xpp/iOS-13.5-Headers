/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 8:06:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/AccessibilityBundles/AccessibilitySettingsLoader.bundle/AccessibilitySettingsLoader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SpeakThisServicesUI : NSObject
+(void)enableSpeakThisServices;
+(void)disableSpeakThisServices;
-(id)init;
-(void)_handleSpeakThisEnabledStatusDidChangeNotification:(id)arg1 ;
-(void)_registerForKBFrameNotifications;
-(void)_unregisterForKBFrameNotifications;
-(void)_kbFrameWillChange:(id)arg1 ;
@end
