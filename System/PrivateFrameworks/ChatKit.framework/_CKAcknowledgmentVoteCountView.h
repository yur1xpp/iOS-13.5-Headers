/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIImageView;

@interface _CKAcknowledgmentVoteCountView : UIView {

	UILabel* _voteCountLabel;
	UIImageView* _ackIconImageView;

}

@property (nonatomic,retain) UILabel * voteCountLabel;                    //@synthesize voteCountLabel=_voteCountLabel - In the implementation block
@property (nonatomic,retain) UIImageView * ackIconImageView;              //@synthesize ackIconImageView=_ackIconImageView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)configureWithAcknowledgmentTally:(id)arg1 ;
-(void)setVoteCountLabel:(UILabel *)arg1 ;
-(UILabel *)voteCountLabel;
-(void)setAckIconImageView:(UIImageView *)arg1 ;
-(UIImageView *)ackIconImageView;
@end

