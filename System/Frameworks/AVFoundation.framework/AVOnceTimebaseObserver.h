/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVTimebaseObserver.h>

@interface AVOnceTimebaseObserver : AVTimebaseObserver {

	SCD_Struct_AV7 _fireTime;
	/*^block*/id _block;
	BOOL _didFire;

}

@property (nonatomic,readonly) BOOL didFire; 
-(void)dealloc;
-(void)invalidate;
-(void)_fireBlock;
-(void)_effectiveRateChanged;
-(void)_resetNextFireTime;
-(void)_handleTimeDiscontinuity;
-(id)initWithTimebase:(OpaqueCMTimebaseRef)arg1 fireTime:(SCD_Struct_AV7)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
-(BOOL)didFire;
@end
