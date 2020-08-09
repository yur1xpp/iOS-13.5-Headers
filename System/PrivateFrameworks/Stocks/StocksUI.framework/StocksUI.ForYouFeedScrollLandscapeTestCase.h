/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksUI.framework/StocksUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SNTestCaseScroll.h>
#import <libobjc.A.dylib/SNTestRunOptions.h>

@class NSString, NSArray;

@interface StocksUI.ForYouFeedScrollLandscapeTestCase : NSObject <SNTestCaseScroll, SNTestRunOptions> {

	 testName;
	 timeoutInSeconds;
	 aggregate;
	 requiredCapabilities;
	 iterations;
	 offset;
	 numberOfScreens;
	 orientation;
	 waitForCommitToFinish;

}

@property (readonly,nonatomic) NSString * testName; 
@property (readonly,nonatomic) double timeoutInSeconds; 
@property (readonly,nonatomic) unsigned long long aggregate; 
@property (readonly,nonatomic) NSArray * requiredCapabilities; 
@property (readonly,nonatomic) long long iterations; 
@property (readonly,nonatomic) long long offset; 
@property (readonly,nonatomic) long long numberOfScreens; 
@property (readonly,nonatomic) long long orientation; 
@property (readonly,nonatomic) BOOL waitForCommitToFinish; 
-(id)init;
-(long long)orientation;
-(long long)offset;
-(NSString *)testName;
-(long long)iterations;
-(NSArray *)requiredCapabilities;
-(unsigned long long)aggregate;
-(double)timeoutInSeconds;
-(long long)numberOfScreens;
-(id)scrollViewWithContext:(id)arg1 ;
-(BOOL)waitForCommitToFinish;
@end
