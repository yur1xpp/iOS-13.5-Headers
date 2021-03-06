/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedTransitBaseRouteLeg.h>

@interface GEOComposedTransitStationRouteLeg : GEOComposedTransitBaseRouteLeg
-(BOOL)isTransfer;
-(id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 stepRange:(NSRange)arg3 transitStepRange:(NSRange)arg4 pointRange:(NSRange)arg5 ;
-(BOOL)hasEnterStationManeuver;
-(BOOL)hasExitStationManeuver;
@end

