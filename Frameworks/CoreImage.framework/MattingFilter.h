/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class XMattingBoxTensorFilter;


@protocol MattingFilter
@property (assign) SCD_Struct_XM88 config; 
@property (retain) XMattingBoxTensorFilter * boxTensorFilter; 
@property (readonly) BOOL stateComputed; 
@property (readonly) BOOL coefficientsComputed; 
@required
-(SCD_Struct_XM88)config;
-(void)setConfig:(SCD_Struct_XM88)arg1;
-(id)initWithDevice:(id)arg1 library:(id)arg2;
-(int)allocateResources:(SCD_Struct_XM88)arg1;
-(void)releaseResources;
-(int)encodeApplyCoefficientsOn:(id)arg1 colorGuide:(id)arg2 disparityGuide:(id)arg3 constraints:(id)arg4 destinationAlphaTexture:(id)arg5;
-(int)encodeStateOn:(id)arg1 colorGuide:(id)arg2 disparityGuide:(id)arg3 initialSegmentation:(id)arg4 constraints:(id)arg5;
-(int)encodeStepOn:(id)arg1;
-(int)encodeUpsampleOn:(id)arg1 segmentation:(id)arg2 colorGuide:(id)arg3 disparityGuide:(id)arg4 outputMatte:(id)arg5;
-(XMattingBoxTensorFilter *)boxTensorFilter;
-(void)setBoxTensorFilter:(id)arg1;
-(BOOL)stateComputed;
-(BOOL)coefficientsComputed;

@end
