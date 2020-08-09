/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSServiceConnectionListenerDelegate.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol OS_dispatch_queue, OS_xpc_object;
@class BSAtomicSignal, BSServiceConnectionListener, NSObject, NSMutableSet, FBSDisplayLayout, NSHashTable, NSMutableOrderedSet, FBSDisplayConfiguration, NSString;

@interface FBSDisplayLayoutPublisher : NSObject <BSServiceConnectionListenerDelegate, BSInvalidatable> {

	BSAtomicSignal* _invalidatedSignal;
	BSServiceConnectionListener* _listener;
	NSObject*<OS_dispatch_queue> _queuesByQOS[3];
	NSObject*<OS_xpc_object> _queues_xLayoutByQOS[3];
	NSMutableSet* _queues_connectionsByQOS[3];
	FBSDisplayLayout* _mutableLayout;
	NSMutableSet* _mutableElementKeys;
	NSHashTable* _observers;
	NSObject*<OS_xpc_object> _xLayout;
	FBSDisplayLayout* _currentLayout;
	NSMutableOrderedSet* _transitionReasons;
	unsigned long long _transitionsCount;
	BOOL _dirty;

}

@property (nonatomic,copy) FBSDisplayConfiguration * displayConfiguration; 
@property (assign,nonatomic) long long interfaceOrientation; 
@property (assign,nonatomic) long long backlightLevel; 
@property (getter=isTransitioning,nonatomic,readonly) BOOL transitioning; 
@property (nonatomic,readonly) FBSDisplayLayout * currentLayout; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)publisherWithConfiguration:(id)arg1 ;
-(id)init;
-(void)invalidate;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)flush;
-(id)_initWithConfiguration:(id)arg1 ;
-(id)addElement:(id)arg1 ;
-(long long)interfaceOrientation;
-(void)activate;
-(FBSDisplayLayout *)currentLayout;
-(FBSDisplayConfiguration *)displayConfiguration;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(void)setDisplayConfiguration:(FBSDisplayConfiguration *)arg1 ;
-(BOOL)isTransitioning;
-(void)setBacklightLevel:(long long)arg1 ;
-(long long)backlightLevel;
-(void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3 ;
-(id)_addElement:(id)arg1 forKey:(id)arg2 ;
-(id)transitionAssertionWithReason:(id)arg1 ;
@end
