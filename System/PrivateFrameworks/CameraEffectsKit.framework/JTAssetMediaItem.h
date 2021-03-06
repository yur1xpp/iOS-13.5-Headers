/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <CameraEffectsKit/JTLocalAssetMediaItem.h>

@class PHAsset, NSString, NSURL;

@interface JTAssetMediaItem : JTLocalAssetMediaItem {

	PHAsset* _asset;
	NSString* _assetIdentifier;
	NSString* _masterFingerprint;
	NSString* _adjustedFingerprint;
	NSURL* _assetLocalURL;

}

@property (nonatomic,copy) NSString * assetIdentifier;                  //@synthesize assetIdentifier=_assetIdentifier - In the implementation block
@property (nonatomic,copy) NSString * masterFingerprint;                //@synthesize masterFingerprint=_masterFingerprint - In the implementation block
@property (nonatomic,copy) NSString * adjustedFingerprint;              //@synthesize adjustedFingerprint=_adjustedFingerprint - In the implementation block
@property (nonatomic,retain) PHAsset * asset;                           //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) NSURL * assetLocalURL;                     //@synthesize assetLocalURL=_assetLocalURL - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)info;
-(PHAsset *)asset;
-(void)setAsset:(PHAsset *)arg1 ;
-(void)cancelDownload;
-(void)setMasterFingerprint:(NSString *)arg1 ;
-(void)setAssetIdentifier:(NSString *)arg1 ;
-(NSString *)assetIdentifier;
-(NSString *)masterFingerprint;
-(id)initWithAssetIdentifier:(id)arg1 ;
-(id)initWithInfo:(id)arg1 delegate:(id)arg2 ;
-(NSURL *)assetLocalURL;
-(void)setAssetLocalURL:(NSURL *)arg1 ;
-(void)checkIfAssetIsMissing;
-(void)fetchAssetForce:(BOOL)arg1 ;
-(void)setAdjustedFingerprint:(NSString *)arg1 ;
-(NSString *)adjustedFingerprint;
-(void)downloadAssetsWithProgressHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)reloadAsset;
@end

