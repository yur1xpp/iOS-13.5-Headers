/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <PencilKit/PKFreeTransformGestureRecognizer.h>

@class NSTimer;

@interface PKRulerGestureRecognizer : PKFreeTransformGestureRecognizer {

	NSTimer* _startTimer;
	BOOL _initialSnap;
	double _startDelay;
	double _startSnapThreshold;

}

@property (assign,nonatomic) double startDelay;                      //@synthesize startDelay=_startDelay - In the implementation block
@property (assign,nonatomic) double startSnapThreshold;              //@synthesize startSnapThreshold=_startSnapThreshold - In the implementation block
-(void)start;
-(void)reset;
-(void)stopTimer;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(CGAffineTransform)freeTransform;
-(CGAffineTransform)unscaledFreeTransform;
-(void)resetAndAccumulateTransform;
-(CGAffineTransform)rulerTransform;
-(void)setStartDelay:(double)arg1 ;
-(void)setStartSnapThreshold:(double)arg1 ;
-(double)startDelay;
-(double)startSnapThreshold;
@end
