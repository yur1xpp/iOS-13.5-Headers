/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVTFaceTrackerDelegate <NSObject>
@optional
-(void)faceTracker:(id)arg1 sessionWasInterrupted:(id)arg2;
-(void)faceTracker:(id)arg1 sessionInterruptionEnded:(id)arg2;
-(void)faceTracker:(id)arg1 session:(id)arg2 didOutputAudioSampleBuffer:(opaqueCMSampleBufferRef)arg3;
-(void)faceTracker:(id)arg1 session:(id)arg2 didFailWithError:(id)arg3;
-(void)faceTrackerDidLostTrackingWhileRecording:(id)arg1;

@required
-(void)faceTrackerDidUpdate:(id)arg1 trackingInfo:(id)arg2;

@end
