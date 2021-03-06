/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface SISchemaClientTurnContext : PBCodable <NSCopying> {

	NSData* _turnID;

}

@property (nonatomic,readonly) BOOL hasTurnID; 
@property (nonatomic,retain) NSData * turnID;               //@synthesize turnID=_turnID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)turnID;
-(void)setTurnID:(NSData *)arg1 ;
-(BOOL)hasTurnID;
@end

