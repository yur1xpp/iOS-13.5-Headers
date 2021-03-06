/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SBFInfiniteImpulseResponseFilter : NSObject {

	unsigned long long _count;
	double* _ffC;
	double* _fbC;
	double* _inputHistory;
	double* _outputHistory;
	double _zeroGradientThreshold;

}

@property (assign,nonatomic) double zeroGradientThreshold;              //@synthesize zeroGradientThreshold=_zeroGradientThreshold - In the implementation block
+(id)lowpassInertiaFilterWithCoefficient:(double)arg1 ;
+(id)lowpassFilterWithCoefficient:(double)arg1 ;
-(void)dealloc;
-(double)output;
-(double)outputGradient;
-(BOOL)zeroGradient;
-(double)filterWithInput:(double)arg1 ;
-(void)setZeroGradientThreshold:(double)arg1 ;
-(id)initWithCount:(unsigned long long)arg1 feedforwardCoefficients:(double*)arg2 feedbackCoefficients:(double*)arg3 ;
-(void)setLowpassInertiaFilterCoefficient:(double)arg1 ;
-(void)resetToValue:(double)arg1 ;
-(double)zeroGradientThreshold;
@end

