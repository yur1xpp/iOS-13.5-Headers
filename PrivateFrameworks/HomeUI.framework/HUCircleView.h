/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@interface HUCircleView : UIView {

	BOOL _backgroundColorFollowsTintColor;
	BOOL _borderColorFollowsTintColor;

}

@property (assign,nonatomic) BOOL backgroundColorFollowsTintColor;              //@synthesize backgroundColorFollowsTintColor=_backgroundColorFollowsTintColor - In the implementation block
@property (assign,nonatomic) BOOL borderColorFollowsTintColor;                  //@synthesize borderColorFollowsTintColor=_borderColorFollowsTintColor - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(BOOL)backgroundColorFollowsTintColor;
-(void)setBackgroundColorFollowsTintColor:(BOOL)arg1 ;
-(BOOL)borderColorFollowsTintColor;
-(void)setBorderColorFollowsTintColor:(BOOL)arg1 ;
@end
