/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITextField.h>

@interface _MFMailRecipientTextField : UITextField {

	BOOL _isShowingDictationPlaceholder;

}

@property (nonatomic,readonly) BOOL isShowingDictationPlaceholder;              //@synthesize isShowingDictationPlaceholder=_isShowingDictationPlaceholder - In the implementation block
-(void)paste:(id)arg1 ;
-(void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2 ;
-(id)insertDictationResultPlaceholder;
-(id)_previousKeyResponder;
-(void)_handleKeyUIEvent:(id)arg1 ;
-(id)customOverlayContainer;
-(BOOL)isShowingDictationPlaceholder;
@end

