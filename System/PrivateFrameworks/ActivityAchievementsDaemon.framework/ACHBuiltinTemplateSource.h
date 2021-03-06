/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACHTemplateSource.h>

@class NSString;

@interface ACHBuiltinTemplateSource : NSObject <ACHTemplateSource>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) long long runCadence; 
@property (assign,nonatomic,__weak) NSObject*<ACHTemplateSourceDelegate> delegate; 
-(NSString *)identifier;
-(BOOL)sourceShouldRunForDate:(id)arg1 ;
-(void)templatesForDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)localizationBundleURLForTemplate:(id)arg1 ;
-(id)resourceBundleURLForTemplate:(id)arg1 ;
-(id)propertyListBundleURLForTemplate:(id)arg1 ;
-(id)stickerBundleURLForTemplate:(id)arg1 ;
-(long long)runCadence;
@end

