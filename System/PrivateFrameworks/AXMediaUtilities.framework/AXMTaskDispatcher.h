/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue, AXMTaskDispatcherDelegate;
@class NSObject, NSMutableArray;

@interface AXMTaskDispatcher : NSObject {

	NSObject*<OS_dispatch_source> _processQueueSource;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _queue_taskList;
	BOOL _queue_taskIsBeingProcessed;
	id<AXMTaskDispatcherDelegate> _delegate;

}

@property (nonatomic,readonly) long long count; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (assign,nonatomic,__weak) id<AXMTaskDispatcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(long long)count;
-(BOOL)isEmpty;
-(id<AXMTaskDispatcherDelegate>)delegate;
-(void)setDelegate:(id<AXMTaskDispatcherDelegate>)arg1 ;
-(void)scheduleTask:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 delegate:(id)arg2 ;
-(id)unscheduleAllTasks;
-(void)_queue_processNextTask;
-(long long)_queue_count;
-(id)_queue_dequeueTask;
-(void)_queue_scheduleTask:(id)arg1 ;
-(id)_queue_unscheduleAllTasks;
@end

