/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SNAnalyzerProviding.h>
#import <libobjc.A.dylib/SNRequest.h>

@class SNDetectSignalThresholdRequestImpl, NSString;

@interface SNDetectSignalThresholdRequest : NSObject <SNAnalyzerProviding, SNRequest> {

	SNDetectSignalThresholdRequestImpl* _detector;

}

@property (assign,nonatomic) double sampleRate; 
@property (assign,nonatomic) unsigned blockSize; 
@property (assign,nonatomic) double magnitudeThreshold; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<SNAnalyzing> analyzer; 
-(id)init;
-(void)setSampleRate:(double)arg1 ;
-(double)sampleRate;
-(id<SNAnalyzing>)analyzer;
-(unsigned)blockSize;
-(void)setBlockSize:(unsigned)arg1 ;
-(double)magnitudeThreshold;
-(void)setMagnitudeThreshold:(double)arg1 ;
@end

