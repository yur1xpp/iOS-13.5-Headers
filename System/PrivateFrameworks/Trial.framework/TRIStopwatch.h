/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Trial/Trial-Structs.h>
@interface TRIStopwatch : NSObject {

	unsigned long long _start_time;
	mach_timebase_info _time_info;

}
+(id)start;
-(id)init;
-(unsigned)elapsed_ms;
@end

