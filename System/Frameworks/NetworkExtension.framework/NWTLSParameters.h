/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSSet;

@interface NWTLSParameters : NSObject {

	NSData* _TLSSessionID;
	NSSet* _SSLCipherSuites;
	unsigned long long _minimumSSLProtocolVersion;
	unsigned long long _maximumSSLProtocolVersion;

}

@property (copy) NSData * TLSSessionID;                                       //@synthesize TLSSessionID=_TLSSessionID - In the implementation block
@property (setter=SLCipherSuites,copy) NSSet * SSLCipherSuites;               //@synthesize SSLCipherSuites=_SSLCipherSuites - In the implementation block
@property (assign) unsigned long long minimumSSLProtocolVersion;              //@synthesize minimumSSLProtocolVersion=_minimumSSLProtocolVersion - In the implementation block
@property (assign) unsigned long long maximumSSLProtocolVersion;              //@synthesize maximumSSLProtocolVersion=_maximumSSLProtocolVersion - In the implementation block
-(NSData *)TLSSessionID;
-(void)setTLSSessionID:(NSData *)arg1 ;
-(NSSet *)SSLCipherSuites;
-(void)setSSLCipherSuites:(NSSet *)arg1 ;
-(void)setMinimumSSLProtocolVersion:(unsigned long long)arg1 ;
-(unsigned long long)minimumSSLProtocolVersion;
-(void)setMaximumSSLProtocolVersion:(unsigned long long)arg1 ;
-(unsigned long long)maximumSSLProtocolVersion;
@end

