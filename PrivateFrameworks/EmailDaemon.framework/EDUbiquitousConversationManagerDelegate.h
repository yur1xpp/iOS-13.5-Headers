/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EDUbiquitousConversationManagerDelegate <NSObject>
@required
-(void)pruneConversationTables:(double)arg1;
-(void)setPersistenceConversationFlags:(unsigned long long)arg1 syncKey:(id)arg2 forConversationID:(long long)arg3 reason:(long long)arg4;
-(id)syncedConversationIDsBySyncKey;
-(unsigned long long)persistenceConversationFlagsForConversationID:(long long)arg1;
-(long long)conversationIDForMessageIDs:(id)arg1;
-(id)messageIDsForConversationID:(long long)arg1 limit:(unsigned long long)arg2;
-(void)remoteMessageIDsAdded:(id)arg1 forConversationID:(long long)arg2;
-(void)clearConversationFlagsAndSyncKeyForConversationIDs:(id)arg1;

@end
