/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol MTLRenderPipelineState <NSObject>
@property (readonly) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup; 
@property (readonly) BOOL threadgroupSizeMatchesTileSize; 
@property (readonly) unsigned long long imageblockSampleLength; 
@property (readonly) BOOL supportIndirectCommandBuffers; 
@required
-(id<MTLDevice>)device;
-(unsigned long long)maxTotalThreadsPerThreadgroup;
-(NSString *)label;
-(unsigned long long)imageblockSampleLength;
-(unsigned long long)imageblockMemoryLengthForDimensions:(SCD_Struct_MT11)arg1;
-(BOOL)supportIndirectCommandBuffers;
-(BOOL)threadgroupSizeMatchesTileSize;

@end
