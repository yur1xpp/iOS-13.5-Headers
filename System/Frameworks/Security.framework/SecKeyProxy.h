/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Security.framework/Security
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Security/Security-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSData, NSXPCListener, NSXPCListenerEndpoint, NSString;

@interface SecKeyProxy : NSObject <NSXPCListenerDelegate> {

	id _key;
	NSData* _certificate;
	NSXPCListener* _listener;

}

@property (nonatomic,readonly) NSXPCListenerEndpoint * endpoint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)targetForKey:(_SecKey*)arg1 error:(_CFError*)arg2 ;
+(_SecKey*)createItemFromEndpoint:(id)arg1 certificate:(id*)arg2 error:(id*)arg3 ;
+(_SecKey*)createKeyFromEndpoint:(id)arg1 error:(id*)arg2 ;
+(SecIdentityRef)createIdentityFromEndpoint:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(void)invalidate;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSXPCListenerEndpoint *)endpoint;
-(id)initWithKey:(_SecKey*)arg1 ;
-(id)initWithIdentity:(SecIdentityRef)arg1 ;
-(id)initWithKey:(_SecKey*)arg1 certificate:(id)arg2 ;
@end
