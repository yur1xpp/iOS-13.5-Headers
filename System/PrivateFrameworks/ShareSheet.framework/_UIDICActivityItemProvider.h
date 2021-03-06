/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareSheet/UIActivityItemProvider.h>

@class UIDocumentInteractionController;

@interface _UIDICActivityItemProvider : UIActivityItemProvider {

	UIDocumentInteractionController* _documentInteractionController;

}

@property (nonatomic,__weak,readonly) UIDocumentInteractionController * documentInteractionController;              //@synthesize documentInteractionController=_documentInteractionController - In the implementation block
-(id)item;
-(void)main;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(BOOL)_shouldExecuteItemOperationForActivity:(id)arg1 ;
-(id)activityViewController:(id)arg1 openURLAnnotationForActivityType:(id)arg2 ;
-(id)initWithPlaceholderItem:(id)arg1 documentInteractionController:(id)arg2 ;
-(UIDocumentInteractionController *)documentInteractionController;
-(id)loadedURL;
@end

