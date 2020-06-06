/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARMLImageProcessingTechnique.h>

@class NSString;

@interface AR3DSkeletonLiftingTechnique : ARMLImageProcessingTechnique {

	NSString* _inputTensorName;

}
+(BOOL)_adjustBoneLength:(1*)arg1 count:(unsigned long long)arg2 ;
+(void)_transformRelativeToHip:(1*)arg1 count:(unsigned long long)arg2 ;
-(id)init;
-(unsigned long long)requiredSensorDataTypes;
-(double)requiredTimeInterval;
-(void)_startLoadingMLModelSignpost;
-(void)_endLoadingMLModelSignpost;
-(void)_startMLProcessingSignpostWithTimestamp:(double)arg1 ;
-(void)_endMLProcessingSignpostWithTimestamp:(double)arg1 ;
-(void)_startMLRunNetworkSignpostWithTimestamp:(double)arg1 ;
-(void)_endMLRunNetworkSignpostWithTimestamp:(double)arg1 ;
-(void)_startMLCreateResultSignpostWithTimestamp:(double)arg1 orientation:(long long)arg2 outputSize:(CGSize)arg3 ;
-(void)_endMLCreateResultSignpostWithTimestamp:(double)arg1 ;
-(void)changeEspressoConfig:(id)arg1 ;
-(id)processEspressoTensor:(id)arg1 ;
@end
