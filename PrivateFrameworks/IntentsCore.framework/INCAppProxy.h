/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class INCExtensionConnection;

@interface INCAppProxy : NSObject {

	INCExtensionConnection* _connection;

}

@property (nonatomic,__weak,readonly) INCExtensionConnection * _connection;              //@synthesize connection=_connection - In the implementation block
+(void)initialize;
+(BOOL)shouldLaunchAppInBackgroundWithIntent:(id)arg1 intentResponse:(id)arg2 ;
-(INCExtensionConnection *)_connection;
-(id)_initWithConnection:(id)arg1 ;
-(void)launchAppInBackground:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)launchAppInBackground:(BOOL)arg1 restrictAppsToCarPlay:(BOOL)arg2 userActivityIdentifier:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end
