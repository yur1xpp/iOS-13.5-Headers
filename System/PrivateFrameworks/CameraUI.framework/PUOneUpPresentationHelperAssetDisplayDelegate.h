/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PUOneUpPresentationHelperAssetDisplayDelegate <NSObject>
@optional
-(id)oneUpPresentationHelper:(id)arg1 currentImageForAssetReference:(id)arg2;
-(void)oneUpPresentationHelper:(id)arg1 shouldDisableScroll:(BOOL)arg2;
-(void)oneUpPresentationHelper:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;
-(void)oneUpPresentationHelper:(id)arg1 shouldHideAssetReferences:(id)arg2;

@required
-(CGRect*)oneUpPresentationHelper:(id)arg1 rectForAssetReference:(id)arg2 cropInsets:(UIEdgeInsets*)arg3 contentsRect:(CGRect*)arg4;

@end

