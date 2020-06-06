/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface HKBorderLineView : UIView {

	long long _edges;
	double _borderWidth;
	UIColor* _borderLineColor;
	double _minimumHeight;
	double _minimumWidth;
	UIEdgeInsets _borderInsets;

}

@property (assign,nonatomic) long long edges;                        //@synthesize edges=_edges - In the implementation block
@property (assign,nonatomic) double borderWidth;                     //@synthesize borderWidth=_borderWidth - In the implementation block
@property (nonatomic,retain) UIColor * borderLineColor;              //@synthesize borderLineColor=_borderLineColor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets borderInsets;              //@synthesize borderInsets=_borderInsets - In the implementation block
@property (assign,nonatomic) double minimumHeight;                   //@synthesize minimumHeight=_minimumHeight - In the implementation block
@property (assign,nonatomic) double minimumWidth;                    //@synthesize minimumWidth=_minimumWidth - In the implementation block
+(void)drawBorderLinesInContext:(CGContextRef)arg1 bounds:(CGRect)arg2 borderEdges:(long long)arg3 borderLineWidth:(double)arg4 borderLineColor:(id)arg5 borderInsets:(UIEdgeInsets)arg6 ;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)minimumWidth;
-(double)borderWidth;
-(void)setBorderWidth:(double)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setMinimumWidth:(double)arg1 ;
-(double)minimumHeight;
-(void)setMinimumHeight:(double)arg1 ;
-(long long)edges;
-(void)setEdges:(long long)arg1 ;
-(UIEdgeInsets)borderInsets;
-(void)setBorderInsets:(UIEdgeInsets)arg1 ;
-(void)_initFields;
-(UIColor *)borderLineColor;
-(void)setBorderLineColor:(UIColor *)arg1 ;
@end
