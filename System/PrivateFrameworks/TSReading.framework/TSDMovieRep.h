/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDMediaRep.h>
#import <TSReading/TSKAVPlayerControllerDelegate.h>
#import <TSReading/TSDTilingLayerDelegate.h>

@class TSKAVPlayerController, AVPlayerLayer, CALayer, TSDFrameRep, AVAsset, TSDButtonKnob, TSDMovieInfo, NSString;

@interface TSDMovieRep : TSDMediaRep <TSKAVPlayerControllerDelegate, TSDTilingLayerDelegate> {

	TSKAVPlayerController* mPlayerController;
	BOOL mCurrentlyObservingPlayerLayer;
	BOOL mPlayerLayerShouldBeDisplayed;
	AVPlayerLayer* mPlayerLayer;
	CALayer* mLayerToStroke;
	CALayer* mMovieReflectionLayer;
	CALayer* mMovieReflectionMaskLayer;
	AVPlayerLayer* mReflectionPlayerLayer;
	CALayer* mReflectionPlayerStrokeMaskLayer;
	BOOL mPreventDisposeOfPlayerLayer;
	CALayer* mPlayerStrokeLayer;
	CALayer* mReflectionPlayerStrokeLayer;
	TSDFrameRep* mReflectionFrameRep;
	CALayer* mReflectionFrameMaskLayer;
	AVAsset* mAssetForPlayability;
	BOOL mDidCheckPlayability;
	BOOL mIsPlayable;
	TSDButtonKnob* mPlayButtonKnob;
	BOOL mPlayButtonKnobVisible;
	BOOL mDidCancelUpdatingPlayButtonVisibility;
	BOOL mInReadMode;
	CGImageRef mAlternatePosterImage;
	unsigned long long mIsChangingDynamicVisibleTimeCount;
	float mDynamicVolume;
	BOOL mIsChangingDynamicVolume;
	BOOL mNeedsTeardownPlayerController;

}

