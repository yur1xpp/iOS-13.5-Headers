/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSDNoDefaultImplicitActionLayer.h>

@class NSMutableSet, TSDInteractiveCanvasController;

@interface TSDTilingHostingLayer : TSDNoDefaultImplicitActionLayer {

	NSMutableSet* mDirtyTilingLayers;
	TSDInteractiveCanvasController* mController;

}

@property (assign,nonatomic) TSDInteractiveCanvasController * controller; 
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)setController:(TSDInteractiveCanvasController *)arg1 ;
-(TSDInteractiveCanvasController *)controller;
-(void)p_commonInit;
-(void)setNeedsDisplayForDirtyTiles:(id)arg1 ;
@end
