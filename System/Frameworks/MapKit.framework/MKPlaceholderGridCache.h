/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class MKMapSnapshotter, UIImage;

@interface MKPlaceholderGridCache : NSObject {

	os_unfair_lock_s _lock;
	os_unfair_lock_s _snapshotterLock;
	MKMapSnapshotter* _lightSnapshotter;
	MKMapSnapshotter* _darkSnapshotter;
	UIImage* _lightGrid;
	UIImage* _darkGrid;

}

@property (nonatomic,readonly) UIImage * lightGrid;              //@synthesize lightGrid=_lightGrid - In the implementation block
@property (nonatomic,readonly) UIImage * darkGrid;               //@synthesize darkGrid=_darkGrid - In the implementation block
+(id)unretainedInstance;
-(id)init;
-(void)_cancelSnapshots;
-(void)_saveLightGrid:(id)arg1 ;
-(void)_saveDarkGrid:(id)arg1 ;
-(void)loadPlaceholderGridImages;
-(UIImage *)lightGrid;
-(UIImage *)darkGrid;
@end
