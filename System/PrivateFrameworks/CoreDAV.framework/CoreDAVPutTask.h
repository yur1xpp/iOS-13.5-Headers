/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVPostOrPutTask.h>

@class NSString;

@interface CoreDAVPutTask : CoreDAVPostOrPutTask {

	NSString* _nextETag;

}

@property (nonatomic,retain) NSString * nextETag;                                  //@synthesize nextETag=_nextETag - In the implementation block
@property (assign,nonatomic,__weak) id<CoreDAVTaskDelegate> delegate; 
-(id)description;
-(id)httpMethod;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(NSString *)nextETag;
-(void)setNextETag:(NSString *)arg1 ;
@end

