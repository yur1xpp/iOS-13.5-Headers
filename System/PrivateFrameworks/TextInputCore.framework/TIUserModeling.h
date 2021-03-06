/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol TIUserModeling <TITypingSessionAggregatedEventObserver>
@property (nonatomic,readonly) NSArray * keys; 
@required
-(NSArray *)keys;
-(id)valuesForKey:(id)arg1;
-(void)addToDurableCounter:(int)arg1 forKey:(id)arg2;
-(void)addToTransientCounter:(int)arg1 forKey:(id)arg2 andCandidateLength:(int)arg3 andContext:(id)arg4;
-(void)addNumberToTransientCounter:(id)arg1 forKey:(id)arg2 andCandidateLength:(int)arg3 andContext:(id)arg4;

@end

