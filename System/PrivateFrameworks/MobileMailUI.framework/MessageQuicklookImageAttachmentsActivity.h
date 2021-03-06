/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareSheet/UIActivity.h>

@protocol ContentRepresentationHandlingDelegate;
@class NSURL;

@interface MessageQuicklookImageAttachmentsActivity : UIActivity {

	id<ContentRepresentationHandlingDelegate> _delegate;
	NSURL* _url;

}

@property (assign,nonatomic,__weak) id<ContentRepresentationHandlingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSURL * url;                                                            //@synthesize url=_url - In the implementation block
-(id<ContentRepresentationHandlingDelegate>)delegate;
-(void)setDelegate:(id<ContentRepresentationHandlingDelegate>)arg1 ;
-(NSURL *)url;
-(id)activityType;
-(void)setUrl:(NSURL *)arg1 ;
-(void)_cleanup;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityImage;
-(void)performActivity;
-(id)initWithAttachmentHandlingDelegate:(id)arg1 context:(long long)arg2 url:(id)arg3 ;
@end

