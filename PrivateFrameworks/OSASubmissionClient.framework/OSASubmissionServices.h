/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OSASubmissionClient.framework/OSASubmissionClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OSASubmissionServices <NSObject>
@required
-(void)submitWithOptions:(id)arg1 resultsCallback:(/*^block*/id)arg2;
-(void)cleanupWithHomeDirectoryLocation:(id)arg1;
-(void)canSubmitLogOfType:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)updateConfigFile;
-(void)fetchDailyUserDynamicPrefLoggingListWithReply:(/*^block*/id)arg1;
-(void)fetchWeeklyUserDynamicPrefLoggingListWithReply:(/*^block*/id)arg1;
-(void)fetchMainConfigFileWithOverrrides:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)fetchTypeBlackListWithReply:(/*^block*/id)arg1;
-(void)queryMessageTracer:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)fetchMessageTracerWhitelistWithReply:(/*^block*/id)arg1;
-(void)fetchMessageTracerWhitelistWithVersion:(id)arg1 andReply:(/*^block*/id)arg2;
-(void)resetMessageTracer;

@end
