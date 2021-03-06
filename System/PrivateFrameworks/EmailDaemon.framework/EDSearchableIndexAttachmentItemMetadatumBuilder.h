/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray, NSDate;


@protocol EDSearchableIndexAttachmentItemMetadatumBuilder <NSObject>
@property (nonatomic,copy) NSString * domainIdentifier; 
@property (nonatomic,copy) NSString * accountIdentifier; 
@property (nonatomic,copy) NSArray * mailboxIdentifiers; 
@property (nonatomic,copy) NSString * senderAddress; 
@property (nonatomic,copy) NSArray * recipientAddresses; 
@property (nonatomic,retain) NSDate * dateReceived; 
@property (nonatomic,retain) NSDate * dateSent; 
@required
-(void)setDomainIdentifier:(id)arg1;
-(NSString *)domainIdentifier;
-(NSArray *)mailboxIdentifiers;
-(NSString *)accountIdentifier;
-(NSArray *)recipientAddresses;
-(void)setAccountIdentifier:(id)arg1;
-(void)setRecipientAddresses:(id)arg1;
-(NSDate *)dateSent;
-(void)setDateSent:(id)arg1;
-(NSString *)senderAddress;
-(void)setSenderAddress:(id)arg1;
-(NSDate *)dateReceived;
-(void)setDateReceived:(id)arg1;
-(void)setMailboxIdentifiers:(id)arg1;

@end

