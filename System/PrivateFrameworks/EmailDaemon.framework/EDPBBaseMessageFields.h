/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EDPBBaseMessageFields
@property (assign,nonatomic) long long accountId; 
@property (assign,nonatomic) long long mailboxId; 
@property (assign,nonatomic) int mailboxType; 
@property (assign,nonatomic) long long conversationId; 
@property (assign,nonatomic) long long messageId; 
@required
-(long long)messageId;
-(void)setMessageId:(long long)arg1;
-(long long)accountId;
-(void)setAccountId:(long long)arg1;
-(int)mailboxType;
-(void)setMailboxType:(int)arg1;
-(long long)conversationId;
-(long long)mailboxId;
-(void)setMailboxId:(long long)arg1;
-(void)setConversationId:(long long)arg1;

@end
