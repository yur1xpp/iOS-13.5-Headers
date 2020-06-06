/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface HUQuickControlMagnifierView : UIView {

	double _innerRadius;

}

@property (assign,nonatomic) double innerRadius;                   //@synthesize innerRadius=_innerRadius - In the implementation block
@property (nonatomic,retain) UIColor * selectedColor; 
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(double)_outlineWidth;
-(UIColor *)selectedColor;
-(void)setSelectedColor:(UIColor *)arg1 ;
-(void)setInnerRadius:(double)arg1 ;
-(double)innerRadius;
@end
