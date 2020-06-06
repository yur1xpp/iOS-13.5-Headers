/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:43 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFAction.h>

@class NSDateFormatter;

@interface WFAddNewReminderAction : WFAction {

	NSDateFormatter* _dateFormatter;

}

@property (nonatomic,readonly) NSDateFormatter * dateFormatter;              //@synthesize dateFormatter=_dateFormatter - In the implementation block
-(NSDateFormatter *)dateFormatter;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)wasAddedToWorkflow:(id)arg1 ;
-(void)wasRemovedFromWorkflow:(id)arg1 ;
-(id)targetDataInfo;
-(id)currentSelectedCalendar;
-(void)updateLists;
@end
