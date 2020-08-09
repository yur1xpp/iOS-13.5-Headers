/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSObject, NSMapTable;

@interface SVAudioSession : NSObject {

	BOOL _audioSessionActive;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	NSMapTable* _players;

}

@property (assign,getter=isAudioSessionActive,nonatomic) BOOL audioSessionActive;              //@synthesize audioSessionActive=_audioSessionActive - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_semaphore> semaphore;                     //@synthesize semaphore=_semaphore - In the implementation block
@property (nonatomic,readonly) NSMapTable * players;                                           //@synthesize players=_players - In the implementation block
+(id)sharedSession;
-(id)init;
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(void)addInterestForPlayer:(id)arg1 withMode:(int)arg2 ;
-(void)removeInterestForPlayer:(id)arg1 ;
-(NSMapTable *)players;
-(void)setupAudioSessionCategory;
-(void)activateAudioSessionCategory;
-(void)deactivateAudioSessionCategory;
-(id)desiredAudioSessionCategory;
-(BOOL)needsToSetupAudioSessionCategory;
-(BOOL)isAudioSessionActive;
-(BOOL)shouldActivateAudioSession;
-(void)setAudioSessionActive:(BOOL)arg1 ;
-(BOOL)canDeactivateAudioSession;
@end
