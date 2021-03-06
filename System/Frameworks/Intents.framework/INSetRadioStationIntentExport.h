/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSNumber, NSString;


@protocol INSetRadioStationIntentExport <NSObject,JSExport>
@property (assign,nonatomic) long long radioType; 
@property (nonatomic,copy) NSNumber * frequency; 
@property (nonatomic,copy) NSString * stationName; 
@property (nonatomic,copy) NSString * channel; 
@property (nonatomic,copy) NSNumber * presetNumber; 
@required
-(id)init;
-(NSString *)channel;
-(NSNumber *)frequency;
-(void)setFrequency:(id)arg1;
-(void)setChannel:(id)arg1;
-(long long)radioType;
-(void)setRadioType:(long long)arg1;
-(NSString *)stationName;
-(void)setStationName:(id)arg1;
-(NSNumber *)presetNumber;
-(void)setPresetNumber:(id)arg1;

@end

