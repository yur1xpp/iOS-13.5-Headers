/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class TRIClient, NSObject, TRITaskQueue, TRIControlManager;

@interface TRIDServer : NSObject {

	TRIClient* _client;
	BOOL _isRunning;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	TRITaskQueue* _taskQueue;
	TRIControlManager* _controlManager;

}

@property (readonly) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (readonly) TRITaskQueue * taskQueue;                                //@synthesize taskQueue=_taskQueue - In the implementation block
@property (readonly) TRIControlManager * controlManager;                      //@synthesize controlManager=_controlManager - In the implementation block
@property (readonly) TRIClient * client;                                      //@synthesize client=_client - In the implementation block
@property (readonly) BOOL isRunning;                                          //@synthesize isRunning=_isRunning - In the implementation block
+(id)sharedServer;
-(id)init;
-(BOOL)shouldContinue;
-(void)start;
-(BOOL)isRunning;
-(TRIClient *)client;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(TRITaskQueue *)taskQueue;
-(BOOL)makeDataVaultAtPath:(id)arg1 ;
-(void)updateSystemInfo;
-(void)dispatchIfUnlocked:(/*^block*/id)arg1 ;
-(TRIControlManager *)controlManager;
-(void)asyncStartWithMetrics:(id)arg1 ;
-(void)_registerXpcStreamEventHandler;
-(void)_registerFetchExperimentsActivity;
-(void)_registerPostUpgradeActivity;
-(void)_registerPlaceholderTaskQueueActivity;
-(void)logMetrics:(id)arg1 stopwatch:(id)arg2 ;
-(void)_scheduleDaemonExitWithDelaySeconds:(double)arg1 ;
-(unsigned long long)getDiskUsageInBytes;
@end

