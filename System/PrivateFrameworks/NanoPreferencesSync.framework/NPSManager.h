/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:58:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NanoPreferencesSync.framework/NanoPreferencesSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection;

@interface NPSManager : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                         //@synthesize xpcConnection=_xpcConnection - In the implementation block
+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id)connection;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)synchronizeUserDefaultsDomain:(id)arg1 keys:(id)arg2 ;
-(void)synchronizeNanoDomain:(id)arg1 keys:(id)arg2 ;
-(void)synchronizeUserDefaultsDomain:(id)arg1 keys:(id)arg2 container:(id)arg3 appGroupContainer:(id)arg4 ;
-(void)unsafe_invalidate;
-(void)synchronizeUserDefaultsDomain:(id)arg1 keys:(id)arg2 cloudEnabled:(BOOL)arg3 ;
-(void)synchronizeUserDefaultsDomain:(id)arg1 keys:(id)arg2 container:(id)arg3 ;
-(void)synchronizeUserDefaultsDomain:(id)arg1 keys:(id)arg2 container:(id)arg3 appGroupContainer:(id)arg4 cloudEnabled:(BOOL)arg5 ;
-(void)synchronizeNanoDomain:(id)arg1 keys:(id)arg2 cloudEnabled:(BOOL)arg3 ;
@end
