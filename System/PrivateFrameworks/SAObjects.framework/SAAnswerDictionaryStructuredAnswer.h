/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAnswerStructuredAnswer.h>

@class NSString, NSArray, NSURL;

@interface SAAnswerDictionaryStructuredAnswer : AceObject <SAAnswerStructuredAnswer>

@property (nonatomic,copy) NSString * category; 
@property (nonatomic,copy) NSArray * definitionGroups; 
@property (nonatomic,copy) NSString * phoneticPronunciation; 
@property (nonatomic,copy) NSURL * sound; 
@property (nonatomic,copy) NSArray * syllables; 
@property (nonatomic,copy) NSString * word; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dictionaryStructuredAnswer;
+(id)dictionaryStructuredAnswerWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(id)groupIdentifier;
-(void)setSound:(NSURL *)arg1 ;
-(NSURL *)sound;
-(NSString *)word;
-(id)encodedClassName;
-(void)setWord:(NSString *)arg1 ;
-(NSArray *)definitionGroups;
-(void)setDefinitionGroups:(NSArray *)arg1 ;
-(NSString *)phoneticPronunciation;
-(void)setPhoneticPronunciation:(NSString *)arg1 ;
-(NSArray *)syllables;
-(void)setSyllables:(NSArray *)arg1 ;
@end

