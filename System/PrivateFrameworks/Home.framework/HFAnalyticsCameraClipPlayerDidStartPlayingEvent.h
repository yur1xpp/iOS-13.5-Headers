/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFAnalyticsEvent.h>

@class NSUUID;

@interface HFAnalyticsCameraClipPlayerDidStartPlayingEvent : HFAnalyticsEvent {

	NSUUID* _clipID;
	NSUUID* _cameraID;
	NSUUID* _playbackSessionID;

}

@property (nonatomic,retain) NSUUID * clipID;                         //@synthesize clipID=_clipID - In the implementation block
@property (nonatomic,retain) NSUUID * cameraID;                       //@synthesize cameraID=_cameraID - In the implementation block
@property (nonatomic,retain) NSUUID * playbackSessionID;              //@synthesize playbackSessionID=_playbackSessionID - In the implementation block
-(id)initWithData:(id)arg1 ;
-(id)payload;
-(NSUUID *)playbackSessionID;
-(NSUUID *)clipID;
-(NSUUID *)cameraID;
-(void)setClipID:(NSUUID *)arg1 ;
-(void)setCameraID:(NSUUID *)arg1 ;
-(void)setPlaybackSessionID:(NSUUID *)arg1 ;
@end

