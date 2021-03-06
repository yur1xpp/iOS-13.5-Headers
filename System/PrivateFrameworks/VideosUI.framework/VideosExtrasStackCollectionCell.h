/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UICollectionViewCell.h>

@class NSArray, VideosExtrasStackTemplateViewController, VideosExtrasGridElementViewController, VideosExtrasGridSectionHeaderStyle;

@interface VideosExtrasStackCollectionCell : UICollectionViewCell {

	NSArray* _fitConstraints;
	BOOL _needsViewWillAppear;
	VideosExtrasStackTemplateViewController* _parentViewController;
	VideosExtrasGridElementViewController* _viewController;
	VideosExtrasGridSectionHeaderStyle* _sectionStyle;

}

@property (nonatomic,retain) VideosExtrasStackTemplateViewController * parentViewController;              //@synthesize parentViewController=_parentViewController - In the implementation block
@property (nonatomic,retain) VideosExtrasGridElementViewController * viewController;                      //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) VideosExtrasGridSectionHeaderStyle * sectionStyle;                         //@synthesize sectionStyle=_sectionStyle - In the implementation block
-(void)setViewController:(VideosExtrasGridElementViewController *)arg1 ;
-(VideosExtrasStackTemplateViewController *)parentViewController;
-(VideosExtrasGridElementViewController *)viewController;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)setParentViewController:(VideosExtrasStackTemplateViewController *)arg1 ;
-(VideosExtrasGridSectionHeaderStyle *)sectionStyle;
@end

