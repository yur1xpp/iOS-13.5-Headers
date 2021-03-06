/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemProvider.h>

@class HMHome, NSMutableSet;

@interface HFRoomItemProvider : HFItemProvider {

	/*^block*/id _filter;
	HMHome* _home;
	NSMutableSet* _roomItems;

}

@property (nonatomic,retain) NSMutableSet * roomItems;              //@synthesize roomItems=_roomItems - In the implementation block
@property (nonatomic,copy) id filter;                               //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) HMHome * home;                       //@synthesize home=_home - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMHome *)home;
-(id)items;
-(void)setFilter:(id)arg1 ;
-(id)filter;
-(id)initWithHome:(id)arg1 ;
-(id)reloadItems;
-(id)invalidationReasons;
-(NSMutableSet *)roomItems;
-(void)setRoomItems:(NSMutableSet *)arg1 ;
@end

