/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, BSEventQueue;

@interface BSEventQueueLock : NSObject {

	BOOL _relinquished;
	NSString* _reason;
	BSEventQueue* _eventQueue;

}

@property (nonatomic,retain) BSEventQueue * eventQueue;              //@synthesize eventQueue=_eventQueue - In the implementation block
@property (nonatomic,copy) NSString * reason;                        //@synthesize reason=_reason - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)reason;
-(void)setReason:(NSString *)arg1 ;
-(void)relinquish;
-(id)initWithEventQueue:(id)arg1 reason:(id)arg2 ;
-(BSEventQueue *)eventQueue;
-(void)setEventQueue:(BSEventQueue *)arg1 ;
@end

