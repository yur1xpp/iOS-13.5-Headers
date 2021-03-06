/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _MXExtensionBaseMapRequest : NSObject <NSSecureCoding> {

	SCD_Struct_MK6 _mapRect;

}

@property (assign,nonatomic) SCD_Struct_MK6 mapRect;              //@synthesize mapRect=_mapRect - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setMapRect:(SCD_Struct_MK6)arg1 ;
-(SCD_Struct_MK6)mapRect;
@end

