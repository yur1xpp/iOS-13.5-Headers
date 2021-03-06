/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 7:59:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RawCamera/RAWFilter.h>

@class CIImage, CIVector, NSNumber;

@interface RAWTemperatureAdjust : RAWFilter {

	CIImage* inputImage;
	CIVector* inputWhitePoint;
	NSNumber* inputExposure;
	NSNumber* inputVersion;
	CIVector* defaultWhitePoint;

}
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)customAttributes;
-(id)customAttributes;
-(id)outputImage;
-(void)setInputExposure:(id)arg1 ;
-(id)outputMatrix;
-(void)setInputWhitePoint:(id)arg1 ;
@end

