/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenshotServices/ScreenshotServices-Structs.h>
#import <UIKitCore/UIControl.h>

@class UISlider, UIImageView;

@interface SSVellumOpacityControl : UIControl {

	UISlider* _slider;
	UIImageView* _leadingImageView;
	UIImageView* _trailingImageView;

}

@property (assign,nonatomic) double value; 
+(double)preferredWidth;
-(double)value;
-(void)setValue:(double)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(id)_leftImageView;
-(id)_rightImageView;
@end
