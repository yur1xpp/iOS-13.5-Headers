/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsObject.h>

@class NSString;

@interface MapsSuggestionsQueue : NSObject <MapsSuggestionsObject> {

	unique_ptr<MSg::Queue, std::__1::default_delete<MSg::Queue> >* _cppQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> innerQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
+(id)serialQueueWithName:(id)arg1 ;
-(NSString *)uniqueName;
-(id)initSerialQueueWithName:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)innerQueue;
-(void)syncBlock:(/*^block*/id)arg1 ;
-(id)syncReturningBlock:(/*^block*/id)arg1 ;
-(BOOL)syncBOOLReturningBlock:(/*^block*/id)arg1 ;
-(void)asyncBlock:(/*^block*/id)arg1 ;
@end

