/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 8:05:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDIDSSocketPairConnectionTCPInfo : PBCodable <NSCopying> {

	unsigned long long _bandwidth;
	unsigned long long _currentRTT;
	unsigned long long _timestamp;
	unsigned _linkType;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasLinkType; 
@property (assign,nonatomic) unsigned linkType;                          //@synthesize linkType=_linkType - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentRTT; 
@property (assign,nonatomic) unsigned long long currentRTT;              //@synthesize currentRTT=_currentRTT - In the implementation block
@property (assign,nonatomic) BOOL hasBandwidth; 
@property (assign,nonatomic) unsigned long long bandwidth;               //@synthesize bandwidth=_bandwidth - In the implementation block
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
-(void)setCurrentRTT:(unsigned long long)arg1 ;
-(void)setHasCurrentRTT:(BOOL)arg1 ;
-(BOOL)hasCurrentRTT;
-(unsigned long long)currentRTT;
-(unsigned)linkType;
-(void)setLinkType:(unsigned)arg1 ;
-(void)setBandwidth:(unsigned long long)arg1 ;
-(unsigned long long)bandwidth;
-(void)setHasLinkType:(BOOL)arg1 ;
-(BOOL)hasLinkType;
-(void)setHasBandwidth:(BOOL)arg1 ;
-(BOOL)hasBandwidth;
@end

