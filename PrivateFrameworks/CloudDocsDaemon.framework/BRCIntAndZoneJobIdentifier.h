/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/BRCJobIdentifying.h>

@class BRCZoneRowID, NSString;

@interface BRCIntAndZoneJobIdentifier : NSObject <BRCJobIdentifying> {

	long long _intID;
	BRCZoneRowID* _zoneRowID;

}

@property (nonatomic,readonly) long long intID;                       //@synthesize intID=_intID - In the implementation block
@property (nonatomic,readonly) BRCZoneRowID * zoneRowID;              //@synthesize zoneRowID=_zoneRowID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)columns;
-(BRCZoneRowID *)zoneRowID;
-(id)matchingJobsWhereSQLClause;
-(id)columnsValues;
-(id)jobsDescription;
-(id)initWithIntID:(long long)arg1 zoneRowID:(id)arg2 ;
-(long long)intID;
-(BOOL)isEqualToIntAndZoneJobIdentifier:(id)arg1 ;
@end
