/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSGeolocationPreferenceManager.h>

@class UIWebGeolocationPolicyDecider;

@interface _SFGeolocationPermissionManager : WBSGeolocationPreferenceManager {

	UIWebGeolocationPolicyDecider* _policyDecider;

}
+(id)sharedManager;
-(void)requestPermissionForURL:(id)arg1 frame:(id)arg2 dialogPresenter:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_showDialogRequestingPermissionForURL:(id)arg1 frame:(id)arg2 dialogPresenter:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

