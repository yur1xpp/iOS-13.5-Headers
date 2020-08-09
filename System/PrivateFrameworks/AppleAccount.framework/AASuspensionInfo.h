/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AppleAccount-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface AASuspensionInfo : NSObject <NSCopying> {

	NSDictionary* _suspensionInfoDictionary;

}

@property (getter=isiCloudSuspended,nonatomic,readonly) BOOL iCloudSuspended; 
@property (getter=isFamilySuspended,nonatomic,readonly) BOOL familySuspended; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)isiCloudSuspended;
-(BOOL)isFamilySuspended;
@end
