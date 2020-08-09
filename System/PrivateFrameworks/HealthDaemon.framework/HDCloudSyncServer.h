/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDSubserver.h>
#import <libobjc.A.dylib/HDCloudSyncServerInterface.h>

@class NSString;

@interface HDCloudSyncServer : HDSubserver <HDCloudSyncServerInterface>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)remote_forceCloudSyncWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)remote_forceCloudSyncDataUploadForProfileWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_fetchCloudSyncStatusWithCompletion:(/*^block*/id)arg1 ;
-(id)remote_disableCloudSyncAndDeleteAllCloudDataWithCompletion:(/*^block*/id)arg1 ;
-(id)remote_fetchCloudSyncProgressWithCompletion:(/*^block*/id)arg1 ;
-(id)remote_forceCloudResetWithCompletion:(/*^block*/id)arg1 ;
-(id)remote_fetchCloudDescriptionWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_disableCloudSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_enableCloudSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_accountConfigurationDidChangeWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_oldestSampleStartDateInHealthDatabaseWithCompletion:(/*^block*/id)arg1 ;
@end
