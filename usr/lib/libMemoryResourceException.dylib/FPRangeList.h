/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 8:04:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /usr/lib/libMemoryResourceException.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libMemoryResourceException.dylib/libMemoryResourceException.dylib-Structs.h>
@interface FPRangeList : NSObject {

	FPRangeListNode* _rangeListHead;

}
-(void)dealloc;
-(SCD_Struct_FP0)sum;
-(void)_addRangeList:(id)arg1 pageSize:(unsigned long long)arg2 ;
-(void)addRange:(NSRange)arg1 pageSize:(unsigned long long)arg2 memoryTotal:(SCD_Struct_FP0*)arg3 ;
-(void)addRegion:(id)arg1 pageSize:(unsigned long long)arg2 ;
@end

