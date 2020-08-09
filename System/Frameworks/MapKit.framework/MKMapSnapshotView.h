/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIImageView.h>

@class MKMapSnapshotter;

@interface MKMapSnapshotView : UIImageView {

	MKMapSnapshotter* _snapshotter;
	MKMapSnapshotter* _gridSnapshotter;

}
-(void)cancel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)takeSnapshotWithOptions:(id)arg1 gridOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end
