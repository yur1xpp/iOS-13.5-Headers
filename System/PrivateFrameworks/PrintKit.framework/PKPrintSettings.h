/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, PKPaper;

@interface PKPrintSettings : NSObject {

	NSMutableDictionary* _dict;
	PKPaper* paper;

}

@property (nonatomic,retain) NSMutableDictionary * dict;              //@synthesize dict=_dict - In the implementation block
@property (nonatomic,retain) PKPaper * paper; 
+(id)photo;
+(id)default;
+(id)printSettingsForPrinter:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(NSMutableDictionary *)dict;
-(PKPaper *)paper;
-(void)setPaper:(PKPaper *)arg1 ;
-(void)setDict:(NSMutableDictionary *)arg1 ;
-(id)settingsDict;
@end

