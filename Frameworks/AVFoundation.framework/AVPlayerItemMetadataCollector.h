/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVPlayerItemMediaDataCollector.h>

@class AVPlayerItemMetadataCollectorInternal;

@interface AVPlayerItemMetadataCollector : AVPlayerItemMediaDataCollector {

	AVPlayerItemMetadataCollectorInternal* _metadataCollectorInternal;

}

@property (nonatomic,__weak,readonly) id<AVPlayerItemMetadataCollectorPushDelegate> delegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue; 
-(id)init;
-(void)dealloc;
-(id<AVPlayerItemMetadataCollectorPushDelegate>)delegate;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(id)initWithIdentifiers:(id)arg1 classifyingLabels:(id)arg2 ;
-(BOOL)_attachToPlayerItem:(id)arg1 ;
-(void)_detatchFromPlayerItem;
-(void)_updateTaggedRangeMetadataArray:(id)arg1 ;
-(id)_getFilteredMetadataGroups:(id)arg1 fromIdentifiers:(id)arg2 andClassifyingLabels:(id)arg3 modifiedIndexesOut:(id*)arg4 newIndexesOut:(id*)arg5 ;
-(BOOL)_isAttachedToPlayerItem;
@end
