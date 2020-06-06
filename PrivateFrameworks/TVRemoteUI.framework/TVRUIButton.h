/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVRemoteUI/TVRemoteUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/_UICursorInteractionDelegate.h>

@class UILabel, UIImageView, UIViewPropertyAnimator, UIColor, _TVRButtonHaptic, NSString;

@interface TVRUIButton : UIControl <_UICursorInteractionDelegate> {

	BOOL _tapAction;
	BOOL _disableHighlightEffect;
	UILabel* _titleLabel;
	UIImageView* _imageView;
	long long _buttonType;
	UIViewPropertyAnimator* _highlightAnimator;
	UIViewPropertyAnimator* _unhighlightAnimator;
	UIColor* _defaultBackgroundColor;
	_TVRButtonHaptic* _haptic;

}

@property (nonatomic,retain) UIViewPropertyAnimator * highlightAnimator;                                //@synthesize highlightAnimator=_highlightAnimator - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * unhighlightAnimator;                              //@synthesize unhighlightAnimator=_unhighlightAnimator - In the implementation block
@property (nonatomic,retain) UIColor * defaultBackgroundColor;                                          //@synthesize defaultBackgroundColor=_defaultBackgroundColor - In the implementation block
@property (nonatomic,retain) _TVRButtonHaptic * haptic;                                                 //@synthesize haptic=_haptic - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                                   //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) long long buttonType;                                                    //@synthesize buttonType=_buttonType - In the implementation block
@property (getter=hasTapAction,nonatomic,readonly) BOOL tapAction;                                      //@synthesize tapAction=_tapAction - In the implementation block
@property (assign,getter=isHighlightEffectDisabled,nonatomic) BOOL disableHighlightEffect;              //@synthesize disableHighlightEffect=_disableHighlightEffect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isValidButtonType:(long long)arg1 ;
+(BOOL)buttonTypeHasTapAction:(long long)arg1 ;
-(UILabel *)titleLabel;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(long long)buttonType;
-(unsigned long long)_controlEventsForActionTriggered;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setDefaultBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)defaultBackgroundColor;
-(UIViewPropertyAnimator *)highlightAnimator;
-(void)setHighlightAnimator:(UIViewPropertyAnimator *)arg1 ;
-(void)_touchDown:(id)arg1 ;
-(void)_touchUp:(id)arg1 ;
-(UIViewPropertyAnimator *)unhighlightAnimator;
-(BOOL)isHighlightEffectDisabled;
-(void)setUnhighlightAnimator:(UIViewPropertyAnimator *)arg1 ;
-(id)initWithType:(long long)arg1 hasTapAction:(BOOL)arg2 ;
-(BOOL)hasTapAction;
-(void)setDisableHighlightEffect:(BOOL)arg1 ;
-(_TVRButtonHaptic *)haptic;
-(void)setHaptic:(_TVRButtonHaptic *)arg1 ;
@end
