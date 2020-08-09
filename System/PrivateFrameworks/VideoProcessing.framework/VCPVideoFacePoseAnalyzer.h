/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPCNNFaceLandmarkDetector, VCPPnPSolver, VCPVideoFacePoseFilter;

@interface VCPVideoFacePoseAnalyzer : NSObject {

	VCPCNNFaceLandmarkDetector* _landmarkDetector;
	VCPPnPSolver* _poseEstimator;
	VCPVideoFacePoseFilter* _filter;
	float _focalLengthInPixels;
	SCD_Struct_VC6 _lastTimestamp;
	int _width;
	int _height;
	float _points2D[14];
	float _points3D[21];
	SCD_Struct_VC41 _pose;

}

@property (assign) SCD_Struct_VC41 pose;              //@synthesize pose=_pose - In the implementation block
-(id)init;
-(SCD_Struct_VC41)pose;
-(void)setPose:(SCD_Struct_VC41)arg1 ;
-(BOOL)updateFocalLengthInPixels:(float)arg1 ;
-(id)initWithFocalLengthInPixels:(float)arg1 ;
-(int)analyzeFrameForPose:(CVBufferRef)arg1 withFaceRect:(CGRect)arg2 withTimestamp:(SCD_Struct_VC6)arg3 ;
@end
