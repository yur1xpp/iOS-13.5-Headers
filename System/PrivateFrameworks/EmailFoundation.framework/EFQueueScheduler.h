/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EFScheduler.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface EFQueueScheduler : NSObject <EFScheduler> {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) BOOL prefersImmediateExecution; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithQueue:(id)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)performSyncBlock:(/*^block*/id)arg1 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 ;
-(void)performVoucherPreservingBlock:(/*^block*/id)arg1 ;
-(id)performWithObject:(id)arg1 ;
-(BOOL)prefersImmediateExecution;
@end

