/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSCloudKitMirroringResult.h>

@class NSDictionary;

@interface NSCloudKitMirroringExportProgressResult : NSCloudKitMirroringResult {

	NSDictionary* _objectIDToLastExportedToken;

}

@property (nonatomic,readonly) NSDictionary * objectIDToLastExportedToken;              //@synthesize objectIDToLastExportedToken=_objectIDToLastExportedToken - In the implementation block
-(void)dealloc;
-(id)initWithRequest:(id)arg1 objectIDToLastExportedToken:(id)arg2 error:(id)arg3 ;
-(NSDictionary *)objectIDToLastExportedToken;
@end

