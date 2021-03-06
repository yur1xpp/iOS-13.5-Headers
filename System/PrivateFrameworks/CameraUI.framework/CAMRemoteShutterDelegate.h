/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CAMRemoteShutterDelegate <NSObject>
@required
-(void)remoteShutter:(id)arg1 takePhotoWithCountdown:(unsigned long long)arg2;
-(void)remoteShutterCancelCountdown:(id)arg1;
-(BOOL)remoteShutterBeginBurstCapture:(id)arg1;
-(BOOL)remoteShutterEndBurstCapture:(id)arg1;
-(void)remoteShutter:(id)arg1 setMode:(long long)arg2;
-(void)remoteShutter:(id)arg1 focusOn:(CGPoint)arg2;
-(BOOL)remoteShutterStartCapture:(id)arg1;
-(BOOL)remoteShutterStopCapture:(id)arg1;
-(void)remoteShutter:(id)arg1 setFlashMode:(long long)arg2;
-(void)remoteShutter:(id)arg1 setHDRMode:(long long)arg2;
-(void)remoteShutter:(id)arg1 setIrisMode:(long long)arg2;
-(void)remoteShutter:(id)arg1 setZoomAmount:(double)arg2;
-(void)remoteShutter:(id)arg1 setCaptureDevice:(long long)arg2;

@end

