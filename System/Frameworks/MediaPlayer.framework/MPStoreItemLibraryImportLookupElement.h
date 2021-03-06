/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPStoreItemLibraryImportElement.h>

@class ICStorePlatformMetadata, NSDictionary;

@interface MPStoreItemLibraryImportLookupElement : MPStoreItemLibraryImportElement {

	ICStorePlatformMetadata* _storeItem;
	NSDictionary* _lookupDictionary;

}

@property (nonatomic,readonly) NSDictionary * lookupDictionary;              //@synthesize lookupDictionary=_lookupDictionary - In the implementation block
-(NSDictionary *)lookupDictionary;
-(id)storeItem;
-(id)initWithLookupDictionary:(id)arg1 additionalTrackMetadata:(id)arg2 ;
@end

