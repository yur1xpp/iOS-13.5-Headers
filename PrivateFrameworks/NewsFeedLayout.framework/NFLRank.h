/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NFLRank : NSObject {

	double _rank;
	long long _rankWeight;

}

@property (assign,nonatomic) double rank;                       //@synthesize rank=_rank - In the implementation block
@property (assign,nonatomic) long long rankWeight;              //@synthesize rankWeight=_rankWeight - In the implementation block
+(id)rankWithRank:(double)arg1 rankWeight:(long long)arg2 ;
-(id)description;
-(void)setRank:(double)arg1 ;
-(double)rank;
-(void)setRankWeight:(long long)arg1 ;
-(long long)rankWeight;
@end
