/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UAUserActivityClientResponseProtocol <NSObject>
@required
-(void)askClientUserActivityToSave:(id)arg1;
-(void)askClientUserActivityToSave:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)tellClientUserActivityItWasResumed:(id)arg1;
-(void)tellClientDebuggingEnabled:(BOOL)arg1 logFileHandle:(id)arg2;

@end
