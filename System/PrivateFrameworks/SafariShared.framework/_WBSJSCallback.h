/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SafariShared/SafariShared-Structs.h>
@interface _WBSJSCallback : NSObject {

	OpaqueJSValueRef _callbackFunction;
	JSRetainPtr<OpaqueJSContext *>* _globalContext;

}

@property (nonatomic,readonly) id callbackHandler; 
-(void)dealloc;
-(id)initWithCallbackFunction:(OpaqueJSValueRef)arg1 context:(OpaqueJSContextRef)arg2 ;
-(id)callbackHandler;
@end

