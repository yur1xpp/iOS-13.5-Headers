/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SUNetworkObserver <NSObject>
@optional
-(void)networkChangedFromNetworkType:(int)arg1 toNetworkType:(int)arg2;
-(void)cellularRoamingStatusChanged:(BOOL)arg1;
-(void)carrierBundleChanged;
-(void)operatorBundleChanged;

@end

