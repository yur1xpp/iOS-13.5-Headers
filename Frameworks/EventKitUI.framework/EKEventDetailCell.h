/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class EKEvent;

@interface EKEventDetailCell : UITableViewCell {

	EKEvent* _event;
	BOOL _editable;
	double _lastLaidOutWidth;
	int _lastLaidOutPosition;

}

@property (nonatomic,readonly) BOOL isEditable; 
+(double)detailsPostLabelSpace;
+(double)detailsTopVerticalInset;
+(double)detailsBottomVerticalInset;
+(double)detailsCellDefaultHeight;
+(id)_bodyFontAtDefaultSize;
+(double)_scaledDistanceCalculatedFromTopFromBaseline:(double)arg1 ;
+(double)_scaledDistanceCalculatedFromBottomToBaseline:(double)arg1 ;
-(void)setEvent:(id)arg1 ;
-(BOOL)update;
-(void)sizeToFit;
-(void)layoutMarginsDidChange;
-(BOOL)isEditable;
-(void)layoutForWidth:(double)arg1 position:(int)arg2 ;
-(id)initWithEvent:(id)arg1 editable:(BOOL)arg2 ;
-(id)initWithEvent:(id)arg1 editable:(BOOL)arg2 style:(long long)arg3 ;
-(double)detailsLeftInset;
-(BOOL)needsLayoutForWidth:(double)arg1 position:(int)arg2 ;
-(double)detailsRightInset;
@end
