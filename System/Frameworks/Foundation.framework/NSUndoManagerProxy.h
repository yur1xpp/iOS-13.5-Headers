/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@class NSUndoManager;

@interface NSUndoManagerProxy : NSProxy {

	NSUndoManager* _manager;
	Class _targetClass;

}
-(BOOL)isKindOfClass:(Class)arg1 ;
-(id)retain;
-(oneway void)release;
-(BOOL)_tryRetain;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithManager:(id)arg1 ;
-(void)setTargetClass:(Class)arg1 ;
-(void)superRelease;
@end

