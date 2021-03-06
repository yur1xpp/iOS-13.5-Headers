/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMFFetchScreenshotRequest : DMFTaskRequest {

	BOOL _usesPixels;
	unsigned long long _maxWidth;
	unsigned long long _maxHeight;
	NSString* _sessionToken;

}

@property (assign,nonatomic) unsigned long long maxWidth;               //@synthesize maxWidth=_maxWidth - In the implementation block
@property (assign,nonatomic) unsigned long long maxHeight;              //@synthesize maxHeight=_maxHeight - In the implementation block
@property (assign,nonatomic) BOOL usesPixels;                           //@synthesize usesPixels=_usesPixels - In the implementation block
@property (nonatomic,copy) NSString * sessionToken;                     //@synthesize sessionToken=_sessionToken - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)maxWidth;
-(void)setMaxWidth:(unsigned long long)arg1 ;
-(unsigned long long)maxHeight;
-(void)setMaxHeight:(unsigned long long)arg1 ;
-(void)setSessionToken:(NSString *)arg1 ;
-(NSString *)sessionToken;
-(BOOL)usesPixels;
-(void)setUsesPixels:(BOOL)arg1 ;
@end

