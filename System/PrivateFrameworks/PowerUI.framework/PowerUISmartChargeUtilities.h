/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PowerUISmartChargeUtilities : NSObject
+(BOOL)isInternalBuild;
+(id)dateForPreferenceKey:(id)arg1 inDomain:(id)arg2 ;
+(id)numberForPreferenceKey:(id)arg1 inDomain:(id)arg2 ;
+(id)eventsAdjustedForTimeZoneOffsets:(id)arg1 ;
+(void)setDate:(id)arg1 forPreferenceKey:(id)arg2 inDomain:(id)arg3 ;
+(void)setNumber:(id)arg1 forPreferenceKey:(id)arg2 inDomain:(id)arg3 ;
+(id)historicalTopOffDurations;
+(id)historicalEngagementsSortedAscending:(BOOL)arg1 ;
+(double)currentBatteryLevelWithContext:(id)arg1 ;
+(BOOL)isPluggedInWithContext:(id)arg1 ;
+(id)lastPluggedInDateWithContext:(id)arg1 ;
+(BOOL)deviceWasActiveWithinSeconds:(double)arg1 withContext:(id)arg2 ;
+(BOOL)deviceWasConnectedToChargerWithinSeconds:(double)arg1 withContext:(id)arg2 ;
+(BOOL)deviceConnectedToWirelessChargerWithContext:(id)arg1 ;
+(id)historicalChargeDurationsFromLevel:(int)arg1 toLevel:(int)arg2 filteredByMinimumPluginDuration:(double)arg3 ;
+(id)predicateForEventsWithinSeconds:(double)arg1 aroundTimeOfDay:(id)arg2 goingDaysBack:(int)arg3 ;
+(id)batteryProperties;
@end

