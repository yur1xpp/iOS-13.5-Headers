/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKPlaceActivityProviderDelegate;
@class MKMapItem;

@interface MKPlaceActivityProvider : NSObject {

	id<MKPlaceActivityProviderDelegate> _delegate;
	MKMapItem* _mapItem;

}

@property (assign,nonatomic,__weak) id<MKPlaceActivityProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                              //@synthesize mapItem=_mapItem - In the implementation block
-(id<MKPlaceActivityProviderDelegate>)delegate;
-(void)setDelegate:(id<MKPlaceActivityProviderDelegate>)arg1 ;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)mapItem;
-(id)initWithMapItem:(id)arg1 ;
-(id)activityTitle;
-(id)activityURL;
-(BOOL)shouldUseWebPlaceCardForActivityType:(id)arg1 ;
-(id)webPlaceCardURL;
-(id)activityAnnotationView;
-(id)mapMetadataSpecialization;
@end

