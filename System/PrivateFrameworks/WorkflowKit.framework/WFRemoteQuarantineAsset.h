/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFCloudKitItem.h>

@class CKRecordID, WFFileRepresentation, NSString;

@interface WFRemoteQuarantineAsset : NSObject <WFCloudKitItem> {

	CKRecordID* identifier;
	long long _compatibilityVersion;
	long long _contentVersion;
	WFFileRepresentation* _assetDataFile;
	NSString* _configuration;

}

@property (assign,nonatomic) long long compatibilityVersion;                    //@synthesize compatibilityVersion=_compatibilityVersion - In the implementation block
@property (assign,nonatomic) long long contentVersion;                          //@synthesize contentVersion=_contentVersion - In the implementation block
@property (nonatomic,retain) WFFileRepresentation * assetDataFile;              //@synthesize assetDataFile=_assetDataFile - In the implementation block
@property (nonatomic,copy) NSString * configuration;                            //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CKRecordID * identifier; 
+(id)properties;
+(id)recordType;
-(CKRecordID *)identifier;
-(long long)compatibilityVersion;
-(void)setConfiguration:(NSString *)arg1 ;
-(NSString *)configuration;
-(void)setCompatibilityVersion:(long long)arg1 ;
-(long long)contentVersion;
-(void)setContentVersion:(long long)arg1 ;
-(WFFileRepresentation *)assetDataFile;
-(void)setAssetDataFile:(WFFileRepresentation *)arg1 ;
@end
