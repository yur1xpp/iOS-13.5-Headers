/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSServiceConnectionListenerDelegate.h>

@class BSServiceConnectionListener, BSServiceConnectionEndpoint, NSString;

@interface FBWorkspaceConnectionListener : NSObject <BSServiceConnectionListenerDelegate> {

	BSServiceConnectionListener* _listener;

}

@property (nonatomic,copy,readonly) BSServiceConnectionEndpoint * endpoint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(BOOL)sharedDomainUsesDefaultShellEndpoint;
+(id)sharedDomainIdentifier;
+(id)_sharedDomain;
-(id)init;
-(void)dealloc;
-(BSServiceConnectionEndpoint *)endpoint;
-(id)_initWithDomain:(id)arg1 ;
-(void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3 ;
@end
