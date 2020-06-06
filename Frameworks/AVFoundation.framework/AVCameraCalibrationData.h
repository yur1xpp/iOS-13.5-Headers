/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCameraCalibrationDataInternal, NSData;

@interface AVCameraCalibrationData : NSObject {

	AVCameraCalibrationDataInternal* _internal;

}

@property (nonatomic,readonly) SCD_Struct_AV67 intrinsicMatrix; 
@property (nonatomic,readonly) CGSize intrinsicMatrixReferenceDimensions; 
@property (nonatomic,readonly) SCD_Struct_AV68 extrinsicMatrix; 
@property (nonatomic,readonly) float pixelSize; 
@property (nonatomic,readonly) NSData * lensDistortionLookupTable; 
@property (nonatomic,readonly) NSData * inverseLensDistortionLookupTable; 
@property (nonatomic,readonly) CGPoint lensDistortionCenter; 
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(SCD_Struct_AV67)intrinsicMatrix;
-(CGSize)intrinsicMatrixReferenceDimensions;
-(NSData *)lensDistortionLookupTable;
-(NSData *)inverseLensDistortionLookupTable;
-(CGPoint)lensDistortionCenter;
-(float)pixelSize;
-(CGImageMetadataRef)copyAuxiliaryMetadata;
-(SCD_Struct_AV68)extrinsicMatrix;
-(id)cameraCalibrationDataDictionary;
-(id)_distortionLookupTableFromCoefficients:(id)arg1 distortionCenter:(CGPoint)arg2 pixelSize:(float)arg3 referenceDimensions:(CGSize)arg4 lookupTableLength:(int)arg5 ;
-(id)initWithDepthMetadataDictionary:(id)arg1 ;
-(id)_initEmpty;
-(id)initWithCameraCalibrationDataDictionary:(id)arg1 error:(id*)arg2 ;
-(id)initWithAuxiliaryMetadata:(CGImageMetadataRef)arg1 ;
-(id)cameraCalibrationDataWithExifOrientation:(unsigned)arg1 ;
@end
