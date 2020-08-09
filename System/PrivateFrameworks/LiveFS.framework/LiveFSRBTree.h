/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/LiveFS.framework/LiveFS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <LiveFS/LiveFS-Structs.h>
@class NSMutableArray;

@interface LiveFSRBTree : NSObject {

	/*^block*/id ourComparitor;
	rb_tree* btree;
	SCD_Struct_Li1* btOps;
	NSMutableArray* _ourData;

}

@property (retain) NSMutableArray * ourData;              //@synthesize ourData=_ourData - In the implementation block
+(id)newWithComparitor:(/*^block*/id)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(void)addEntry:(long long)arg1 ;
-(id)initWithComparitor:(/*^block*/id)arg1 ;
-(void)addDataBuffer:(id)arg1 ;
-(id)extractItemsInRange:(NSRange)arg1 withBlock:(/*^block*/id)arg2 ;
-(NSMutableArray *)ourData;
-(void)setOurData:(NSMutableArray *)arg1 ;
@end
