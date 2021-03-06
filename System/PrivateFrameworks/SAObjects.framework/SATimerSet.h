/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>
#import <SAObjects/SATimerTimerAction.h>

@class SATimerObject, NSString;

@interface SATimerSet : SADomainCommand <SATimerTimerAction>

@property (nonatomic,retain) SATimerObject * timer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)set;
+(id)setWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SATimerObject *)timer;
-(void)setTimer:(SATimerObject *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
@end

