/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelConfigurationBase.h>
#import <libobjc.A.dylib/RMModelRegisteredTypeProtocol.h>

@class NSArray, NSString;

@interface RMModelManagementStatusSubscriptionsDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol> {

	NSArray* _payloadStatusItems;

}

@property (nonatomic,copy) NSArray * payloadStatusItems;              //@synthesize payloadStatusItems=_payloadStatusItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildWithIdentifier:(id)arg1 statusItems:(id)arg2 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 statusItems:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)assetReferences;
-(BOOL)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)serializePayloadWithType:(short)arg1 ;
-(void)setPayloadStatusItems:(NSArray *)arg1 ;
-(NSArray *)payloadStatusItems;
@end

