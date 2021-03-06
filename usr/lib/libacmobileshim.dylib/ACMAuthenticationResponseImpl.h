/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 8:05:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libacmobileshim.dylib/ACMMessage.h>
#import <libobjc.A.dylib/ACMAuthenticationResponse.h>

@class NSString, NSDictionary, NSError;

@interface ACMAuthenticationResponseImpl : ACMMessage <ACMAuthenticationResponse>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSString * token; 
@property (retain) NSString * userName; 
@property (retain) NSDictionary * rawResponseData; 
@property (retain) NSError * error; 
@property (assign) BOOL generatedWithTouchID; 
+(id)authenticationResponse;
@end

