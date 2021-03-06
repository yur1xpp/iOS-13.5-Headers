/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 8:04:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Assistant/Plugins/ClientFlowService.assistantBundle/ClientFlowService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAIntentGroupAppAuthorizationStatusRequest.h>
#import <libobjc.A.dylib/AFServiceCommand.h>

@class NSString;

@interface CFAppAuthorizationRequestHandler : SAIntentGroupAppAuthorizationStatusRequest <AFServiceCommand>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performWithCompletion:(/*^block*/id)arg1 serviceHelper:(id)arg2 ;
-(void)handleAppAuthorizationStatusRequestWithCompletion:(/*^block*/id)arg1 ;
-(id)authorizationStatusResponseWithAuthorizationStatusMap:(id)arg1 ;
-(id)authorizationStatusForAppWithBundleId:(id)arg1 ;
@end

