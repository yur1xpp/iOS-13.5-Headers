/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/FigCaptureSinkPipeline.h>

@class BWRemoteQueueSinkNode;

@interface FigCaptureRemoteQueueSinkPipeline : FigCaptureSinkPipeline {

	BWRemoteQueueSinkNode* _sinkNode;

}

@property (nonatomic,readonly) BWRemoteQueueSinkNode * sinkNode;              //@synthesize sinkNode=_sinkNode - In the implementation block
-(void)dealloc;
-(void)setSinkNode:(BWRemoteQueueSinkNode *)arg1 ;
-(BWRemoteQueueSinkNode *)sinkNode;
@end

