/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <Celestial/Celestial-Structs.h>
@class BWPixelBufferPool, NSObject;

@interface BWDeferredContainerPixelBufferPoolWrapper : NSObject {

	BWPixelBufferPool* _pool;
	NSObject*<OS_dispatch_semaphore> _semaphore;

}
-(void)dealloc;
-(void)signal;
-(CVBufferRef)newPixelBuffer;
-(id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 ;
@end

