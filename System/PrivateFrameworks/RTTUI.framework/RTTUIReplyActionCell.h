/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RTTUI.framework/RTTUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@protocol RTTUIReplyActionCellDelegate;
@interface RTTUIReplyActionCell : UITableViewCell {

	id<RTTUIReplyActionCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RTTUIReplyActionCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<RTTUIReplyActionCellDelegate>)delegate;
-(void)setDelegate:(id<RTTUIReplyActionCellDelegate>)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 andDelegate:(id)arg3 ;
@end

