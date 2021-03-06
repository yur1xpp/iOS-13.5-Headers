/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ActivityAchievementsDaemon/ActivityAchievementsDaemon-Structs.h>
@interface ACHActivityTriggerGenerator : NSObject
+(unsigned long long)allPossibleTriggers;
-(unsigned long long)_triggersForNewActivityDataWithGoalType:(long long)arg1 dataProvider:(id)arg2 goalMetHandler:(/*^block*/id)arg3 ;
-(SCD_Struct_AC5)_incrementWithInitialState:(SCD_Struct_AC5)arg1 forGoalType:(long long)arg2 dataProvider:(id)arg3 goalMetHandler:(/*^block*/id)arg4 ;
-(unsigned long long)triggersForNewMoveDataWithDataProvider:(id)arg1 ;
-(unsigned long long)triggersForNewExerciseDataWithDataProvider:(id)arg1 ;
-(unsigned long long)triggersForNewStandDataWithDataProvider:(id)arg1 ;
@end

