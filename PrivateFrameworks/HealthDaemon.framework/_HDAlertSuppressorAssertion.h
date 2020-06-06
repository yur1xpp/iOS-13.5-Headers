/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDAssertion.h>

@protocol OS_dispatch_source;
@class NSString, NSObject;

@interface _HDAlertSuppressorAssertion : HDAssertion {

	NSString* _processBundleIdentifier;
	NSObject*<OS_dispatch_source> _keepaliveTimer;

}

@property (nonatomic,copy,readonly) NSString * processBundleIdentifier;                 //@synthesize processBundleIdentifier=_processBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> keepaliveTimer;              //@synthesize keepaliveTimer=_keepaliveTimer - In the implementation block
-(NSString *)processBundleIdentifier;
-(id)initWithOwnerIdentifier:(id)arg1 processBundleIdentifier:(id)arg2 ;
-(NSObject*<OS_dispatch_source>)keepaliveTimer;
-(void)setKeepaliveTimer:(NSObject*<OS_dispatch_source>)arg1 ;
@end
