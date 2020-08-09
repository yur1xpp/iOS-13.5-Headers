/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSAttributedString, UIColor, NSNumber;

@interface LPCaptionPresentationProperties : NSObject {

	NSString* _text;
	NSAttributedString* _attributedText;
	UIColor* _color;
	double _textScale;
	NSNumber* _maximumNumberOfLines;

}

@property (nonatomic,copy) NSString * text;                                  //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText;              //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,retain) UIColor * color;                                //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) double textScale;                               //@synthesize textScale=_textScale - In the implementation block
@property (nonatomic,retain) NSNumber * maximumNumberOfLines;                //@synthesize maximumNumberOfLines=_maximumNumberOfLines - In the implementation block
-(id)init;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSNumber *)maximumNumberOfLines;
-(void)setMaximumNumberOfLines:(NSNumber *)arg1 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedText;
-(void)setTextScale:(double)arg1 ;
-(double)textScale;
@end
