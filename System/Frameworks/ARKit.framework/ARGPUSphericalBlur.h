/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice, MTLCommandQueue, MTLComputePipelineState;
#import <ARKit/ARKit-Structs.h>
@interface ARGPUSphericalBlur : NSObject {

	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;
	id<MTLComputePipelineState> _cubemapBlurPipelineState;
	BOOL _gpuFamilyAtleast4;

}
-(id)init;
-(id)blurCubemapTexture:(id)arg1 roughness:(id)arg2 rotation:(SCD_Struct_AR24)arg3 ;
@end

