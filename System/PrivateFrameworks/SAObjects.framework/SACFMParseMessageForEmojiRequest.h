/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SACFMParseMessageForEmojiRequest : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * locale; 
@property (nonatomic,copy) NSString * messageText; 
+(id)parseMessageForEmojiRequest;
+(id)parseMessageForEmojiRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setLocale:(NSString *)arg1 ;
-(NSString *)locale;
-(id)groupIdentifier;
-(void)setMessageText:(NSString *)arg1 ;
-(NSString *)messageText;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

