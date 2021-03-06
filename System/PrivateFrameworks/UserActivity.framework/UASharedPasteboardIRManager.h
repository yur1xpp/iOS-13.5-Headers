/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface UASharedPasteboardIRManager : NSObject {

	NSMutableDictionary* _lookupTable;

}

@property (retain) NSMutableDictionary * lookupTable;              //@synthesize lookupTable=_lookupTable - In the implementation block
+(id)sharedIRManager;
-(id)init;
-(void)registerIRHandlerClass:(Class)arg1 forType:(id)arg2 ;
-(id)converterForType:(id)arg1 ;
-(void)initializeConverters;
-(id)registeredConverters;
-(void)setLookupTable:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)lookupTable;
@end

