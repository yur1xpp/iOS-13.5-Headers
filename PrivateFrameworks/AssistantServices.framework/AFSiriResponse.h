/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID;

@interface AFSiriResponse : NSObject <NSSecureCoding> {

	NSUUID* _requestIdentifier;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithRequest:(id)arg1 ;
-(BOOL)_isForRequest:(id)arg1 ;
-(id)_initWithRequestIdentifier:(id)arg1 ;
@end
