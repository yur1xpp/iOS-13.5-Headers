/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString;

@interface ICUserNotificationBuilder : NSObject <NSCopying> {

	NSMutableDictionary* _userNotificationDictionary;
	long long _alertLevel;
	double _timeoutInterval;

}

@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * alternateButtonTitle; 
@property (nonatomic,copy) NSString * defaultButtonTitle; 
@property (nonatomic,copy) NSString * otherButtonTitle; 
@property (assign,nonatomic) BOOL allowInCar; 
@property (assign,nonatomic) BOOL displaysActionButtonOnLockScreen; 
@property (assign,nonatomic) BOOL displaysAsTopMost; 
@property (assign,nonatomic) BOOL forcesModalAppearance; 
@property (assign,nonatomic) long long alertLevel;                               //@synthesize alertLevel=_alertLevel - In the implementation block
@property (assign,nonatomic) double timeoutInterval;                             //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setTimeoutInterval:(double)arg1 ;
-(double)timeoutInterval;
-(NSString *)defaultButtonTitle;
-(void)setDefaultButtonTitle:(NSString *)arg1 ;
-(NSString *)alternateButtonTitle;
-(void)setAlternateButtonTitle:(NSString *)arg1 ;
-(NSString *)otherButtonTitle;
-(void)setOtherButtonTitle:(NSString *)arg1 ;
-(void)_setBoolValue:(BOOL)arg1 forKey:(CFStringRef)arg2 ;
-(id)initWithStoreDialog:(id)arg1 ;
-(BOOL)allowInCar;
-(CFUserNotificationRef)createCFUserNotification;
-(BOOL)displaysActionButtonOnLockScreen;
-(BOOL)displaysAsTopMost;
-(BOOL)forcesModalAppearance;
-(void)setAllowInCar:(BOOL)arg1 ;
-(void)setDisplaysActionButtonOnLockScreen:(BOOL)arg1 ;
-(void)setDisplaysAsTopMost:(BOOL)arg1 ;
-(void)setForcesModalAppearance:(BOOL)arg1 ;
-(long long)alertLevel;
-(void)setAlertLevel:(long long)arg1 ;
@end

