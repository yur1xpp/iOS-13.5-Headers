/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriCore/SiriCore-Structs.h>
#import <SiriCore/SiriCoreDataCompressor.h>

@interface SiriCoreZlibDataCompressor : SiriCoreDataCompressor {

	z_stream_s* _deflateStream;
	unsigned char _deflateBuffer[8192];

}
-(id)init;
-(void)dealloc;
-(id)compressedDataForData:(id)arg1 error:(id*)arg2 ;
@end

