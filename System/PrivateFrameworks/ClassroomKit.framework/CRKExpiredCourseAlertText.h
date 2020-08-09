/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CRKCourse, NSString;

@interface CRKExpiredCourseAlertText : NSObject {

	CRKCourse* _course;

}

@property (nonatomic,readonly) CRKCourse * course;                             //@synthesize course=_course - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * acknowledgeOptionTitle; 
@property (nonatomic,readonly) NSString * message; 
+(id)new;
-(id)init;
-(NSString *)title;
-(NSString *)message;
-(CRKCourse *)course;
-(id)initWithCourse:(id)arg1 ;
-(NSString *)acknowledgeOptionTitle;
@end
