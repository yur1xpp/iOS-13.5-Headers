/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate, INPerson, NSArray, NSNumber;


@protocol INMessageExport <NSObject,JSExport>
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * conversationIdentifier; 
@property (nonatomic,copy) NSString * content; 
@property (nonatomic,copy) NSDate * dateSent; 
@property (nonatomic,copy) INPerson * sender; 
@property (nonatomic,copy) NSArray * recipients; 
@property (nonatomic,copy) NSDate * dateMessageWasLastRead; 
@property (nonatomic,copy) NSNumber * numberOfAttachments; 
@property (assign,nonatomic) long long messageType; 
@property (assign,nonatomic) long long messageEffectType; 
@required
-(id)init;
-(NSString *)identifier;
-(void)setIdentifier:(id)arg1;
-(INPerson *)sender;
-(NSArray *)recipients;
-(void)setSender:(id)arg1;
-(void)setRecipients:(id)arg1;
-(NSString *)conversationIdentifier;
-(NSString *)content;
-(void)setContent:(id)arg1;
-(long long)messageType;
-(void)setMessageType:(long long)arg1;
-(void)setConversationIdentifier:(id)arg1;
-(NSDate *)dateSent;
-(void)setDateSent:(id)arg1;
-(NSNumber *)numberOfAttachments;
-(void)setNumberOfAttachments:(id)arg1;
-(NSDate *)dateMessageWasLastRead;
-(void)setDateMessageWasLastRead:(id)arg1;
-(long long)messageEffectType;
-(void)setMessageEffectType:(long long)arg1;

@end
