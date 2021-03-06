/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NotesUI/NotesUI-Structs.h>
@interface ICKeyboardNotificationListener : NSObject {

	CGRect _keyboardFrame;

}

@property (assign,nonatomic) CGRect keyboardFrame;              //@synthesize keyboardFrame=_keyboardFrame - In the implementation block
+(id)sharedListener;
-(id)init;
-(void)dealloc;
-(CGRect)keyboardFrame;
-(CGRect)currentKeyboardFrame;
-(void)handleKeyboardWillShow:(id)arg1 ;
-(void)handleKeyboardWillHide:(id)arg1 ;
-(void)setKeyboardFrame:(CGRect)arg1 ;
@end

