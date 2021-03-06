/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UITextFieldDelegate.h>

@class UILabel, WFTextFieldTableItem, UIStackView, UITextField, NSString;

@interface WFTextFieldTableCell : UITableViewCell <UITextFieldDelegate> {

	UILabel* _textLabel;
	WFTextFieldTableItem* _tableItem;
	UIStackView* _stackView;
	UITextField* _textField;

}

@property (assign,nonatomic,__weak) WFTextFieldTableItem * tableItem;              //@synthesize tableItem=_tableItem - In the implementation block
@property (nonatomic,readonly) UIStackView * stackView;                            //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,readonly) UITextField * textField;                            //@synthesize textField=_textField - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareForReuse;
-(UITextField *)textField;
-(UIStackView *)stackView;
-(void)textDidChange:(id)arg1 ;
-(id)textLabel;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)setTableItem:(WFTextFieldTableItem *)arg1 ;
-(WFTextFieldTableItem *)tableItem;
@end

