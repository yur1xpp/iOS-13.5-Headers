/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSAlternateHeadline : PBCodable <NSCopying> {

	int _articleHeadlineTreatmentId;
	int _articleHeadlineTreatmentState;
	SCD_Struct_NT2 _has;

}

@property (assign,nonatomic) BOOL hasArticleHeadlineTreatmentState; 
@property (assign,nonatomic) int articleHeadlineTreatmentState;                  //@synthesize articleHeadlineTreatmentState=_articleHeadlineTreatmentState - In the implementation block
@property (assign,nonatomic) BOOL hasArticleHeadlineTreatmentId; 
@property (assign,nonatomic) int articleHeadlineTreatmentId;                     //@synthesize articleHeadlineTreatmentId=_articleHeadlineTreatmentId - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)articleHeadlineTreatmentState;
-(void)setArticleHeadlineTreatmentState:(int)arg1 ;
-(void)setHasArticleHeadlineTreatmentState:(BOOL)arg1 ;
-(BOOL)hasArticleHeadlineTreatmentState;
-(void)setArticleHeadlineTreatmentId:(int)arg1 ;
-(void)setHasArticleHeadlineTreatmentId:(BOOL)arg1 ;
-(BOOL)hasArticleHeadlineTreatmentId;
-(int)articleHeadlineTreatmentId;
-(id)articleHeadlineTreatmentStateAsString:(int)arg1 ;
-(int)StringAsArticleHeadlineTreatmentState:(id)arg1 ;
@end
