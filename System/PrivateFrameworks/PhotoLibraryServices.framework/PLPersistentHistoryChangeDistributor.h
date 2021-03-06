/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSPersistentStoreCoordinator, PLCoreDataChangeMerger, NSObject, NSPersistentHistoryToken;

@interface PLPersistentHistoryChangeDistributor : NSObject {

	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	PLCoreDataChangeMerger* _changeMerger;
	NSObject*<OS_dispatch_queue> _notifyQueue;
	NSPersistentHistoryToken* _lastToken;
	int _notifyToken;

}
-(void)dealloc;
-(void)invalidate;
-(id)initWithPersistentStoreCoordinator:(id)arg1 changeMerger:(id)arg2 ;
-(void)startObservingRemoteNotifications;
-(void)_inq_startObservingRemoteNotifications;
-(void)stopObservingRemoteNotifications;
-(void)_inq_stopObservingRemoteNotifications;
-(void)distributeNewTransactionsSinceLastToken;
-(id)fetchTransactionsSinceLastToken;
-(id)makeManagedObjectContext;
-(void)forceUserInterfaceReload;
-(void)distributeTransactions:(id)arg1 ;
-(id)localEventFromTransactions:(id)arg1 ;
@end

