/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableArray, NSMutableDictionary, _UIHIDPathCollection, _UIStateMachine, _UIHIDScaleEventTracker;

@interface _UIHIDTransformer : NSObject {

	NSMutableArray* _hidEvents;
	NSMutableDictionary* _pathCollectionByContextId;
	NSMutableDictionary* _stateMachineByContextId;
	NSMutableDictionary* _scaleEventTrackerByContextId;
	unsigned _contextId;
	IOHIDEventRef _hidEvent;
	CGSize _canvasSize;
	CGAffineTransform _eventTransform;

}

@property (nonatomic,readonly) _UIHIDPathCollection * pathCollection; 
@property (nonatomic,readonly) _UIStateMachine * stateMachine; 
@property (nonatomic,readonly) unsigned long long currentState; 
@property (assign,nonatomic) CGAffineTransform eventTransform;                           //@synthesize eventTransform=_eventTransform - In the implementation block
@property (nonatomic,readonly) _UIHIDScaleEventTracker * scaleEventTracker; 
@property (nonatomic,readonly) IOHIDEventRef hidEvent;                                   //@synthesize hidEvent=_hidEvent - In the implementation block
@property (assign,nonatomic) CGSize canvasSize;                                          //@synthesize canvasSize=_canvasSize - In the implementation block
@property (assign,nonatomic) unsigned contextId;                                         //@synthesize contextId=_contextId - In the implementation block
-(unsigned long long)currentState;
-(unsigned)contextId;
-(_UIStateMachine *)stateMachine;
-(void)setContextId:(unsigned)arg1 ;
-(void)_setupSchemaForStateMachine:(id)arg1 ;
-(IOHIDEventRef)hidEvent;
-(void)addOutputHIDEvent:(id)arg1 ;
-(_UIHIDPathCollection *)pathCollection;
-(_UIHIDScaleEventTracker *)scaleEventTracker;
-(void)setEventTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)eventTransform;
-(id)_inputEventsForHIDEvent:(IOHIDEventRef)arg1 ;
-(id)drainOutputHIDEvents;
-(id)initWithRunLoop:(CFRunLoopRef)arg1 ;
-(id)handleHIDEvent:(IOHIDEventRef)arg1 ;
-(CGSize)canvasSize;
-(void)setCanvasSize:(CGSize)arg1 ;
@end
