/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVRMSService, NSNetService;

@interface _RMSBonjourService : NSObject {

	BOOL _available;
	TVRMSService* _service;
	NSNetService* _netService;
	long long _state;

}

@property (nonatomic,retain) TVRMSService * service;                         //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) NSNetService * netService;                      //@synthesize netService=_netService - In the implementation block
@property (assign,nonatomic) long long state;                                //@synthesize state=_state - In the implementation block
@property (assign,getter=isAvailable,nonatomic) BOOL available;              //@synthesize available=_available - In the implementation block
-(long long)state;
-(void)setState:(long long)arg1 ;
-(BOOL)isAvailable;
-(void)setAvailable:(BOOL)arg1 ;
-(TVRMSService *)service;
-(void)setService:(TVRMSService *)arg1 ;
-(NSNetService *)netService;
-(void)setNetService:(NSNetService *)arg1 ;
@end

