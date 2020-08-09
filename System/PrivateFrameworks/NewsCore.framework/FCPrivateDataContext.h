/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FCIssueReadingHistory, FCPersonalizationData, FCPrivateChannelMembershipController, FCReadingHistory, FCReadingList, FCSubscriptionList, FCUserInfo, FCTagSettings, FCNetworkBehaviorMonitor, NSString;


@protocol FCPrivateDataContext <NSObject>
@property (nonatomic,readonly) FCIssueReadingHistory * issueReadingHistory; 
@property (nonatomic,readonly) FCPersonalizationData * personalizationData; 
@property (nonatomic,readonly) FCPrivateChannelMembershipController * privateChannelMembershipController; 
@property (nonatomic,readonly) FCReadingHistory * readingHistory; 
@property (nonatomic,readonly) FCReadingList * readingList; 
@property (nonatomic,readonly) FCSubscriptionList * subscriptionList; 
@property (nonatomic,readonly) FCUserInfo * userInfo; 
@property (nonatomic,readonly) FCTagSettings * tagSettings; 
@property (nonatomic,readonly) FCNetworkBehaviorMonitor * networkBehaviorMonitor; 
@property (nonatomic,readonly) id<FCPushNotificationHandling> privatePushNotificationHandler; 
@property (getter=isPrivateDataSyncingEnabled,nonatomic,readonly) BOOL privateDataSyncingEnabled; 
@property (nonatomic,copy,readonly) NSString * privateDataDirectory; 
@property (nonatomic,readonly) id<FCPrivateDataContextInternal> internalPrivateDataContext; 
@required
-(FCUserInfo *)userInfo;
-(FCPersonalizationData *)personalizationData;
-(FCSubscriptionList *)subscriptionList;
-(NSString *)privateDataDirectory;
-(FCTagSettings *)tagSettings;
-(FCPrivateChannelMembershipController *)privateChannelMembershipController;
-(FCReadingHistory *)readingHistory;
-(FCReadingList *)readingList;
-(id<FCPrivateDataContextInternal>)internalPrivateDataContext;
-(FCIssueReadingHistory *)issueReadingHistory;
-(BOOL)isPrivateDataSyncingEnabled;
-(id)privateStoreWithName:(id)arg1 version:(unsigned long long)arg2 options:(unsigned long long)arg3;
-(id<FCPushNotificationHandling>)privatePushNotificationHandler;
-(FCNetworkBehaviorMonitor *)networkBehaviorMonitor;

@end
