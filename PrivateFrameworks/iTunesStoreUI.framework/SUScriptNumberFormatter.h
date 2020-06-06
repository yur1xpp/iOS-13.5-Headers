/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSNumberFormatter, NSString;

@interface SUScriptNumberFormatter : SUScriptObject {

	NSNumberFormatter* _numberFormatter;

}

@property (retain) NSString * localeIdentifier; 
@property (retain) NSString * style; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)localeIdentifier;
-(id)stringFromNumber:(id)arg1 ;
-(id)numberFromString:(id)arg1 ;
-(NSString *)style;
-(void)setStyle:(NSString *)arg1 ;
-(id)attributeKeys;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(id)scriptAttributeKeys;
@end
