/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DDSAssetProviding <NSObject>
@property (nonatomic,retain) id<DDSAssetProvidingDelegate> delegate; 
@required
-(id<DDSAssetProvidingDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(id)contentItemsFromAssets:(id)arg1 matchingFilter:(id)arg2;
-(id)assetsForQuery:(id)arg1 errorPtr:(id*)arg2;
-(void)beginDownloadForAssertions:(id)arg1;
-(id)allContentItemsMatchingQuery:(id)arg1 error:(id*)arg2;
-(void)updateCatalogForAssetTypes:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)removeAssetsForAssertions:(id)arg1;
-(void)removeOldAssetsForAssertions:(id)arg1;

@end
