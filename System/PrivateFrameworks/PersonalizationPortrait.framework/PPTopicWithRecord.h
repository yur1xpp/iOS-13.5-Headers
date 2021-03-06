/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <PersonalizationPortrait/PPTopic.h>

@class PPTopicRecord;

@interface PPTopicWithRecord : PPTopic {

	PPTopicRecord* _mostRelevantRecord;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)sentimentScore;
-(id)mostRelevantRecord;
-(id)initWithTopicIdentifier:(id)arg1 mostRelevantRecord:(id)arg2 ;
@end

