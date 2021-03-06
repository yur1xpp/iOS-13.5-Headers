/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface _RESignalScheduledUpdate : NSObject {

	double _interval;
	/*^block*/id _completion;
	NSDate* _lastFireDate;

}

@property (assign,nonatomic) double interval;                    //@synthesize interval=_interval - In the implementation block
@property (nonatomic,copy) id completion;                        //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) NSDate * lastFireDate;              //@synthesize lastFireDate=_lastFireDate - In the implementation block
-(double)interval;
-(void)setInterval:(double)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)setLastFireDate:(NSDate *)arg1 ;
-(NSDate *)lastFireDate;
@end

