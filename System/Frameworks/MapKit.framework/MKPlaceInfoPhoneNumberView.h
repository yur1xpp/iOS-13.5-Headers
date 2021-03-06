/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceInfoContactRowView.h>

@class _MKUILabel;

@interface MKPlaceInfoPhoneNumberView : MKPlaceInfoContactRowView {

	_MKUILabel* _optsOutOfAdsView;
	BOOL _optsOutOfAds;

}

@property (assign,nonatomic) BOOL optsOutOfAds;              //@synthesize optsOutOfAds=_optsOutOfAds - In the implementation block
-(id)_icon;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)draggableContent;
-(int)analyticsTarget;
-(id)_valueString;
-(Class)_labeledValueExpectedValueType;
-(id)_iconAccessibilityLabel;
-(id)formatPhoneNumber:(id)arg1 ;
-(void)setOptsOutOfAds:(BOOL)arg1 ;
-(BOOL)optsOutOfAds;
@end

