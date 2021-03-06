/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PDFPageLayerGeometryInterface;
#import <PDFKit/PDFKit-Structs.h>
@class PDFPage, NSObject, PDFRenderingProperties, CALayer, NSDate, NSMutableArray, PDFTimer, NSMutableDictionary;

@interface PDFPageLayerPrivate : NSObject {

	PDFPage* page;
	NSObject*<PDFPageLayerGeometryInterface> geometryInterface;
	PDFRenderingProperties* renderingProperties;
	long long oldPageRotation;
	CGRect oldBoundsForBox;
	CALayer* tilesLayer;
	int generationCount;
	double lastLayoutZoomFactor;
	CGRect lastLayerFrameInRootView;
	NSDate* lastZoomChange;
	BOOL zoomChangeScheduled;
	double zoomGenerationDelay;
	unsigned long long visibilityDelegateIndex;
	BOOL tileLayerHidden;
	NSMutableArray* tiles;
	BOOL allowUpdate;
	PDFTimer* forcedUpdateTimer;
	BOOL isForcingUpdate;
	AB isTiling;
	AB requestedTiling;
	CALayer* effectsLayer;
	NSMutableDictionary* pageLayerEffects;

}
@end

