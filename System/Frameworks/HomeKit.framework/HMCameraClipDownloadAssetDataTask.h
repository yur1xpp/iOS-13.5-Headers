/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMCameraClipDownloadAssetDataTaskHandling;
#import <HomeKit/HomeKit-Structs.h>
@class NSMutableURLRequest;

@interface HMCameraClipDownloadAssetDataTask : NSObject {

	NSMutableURLRequest* _urlRequest;
	id<HMCameraClipDownloadAssetDataTaskHandling> _handler;

}

@property (readonly) NSMutableURLRequest * urlRequest;                                   //@synthesize urlRequest=_urlRequest - In the implementation block
@property (readonly) id<HMCameraClipDownloadAssetDataTaskHandling> handler;              //@synthesize handler=_handler - In the implementation block
-(id<HMCameraClipDownloadAssetDataTaskHandling>)handler;
-(NSMutableURLRequest *)urlRequest;
-(id)initWithURL:(id)arg1 httpHeaderFields:(id)arg2 ;
-(id)downloadDataForByteRange:(NSRange)arg1 ;
-(id)initWithURL:(id)arg1 httpHeaderFields:(id)arg2 handler:(id)arg3 ;
@end

