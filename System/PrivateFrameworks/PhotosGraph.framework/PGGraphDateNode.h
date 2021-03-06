/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphNode.h>

@class PGGraphSeasonNode;

@interface PGGraphDateNode : PGGraphNode {

	PGGraphSeasonNode* _seasonNode;

}

@property (nonatomic,readonly) PGGraphSeasonNode * seasonNode;              //@synthesize seasonNode=_seasonNode - In the implementation block
@property (readonly) long long day; 
@property (readonly) long long month; 
@property (readonly) long long year; 
+(id)dateNodeForDayNode:(id)arg1 monthNode:(id)arg2 yearNode:(id)arg3 ;
-(long long)year;
-(long long)month;
-(long long)day;
-(id)associatedNodesForRemoval;
-(void)enumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)localDate;
-(void)enumerateHolidayNodesUsingBlock:(/*^block*/id)arg1 ;
-(PGGraphSeasonNode *)seasonNode;
-(id)sameWeekDateNodes;
-(id)lastWeekDateNodes;
@end

