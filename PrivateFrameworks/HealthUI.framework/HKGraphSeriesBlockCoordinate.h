/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HKGraphSeriesBlockCoordinate <NSObject>
@property (nonatomic,readonly) double startXValue; 
@property (nonatomic,readonly) double endXValue; 
@property (nonatomic,readonly) id<HKGraphSeriesBlockCoordinateInfo> userInfo; 
@required
-(id<HKGraphSeriesBlockCoordinateInfo>)userInfo;
-(double)startXValue;
-(double)endXValue;
-(id)copyWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2;

@end
