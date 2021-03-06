/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>

@class NSSet, NSDictionary;

@interface CKRecordFetchAggregatorOperationInfo : CKDatabaseOperationInfo {

	BOOL _fetchAssetContents;
	BOOL _preserveOrdering;
	BOOL _forceDecryptionAttempt;
	NSSet* _desiredKeys;
	NSDictionary* _assetTransferOptionsByRecordTypeAndKey;

}

@property (assign,nonatomic) BOOL fetchAssetContents;                                            //@synthesize fetchAssetContents=_fetchAssetContents - In the implementation block
@property (assign,nonatomic) BOOL preserveOrdering;                                              //@synthesize preserveOrdering=_preserveOrdering - In the implementation block
@property (nonatomic,retain) NSSet * desiredKeys;                                                //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,retain) NSDictionary * assetTransferOptionsByRecordTypeAndKey;              //@synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey - In the implementation block
@property (assign,nonatomic) BOOL forceDecryptionAttempt;                                        //@synthesize forceDecryptionAttempt=_forceDecryptionAttempt - In the implementation block
-(id)init;
-(void)setDesiredKeys:(NSSet *)arg1 ;
-(NSDictionary *)assetTransferOptionsByRecordTypeAndKey;
-(void)setAssetTransferOptionsByRecordTypeAndKey:(NSDictionary *)arg1 ;
-(NSSet *)desiredKeys;
-(void)setFetchAssetContents:(BOOL)arg1 ;
-(void)setPreserveOrdering:(BOOL)arg1 ;
-(BOOL)fetchAssetContents;
-(BOOL)preserveOrdering;
-(BOOL)forceDecryptionAttempt;
-(void)setForceDecryptionAttempt:(BOOL)arg1 ;
@end

