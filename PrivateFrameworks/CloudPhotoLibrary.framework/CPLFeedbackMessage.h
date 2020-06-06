/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSString, CPLServerFeedbackMessage;

@interface CPLFeedbackMessage : NSObject {

	NSDate* _creationDate;
	NSString* _feedbackType;

}

@property (nonatomic,readonly) NSString * feedbackType;                               //@synthesize feedbackType=_feedbackType - In the implementation block
@property (nonatomic,readonly) CPLServerFeedbackMessage * serverMessage; 
+(id)feedbackType;
-(id)init;
-(NSString *)feedbackType;
-(CPLServerFeedbackMessage *)serverMessage;
@end
