/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 8:03:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface RTPersistenceExpirationEnforcer : NSObject
-(id)init;
-(id)collectRecordIDsByTypeExpiredBeforeDate:(id)arg1 ownedByThisDevice:(BOOL)arg2 context:(id)arg3 error:(id*)arg4 ;
-(BOOL)removeRecordsOwnedByOtherDevicesExpiredBeforeDate:(id)arg1 allowPropagation:(BOOL)arg2 context:(id)arg3 error:(id*)arg4 ;
-(BOOL)removeExpiredRecordsBeforeDate:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(id)entitiesWithDeviceAndExpirationProperty:(id)arg1 ownedByThisDevice:(BOOL)arg2 ;
-(BOOL)removeExpiredRecordsWithObjectIDs:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(BOOL)repairInvalidExpirationDatesWithContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeRecordsOwnedByThisDeviceExpiredBeforeDate:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
@end

