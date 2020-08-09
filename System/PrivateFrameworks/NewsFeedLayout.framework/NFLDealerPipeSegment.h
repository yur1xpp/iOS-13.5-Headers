/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFLPipeSegment.h>

@class NFLSubBatchLayout;

@interface NFLDealerPipeSegment : NSObject <NFLPipeSegment> {

	unsigned long long _pipeSegmentType;
	NFLSubBatchLayout* _subBatchLayout;
	/*^block*/id _segmentTypeDescriptionProvider;

}

@property (assign,nonatomic) unsigned long long pipeSegmentType;              //@synthesize pipeSegmentType=_pipeSegmentType - In the implementation block
@property (nonatomic,retain) NFLSubBatchLayout * subBatchLayout;              //@synthesize subBatchLayout=_subBatchLayout - In the implementation block
@property (nonatomic,copy) id segmentTypeDescriptionProvider;                 //@synthesize segmentTypeDescriptionProvider=_segmentTypeDescriptionProvider - In the implementation block
-(id)init;
-(id)description;
-(unsigned long long)pipeSegmentType;
-(void)setPipeSegmentType:(unsigned long long)arg1 ;
-(id)segmentTypeDescriptionProvider;
-(NFLSubBatchLayout *)subBatchLayout;
-(id)initWithSegmentType:(unsigned long long)arg1 subBatchLayout:(id)arg2 segmentTypeDescriptionProvider:(/*^block*/id)arg3 ;
-(void)setSubBatchLayout:(NFLSubBatchLayout *)arg1 ;
-(void)setSegmentTypeDescriptionProvider:(id)arg1 ;
@end
