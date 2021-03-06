/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PodcastsKit/MTBaseQueryObserver.h>

@class NSSet, NSArray;

@interface MTUuidQueryObserver : MTBaseQueryObserver {

	NSSet* _uuidSet;
	NSArray* _uuidOrder;

}

@property (nonatomic,retain) NSSet * uuidSet;                  //@synthesize uuidSet=_uuidSet - In the implementation block
@property (nonatomic,retain) NSArray * uuidOrder;              //@synthesize uuidOrder=_uuidOrder - In the implementation block
-(void)startObserving;
-(void)controllerDidChangeContent:(id)arg1 ;
-(void)setUuidSet:(NSSet *)arg1 ;
-(NSSet *)uuidSet;
-(void)notifyObservers;
-(id)addResultsChangedHandler:(/*^block*/id)arg1 ;
-(NSArray *)uuidOrder;
-(void)setUuidOrder:(NSArray *)arg1 ;
@end

