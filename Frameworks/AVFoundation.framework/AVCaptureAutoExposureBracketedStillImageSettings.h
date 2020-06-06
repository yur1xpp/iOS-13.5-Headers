/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVCaptureBracketedStillImageSettings.h>

@interface AVCaptureAutoExposureBracketedStillImageSettings : AVCaptureBracketedStillImageSettings {

	float _exposureTargetBias;

}

@property (readonly) float exposureTargetBias;              //@synthesize exposureTargetBias=_exposureTargetBias - In the implementation block
+(id)autoExposureSettingsWithExposureTargetBias:(float)arg1 ;
-(id)description;
-(id)debugDescription;
-(float)exposureTargetBias;
-(id)_initAutoExposureSettingsWithExposureTargetBias:(float)arg1 ;
@end
