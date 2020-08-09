/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPSectionedIdentifierListItemEntry, NSMutableSet;

@interface _MPSectionedIdentifierListCloneIndexEntry : NSObject {

	MPSectionedIdentifierListItemEntry* _rootEntry;
	NSMutableSet* _clonedEntries;

}

@property (nonatomic,retain) MPSectionedIdentifierListItemEntry * rootEntry;              //@synthesize rootEntry=_rootEntry - In the implementation block
@property (nonatomic,retain) NSMutableSet * clonedEntries;                                //@synthesize clonedEntries=_clonedEntries - In the implementation block
-(id)init;
-(MPSectionedIdentifierListItemEntry *)rootEntry;
-(void)setRootEntry:(MPSectionedIdentifierListItemEntry *)arg1 ;
-(NSMutableSet *)clonedEntries;
-(void)setClonedEntries:(NSMutableSet *)arg1 ;
@end
