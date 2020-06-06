/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOLogMsgStateMuninResource : PBCodable <NSCopying> {

	NSString* _assetBucket;
	unsigned _levelOfDetail;
	struct {
		unsigned has_levelOfDetail : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasAssetBucket; 
@property (nonatomic,retain) NSString * assetBucket; 
@property (assign,nonatomic) BOOL hasLevelOfDetail; 
@property (assign,nonatomic) unsigned levelOfDetail; 
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
-(NSString *)assetBucket;
-(void)setAssetBucket:(NSString *)arg1 ;
-(BOOL)hasAssetBucket;
-(unsigned)levelOfDetail;
-(void)setLevelOfDetail:(unsigned)arg1 ;
-(void)setHasLevelOfDetail:(BOOL)arg1 ;
-(BOOL)hasLevelOfDetail;
@end
