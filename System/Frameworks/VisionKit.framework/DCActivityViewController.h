/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/VisionKit.framework/VisionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareSheet/UIActivityViewController.h>

@class ICDocCamDocumentInfoCollection, ICDocCamImageCache;

@interface DCActivityViewController : UIActivityViewController {

	BOOL _ignoreAttachmentsForCopyToPasteboard;
	ICDocCamDocumentInfoCollection* _documentInfoCollection;
	ICDocCamImageCache* _imageCache;

}

@property (nonatomic,retain) ICDocCamDocumentInfoCollection * documentInfoCollection;              //@synthesize documentInfoCollection=_documentInfoCollection - In the implementation block
@property (nonatomic,retain) ICDocCamImageCache * imageCache;                                      //@synthesize imageCache=_imageCache - In the implementation block
@property (assign,nonatomic) BOOL ignoreAttachmentsForCopyToPasteboard;                            //@synthesize ignoreAttachmentsForCopyToPasteboard=_ignoreAttachmentsForCopyToPasteboard - In the implementation block
-(ICDocCamImageCache *)imageCache;
-(BOOL)_canShowWhileLocked;
-(void)setImageCache:(ICDocCamImageCache *)arg1 ;
-(void)_performActivity:(id)arg1 ;
-(ICDocCamDocumentInfoCollection *)documentInfoCollection;
-(void)setDocumentInfoCollection:(ICDocCamDocumentInfoCollection *)arg1 ;
-(BOOL)inhibitPDFGenerationForActivityType:(id)arg1 ;
-(BOOL)writeGalleryPDFDataToPasteboardIfNecessaryForActivity:(id)arg1 documentInfoCollection:(id)arg2 ;
-(BOOL)ignoreAttachmentsForCopyToPasteboard;
-(id)activityTypesThatInhibitPDFGeneration;
-(void)setIgnoreAttachmentsForCopyToPasteboard:(BOOL)arg1 ;
@end
