/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 8:03:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface RTLearnedLocationReconcilerModel : NSObject
-(double)weightForVisit:(id)arg1 modelContext:(id)arg2 ;
-(double)scoreForDeviceClass:(id)arg1 ;
-(double)_weightWithDeviceWeight:(double)arg1 visitsPercentage:(double)arg2 transitionsPercentage:(double)arg3 semanticLabel:(BOOL)arg4 firstVisit:(BOOL)arg5 earliestTransition:(BOOL)arg6 rawLocationCount:(unsigned long long)arg7 ;
@end

