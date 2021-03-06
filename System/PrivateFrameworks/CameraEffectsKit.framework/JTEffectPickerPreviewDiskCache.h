/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface JTEffectPickerPreviewDiskCache : NSObject {

	NSString* _cacheDirectoryPath;

}

@property (nonatomic,readonly) NSString * cacheDirectoryPath;              //@synthesize cacheDirectoryPath=_cacheDirectoryPath - In the implementation block
+(id)createCacheAtDirectory:(id)arg1 ;
+(id)cachedPathForEffect:(id)arg1 directoryPath:(id)arg2 ;
-(NSString *)cacheDirectoryPath;
-(id)initWithDirectory:(id)arg1 ;
-(BOOL)hasPreviewForEffectID:(id)arg1 ;
-(void)previewForEffectID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)savePreviewForEffectID:(id)arg1 image:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

