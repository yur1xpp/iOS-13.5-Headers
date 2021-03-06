/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVPresentationContainerView.h>

@class AVPlayerViewControllerContentView;

@interface AVPlayerView : AVPresentationContainerView {

	BOOL _needsInitialLayout;
	AVPlayerViewControllerContentView* _contentView;

}

@property (assign,nonatomic) BOOL needsInitialLayout;                                        //@synthesize needsInitialLayout=_needsInitialLayout - In the implementation block
@property (nonatomic,readonly) AVPlayerViewControllerContentView * contentView;              //@synthesize contentView=_contentView - In the implementation block
-(AVPlayerViewControllerContentView *)contentView;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 contentView:(id)arg2 ;
-(void)beginManagingContentView;
-(BOOL)needsInitialLayout;
-(void)setNeedsInitialLayout:(BOOL)arg1 ;
@end

