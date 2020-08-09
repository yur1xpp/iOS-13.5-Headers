/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableArray;

@interface UIKBStrokeView : UIView {

	NSMutableArray* _points;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)addStrokePoint:(CGPoint)arg1 withTimestamp:(double)arg2 ;
-(void)resetStrokePoints;
@end
