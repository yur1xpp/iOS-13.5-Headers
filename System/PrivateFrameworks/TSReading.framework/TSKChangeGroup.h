/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface TSKChangeGroup : NSObject <NSCopying> {

	NSMutableArray* mChangesArray;

}

@property (nonatomic,readonly) NSMutableArray * changesArray; 
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)registerChange:(int)arg1 details:(id)arg2 forChangeSource:(id)arg3 ;
-(NSMutableArray *)changesArray;
@end

