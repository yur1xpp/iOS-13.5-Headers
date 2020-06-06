/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <PencilKit/_UITextAttachmentDrawingView.h>
#import <libobjc.A.dylib/PKTextAttachmentView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/_UICursorInteractionDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@class UIScrollView, UIView, NSTextAttachment, PKTextAttachmentDrawingResizeView, CALayer, PKTextAttachmentDrawingViewTouchRecognizer, UIPanGestureRecognizer, PKSelectDrawingGestureRecognizer, UITapGestureRecognizer, UILongPressGestureRecognizer, NSString;

@interface PKTextAttachmentDrawingView : _UITextAttachmentDrawingView <PKTextAttachmentView, UIGestureRecognizerDelegate, _UICursorInteractionDelegate, UIScrollViewDelegate> {

	UIScrollView* _tileMaskView;
	BOOL _resizeUpper;
	BOOL _inserted;
	BOOL _zoomingProgramatically;
	UIView* _tileScaleView;
	NSTextAttachment* _textAttachment;
	double _zoomScale;
	PKTextAttachmentDrawingResizeView* _topResizeView;
	PKTextAttachmentDrawingResizeView* _bottomResizeView;
	CALayer* _linesLayer;
	PKTextAttachmentDrawingViewTouchRecognizer* _resizeHighlightGestureRecognizer;
	UIPanGestureRecognizer* _resizeDragGestureRecognizer;
	PKSelectDrawingGestureRecognizer* _selectDrawingGestureRecognizer;
	UITapGestureRecognizer* _eatKeyboardGestureRecognizer;
	UILongPressGestureRecognizer* _showMenuGestureRecognizer;
	UILongPressGestureRecognizer* _hideMenuGestureRecognizer;
	double _zoomStartScale;
	CGPoint _zoomStartLocationInWindow;
	CGPoint _zoomStartLocationInAttachment;
	CGPoint _textViewContentOffsetStartLocation;
	CGRect _originalDrawingBounds;
	CGRect _originalViewBounds;
	UIEdgeInsets _originalContentInset;

}

