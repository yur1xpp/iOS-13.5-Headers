/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSHashTable, APSConnection, NSString;

@interface VCCKNotificationCenter : NSObject <APSConnectionDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _observerTable;
	APSConnection* _connection;
	NSString* _topic;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSHashTable * observerTable;                     //@synthesize observerTable=_observerTable - In the implementation block
@property (nonatomic,readonly) APSConnection * connection;                      //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy,readonly) NSString * topic;                           //@synthesize topic=_topic - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)notificationCenterForContainer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setEnabled:(BOOL)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(APSConnection *)connection;
-(BOOL)isEnabled;
-(NSString *)topic;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(id)initWithEnvironment:(id)arg1 ;
-(NSHashTable *)observerTable;
@end
