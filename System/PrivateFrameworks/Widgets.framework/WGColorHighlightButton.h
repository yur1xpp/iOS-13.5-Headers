/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Widgets/Widgets-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIColor;

@interface WGColorHighlightButton : UIButton {

	UIColor* _savedBackgroundColor;
	UIColor* _highlightedBackgroundColor;

}

@property (nonatomic,retain) UIColor * savedBackgroundColor;                    //@synthesize savedBackgroundColor=_savedBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightedBackgroundColor;              //@synthesize highlightedBackgroundColor=_highlightedBackgroundColor - In the implementation block
-(void)setBackgroundColor:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIColor *)highlightedBackgroundColor;
-(void)setHighlightedBackgroundColor:(UIColor *)arg1 ;
-(void)_updateRealBackgroundColor;
-(void)setSavedBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)savedBackgroundColor;
@end

