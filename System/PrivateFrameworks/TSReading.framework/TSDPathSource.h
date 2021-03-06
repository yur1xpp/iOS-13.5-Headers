/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDMixing.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSDPathSource : NSObject <TSDMixing, NSCopying> {

	BOOL mHorizontalFlip;
	BOOL mVerticalFlip;

}

@property (assign) BOOL hasHorizontalFlip; 
@property (assign) BOOL hasVerticalFlip; 
+(id)pathSourceForShapeType:(int)arg1 naturalSize:(CGSize)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)bezierPath;
-(CGSize)naturalSize;
-(void)setNaturalSize:(CGSize)arg1 ;
-(BOOL)isCircular;
-(BOOL)isRectangular;
-(long long)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(BOOL)hasHorizontalFlip;
-(void)setHasHorizontalFlip:(BOOL)arg1 ;
-(BOOL)hasVerticalFlip;
-(void)setHasVerticalFlip:(BOOL)arg1 ;
-(id)bezierPathWithoutFlips;
-(CGAffineTransform)pathFlipTransform;
-(BOOL)isRectangularForever;
-(id)interiorWrapPath;
-(Class)preferredControllerClass;
-(double)uniformScaleForScalingToNaturalSize:(CGSize)arg1 ;
-(void)scaleToNaturalSize:(CGSize)arg1 ;
-(id)valueForSetSelector:(SEL)arg1 ;
@end

