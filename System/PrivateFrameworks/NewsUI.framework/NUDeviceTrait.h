/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsUI/NewsUI-Structs.h>
#import <libobjc.A.dylib/NUDeviceTrait.h>

@protocol NUDeviceTrait <NSObject,NSCopying>
@property (nonatomic,readonly) unsigned long long deviceTraitSize; 
@property (getter=isLandscape,nonatomic,readonly) BOOL landscape; 
@required
-(BOOL)isLandscape;
-(unsigned long long)deviceTraitSize;

@end


@class NSString;

@interface NUDeviceTrait : NSObject <NUDeviceTrait> {

	unsigned long long _deviceTraitSize;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long deviceTraitSize;              //@synthesize deviceTraitSize=_deviceTraitSize - In the implementation block
@property (getter=isLandscape,nonatomic,readonly) BOOL landscape; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isLandscape;
-(unsigned long long)deviceTraitSize;
-(id)initWithDeviceTraitSize:(unsigned long long)arg1 ;
@end