@property (nonatomic,readonly) TSDButtonKnob * p_playButtonKnob; 
@property (nonatomic,readonly) BOOL p_playButtonFitsInFrame; 
@property (nonatomic,readonly) TSDMovieInfo * movieInfo; 
@property (getter=isPlayable,nonatomic,readonly) BOOL playable; 
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (nonatomic,readonly) BOOL shouldSingleTapPlay; 
@property (assign,nonatomic) CGImageRef alternatePosterImage; 
@property (nonatomic,readonly) double visibleTime; 
@property (nonatomic,readonly) float volume; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(float)volume;
-(BOOL)isPlaying;
-(void)willBeRemoved;
-(id)playerController;
-(BOOL)isPlayable;
-(BOOL)isDraggable;
-(TSDMovieInfo *)movieInfo;
-(void)screenScaleDidChange;
-(BOOL)directlyManagesLayerContent;
-(void)didUpdateLayer:(id)arg1 ;
-(void)processChangedProperty:(int)arg1 ;
-(void)playbackDidStopForPlayerController:(id)arg1 ;
-(void)playerController:(id)arg1 playbackDidFailWithError:(id)arg2 ;
-(void)willBeginReadMode;
-(void)willEndReadMode;
-(BOOL)wantsToHandleTapsWhenLocked;
-(BOOL)handleSingleTapAtPoint:(CGPoint)arg1 ;
-(void)willUpdateLayer:(id)arg1 ;
-(void)updateLayerGeometryFromLayout:(id)arg1 ;
-(id)additionalLayersUnderLayer;
-(id)additionalLayersOverLayer;
-(void)drawInLayerContext:(CGContextRef)arg1 ;
-(void)addKnobsToArray:(id)arg1 ;
-(unsigned long long)enabledKnobMask;
-(BOOL)directlyManagesVisibilityOfKnob:(id)arg1 ;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(void)updateFromLayout;
-(void)becameSelected;
-(void)becameNotSelected;
-(void)drawInContextWithoutEffects:(CGContextRef)arg1 withContent:(BOOL)arg2 withStroke:(BOOL)arg3 withOpacity:(BOOL)arg4 forAlphaOnly:(BOOL)arg5 drawChildren:(BOOL)arg6 ;
-(void)p_disposeStrokeLayer;
-(void)p_disposeMaskLayer;
-(void)i_updateFrameRep;
-(BOOL)shouldShowMediaReplaceUI;
-(void)p_createMaskLayerForLayer:(id)arg1 ;
-(void)p_updateStrokeLayerForStroke:(id)arg1 repLayer:(id)arg2 ;
-(void)p_disposeReflectionStrokeLayers;
-(void)disposeReflectionLayer;
-(void)createReflectionLayer;
-(void)p_setupReflectionPlayerLayerIfNecessary;
-(void)p_drawReflectionStrokeInContext:(CGContextRef)arg1 ;
-(void)p_drawStrokeInContext:(CGContextRef)arg1 ;
-(void)p_setupShapePlayerStrokeLayer;
-(void)p_setupShapeReflectionPlayerStrokeLayer;
-(void)p_setupTilingPlayerStrokeLayer;
-(void)p_setupTilingReflectionPlayerStrokeLayer;
-(void)p_createReflectionPlayerStrokeMaskLayer;
-(void)p_checkAndsyncTilingLayerState:(BOOL)arg1 ;
-(void)p_setupPlayerStrokeLayers:(BOOL)arg1 ;
-(id)playerStrokeLayer;
-(id)reflectionPlayerStrokeLayer;
-(void)p_arrangeLayerVisibility:(id)arg1 ;
-(BOOL)p_needsTilingLayerForStroke:(id)arg1 ;
-(void)p_setupStrokeLayers:(BOOL)arg1 needsMaskLayer:(BOOL)arg2 isFrame:(BOOL)arg3 ;
-(void)p_teardownPlayerControllerIfNeeded;
-(void)p_updateMovieReflectionMaskLayer;
-(CGImageRef)alternatePosterImage;
-(id)movieLayout;
-(void)p_setPositionAndBoundsIfDifferent:(id)arg1 position:(CGPoint)arg2 bounds:(CGRect)arg3 ;
-(CGRect)p_strokeFrameForLayerFrame:(CGRect)arg1 ;
-(void)p_placeReflectionPlayerLayer:(CGRect)arg1 transform:(CGAffineTransform)arg2 ;
-(void)p_updatePlayButtonVisibility;
-(void)p_updateReflectionFrameRep;
-(void)p_drawInContext:(CGContextRef)arg1 withContent:(BOOL)arg2 withStroke:(BOOL)arg3 withOpacity:(double)arg4 withMask:(BOOL)arg5 forShadowOrHitTest:(BOOL)arg6 ;
-(void)p_commonDrawStrokeInContext:(CGContextRef)arg1 ;
-(id)p_shapeLayerForPlayerStroke;
-(void)p_applyBasicStrokeToLayer:(id)arg1 layer:(id)arg2 bounds:(CGRect)arg3 ;
-(id)p_shapeLayerForReflectionStroke;
-(void)p_drawReflectionGradientIntoMovieReflectionLayer:(CGContextRef)arg1 reflectionSize:(CGSize)arg2 ;
-(void)p_drawPosterImageInContext:(CGContextRef)arg1 ;
-(void)p_setNeedsTeardownPlayerControllerOnUpdateLayer;
-(void)p_stopUpdatingUIStateForMoviePlayability;
-(void)p_updateUIStateForMoviePlayability;
-(void)p_updateRepeatMode;
-(void)p_updateVolume;
-(void)p_updateStartTime;
-(void)p_updateEndTime;
-(BOOL)p_shouldPlayerControllerExistThroughoutSelection;
-(void)p_setupPlayerControllerIfNecessary;
-(BOOL)p_playButtonFitsInFrame;
-(BOOL)shouldSingleTapPlay;
-(TSDButtonKnob *)p_playButtonKnob;
-(void)p_addPlayButtonToKnobs:(id)arg1 ;
-(void)p_cancelUpdatingUIStateForMoviePlayability;
-(void)p_teardownPlayerController;
-(void)p_setupPlayerLayerIfNecessary;
-(BOOL)canResetMediaSize;
-(void)p_hideReflectionLayer;
-(void)p_showReflectionLayer;
-(id)p_tilingLayerForPlayerStroke;
-(id)p_tilingLayerForReflectionStroke;
-(void)setShapeReflectionPlayerStrokeLayer:(id)arg1 ;
-(void)p_playForKnob;
-(void)p_togglePlaying;
-(void)setAlternatePosterImage:(CGImageRef)arg1 ;
-(double)visibleTime;
-(void)dynamicVisibleTimeChangeDidBegin;
-(void)dynamicVisibleTimeUpdateToValue:(double)arg1 withTolerance:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)dynamicVisibleTimeChangeDidEnd;
-(void)dynamicVolumeChangeDidBegin;
-(void)dynamicVolumeUpdateToValue:(float)arg1 ;
-(void)dynamicVolumeChangeDidEnd;
@end

