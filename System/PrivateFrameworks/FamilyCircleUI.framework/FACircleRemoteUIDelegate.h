/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RemoteUIControllerDelegate.h>

@protocol FACircleRemoteUIDelegateDelegate;
@class FARequestConfigurator, NSDictionary, AAUIServerUIHookHandler, NSURLRequest, FACircleContext, NSString;

@interface FACircleRemoteUIDelegate : NSObject <RemoteUIControllerDelegate> {

	FARequestConfigurator* _requestConfigurator;
	NSDictionary* _cachedServerInfo;
	AAUIServerUIHookHandler* _serverHookHandler;
	NSURLRequest* _cachedRequest;
	FACircleContext* _context;
	id<FACircleRemoteUIDelegateDelegate> _delegate;

}

@property (nonatomic,readonly) FACircleContext * context;                      //@synthesize context=_context - In the implementation block
@property (__weak) id<FACircleRemoteUIDelegateDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<FACircleRemoteUIDelegateDelegate>)delegate;
-(void)setDelegate:(id<FACircleRemoteUIDelegateDelegate>)arg1 ;
-(FACircleContext *)context;
-(void)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2 ;
-(void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(BOOL)arg3 ;
-(void)remoteUIController:(id)arg1 didRefreshObjectModel:(id)arg2 ;
-(void)remoteUIController:(id)arg1 didRemoveObjectModel:(id)arg2 ;
-(void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2 ;
-(void)remoteUIController:(id)arg1 didDismissModalNavigationWithObjectModels:(id)arg2 ;
-(void)remoteUIControllerDidDismiss:(id)arg1 ;
-(void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3 ;
-(void)_broadcastFamilyDidChangeNotification;
-(void)_reportRequestFailureWithResponse:(id)arg1 ;
-(void)_handleObjectModelChangeForController:(id)arg1 objectModel:(id)arg2 isModal:(BOOL)arg3 ;
-(void)_notifyDelegateOfCompletionWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(id)initWithContext:(id)arg1 serverHookHandler:(id)arg2 ;
@end
