/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext, ICIAMSynchronizeMessagesResponse;

@interface ICInAppMessageSyncRequest : ICRequestOperation {

	ICStoreRequestContext* _storeRequestContext;
	ICIAMSynchronizeMessagesResponse* _syncResponse;
	unsigned long long _fromRevision;

}
-(void)execute;
-(void)performRequestWithResponseHandler:(/*^block*/id)arg1 ;
-(id)initWithStoreRequestContext:(id)arg1 fromRevision:(unsigned long long)arg2 ;
@end

