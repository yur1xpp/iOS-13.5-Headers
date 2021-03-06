/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNDArray/MPSNDArray-Structs.h>
#import <MPSNDArray/MPSNDArrayMultiaryKernel.h>

@interface MPSNDArrayUnaryKernel : MPSNDArrayMultiaryKernel

@property (assign,nonatomic) SCD_Struct_MP1 offsets; 
@property (assign,nonatomic) unsigned long long edgeMode; 
@property (assign,nonatomic) SCD_Struct_MP2 kernelSizes; 
@property (assign,nonatomic) SCD_Struct_MP1 strides; 
@property (assign,nonatomic) SCD_Struct_MP2 dilationRates; 
-(SCD_Struct_MP1)strides;
-(void)setEdgeMode:(unsigned long long)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceArray:(id)arg2 ;
-(unsigned long long)edgeMode;
-(SCD_Struct_MP1)offsets;
-(void)setOffsets:(SCD_Struct_MP1)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(SCD_Struct_MP2)kernelSizes;
-(void)setKernelSizes:(SCD_Struct_MP2)arg1 ;
-(void)setStrides:(SCD_Struct_MP1)arg1 ;
-(SCD_Struct_MP2)dilationRates;
-(void)setDilationRates:(SCD_Struct_MP2)arg1 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceArray:(id)arg2 destinationArray:(id)arg3 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceArray:(id)arg2 resultState:(id*)arg3 outputStateIsTemporary:(BOOL)arg4 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceArray:(id)arg2 resultState:(id)arg3 destinationArray:(id)arg4 ;
@end