@property (nonatomic,retain) PKTextAttachmentDrawingResizeView * topResizeView;                                          //@synthesize topResizeView=_topResizeView - In the implementation block
@property (nonatomic,retain) PKTextAttachmentDrawingResizeView * bottomResizeView;                                       //@synthesize bottomResizeView=_bottomResizeView - In the implementation block
@property (nonatomic,retain) CALayer * linesLayer;                                                                       //@synthesize linesLayer=_linesLayer - In the implementation block
@property (nonatomic,retain) PKTextAttachmentDrawingViewTouchRecognizer * resizeHighlightGestureRecognizer;              //@synthesize resizeHighlightGestureRecognizer=_resizeHighlightGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * resizeDragGestureRecognizer;                                       //@synthesize resizeDragGestureRecognizer=_resizeDragGestureRecognizer - In the implementation block
@property (nonatomic,retain) PKSelectDrawingGestureRecognizer * selectDrawingGestureRecognizer;                          //@synthesize selectDrawingGestureRecognizer=_selectDrawingGestureRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * eatKeyboardGestureRecognizer;                                      //@synthesize eatKeyboardGestureRecognizer=_eatKeyboardGestureRecognizer - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * showMenuGestureRecognizer;                                   //@synthesize showMenuGestureRecognizer=_showMenuGestureRecognizer - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * hideMenuGestureRecognizer;                                   //@synthesize hideMenuGestureRecognizer=_hideMenuGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL resizeUpper;                                                                           //@synthesize resizeUpper=_resizeUpper - In the implementation block
@property (assign,nonatomic) CGRect originalDrawingBounds;                                                               //@synthesize originalDrawingBounds=_originalDrawingBounds - In the implementation block
@property (assign,nonatomic) CGRect originalViewBounds;                                                                  //@synthesize originalViewBounds=_originalViewBounds - In the implementation block
@property (assign,nonatomic) UIEdgeInsets originalContentInset;                                                          //@synthesize originalContentInset=_originalContentInset - In the implementation block
@property (assign,nonatomic) BOOL inserted;                                                                              //@synthesize inserted=_inserted - In the implementation block
@property (assign,nonatomic) BOOL zoomingProgramatically;                                                                //@synthesize zoomingProgramatically=_zoomingProgramatically - In the implementation block
@property (assign,nonatomic) CGPoint zoomStartLocationInWindow;                                                          //@synthesize zoomStartLocationInWindow=_zoomStartLocationInWindow - In the implementation block
@property (assign,nonatomic) CGPoint zoomStartLocationInAttachment;                                                      //@synthesize zoomStartLocationInAttachment=_zoomStartLocationInAttachment - In the implementation block
@property (assign,nonatomic) CGPoint textViewContentOffsetStartLocation;                                                 //@synthesize textViewContentOffsetStartLocation=_textViewContentOffsetStartLocation - In the implementation block
@property (assign,nonatomic) double zoomStartScale;                                                                      //@synthesize zoomStartScale=_zoomStartScale - In the implementation block
@property (nonatomic,readonly) BOOL drawingMenuVisible; 
@property (nonatomic,readonly) CGSize drawingVisibleSize; 
@property (nonatomic,readonly) double drawingAspectRatio; 
@property (nonatomic,readonly) UIView * tileScaleView;                                                                   //@synthesize tileScaleView=_tileScaleView - In the implementation block
@property (assign,nonatomic,__weak) NSTextAttachment * textAttachment;                                                   //@synthesize textAttachment=_textAttachment - In the implementation block
@property (nonatomic,readonly) BOOL isAtBeginningOfDocument; 
@property (assign,nonatomic) double zoomScale;                                                                           //@synthesize zoomScale=_zoomScale - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(long long)_characterIndex;
-(id)_textView;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)drawingBounds;
-(void)setTextAttachment:(NSTextAttachment *)arg1 ;
-(NSTextAttachment *)textAttachment;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)layoutSubviews;
-(BOOL)becomeFirstResponder;
-(void)scrollViewDidZoom:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(BOOL)resignFirstResponder;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(void)didMoveToSuperview;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(void)setContentHidden:(BOOL)arg1 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(id)keyCommands;
-(void)_share:(id)arg1 ;
-(void)delete:(id)arg1 ;
-(BOOL)gestureRecognizerShouldDelayLift:(id)arg1 ;
-(void)setZoomScale:(double)arg1 ;
-(double)zoomScale;
-(BOOL)inserted;
-(void)setInserted:(BOOL)arg1 ;
-(void)menuDidHide:(id)arg1 ;
-(void)handleDoubleTap:(id)arg1 ;
-(void)fingerDrawingEnabledDidChange;
-(void)drawingWillBegin;
-(void)drawingDidEraseStrokes;
-(BOOL)isAtEndOfDocument;
-(void)drawingDidChange;
-(void)updateDrawingHeight:(double)arg1 ;
-(void)updateFrameForTextContainer;
-(void)pixelAlignForContentScale:(double)arg1 enclosingScrollView:(id)arg2 ;
-(BOOL)hitByTouchLocation:(CGPoint)arg1 bounds:(CGRect)arg2 ;
-(BOOL)hitChrome:(CGPoint)arg1 isStylus:(BOOL)arg2 ;
-(id)tileMaskView;
-(double)heightFromDrawing:(id)arg1 delta:(double)arg2 ;
-(void)updateDrawingHeight:(double)arg1 notifyDrawingDidChange:(BOOL)arg2 ;
-(id)_drawingGestureRecognizer;
-(void)updateTileContainerViewFrame;
-(id)initWithAttachment:(id)arg1 inserted:(BOOL)arg2 ;
-(CGSize)drawingVisibleSize;
-(void)_adjustResizeIndicatorVisibility;
-(void)resizeDrawing:(id)arg1 ;
-(void)higlightResize:(id)arg1 ;
-(void)selectDrawing:(id)arg1 ;
-(void)_preemptKeyboardForTapOnDrawing:(id)arg1 ;
-(void)showDrawingMenu:(id)arg1 ;
-(void)hideDrawingMenu:(id)arg1 ;
-(void)_triggerRedraw;
-(void)_updateAttachmentBounds;
-(void)_adjustResizeIndicatorVisibilityNotification;
-(double)drawingAspectRatio;
-(void)drawingDataDidChange:(id)arg1 ;
-(void)_adjustResizeIndicatorVisibility:(BOOL)arg1 ;
-(BOOL)drawingMenuVisible;
-(BOOL)isAtBeginningOfDocument;
-(void)layoutTileViews;
-(void)_setHeight:(double)arg1 originalHeight:(double)arg2 growFromTop:(BOOL)arg3 ;
-(BOOL)hitTestResizeHandles:(CGPoint)arg1 threshold:(double)arg2 ;
-(UILongPressGestureRecognizer *)showMenuGestureRecognizer;
-(void)drawingScrollViewDidScroll:(id)arg1 ;
-(void)metadata:(id)arg1 ;
-(void)copyStrokeSelection:(id)arg1 ;
-(void)cutStrokeSelection:(id)arg1 ;
-(void)deleteStrokeSelection:(id)arg1 ;
-(void)scaleDrawing:(double)arg1 withOffset:(CGPoint)arg2 animated:(BOOL)arg3 ;
-(void)setZoomingProgramatically:(BOOL)arg1 ;
-(void)scaleDrawing:(double)arg1 ;
-(void)drawLines;
-(BOOL)zoomingProgramatically;
-(void)setZoomStartScale:(double)arg1 ;
-(void)setZoomStartLocationInWindow:(CGPoint)arg1 ;
-(CGPoint)zoomStartLocationInWindow;
-(void)setZoomStartLocationInAttachment:(CGPoint)arg1 ;
-(void)setTextViewContentOffsetStartLocation:(CGPoint)arg1 ;
-(CGPoint)zoomStartLocationInAttachment;
-(double)zoomStartScale;
-(CGPoint)textViewContentOffsetStartLocation;
-(void)resetZoom;
-(id)dataForTextAttachment:(id)arg1 ;
-(UIView *)tileScaleView;
-(PKTextAttachmentDrawingResizeView *)topResizeView;
-(void)setTopResizeView:(PKTextAttachmentDrawingResizeView *)arg1 ;
-(PKTextAttachmentDrawingResizeView *)bottomResizeView;
-(void)setBottomResizeView:(PKTextAttachmentDrawingResizeView *)arg1 ;
-(CALayer *)linesLayer;
-(void)setLinesLayer:(CALayer *)arg1 ;
-(PKTextAttachmentDrawingViewTouchRecognizer *)resizeHighlightGestureRecognizer;
-(void)setResizeHighlightGestureRecognizer:(PKTextAttachmentDrawingViewTouchRecognizer *)arg1 ;
-(UIPanGestureRecognizer *)resizeDragGestureRecognizer;
-(void)setResizeDragGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(PKSelectDrawingGestureRecognizer *)selectDrawingGestureRecognizer;
-(void)setSelectDrawingGestureRecognizer:(PKSelectDrawingGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)eatKeyboardGestureRecognizer;
-(void)setEatKeyboardGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setShowMenuGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)hideMenuGestureRecognizer;
-(void)setHideMenuGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(BOOL)resizeUpper;
-(void)setResizeUpper:(BOOL)arg1 ;
-(CGRect)originalDrawingBounds;
-(void)setOriginalDrawingBounds:(CGRect)arg1 ;
-(CGRect)originalViewBounds;
-(void)setOriginalViewBounds:(CGRect)arg1 ;
-(UIEdgeInsets)originalContentInset;
-(void)setOriginalContentInset:(UIEdgeInsets)arg1 ;
@end
