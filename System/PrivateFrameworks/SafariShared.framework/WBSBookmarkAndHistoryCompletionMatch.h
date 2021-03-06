/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/SafariShared-Structs.h>
#import <SafariShared/WBSURLCompletionMatch.h>

@interface WBSBookmarkAndHistoryCompletionMatch : WBSURLCompletionMatch {

	RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> >* _match;

}

@property (nonatomic,readonly) id<WBSURLCompletionMatchData> data; 
@property (nonatomic,readonly) float weight; 
-(id<WBSURLCompletionMatchData>)data;
-(id)title;
-(float)weight;
-(id)originalURLString;
-(id)userVisibleURLString;
-(id)initWithBookmarkAndHistoryCompletionMatch:(Ref<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> >*)arg1 userInput:(id)arg2 forQueryID:(long long)arg3 ;
-(id)parsecDomainIdentifier;
@end

