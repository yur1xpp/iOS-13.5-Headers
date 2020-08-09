/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIFocusMapArea <NSObject>
@property (nonatomic,__weak,readonly) id<UICoordinateSpace> coordinateSpace; 
@property (nonatomic,readonly) CGRect frame; 
@required
-(CGRect)frame;
-(id<UICoordinateSpace>)coordinateSpace;
-(BOOL)intersectsRect:(CGRect)arg1;
-(BOOL)intersectsRegion:(id)arg1;
-(id)intersectionWithRegion:(id)arg1;

@end
