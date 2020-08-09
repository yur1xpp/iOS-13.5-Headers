/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITextDragSupporting <UITextDraggable>
@optional
-(id)_rangeOfCustomDraggableObjectsInRange:(id)arg1;
-(id)_customDraggableObjectsForRange:(id)arg1;
-(NSRange*)_visibleRangeWithLayout:(BOOL)arg1;
-(id)_textGeometry;
-(id)willGenerateCancelPreview;
-(void)didGenerateCancelPreview:(id)arg1;
-(void)performCancelAnimations;
-(BOOL)_shouldObscureInput;

@required
-(BOOL)allowsDraggingAttachments;
-(BOOL)allowsEditingTextAttributes;
-(void)draggingStarted;
-(void)draggingFinished:(id)arg1;

@end
