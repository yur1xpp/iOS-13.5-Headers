/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPLEngineComponent <NSObject>
@optional
-(void)getStatusWithCompletionHandler:(/*^block*/id)arg1;
-(void)getStatusDictionaryWithCompletionHandler:(/*^block*/id)arg1;

@required
-(void)openWithCompletionHandler:(/*^block*/id)arg1;
-(id)componentName;
-(void)closeAndDeactivate:(BOOL)arg1 completionHandler:(/*^block*/id)arg2;

@end
