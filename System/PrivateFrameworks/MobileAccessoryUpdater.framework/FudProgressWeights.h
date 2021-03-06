/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/MobileAccessoryUpdater
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FudProgressWeights : NSObject {

	float prepareWeight;
	float applyWeight;
	float finishWeight;

}

@property (assign) float prepareWeight; 
@property (assign) float applyWeight; 
@property (assign) float finishWeight; 
-(id)description;
-(id)initWithPrepareWeight:(float)arg1 applyWeight:(float)arg2 finishWeight:(float)arg3 ;
-(double)calculateOverallProgressWithStepProgress:(double)arg1 step:(int)arg2 ;
-(float)prepareWeight;
-(void)setPrepareWeight:(float)arg1 ;
-(float)applyWeight;
-(void)setApplyWeight:(float)arg1 ;
-(float)finishWeight;
-(void)setFinishWeight:(float)arg1 ;
@end

