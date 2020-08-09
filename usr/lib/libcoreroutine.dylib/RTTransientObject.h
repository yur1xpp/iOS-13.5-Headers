/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 8:03:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@protocol RTTransientObjectProtocol;
@class RTTimer, RTTimerManager, NSRecursiveLock;

@interface RTTransientObject : NSProxy {

	id<RTTransientObjectProtocol> _transientObjectDelegate;
	/*^block*/id _backingObjectCreationBlock;
	id _backingObject;
	double _backingObjectExpirationTimeInterval;
	RTTimer* _backingObjectExpirationTimer;
	RTTimerManager* _timerManager;
	NSRecursiveLock* _lock;
	double _lastForwardedMessageTimeInterval;

}

@property (nonatomic,copy) id backingObjectCreationBlock;                                               //@synthesize backingObjectCreationBlock=_backingObjectCreationBlock - In the implementation block
@property (nonatomic,retain) id backingObject;                                                          //@synthesize backingObject=_backingObject - In the implementation block
@property (assign,nonatomic) double backingObjectExpirationTimeInterval;                                //@synthesize backingObjectExpirationTimeInterval=_backingObjectExpirationTimeInterval - In the implementation block
@property (nonatomic,retain) RTTimer * backingObjectExpirationTimer;                                    //@synthesize backingObjectExpirationTimer=_backingObjectExpirationTimer - In the implementation block
@property (nonatomic,retain) RTTimerManager * timerManager;                                             //@synthesize timerManager=_timerManager - In the implementation block
@property (nonatomic,retain) NSRecursiveLock * lock;                                                    //@synthesize lock=_lock - In the implementation block
@property (assign,nonatomic) double lastForwardedMessageTimeInterval;                                   //@synthesize lastForwardedMessageTimeInterval=_lastForwardedMessageTimeInterval - In the implementation block
@property (assign,nonatomic,__weak) id<RTTransientObjectProtocol> transientObjectDelegate;              //@synthesize transientObjectDelegate=_transientObjectDelegate - In the implementation block
-(void)dealloc;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(NSRecursiveLock *)lock;
-(void)touch;
-(void)setLock:(NSRecursiveLock *)arg1 ;
-(id)backingObject;
-(void)setBackingObject:(id)arg1 ;
-(RTTimerManager *)timerManager;
-(void)setTimerManager:(RTTimerManager *)arg1 ;
-(id)initWithCreationBlock:(/*^block*/id)arg1 timeout:(double)arg2 timerManager:(id)arg3 ;
-(id)__createBackingObject;
-(void)__createTimerAssociatedWithBackingObject;
-(void)__handleBackingObjectTimerExpired;
-(void)__invalidateBackingObject;
-(id)initWithCreationBlock:(/*^block*/id)arg1 timeout:(double)arg2 ;
-(id<RTTransientObjectProtocol>)transientObjectDelegate;
-(void)setTransientObjectDelegate:(id<RTTransientObjectProtocol>)arg1 ;
-(id)backingObjectCreationBlock;
-(void)setBackingObjectCreationBlock:(id)arg1 ;
-(double)backingObjectExpirationTimeInterval;
-(void)setBackingObjectExpirationTimeInterval:(double)arg1 ;
-(RTTimer *)backingObjectExpirationTimer;
-(void)setBackingObjectExpirationTimer:(RTTimer *)arg1 ;
-(double)lastForwardedMessageTimeInterval;
-(void)setLastForwardedMessageTimeInterval:(double)arg1 ;
@end
