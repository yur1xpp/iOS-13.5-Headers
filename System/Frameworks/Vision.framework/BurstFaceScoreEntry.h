/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BurstFaceScoreEntry : NSObject {

	float maxScore;
	float minScore;
	float sumScores;
	float sumSqScores;
	int numScores;

}

@property (assign) float maxScore; 
@property (assign) float minScore; 
@property (assign) int numScores; 
-(float)computeAverage;
-(id)initWithScore:(float)arg1 ;
-(void)addScore:(float)arg1 ;
-(float)computeStandardDeviation;
-(float)maxScore;
-(void)setMaxScore:(float)arg1 ;
-(float)minScore;
-(void)setMinScore:(float)arg1 ;
-(int)numScores;
-(void)setNumScores:(int)arg1 ;
@end

