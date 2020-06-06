/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NetworkExtension/NetworkExtension-Structs.h>
@class NSString, NEHotspotNetwork, NSArray;

@interface NEHotspotHelperCommand : NSObject {

	CNPluginCommandRef _command;

}

@property (assign) CNPluginCommandRef command;                //@synthesize command=_command - In the implementation block
@property (readonly) NSString * interfaceName; 
@property (readonly) long long commandType; 
@property (readonly) NEHotspotNetwork * network; 
@property (readonly) NSArray * networkList; 
-(void)dealloc;
-(id)description;
-(NEHotspotNetwork *)network;
-(NSString *)interfaceName;
-(id)initWithCommand:(CNPluginCommandRef)arg1 ;
-(void)setCommand:(CNPluginCommandRef)arg1 ;
-(CNPluginCommandRef)command;
-(NSArray *)networkList;
-(long long)commandType;
-(id)createResponse:(long long)arg1 ;
-(id)createTCPConnection:(id)arg1 ;
-(id)createUDPSession:(id)arg1 ;
@end
