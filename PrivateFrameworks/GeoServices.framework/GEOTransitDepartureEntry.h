/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOTransitDepartureEntry : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _tripMuid;
	unsigned _departureTime;
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasTripMuid; 
@property (assign,nonatomic) unsigned long long tripMuid; 
@property (assign,nonatomic) BOOL hasDepartureTime; 
@property (assign,nonatomic) unsigned departureTime; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned)departureTime;
-(void)setDepartureTime:(unsigned)arg1 ;
-(void)setHasDepartureTime:(BOOL)arg1 ;
-(BOOL)hasDepartureTime;
-(unsigned long long)tripMuid;
-(void)setTripMuid:(unsigned long long)arg1 ;
-(void)setHasTripMuid:(BOOL)arg1 ;
-(BOOL)hasTripMuid;
@end
