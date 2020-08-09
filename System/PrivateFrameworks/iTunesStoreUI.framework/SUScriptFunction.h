/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WebScriptObject, NSLock, SUScriptObject;

@interface SUScriptFunction : NSObject {

	WebScriptObject* _function;
	NSLock* _lock;
	SUScriptObject* _thisObject;

}

@property (retain) WebScriptObject * scriptObject; 
@property (__weak) id thisObject; 
-(id)init;
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(BOOL)callWithArguments:(id)arg1 ;
-(id)initWithScriptObject:(id)arg1 ;
-(void)setThisObject:(id)arg1 ;
-(WebScriptObject *)scriptObject;
-(void)setScriptObject:(WebScriptObject *)arg1 ;
-(BOOL)callWithArguments:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)callSynchronouslyWithArguments:(id)arg1 ;
-(id)_copyAdjustedArgumentsForArguments:(id)arg1 ;
-(id)thisObject;
@end
