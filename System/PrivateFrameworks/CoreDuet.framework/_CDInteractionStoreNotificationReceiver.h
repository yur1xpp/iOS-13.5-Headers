/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _CDInteractionStoreNotificationReceiver : NSObject {

	int _notifierToken;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)init;
-(void)dealloc;
-(void)postPackedMechanisms:(unsigned long long)arg1 ;
@end

