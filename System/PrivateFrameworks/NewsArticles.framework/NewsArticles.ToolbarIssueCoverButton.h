/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsArticles/NewsArticles-Structs.h>
#import <UIKitCore/UIButton.h>

@interface NewsArticles.ToolbarIssueCoverButton : UIButton {

	 coverView;
	 highlightView;
	 highlightColor;

}

@property (assign,nonatomic) BOOL highlighted; 
@property (assign,nonatomic) CGRect accessibilityFrame; 
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGRect)accessibilityFrame;
-(void)setAccessibilityFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
@end

