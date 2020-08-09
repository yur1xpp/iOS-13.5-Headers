/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Silex/Silex-Structs.h>
@class NSMutableArray, NSArray, SXMosaicGalleryCluster, SXMosaicGalleryColumnLayout;

@interface SXMosaicGalleryGroupLayout : NSObject {

	double _height;
	NSMutableArray* _columnRanges;
	NSArray* _frames;
	unsigned long long _numberOfColumns;
	SXMosaicGalleryCluster* _cluster;
	SXMosaicGalleryColumnLayout* _columnLayout;

}

@property (nonatomic,readonly) NSArray * frames;                                        //@synthesize frames=_frames - In the implementation block
@property (nonatomic,readonly) NSMutableArray * columnRanges;                           //@synthesize columnRanges=_columnRanges - In the implementation block
@property (nonatomic,readonly) double height;                                           //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) SXMosaicGalleryCluster * cluster;                        //@synthesize cluster=_cluster - In the implementation block
@property (nonatomic,readonly) SXMosaicGalleryColumnLayout * columnLayout;              //@synthesize columnLayout=_columnLayout - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfColumns;                      //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
-(id)init;
-(double)height;
-(unsigned long long)numberOfColumns;
-(NSArray *)frames;
-(SXMosaicGalleryCluster *)cluster;
-(double)calculateHeight;
-(CGRect)frameForItemAtIndex:(unsigned long long)arg1 ;
-(SXMosaicGalleryColumnLayout *)columnLayout;
-(NSRange)columnRangeForItem:(id)arg1 ;
-(double)desiredHeightForItem:(id)arg1 ;
-(NSMutableArray *)columnRanges;
-(id)calculateFrames;
-(id)initWithCluster:(id)arg1 numberOfColumns:(unsigned long long)arg2 columnLayout:(id)arg3 ;
@end
