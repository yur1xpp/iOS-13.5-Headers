/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CTCarrierSpace/CTCarrierSpaceClientDelegateProxyInterface.h>

@protocol CTCarrierSpaceClientDelegate;
@class NSString;

@interface CTCarrierSpaceClientDelegateProxy : NSObject <CTCarrierSpaceClientDelegateProxyInterface> {

	id<CTCarrierSpaceClientDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CTCarrierSpaceClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CTCarrierSpaceClientDelegate>)delegate;
-(void)setDelegate:(id<CTCarrierSpaceClientDelegate>)arg1 ;
-(void)capabilitiesDidChange:(id)arg1 ;
-(void)userConsentFlowInfoDidChange;
-(void)usageDidChange;
-(void)plansDidChange;
-(void)appsDidChange;
-(void)dataPlanMetricsDidChange;
-(void)purchasedPlan:(id)arg1 didChangeStatus:(long long)arg2 context:(id)arg3 ;
-(void)remoteObjectRespondsToSelector:(SEL)arg1 handler:(/*^block*/id)arg2 ;
@end
