/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/_SFActivityItemProvider.h>

@class _SFWebArchiveProvider, LPFileMetadata;

@interface _SFWebArchiveActivityItemProvider : _SFActivityItemProvider {

	_SFWebArchiveProvider* _webArchiveProvider;
	LPFileMetadata* _linkPreviewFileMetadata;

}
-(id)item;
-(id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2 ;
-(id)activityViewControllerLinkPresentationMetadata:(id)arg1 ;
-(id)_webArchiveItemProvider;
-(id)initWithWebArchiveProvider:(id)arg1 ;
@end

