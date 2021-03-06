/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class REObserverStore, NSObject;

@interface RERelevanceEngineLogger : NSObject {

	REObserverStore* _loggables;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)init;
-(void)addLoggable:(id)arg1 ;
-(void)removeLoggable:(id)arg1 ;
-(void)collectLogs:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)enumerateLoggables:(/*^block*/id)arg1 ;
@end

