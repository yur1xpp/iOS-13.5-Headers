/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOAbstractRequestResponseTicket.h>
#import <libobjc.A.dylib/GEOMapServiceSearchFieldPlaceholderTicket.h>

@class GEOMapServiceTraits, NSDictionary, NSString;

@interface _GEOPlaceSearchPlaceholderTicket : GEOAbstractRequestResponseTicket <GEOMapServiceSearchFieldPlaceholderTicket>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@property (nonatomic,readonly) NSDictionary * responseUserInfo; 
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
@end

