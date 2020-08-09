/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFComposeTypeFactoryDelegate.h>

@protocol MFMessageRewriterPlaceholderResolver;
@class NSMutableArray, MFOutgoingMessageContent, NSString;

@interface MFPlaceholderMessageRewriter : NSObject <MFComposeTypeFactoryDelegate> {

	NSMutableArray* _placeholders;
	MFOutgoingMessageContent* _originalMessageContent;
	MFOutgoingMessageContent* _rewrittenMessageContent;
	id<MFMessageRewriterPlaceholderResolver> _placeholderResolver;

}

@property (nonatomic,readonly) MFOutgoingMessageContent * originalMessageContent;                              //@synthesize originalMessageContent=_originalMessageContent - In the implementation block
@property (assign,nonatomic,__weak) id<MFMessageRewriterPlaceholderResolver> placeholderResolver;              //@synthesize placeholderResolver=_placeholderResolver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_deriveOutgoingMessageContentFromLibraryMessageContent:(id)arg1 ;
-(id)init;
-(id)attachments;
-(id)subject;
-(void)setSubject:(id)arg1 ;
-(void)setToRecipients:(id)arg1 ;
-(id)toRecipients;
-(id)ccRecipients;
-(id)bccRecipients;
-(void)setCcRecipients:(id)arg1 ;
-(void)setBccRecipients:(id)arg1 ;
-(id)composeWebView;
-(id)sendingEmailAddress;
-(id)savedHeaders;
-(id)accountProxyGenerator;
-(void)setSendingEmailAddress:(id)arg1 ;
-(void)setSavedHeaders:(id)arg1 ;
-(id)shouldCreateRichTextRepresentation;
-(id)sendingAccountProxy;
-(id)rewrittenMessageContent;
-(id)initWithOriginalMessageContent:(id)arg1 resolver:(id)arg2 ;
-(id<MFMessageRewriterPlaceholderResolver>)placeholderResolver;
-(MFOutgoingMessageContent *)originalMessageContent;
-(void)setPlaceholderResolver:(id<MFMessageRewriterPlaceholderResolver>)arg1 ;
@end
