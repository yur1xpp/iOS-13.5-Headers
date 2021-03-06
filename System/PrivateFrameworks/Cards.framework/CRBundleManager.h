/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject;

@interface CRBundleManager : NSObject {

	NSMutableSet* _bundles;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
+(id)sharedInstance;
+(Class)bundleClass;
+(id)bundleDirectoryName;
+(id)bundleDirectoryPath;
-(id)init;
-(void)getBundlesWithCompletion:(/*^block*/id)arg1 ;
-(void)_getBundlesOnCurrentQueueWithCompletion:(/*^block*/id)arg1 ;
@end

