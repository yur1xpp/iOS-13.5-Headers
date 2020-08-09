/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Widgets/Widgets-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/MTMaterialGrouping.h>

@class MTMaterialView, UILabel, BSUIFontProvider, NSString;

@interface WGShortLookStyleButton : UIControl <MTMaterialGrouping> {

	MTMaterialView* _backgroundView;
	UILabel* _titleLabel;
	BSUIFontProvider* _fontProvider;
	CGSize _size;
	BOOL _backgroundBlurred;

}

@property (nonatomic,copy) NSString * title; 
@property (assign,getter=isBackgroundBlurred,nonatomic) BOOL backgroundBlurred;              //@synthesize backgroundBlurred=_backgroundBlurred - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * materialGroupNameBase; 
-(CGSize)_size;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_updateHighlight;
-(NSString *)materialGroupNameBase;
-(void)setMaterialGroupNameBase:(NSString *)arg1 ;
-(void)setBackgroundBlurred:(BOOL)arg1 ;
-(BOOL)isBackgroundBlurred;
-(id)fontForTitle:(id)arg1 ;
-(void)_updateTitleLabelFont;
-(void)_configureBackgroundViewIfNecessary;
-(double)_backgroundViewCornerRadius;
-(void)_setBackgroundViewCornerRadius:(double)arg1 ;
-(void)_configureTitleLabelIfNecessary;
-(void)invalidateCachedGeometry;
-(void)_layoutTitleLabel;
-(void)_configureMaskIfNecessary;
-(void)_updateTouchInsetsIfNecessary;
-(id)_fontProvider;
@end
