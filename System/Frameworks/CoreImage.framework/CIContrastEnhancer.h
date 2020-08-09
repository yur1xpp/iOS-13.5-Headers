/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIContrastEnhancer : CIFilter {

	CIImage* inputImage;
	NSNumber* inputIntensity;
	NSNumber* inputScale;
	NSNumber* inputLocal;
	NSNumber* inputPerceptual;

}

@property (nonatomic,retain) NSNumber * inputIntensity; 
@property (nonatomic,retain) NSNumber * inputLocal; 
@property (nonatomic,retain) NSNumber * inputScale; 
@property (nonatomic,retain) NSNumber * inputPerceptual; 
+(id)customAttributes;
-(id)outputImage;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(NSNumber *)inputIntensity;
-(void)setInputIntensity:(NSNumber *)arg1 ;
-(NSNumber *)inputPerceptual;
-(void)setInputPerceptual:(NSNumber *)arg1 ;
-(NSNumber *)inputLocal;
-(void)setInputLocal:(NSNumber *)arg1 ;
@end
