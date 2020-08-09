/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 7:56:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_protocol_options.h>

@protocol OS_xpc_object;
@class NWConcrete_nw_protocol_definition, NSObject, NSString;

@interface NWConcrete_nw_protocol_options : NSObject <OS_nw_protocol_options> {

	NWConcrete_nw_protocol_definition* definition;
	nw_protocol* protocol_handle;
	NSObject*<OS_xpc_object> legacy_parameters;
	char* log_id_str;
	unsigned short log_id_num;
	void* handle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithOptions:(id)arg1 ;
-(id)initWithDefinition:(id)arg1 ;
@end
