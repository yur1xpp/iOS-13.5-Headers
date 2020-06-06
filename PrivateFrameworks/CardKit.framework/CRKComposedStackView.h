/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CardKit/CardKit-Structs.h>
#import <CardKit/CRKComposedView.h>

@class NSMutableArray;

@interface CRKComposedStackView : CRKComposedView {

	NSMutableArray* _keylines;
	unsigned long long _direction;

}

@property (assign,nonatomic) unsigned long long direction;              //@synthesize direction=_direction - In the implementation block
-(unsigned long long)direction;
-(void)setDirection:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)_updateLayout;
-(void)setCardSectionSubviews:(id)arg1 ;
-(void)addCardSectionSubview:(id)arg1 withKeyline:(long long)arg2 ;
-(void)cardSectionSubviewWantsToBeRemovedFromHierarchy:(id)arg1 ;
-(void)setDirection:(unsigned long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)triggerLayoutAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(UIEdgeInsets)templatedContentMargins;
@end
