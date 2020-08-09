/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BookCoverUtility.framework/BookCoverUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <BookCoverUtility/BookCoverUtility-Structs.h>
@class BCULayerRenderer, BCUCoverEffects, NSObject, NSHashTable;

@interface BCUImageRenderContext : NSObject {

	BCULayerRenderer* _renderer;
	BCUCoverEffects* _coverEffects;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSHashTable* _filterOperations;

}

@property (nonatomic,readonly) BCULayerRenderer * renderer;                           //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,readonly) BCUCoverEffects * coverEffects;                        //@synthesize coverEffects=_coverEffects - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> accessQueue;              //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,retain) NSHashTable * filterOperations;                          //@synthesize filterOperations=_filterOperations - In the implementation block
-(id)init;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(BCULayerRenderer *)renderer;
-(void)filteredImageFromImage:(CGImageRef)arg1 filterInfo:(id)arg2 size:(CGSize)arg3 contentsScale:(double)arg4 completion:(/*^block*/id)arg5 ;
-(BCUCoverEffects *)coverEffects;
-(NSHashTable *)filterOperations;
-(void)setFilterOperations:(NSHashTable *)arg1 ;
@end
