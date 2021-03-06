/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BBSettingsGateway, NSLock;

@interface BLTSettingsGateway : NSObject {

	BBSettingsGateway* _actualSettingsGateway;
	NSLock* _actualSettingsGatewayLock;
	int _token;

}
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)surrogateWithQueue:(id)arg1 ;
-(void)dealloc;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
@end

