/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIVectorOperatable.h>

@class NSString;

@interface UIInterpolatedPoint : NSObject <UIVectorOperatable> {

	CGPoint _point;
	double _epsilon;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)zero;
+(id)epsilon;
+(id)valueWithCGPoint:(CGPoint)arg1 ;
+(id)valueWithCGPoint:(CGPoint)arg1 epsilon:(double)arg2 ;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isUndefined;
-(id)addVector:(id)arg1 ;
-(id)getValue;
-(id)interpolateTo:(id)arg1 progress:(double)arg2 ;
-(void)integrateWithVelocity:(id)arg1 target:(id)arg2 intermediateTarget:(id)arg3 intermediateTargetVelocity:(id)arg4 parameters:(SCD_Struct_UI128)arg5 state:(SCD_Struct_UI129)arg6 delta:(double)arg7 ;
-(BOOL)isApproximatelyEqualTo:(id)arg1 ;
-(BOOL)isApproximatelyEqualTo:(id)arg1 withinEpsilon:(id)arg2 ;
-(void)reinitWithVector:(id)arg1 ;
-(id)getNSValue;
-(id)multiplyByScalar:(double)arg1 ;
-(id)multiplyByVector:(id)arg1 ;
@end

