/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ARSensor <NSObject>
@property (assign,nonatomic,__weak) id<ARSensorDelegate> delegate; 
@property (assign,nonatomic) unsigned long long powerUsage; 
@optional
-(void)setPowerUsage:(unsigned long long)arg1;
-(void)forceUpdatePowerUsage:(unsigned long long)arg1;
-(unsigned long long)powerUsage;

@required
-(id<ARSensorDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)stop;
-(void)start;
-(unsigned long long)providedDataTypes;

@end
