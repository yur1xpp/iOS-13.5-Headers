/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class BPSRemoveMigrationWatchView, BPSCheckMarkView, UILabel;

@interface BPSMultipleWatchMigrationViewCell : UITableViewCell {

	BPSRemoveMigrationWatchView* _watchView;
	BPSCheckMarkView* _checkmarkView;
	UILabel* _deviceDetailLabel;

}

@property (nonatomic,retain) BPSRemoveMigrationWatchView * watchView;              //@synthesize watchView=_watchView - In the implementation block
@property (nonatomic,retain) BPSCheckMarkView * checkmarkView;                     //@synthesize checkmarkView=_checkmarkView - In the implementation block
@property (nonatomic,retain) UILabel * deviceDetailLabel;                          //@synthesize deviceDetailLabel=_deviceDetailLabel - In the implementation block
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BPSCheckMarkView *)checkmarkView;
-(void)setCheckmarkView:(BPSCheckMarkView *)arg1 ;
-(BPSRemoveMigrationWatchView *)watchView;
-(void)setWatchView:(BPSRemoveMigrationWatchView *)arg1 ;
-(UILabel *)deviceDetailLabel;
-(void)setDeviceDetailLabel:(UILabel *)arg1 ;
@end
