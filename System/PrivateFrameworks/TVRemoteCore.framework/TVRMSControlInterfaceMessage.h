/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVRemoteCore/TVRemoteCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TVRMSControlInterfaceMessage : PBCodable <NSCopying> {

	BOOL _supportsDirectionalControl;
	BOOL _supportsSpeakerSelection;
	BOOL _supportsVolumeControl;
	SCD_Struct_TV1 _has;

}

@property (assign,nonatomic) BOOL hasSupportsSpeakerSelection; 
@property (assign,nonatomic) BOOL supportsSpeakerSelection;                   //@synthesize supportsSpeakerSelection=_supportsSpeakerSelection - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsVolumeControl; 
@property (assign,nonatomic) BOOL supportsVolumeControl;                      //@synthesize supportsVolumeControl=_supportsVolumeControl - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsDirectionalControl; 
@property (assign,nonatomic) BOOL supportsDirectionalControl;                 //@synthesize supportsDirectionalControl=_supportsDirectionalControl - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)supportsVolumeControl;
-(void)setSupportsSpeakerSelection:(BOOL)arg1 ;
-(void)setSupportsVolumeControl:(BOOL)arg1 ;
-(void)setSupportsDirectionalControl:(BOOL)arg1 ;
-(void)setHasSupportsSpeakerSelection:(BOOL)arg1 ;
-(BOOL)hasSupportsSpeakerSelection;
-(void)setHasSupportsVolumeControl:(BOOL)arg1 ;
-(BOOL)hasSupportsVolumeControl;
-(void)setHasSupportsDirectionalControl:(BOOL)arg1 ;
-(BOOL)hasSupportsDirectionalControl;
-(BOOL)supportsSpeakerSelection;
-(BOOL)supportsDirectionalControl;
@end

