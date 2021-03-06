/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HFHomeKitSettingsVendor;
@class NSMutableDictionary;

@interface HFHomeKitSettingsAdapterManager : NSObject {

	id<HFHomeKitSettingsVendor> _homeKitSettingsVendor;
	NSMutableDictionary* _adaptersByID;

}

@property (nonatomic,__weak,readonly) id<HFHomeKitSettingsVendor> homeKitSettingsVendor;              //@synthesize homeKitSettingsVendor=_homeKitSettingsVendor - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * adaptersByID;                                    //@synthesize adaptersByID=_adaptersByID - In the implementation block
-(id)init;
-(id<HFHomeKitSettingsVendor>)homeKitSettingsVendor;
-(id)adapterForIdentifier:(id)arg1 ;
-(id)initWithHomeKitSettingsVendor:(id)arg1 ;
-(NSMutableDictionary *)adaptersByID;
-(id)_createAdapterForIdentifier:(id)arg1 ;
@end

