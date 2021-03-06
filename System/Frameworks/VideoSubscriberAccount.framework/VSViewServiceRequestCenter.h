/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue;

@interface VSViewServiceRequestCenter : NSObject {

	NSOperationQueue* _requestQueue;
	NSOperationQueue* _completionQueue;

}

@property (nonatomic,retain) NSOperationQueue * requestQueue;                 //@synthesize requestQueue=_requestQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * completionQueue;              //@synthesize completionQueue=_completionQueue - In the implementation block
+(id)sharedViewServiceRequestCenter;
-(id)init;
-(NSOperationQueue *)requestQueue;
-(void)setRequestQueue:(NSOperationQueue *)arg1 ;
-(void)setCompletionQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)completionQueue;
-(id)enqueueCompletionHandlerBlock:(/*^block*/id)arg1 ;
-(id)enqueueRequest:(id)arg1 withAccountManagerDelegate:(id)arg2 operationDelegate:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

