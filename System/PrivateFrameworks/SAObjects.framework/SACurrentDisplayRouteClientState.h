/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAceClientState.h>

@class NSArray;

@interface SACurrentDisplayRouteClientState : SAAceClientState

@property (nonatomic,copy) NSArray * activeDisplayRoutes; 
+(id)deliveryDeadline;
+(id)persistencePolicy;
+(id)currentDisplayRouteClientState;
+(id)currentDisplayRouteClientStateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)activeDisplayRoutes;
-(void)setActiveDisplayRoutes:(NSArray *)arg1 ;
@end

