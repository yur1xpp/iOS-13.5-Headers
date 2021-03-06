/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 8:04:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/DataClassMigrators/DAAccount.migrator/DAAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@interface DAAccountMigrator : DataClassMigrator
+(BOOL)_isEnterpriseCalendarAccount:(id)arg1 ;
-(BOOL)performMigration;
-(float)migrationProgress;
-(float)estimatedDuration;
-(void)_cleanupDuplicateDelegateAccounts;
-(void)_migrateDelegateAccounts;
-(void)_moveExchangeCredentialsToAppleAccessGroup;
-(void)_updateFacebookAccountAuthenticationTypes;
-(void)_upgradeDAAccounts;
-(void)_writeDeviceSpecificID;
-(void)_migrateCDBPreferences;
-(void)_notifyDaHolidaySubCalAccount;
-(id)dataClassName;
@end

