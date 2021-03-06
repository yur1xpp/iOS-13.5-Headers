/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKitUI/CLKUIAtlas.h>

@protocol MTLTexture, OS_dispatch_queue;
@class NSObject;

@interface CLKUIMetalAtlas : CLKUIAtlas {

	id<MTLTexture> _texture;
	NSObject*<OS_dispatch_queue> _loaderQueue;
	id<MTLTexture> _loaderQueue_prewarmedTexture;
	unsigned long long _mainQueue_prewarmState;

}
+(id)_createMTLTextureWithBacking:(id)arg1 device:(id)arg2 encoder:(id)arg3 ;
-(void)dealloc;
-(void)prewarm;
-(void)purge;
-(id)initWithUuid:(id)arg1 ;
-(void)bind:(id)arg1 slot:(unsigned long long)arg2 ;
@end

