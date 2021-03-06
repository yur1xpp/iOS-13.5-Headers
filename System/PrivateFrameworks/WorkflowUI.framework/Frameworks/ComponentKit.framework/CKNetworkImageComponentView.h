/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ComponentKit/ComponentKit-Structs.h>
#import <UIKitCore/UIImageView.h>

@class CKNetworkImageSpecifier;

@interface CKNetworkImageComponentView : UIImageView {

	BOOL _inReusePool;
	id _download;
	CKNetworkImageSpecifier* _specifier;

}

@property (nonatomic,retain) CKNetworkImageSpecifier * specifier;              //@synthesize specifier=_specifier - In the implementation block
-(void)dealloc;
-(CKNetworkImageSpecifier *)specifier;
-(void)layoutSubviews;
-(void)setSpecifier:(CKNetworkImageSpecifier *)arg1 ;
-(void)didEnterReusePool;
-(void)willLeaveReusePool;
-(void)didDownloadImage:(CGImageRef)arg1 error:(id)arg2 ;
-(void)_startDownloadIfNotInReusePool;
-(void)updateContentsRect;
@end

