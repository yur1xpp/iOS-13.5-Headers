/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 8:06:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIAlertView.h>
#import <UIKit/UIAlertViewDelegate.h>

@class NSString;

@interface ACMAlertView : UIAlertView <UIAlertViewDelegate> {

	id _acmAlertViewDelegate;
	/*^block*/id _completionBlock;

}

@property (nonatomic,copy) id completionBlock;                                         //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign) id<acmAlertViewDelegateProtocol> acmAlertViewDelegate;              //@synthesize acmAlertViewDelegate=_acmAlertViewDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)dismissAlert;
-(void)showWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setAcmAlertViewDelegate:(id<acmAlertViewDelegateProtocol>)arg1 ;
-(id<acmAlertViewDelegateProtocol>)acmAlertViewDelegate;
@end

