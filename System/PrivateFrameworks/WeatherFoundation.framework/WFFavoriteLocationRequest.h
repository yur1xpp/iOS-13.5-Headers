/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WFTask.h>

@interface WFFavoriteLocationRequest : WFTask {

	/*^block*/id _resultHandler;

}

@property (nonatomic,readonly) id resultHandler;              //@synthesize resultHandler=_resultHandler - In the implementation block
-(id)resultHandler;
-(id)initWithResultHandler:(/*^block*/id)arg1 ;
-(void)handleResponse:(id)arg1 ;
-(void)startWithService:(id)arg1 ;
-(void)handleCancellation;
@end

