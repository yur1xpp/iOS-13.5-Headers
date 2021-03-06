/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSXPCCoding.h>

@protocol OS_xpc_object;
@class NSObject, NSString;

@interface CPEndpointListenerWrapper : NSObject <BSXPCCoding> {

	NSObject*<OS_xpc_object> _endpoint;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> endpoint;              //@synthesize endpoint=_endpoint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_xpc_object>)endpoint;
-(void)setEndpoint:(NSObject*<OS_xpc_object>)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCEndpoint:(id)arg1 ;
@end

