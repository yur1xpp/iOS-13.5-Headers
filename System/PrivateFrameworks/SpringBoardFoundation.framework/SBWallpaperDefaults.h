/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSDictionary, NSDate;

@interface SBWallpaperDefaults : SBAbstractSpringBoardDefaultDomain

@property (assign,nonatomic) NSDictionary * homeScreenWallpapers; 
@property (assign,nonatomic) NSDictionary * lockScreenWallpapers; 
@property (assign,nonatomic) BOOL enableWallpaperDimming; 
@property (nonatomic,retain) NSDate * dateIrisWallpaperLastPlayed; 
@property (assign,nonatomic) unsigned long long irisWallpaperPlayCount; 
@property (nonatomic,readonly) BOOL legacyUsesUniqueHomeScreenWallpaper; 
-(void)setDateIrisWallpaperLastPlayed:(NSDate *)arg1 ;
-(NSDate *)dateIrisWallpaperLastPlayed;
-(void)setEnableWallpaperDimming:(BOOL)arg1 ;
-(BOOL)enableWallpaperDimming;
-(void)setHomeScreenWallpapers:(NSDictionary *)arg1 ;
-(NSDictionary *)homeScreenWallpapers;
-(void)setLockScreenWallpapers:(NSDictionary *)arg1 ;
-(NSDictionary *)lockScreenWallpapers;
-(void)setLegacyUsesUniqueHomeScreenWallpaper:(BOOL)arg1 ;
-(BOOL)legacyUsesUniqueHomeScreenWallpaper;
-(void)setIrisWallpaperPlayCount:(unsigned long long)arg1 ;
-(unsigned long long)irisWallpaperPlayCount;
-(void)_bindAndRegisterDefaults;
-(void)clearLegacyDefaults;
@end
