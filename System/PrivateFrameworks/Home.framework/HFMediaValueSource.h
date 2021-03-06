/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HFMediaValueSource <NSObject>
@required
-(BOOL)hasPendingWritesForRouteID:(id)arg1;
-(long long)lastPlaybackStateForProfileForRouteID:(id)arg1;
-(id)mediaProfileContainerForRouteID:(id)arg1;
-(id)writePlaybackState:(long long)arg1 playbackArchive:(id)arg2 forRouteID:(id)arg3;
-(id)cachedPlaybackStateWriteErrorForRouteID:(id)arg1;

@end

