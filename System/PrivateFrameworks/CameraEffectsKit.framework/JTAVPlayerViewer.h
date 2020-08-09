/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class AVPlayer, NSString;


@protocol JTAVPlayerViewer <NSObject>
@property (nonatomic,retain) AVPlayer * player; 
@property (nonatomic,copy) NSString * videoGravity; 
@property (nonatomic,readonly) CGSize displaySize; 
@property (nonatomic,readonly) CGRect videoBounds; 
@property (getter=isReadyForDisplay,nonatomic,readonly) BOOL readyForDisplay; 
@property (assign,nonatomic,__weak) id<JTAVPlayerViewerDelegate> playerViewDelegate; 
@required
-(AVPlayer *)player;
-(void)setPlayer:(id)arg1;
-(NSString *)videoGravity;
-(void)setVideoGravity:(id)arg1;
-(BOOL)isReadyForDisplay;
-(CGRect)videoBounds;
-(CGSize)displaySize;
-(id<JTAVPlayerViewerDelegate>)playerViewDelegate;
-(void)setPlayerViewDelegate:(id)arg1;

@end
