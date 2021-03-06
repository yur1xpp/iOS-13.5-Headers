/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOToolProxy
@required
-(id)ping;
-(void)unlockDBs;
-(void)lockDBs;
-(id)getDefault:(id)arg1 source:(long long*)arg2;
-(unsigned long long)calculatePurgableSpaceForUrgency:(int)arg1;
-(unsigned long long)freePurgableSpace:(unsigned long long)arg1 forUrgency:(int)arg2;
-(void)invalidateTileCache;
-(BOOL)notifyNetworkDefaultsChanged;

@end

