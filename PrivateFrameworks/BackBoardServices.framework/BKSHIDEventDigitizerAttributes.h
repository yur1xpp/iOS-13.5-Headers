/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <BackBoardServices/BKSHIDEventBaseAttributes.h>

@interface BKSHIDEventDigitizerAttributes : BKSHIDEventBaseAttributes {

	float _maximumForce;
	double _digitizerSurfaceWidth;
	double _digitizerSurfaceHeight;

}

@property (assign,nonatomic) float maximumForce;                         //@synthesize maximumForce=_maximumForce - In the implementation block
@property (assign,nonatomic) double digitizerSurfaceWidth;               //@synthesize digitizerSurfaceWidth=_digitizerSurfaceWidth - In the implementation block
@property (assign,nonatomic) double digitizerSurfaceHeight;              //@synthesize digitizerSurfaceHeight=_digitizerSurfaceHeight - In the implementation block
+(id)protobufSchema;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(double)digitizerSurfaceWidth;
-(double)digitizerSurfaceHeight;
-(float)maximumForce;
-(void)setMaximumForce:(float)arg1 ;
-(void)setDigitizerSurfaceWidth:(double)arg1 ;
-(void)setDigitizerSurfaceHeight:(double)arg1 ;
@end
