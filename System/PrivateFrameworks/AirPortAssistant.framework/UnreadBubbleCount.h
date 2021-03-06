/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <UIKitCore/UIView.h>

@interface UnreadBubbleCount : UIView {

	CGSize _textSize;
	BOOL _isSelected;
	long long _count;

}

@property (assign,nonatomic) long long count;              //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) BOOL isSelected;              //@synthesize isSelected=_isSelected - In the implementation block
+(int)initImageCache;
+(void)deallocImageCache;
-(void)dealloc;
-(long long)count;
-(void)setCount:(long long)arg1 ;
-(BOOL)isSelected;
-(void)setIsSelected:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)calculateTextMetrics;
@end

