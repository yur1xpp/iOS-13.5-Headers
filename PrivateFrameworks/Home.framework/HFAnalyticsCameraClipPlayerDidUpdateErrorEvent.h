/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFAnalyticsEvent.h>

@class NSUUID, NSString;

@interface HFAnalyticsCameraClipPlayerDidUpdateErrorEvent : HFAnalyticsEvent {

	NSUUID* _playbackSessionID;
	NSString* _errorDomain;
	long long _errorCode;

}

@property (nonatomic,retain) NSUUID * playbackSessionID;              //@synthesize playbackSessionID=_playbackSessionID - In the implementation block
@property (nonatomic,retain) NSString * errorDomain;                  //@synthesize errorDomain=_errorDomain - In the implementation block
@property (assign,nonatomic) long long errorCode;                     //@synthesize errorCode=_errorCode - In the implementation block
-(id)initWithData:(id)arg1 ;
-(id)payload;
-(long long)errorCode;
-(NSString *)errorDomain;
-(void)setErrorDomain:(NSString *)arg1 ;
-(void)setErrorCode:(long long)arg1 ;
-(NSUUID *)playbackSessionID;
-(void)setPlaybackSessionID:(NSUUID *)arg1 ;
@end
