/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/ML3DatabaseOperation.h>

@class CSSearchableIndex, NSString;

@interface ML3UpdateSpotlightIndexOperation : ML3DatabaseOperation {

	CSSearchableIndex* _index;
	NSString* _bundleIdentifier;
	unsigned long long _bundle;
	unsigned long long _batchCount;

}

@property (nonatomic,retain) CSSearchableIndex * index;                  //@synthesize index=_index - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long bundle;                  //@synthesize bundle=_bundle - In the implementation block
@property (assign,nonatomic) unsigned long long batchCount;              //@synthesize batchCount=_batchCount - In the implementation block
-(unsigned long long)type;
-(CSSearchableIndex *)index;
-(NSString *)bundleIdentifier;
-(unsigned long long)bundle;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setBundle:(unsigned long long)arg1 ;
-(void)setIndex:(CSSearchableIndex *)arg1 ;
-(BOOL)_execute:(id*)arg1 ;
-(unsigned long long)batchCount;
-(void)setBatchCount:(unsigned long long)arg1 ;
-(BOOL)_verifyLibraryConnectionAndAttributesProperties:(id*)arg1 ;
-(BOOL)_updateIndexedItemsWithIdentifiers:(id)arg1 error:(id*)arg2 ;
-(BOOL)_indexItemsFromLibrarySinceRevision:(long long)arg1 targetRevision:(long long)arg2 error:(id*)arg3 ;
-(BOOL)_deleteAllIndexedItemsWithError:(id*)arg1 ;
-(BOOL)_deleteIndexedItemsWithEntityStringIDs:(id)arg1 error:(id*)arg2 ;
-(BOOL)_indexTracksWithPersistentIDs:(id)arg1 playlistsWithPersistentIDs:(id)arg2 error:(id*)arg3 ;
-(BOOL)_batchIndexWithTrackPersistentIDsToUpdate:(id)arg1 playlistsPersistentIDsToUpdateSet:(id)arg2 entityStringsToDelete:(id)arg3 currentRevision:(id)arg4 targetRevision:(id)arg5 error:(id*)arg6 ;
-(BOOL)_enumerateSearchableItemsWithPersistentIDs:(id)arg1 entityType:(long long)arg2 error:(id*)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)_createSearchableItemsWithPersistentIDs:(id)arg1 entityType:(long long)arg2 error:(id*)arg3 ;
-(id)_createSearchableItemsForTracksWithQuery:(id)arg1 error:(id*)arg2 ;
-(id)_createSearchableItemsForPlaylistsWithQuery:(id)arg1 error:(id*)arg2 ;
-(id)_queryForPlaylistsContainingMusicShowsMissedByQuery:(id)arg1 inContainerPIDs:(id)arg2 ;
@end
