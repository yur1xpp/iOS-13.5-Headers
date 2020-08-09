/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallHistory/CHLogger.h>

@interface GateKeeper : CHLogger {

	BOOL _hasDeviceBeenUnlockedSinceBoot;

}

@property (assign) BOOL hasDeviceBeenUnlockedSinceBoot;              //@synthesize hasDeviceBeenUnlockedSinceBoot=_hasDeviceBeenUnlockedSinceBoot - In the implementation block
+(id)instance;
-(id)init;
-(void)reFetch;
-(BOOL)hasDeviceBeenUnlockedSinceBoot;
-(void)setupMobileKeyBag;
-(void)cacheUnlockSinceBootState;
-(void)setHasDeviceBeenUnlockedSinceBoot:(BOOL)arg1 ;
@end
