/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSMutableArray;

@interface SXBlueprintAnalyzerCursor : NSObject {

	double _highestMaxY;
	NSArray* _path;
	NSMutableArray* _mutablePath;

}

@property (nonatomic,readonly) NSMutableArray * mutablePath;              //@synthesize mutablePath=_mutablePath - In the implementation block
@property (assign,nonatomic) double highestMaxY;                          //@synthesize highestMaxY=_highestMaxY - In the implementation block
@property (nonatomic,retain) NSArray * path;                              //@synthesize path=_path - In the implementation block
-(id)init;
-(NSArray *)path;
-(void)setPath:(NSArray *)arg1 ;
-(void)addPathComponent:(id)arg1 ;
-(void)removePathComponent:(id)arg1 ;
-(double)highestMaxY;
-(void)setHighestMaxY:(double)arg1 ;
-(NSMutableArray *)mutablePath;
@end

