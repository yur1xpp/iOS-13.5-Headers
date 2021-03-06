/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FCCKDatabaseMigrator <NSObject>
@required
-(BOOL)databaseMigrationShouldMigrateEntireZone:(id)arg1 database:(id)arg2;
-(id)databaseMigrationRecordNamesToMigrateInZone:(id)arg1 database:(id)arg2;
-(BOOL)databaseMigrationShouldDropRecord:(id)arg1 database:(id)arg2;
-(id)databaseMigrationMigrateRecord:(id)arg1 database:(id)arg2 error:(id*)arg3;
-(id)databaseMigrationZoneNamesForDatabase:(id)arg1;
-(void)databaseMigrationDidFinishForDatabase:(id)arg1 result:(long long)arg2;

@end

