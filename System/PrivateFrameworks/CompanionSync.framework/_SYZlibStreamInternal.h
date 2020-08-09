/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <CompanionSync/_SYStreamGuts.h>
#import <libobjc.A.dylib/NSLocking.h>

@interface _SYZlibStreamInternal : _SYStreamGuts <NSLocking> {

	z_stream_s* _zStream;
	unsigned long long _inputSize;
	unsigned long long _outputSize;
	char* _input;
	char* _output;
	unsigned long long _writeOffset;
	unsigned long long _readOffset;
	os_unfair_lock_s _lock;

}

@property (nonatomic,readonly) long long inputRoom; 
@property (nonatomic,readonly) void* inputPtr; 
@property (nonatomic,readonly) long long outputAvailable; 
@property (nonatomic,readonly) const void* outputPtr; 
-(id)init;
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(void)setInputSize:(long long)arg1 ;
-(void)setOutputSize:(long long)arg1 ;
-(long long)inputRoom;
-(void*)inputPtr;
-(long long)outputAvailable;
-(const void*)outputPtr;
-(void)synchronized:(/*^block*/id)arg1 ;
-(void)setZlibError:(int)arg1 forStream:(id)arg2 ;
-(void)setStatusForStream:(id)arg1 ;
-(long long)writeInputFromBuffer:(const void*)arg1 length:(long long)arg2 ;
-(long long)writeInputFromStream:(id)arg1 ;
-(long long)readOutputToBuffer:(void*)arg1 length:(long long)arg2 ;
-(long long)readOutputToStream:(id)arg1 ;
@end
