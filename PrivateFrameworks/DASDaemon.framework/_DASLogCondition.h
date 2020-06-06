/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DASDaemon.framework/DASDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSObject;

@interface _DASLogCondition : NSObject {

	BOOL _isIdeal;
	NSObject* _condition;

}

@property (nonatomic,retain) NSObject * condition;              //@synthesize condition=_condition - In the implementation block
@property (assign,nonatomic) BOOL isIdeal;                      //@synthesize isIdeal=_isIdeal - In the implementation block
+(id)withCondition:(id)arg1 ;
-(id)description;
-(NSObject *)condition;
-(void)setCondition:(NSObject *)arg1 ;
-(BOOL)isIdeal;
-(void)setIsIdeal:(BOOL)arg1 ;
@end
