/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFAppRequest.h>

@class NSArray;

@interface DMFSetAppAssociatedDomainsRequest : DMFAppRequest {

	NSArray* _associatedDomains;

}

@property (nonatomic,copy) NSArray * associatedDomains;              //@synthesize associatedDomains=_associatedDomains - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)associatedDomains;
-(void)setAssociatedDomains:(NSArray *)arg1 ;
@end
