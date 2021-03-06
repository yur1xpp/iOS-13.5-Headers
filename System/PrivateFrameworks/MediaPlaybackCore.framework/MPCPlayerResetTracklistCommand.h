/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol MPCPlayerResetTracklistCommand <MPCPlayerCommand>
@property (nonatomic,readonly) NSArray * specializedIntents; 
@required
-(id)clear;
-(id)replaceWithPlaybackIntent:(id)arg1 replaceIntent:(long long)arg2;
-(id)replaceWithPlaybackIntent:(id)arg1;
-(NSArray *)specializedIntents;

@end

