/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/KeyboardArbiter.framework/KeyboardArbiter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIDelayedAction.h>

@class NSDate;

@interface UIHeldAction : UIDelayedAction {

	BOOL _holding;
	NSDate* _holdBegan;
	double _baseDelay;
	double _timeBalance;

}
-(void)cancel;
-(void)resume;
-(BOOL)isHolding;
-(void)hold;
-(void)unschedule;
-(void)touchWithDelay:(double)arg1 ;
@end
