/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TimingInstance : NSObject {

	float startTiming;
	float stopTiming;
	float totalTime;
	BOOL isRunning;

}

@property (assign,nonatomic) float startTiming; 
@property (assign,nonatomic) float stopTiming; 
@property (assign,nonatomic) float totalTime; 
@property (assign,nonatomic) BOOL isRunning; 
+(id)createTimingInstanceWithStartTime:(float)arg1 ;
-(id)description;
-(BOOL)isRunning;
-(float)totalTime;
-(void)setTotalTime:(float)arg1 ;
-(void)setIsRunning:(BOOL)arg1 ;
-(void)setStartTiming:(float)arg1 ;
-(void)setStopTiming:(float)arg1 ;
-(float)startTiming;
-(float)stopTiming;
@end

