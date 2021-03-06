/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface VCTransportStream : NSObject {

	unsigned _transportSessionID;
	int _vtpReceiveSocket;
	int _vtpCancelSocket;
	tagVCMediaQueueRef _mediaQueue;
	/*^block*/id _callback;
	void* _callbackContext;
	int _vtpCallbackId;
	fd_set _readFDsForCallback;

}

@property (assign,nonatomic) tagVCMediaQueueRef mediaQueue;              //@synthesize mediaQueue=_mediaQueue - In the implementation block
-(void)dealloc;
-(tagVCMediaQueueRef)mediaQueue;
-(int)receivePacket:(SCD_Struct_VC162*)arg1 ;
-(void)setMediaQueue:(tagVCMediaQueueRef)arg1 ;
-(id)initWithTransportSessionID:(unsigned)arg1 options:(id)arg2 ;
-(int)VCTransportStreamSendPacket:(SCD_Struct_VC162*)arg1 ;
-(int)registerPacketCallbackContext:(void*)arg1 callback:(/*^block*/id)arg2 ;
-(void)VCTransportStreamUnblock;
-(int)unregisterPacketCallback;
-(void)processVTPPacket:(VTPPacket*)arg1 ;
@end

