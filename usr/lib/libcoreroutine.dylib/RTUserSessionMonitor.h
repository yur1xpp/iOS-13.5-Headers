/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 8:03:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libcoreroutine.dylib/RTNotifier.h>

@interface RTUserSessionMonitor : RTNotifier {

	BOOL _previouslyActiveUser;

}

@property (assign,nonatomic) BOOL previouslyActiveUser;              //@synthesize previouslyActiveUser=_previouslyActiveUser - In the implementation block
@property (getter=activeUser,readonly) BOOL activeUser; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsNotificationName:(id)arg1 ;
-(id)init;
-(unsigned)uid;
-(BOOL)activeUser;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(BOOL)previouslyActiveUser;
-(void)setPreviouslyActiveUser:(BOOL)arg1 ;
@end
