/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <RelevanceEngine/RelevanceEngine-Structs.h>
@class REDataSourceManager, NSCache, NSMutableDictionary, NSObject, REAppIconCache, REAppNameCache, NSSet;

@interface REDataSourceCatalog : NSObject {

	REDataSourceManager* _dataSourceManager;
	NSCache* _iconCache;
	NSMutableDictionary* _localizedNameCache;
	NSObject*<OS_dispatch_queue> _queue;
	REAppIconCache* _appIconCache;
	REAppNameCache* _appNameCache;

}

@property (nonatomic,readonly) NSSet * dataSourceIdentifiers; 
@property (nonatomic,readonly) NSSet * unrestrictedDataSourceIdentifiers; 
-(void)dealloc;
-(id)initWithDataSourceManager:(id)arg1 ;
-(void)_applicationsStatesDidChange;
-(void)imageForApplicationWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)localizedNameForApplicationWithIdentifier:(id)arg1 ;
-(SCD_Struct_RE2)minimumSupportedSystemVersionForDataSourceWithIdentifier:(id)arg1 ;
-(id)applicationIdentifierForDataSourceWithIdentifier:(id)arg1 ;
-(NSSet *)dataSourceIdentifiers;
-(NSSet *)unrestrictedDataSourceIdentifiers;
-(void)enumerateDataSources:(/*^block*/id)arg1 ;
-(void)donatedAppIdentifiersWithCompletion:(/*^block*/id)arg1 ;
-(id)localAndRemoteAppIdentifiersForDataSourceIdentifiers:(id)arg1 ;
-(BOOL)imageForDataSourceWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)localizedNameForDataSourceWithIdentifier:(id)arg1 ;
-(BOOL)wantsApplicationPrewarmForDataSourceWithIdentifier:(id)arg1 ;
-(BOOL)requiresLocationInUseAssertonForDataSourceWithIdentifier:(id)arg1 ;
@end
