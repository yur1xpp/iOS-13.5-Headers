/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsFeedLayout/NFLSubBatchLayoutTilingOperation.h>

@interface NFLPairSubBatchLayoutTilingOperation : NFLSubBatchLayoutTilingOperation {

	BOOL _preferImageOnSidePairs;

}

@property (assign,nonatomic) BOOL preferImageOnSidePairs;              //@synthesize preferImageOnSidePairs=_preferImageOnSidePairs - In the implementation block
+(unsigned long long)tileInfosUsedCount;
-(BOOL)isReliable;
-(id)rankedLayoutRequests;
-(id)tiledSubBatchLayoutWithRankedLayoutsByTileInfo:(id)arg1 ;
-(BOOL)preferImageOnSidePairs;
-(void)setPreferImageOnSidePairs:(BOOL)arg1 ;
@end
