/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 8:05:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDPowerAppBBMetrics : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSMutableArray* _appPowers;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * appPowers;                //@synthesize appPowers=_appPowers - In the implementation block
+(Class)appPowerType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setAppPowers:(NSMutableArray *)arg1 ;
-(void)addAppPower:(id)arg1 ;
-(unsigned long long)appPowersCount;
-(void)clearAppPowers;
-(id)appPowerAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)appPowers;
@end

