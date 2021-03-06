/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@interface QLDelegateProxy : NSProxy {

	id _firstDelegate;
	id _secondDelegate;

}

@property (__weak) id firstDelegate;               //@synthesize firstDelegate=_firstDelegate - In the implementation block
@property (__weak) id secondDelegate;              //@synthesize secondDelegate=_secondDelegate - In the implementation block
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)setSecondDelegate:(id)arg1 ;
-(void)setFirstDelegate:(id)arg1 ;
-(id)firstDelegate;
-(id)secondDelegate;
@end

