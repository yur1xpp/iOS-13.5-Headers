/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableData, NSData;

@interface TVRMSDAAPEncoder : NSObject {

	NSMutableData* _data;

}

@property (nonatomic,readonly) NSData * data;              //@synthesize data=_data - In the implementation block
-(id)init;
-(NSData *)data;
-(void)encodeString:(id)arg1 forCode:(unsigned)arg2 ;
-(void)encodeData:(id)arg1 forCode:(unsigned)arg2 ;
-(void)encodeBytes:(const char*)arg1 length:(unsigned long long)arg2 forCode:(unsigned)arg3 ;
-(void)encodeInt32:(int)arg1 forCode:(unsigned)arg2 ;
-(void)encodeInt64:(long long)arg1 forCode:(unsigned)arg2 ;
@end
