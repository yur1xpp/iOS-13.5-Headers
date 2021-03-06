/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CNFRegAccountWebViewController.h>

@protocol CNFRegCreateAccountControllerDelegate;
@interface CNFRegCreateAccountController : CNFRegAccountWebViewController {

	id<CNFRegCreateAccountControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<CNFRegCreateAccountControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<CNFRegCreateAccountControllerDelegate>)delegate;
-(void)setDelegate:(id<CNFRegCreateAccountControllerDelegate>)arg1 ;
-(id)bagKey;
-(id)logName;
-(void)cancelTapped;
-(void)completeHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4 ;
@end

