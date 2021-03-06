/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UIFont, UILabel, FIUIDividerView, NSString;

@interface FIUIWorkoutSummaryGroundElevationTableViewCell : UITableViewCell {

	UIFont* _labelFont;
	UILabel* _titleLabel;
	UILabel* _minElevationLabel;
	UILabel* _maxElevationLabel;
	FIUIDividerView* _dividerView;
	NSString* _minElevation;
	NSString* _maxElevation;

}
+(double)rowHeight;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_setupUI;
-(void)setMinElevationString:(id)arg1 ;
-(void)setMaxElevationString:(id)arg1 ;
@end

