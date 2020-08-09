/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIFont, UIView;


@protocol WFSlotTemplateTextEntry <WFInputViewMutable,WFInputHintProvider,UITextInput>
@property (assign,nonatomic) BOOL clearsZeroWhenTyping; 
@property (nonatomic,readonly) UIFont * font; 
@property (nonatomic,retain) UIView * inputHintView; 
@required
-(UIFont *)font;
-(void)insertAttributedText:(id)arg1;
-(UIView *)inputHintView;
-(BOOL)clearsZeroWhenTyping;
-(void)setClearsZeroWhenTyping:(BOOL)arg1;
-(void)setInputHintView:(id)arg1;

@end
