/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, MCPeerID;

@interface AXSSInterDeviceSearchResult : NSObject {

	NSString* _deviceType;
	MCPeerID* _peerID;

}

@property (nonatomic,retain) MCPeerID * peerID;                //@synthesize peerID=_peerID - In the implementation block
@property (nonatomic,copy) NSString * deviceType;              //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,readonly) NSString * name; 
+(id)searchResultWithPeerID:(id)arg1 deviceType:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(NSString *)deviceType;
-(void)setDeviceType:(NSString *)arg1 ;
-(MCPeerID *)peerID;
-(void)setPeerID:(MCPeerID *)arg1 ;
-(id)initWithPeerID:(id)arg1 deviceType:(id)arg2 ;
@end
