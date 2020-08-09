/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@interface _UIContextMenuAccessoryView : UIView {

	unsigned long long _location;
	unsigned long long _trackingAxis;
	NSRange _anchor;
	CGPoint _offset;

}

@property (assign,nonatomic) unsigned long long location;                  //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) NSRange anchor;                               //@synthesize anchor=_anchor - In the implementation block
@property (assign,nonatomic) CGPoint offset;                               //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) unsigned long long trackingAxis;              //@synthesize trackingAxis=_trackingAxis - In the implementation block
-(unsigned long long)location;
-(void)setOffset:(CGPoint)arg1 ;
-(CGPoint)offset;
-(void)setLocation:(unsigned long long)arg1 ;
-(void)setVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(unsigned long long)trackingAxis;
-(NSRange)anchor;
-(id)initWithFrame:(CGRect)arg1 configuration:(SCD_Struct_UI91)arg2 ;
-(void)setAnchor:(NSRange)arg1 ;
-(CGPoint)attachmentOffsetWithReferenceFrame:(CGRect)arg1 ;
-(void)setTrackingAxis:(unsigned long long)arg1 ;
@end
