/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSUUID, NFTag;

@interface CUNFCDevice : NSObject {

	NSURL* _advertisedURI;
	NSUUID* _identifier;
	NFTag* _tag;

}

@property (nonatomic,retain) NFTag * tag;                      //@synthesize tag=_tag - In the implementation block
@property (nonatomic,copy) NSURL * advertisedURI;              //@synthesize advertisedURI=_advertisedURI - In the implementation block
@property (nonatomic,copy) NSUUID * identifier;                //@synthesize identifier=_identifier - In the implementation block
-(id)description;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NFTag *)tag;
-(void)setTag:(NFTag *)arg1 ;
-(void)setAdvertisedURI:(NSURL *)arg1 ;
-(NSURL *)advertisedURI;
@end
