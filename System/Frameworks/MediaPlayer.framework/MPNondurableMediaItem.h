/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaItem.h>

@interface MPNondurableMediaItem : MPMediaItem {

	unsigned long long _persistentID;

}
+(BOOL)supportsSecureCoding;
+(BOOL)canFilterByProperty:(id)arg1 ;
+(id)defaultPropertyValues;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)persistentID;
-(id)valueForProperty:(id)arg1 ;
-(void)incrementPlayCount;
-(id)mediaLibrary;
-(id)initWithPersistentID:(unsigned long long)arg1 ;
-(BOOL)existsInLibrary;
-(id)valuesForProperties:(id)arg1 ;
-(BOOL)didSkipWithPlayedToTime:(double)arg1 ;
-(void)markNominalAmountHasBeenPlayed;
-(void)noteWasPlayedToTime:(double)arg1 skipped:(BOOL)arg2 ;
-(void)incrementSkipCount;
-(void)incrementPlayCountForPlayingToEnd;
-(BOOL)incrementPlayCountForStopTime:(double)arg1 ;
-(void)updateDateAccessedToCurrentDateWithWriteCompletionBlock:(/*^block*/id)arg1 ;
-(double)nominalHasBeenPlayedThreshold;
-(BOOL)isUsableAsRepresentativeItem;
-(void)enumerateValuesForProperties:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

