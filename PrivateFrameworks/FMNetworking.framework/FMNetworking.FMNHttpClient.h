/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FMNetworking.framework/FMNetworking
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@interface FMNetworking.FMNHttpClient : NSObject <NSURLSessionDelegate> {

	 authenticationChallengeHandler;
	 bundleIdentifierFallback;
	 httpSuccessCodeMin;
	 httpSuccessCodeMax;
	??? urlComponents;
	 credential;
	 urlSessionFactory;
	 statusCodeHandlers;
	 statusCodeHandlerQueue;
	 session;

}
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)init;
@end
