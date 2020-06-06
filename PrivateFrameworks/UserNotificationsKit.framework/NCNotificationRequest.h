/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsKit/UserNotificationsKit-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, NSSet, NSArray, NSDate, NCNotificationContent, NCNotificationOptions, NSDictionary, NCNotificationSound, NCNotificationAction, UNNotification, BBBulletin, BBObserver;

@interface NCNotificationRequest : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {

	NSString* _sectionIdentifier;
	NSString* _notificationIdentifier;
	NSString* _threadIdentifier;
	NSString* _categoryIdentifier;
	NSSet* _subSectionIdentifiers;
	NSString* _highestPrioritySubSectionIdentifier;
	NSArray* _intentIdentifiers;
	NSArray* _peopleIdentifiers;
	NSString* _parentSectionIdentifier;
	BOOL _uniqueThreadIdentifier;
	NSDate* _timestamp;
	NSSet* _requestDestinations;
	NCNotificationContent* _content;
	NCNotificationOptions* _options;
	NSDictionary* _context;
	NSSet* _settingsSections;
	NCNotificationSound* _sound;
	NCNotificationAction* _clearAction;
	NCNotificationAction* _closeAction;
	NCNotificationAction* _defaultAction;
	NCNotificationAction* _silenceAction;
	NSDictionary* _supplementaryActions;
	UNNotification* _userNotification;
	BOOL _isCollapsedNotification;
	unsigned long long _collapsedNotificationsCount;
	NSDictionary* _sourceInfo;
	BOOL _criticalAlert;

}

@property (nonatomic,readonly) BBBulletin * bulletin; 
@property (nonatomic,readonly) BBObserver * observer; 
@property (nonatomic,readonly) NSString * contactIdentifier; 
@property (nonatomic,readonly) BOOL hasAttachments; 
@property (nonatomic,readonly) BOOL hasOnlySingleTextInputAction; 
@property (nonatomic,readonly) BOOL hasOnlySingleMinimalTextInputAction; 
@property (nonatomic,readonly) BOOL showsTextInputOnAppearance; 
@property (nonatomic,copy,readonly) NSArray * defaultEnvironmentActions; 
@property (nonatomic,copy,readonly) NSArray * minimalEnvironmentActions; 
@property (nonatomic,copy,readonly) NSString * sectionIdentifier;                                        //@synthesize sectionIdentifier=_sectionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * notificationIdentifier;                                   //@synthesize notificationIdentifier=_notificationIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * threadIdentifier;                                         //@synthesize threadIdentifier=_threadIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * categoryIdentifier;                                       //@synthesize categoryIdentifier=_categoryIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSSet * subSectionIdentifiers;                                       //@synthesize subSectionIdentifiers=_subSectionIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSString * highestPrioritySubSectionIdentifier;                      //@synthesize highestPrioritySubSectionIdentifier=_highestPrioritySubSectionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * intentIdentifiers;                                         //@synthesize intentIdentifiers=_intentIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSArray * peopleIdentifiers;                                         //@synthesize peopleIdentifiers=_peopleIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSString * parentSectionIdentifier;                                  //@synthesize parentSectionIdentifier=_parentSectionIdentifier - In the implementation block
@property (getter=isUniqueThreadIdentifier,nonatomic,readonly) BOOL uniqueThreadIdentifier;              //@synthesize uniqueThreadIdentifier=_uniqueThreadIdentifier - In the implementation block
@property (nonatomic,readonly) NSDate * timestamp;                                                       //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy,readonly) NSSet * requestDestinations;                                         //@synthesize requestDestinations=_requestDestinations - In the implementation block
@property (nonatomic,readonly) NCNotificationContent * content;                                          //@synthesize content=_content - In the implementation block
@property (nonatomic,readonly) NCNotificationOptions * options;                                          //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * context;                                              //@synthesize context=_context - In the implementation block
@property (nonatomic,copy,readonly) NSSet * settingsSections;                                            //@synthesize settingsSections=_settingsSections - In the implementation block
@property (nonatomic,readonly) NCNotificationSound * sound;                                              //@synthesize sound=_sound - In the implementation block
@property (nonatomic,readonly) NCNotificationAction * clearAction;                                       //@synthesize clearAction=_clearAction - In the implementation block
@property (nonatomic,readonly) NCNotificationAction * closeAction;                                       //@synthesize closeAction=_closeAction - In the implementation block
@property (nonatomic,readonly) NCNotificationAction * defaultAction;                                     //@synthesize defaultAction=_defaultAction - In the implementation block
@property (nonatomic,readonly) NCNotificationAction * silenceAction;                                     //@synthesize silenceAction=_silenceAction - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * supplementaryActions;                                 //@synthesize supplementaryActions=_supplementaryActions - In the implementation block
@property (nonatomic,readonly) UNNotification * userNotification;                                        //@synthesize userNotification=_userNotification - In the implementation block
@property (nonatomic,readonly) BOOL isCollapsedNotification;                                             //@synthesize isCollapsedNotification=_isCollapsedNotification - In the implementation block
@property (nonatomic,readonly) unsigned long long collapsedNotificationsCount;                           //@synthesize collapsedNotificationsCount=_collapsedNotificationsCount - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * sourceInfo;                                           //@synthesize sourceInfo=_sourceInfo - In the implementation block
@property (getter=isCriticalAlert,nonatomic,readonly) BOOL criticalAlert;                                //@synthesize criticalAlert=_criticalAlert - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_notificationRequestForBulletin:(id)arg1 observer:(id)arg2 sectionInfo:(id)arg3 feed:(unsigned long long)arg4 playLightsAndSirens:(BOOL)arg5 hasPlayLightsAndSirens:(BOOL)arg6 ;
+(id)notificationRequestForBulletin:(id)arg1 observer:(id)arg2 sectionInfo:(id)arg3 feed:(unsigned long long)arg4 ;
+(id)notificationRequestForBulletin:(id)arg1 observer:(id)arg2 sectionInfo:(id)arg3 feed:(unsigned long long)arg4 playLightsAndSirens:(BOOL)arg5 ;
+(id)notificationRequest;
+(id)notificationRequestWithSectionId:(id)arg1 notificationId:(id)arg2 threadId:(id)arg3 title:(id)arg4 message:(id)arg5 timestamp:(id)arg6 destinations:(id)arg7 ;
+(id)notificationRequestWithSectionId:(id)arg1 notificationId:(id)arg2 threadId:(id)arg3 subSectionIds:(id)arg4 title:(id)arg5 message:(id)arg6 timestamp:(id)arg7 destinations:(id)arg8 options:(id)arg9 ;
+(id)notificationRequestWithSectionId:(id)arg1 notificationId:(id)arg2 threadId:(id)arg3 title:(id)arg4 message:(id)arg5 timestamp:(id)arg6 destination:(id)arg7 ;
+(id)notificationRequestWithSectionId:(id)arg1 notificationId:(id)arg2 requestDestination:(id)arg3 ;
+(id)notificationRequestWithSectionId:(id)arg1 threadId:(id)arg2 notificationId:(id)arg3 requestDestinations:(id)arg4 ;
+(id)notificationRequestWithSectionId:(id)arg1 notificationId:(id)arg2 threadId:(id)arg3 timestamp:(id)arg4 ;
+(id)notificationRequestWithSectionId:(id)arg1 notificationId:(id)arg2 ;
+(id)notificationRequestWithSectionId:(id)arg1 notificationId:(id)arg2 timestamp:(id)arg3 ;
+(id)notificationRequestWithThreadId:(id)arg1 timestamp:(id)arg2 ;
+(id)notificationRequestWithNotificationId:(id)arg1 threadId:(id)arg2 timestamp:(id)arg3 ;
+(id)notificationRequestWithNotificationId:(id)arg1 timestamp:(id)arg2 ;
+(id)notificationRequestWithTimestamp:(id)arg1 ;
+(id)notificationRequestWithNotificationId:(id)arg1 ;
+(id)notificationRequestWithNotificationId:(id)arg1 lockScreenPriority:(unsigned long long)arg2 lockScreenPersistence:(unsigned long long)arg3 ;
+(id)notificationRequestWithNotificationId:(id)arg1 requestDestinations:(id)arg2 isCritical:(BOOL)arg3 ;
+(id)notificationRequestWithSectionId:(id)arg1 notificationId:(id)arg2 subSectionIds:(id)arg3 requestDestinations:(id)arg4 ;
+(id)notificationRequestWithSectionId:(id)arg1 threadId:(id)arg2 notificationId:(id)arg3 requestDestination:(id)arg4 ;
+(id)notificationRequestWithRequestDestination:(id)arg1 ;
+(id)notificationRequestWithRequestDestinations:(id)arg1 ;
+(id)notificationRequestWithSectionId:(id)arg1 threadId:(id)arg2 ;
+(id)notificationRequestWithSectionId:(id)arg1 ;
+(id)notificationRequestWithThreadId:(id)arg1 ;
+(id)notificationRequestWithNotificationId:(id)arg1 sectionId:(id)arg2 threadId:(id)arg3 ;
+(id)notificationRequestWithNotificationId:(id)arg1 threadId:(id)arg2 ;
+(id)notificationRequestWithActionWithId:(id)arg1 runner:(id)arg2 ;
+(id)notificationRequestWithNotificationId:(id)arg1 lockScreenPriority:(unsigned long long)arg2 ;
+(id)notificationRequestWithNotificationId:(id)arg1 requestDestinations:(id)arg2 ;
+(id)notificationRequestWithSectionId:(id)arg1 subSectionIds:(id)arg2 ;
+(id)notificationRequestWithNotificationId:(id)arg1 requestDestinations:(id)arg2 lockScreenPersistence:(unsigned long long)arg3 ;
-(BBObserver *)observer;
-(NSString *)contactIdentifier;
-(BBBulletin *)bulletin;
-(BOOL)hasAttachments;
-(BOOL)showsTextInputOnAppearance;
-(NSArray *)defaultEnvironmentActions;
-(BOOL)hasSameContactAsNotificationRequest:(id)arg1 ;
-(NSArray *)minimalEnvironmentActions;
-(BOOL)hasOnlySingleTextInputAction;
-(BOOL)hasOnlySingleMinimalTextInputAction;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NCNotificationOptions *)options;
-(NSDictionary *)context;
-(NSDate *)timestamp;
-(NSArray *)peopleIdentifiers;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NCNotificationContent *)content;
-(NCNotificationAction *)defaultAction;
-(BOOL)matchesRequest:(id)arg1 ;
-(NCNotificationSound *)sound;
-(NSString *)categoryIdentifier;
-(NSDictionary *)sourceInfo;
-(NSArray *)intentIdentifiers;
-(NSString *)threadIdentifier;
-(NSString *)sectionIdentifier;
-(NSString *)notificationIdentifier;
-(id)loggingDescription;
-(UNNotification *)userNotification;
-(NCNotificationAction *)clearAction;
-(NCNotificationAction *)silenceAction;
-(NSDictionary *)supplementaryActions;
-(NSString *)parentSectionIdentifier;
-(NSSet *)requestDestinations;
-(id)initWithNotificationRequest:(id)arg1 ;
-(BOOL)isCollapsibleWithNotificationRequest:(id)arg1 ;
-(BOOL)matchesThreadForRequest:(id)arg1 ;
-(BOOL)isCollapsedNotification;
-(unsigned long long)collapsedNotificationsCount;
-(NSSet *)settingsSections;
-(NCNotificationAction *)closeAction;
-(NSSet *)subSectionIdentifiers;
-(NSString *)highestPrioritySubSectionIdentifier;
-(BOOL)isUniqueThreadIdentifier;
-(BOOL)isCriticalAlert;
-(id)_actionsLoggingDescription;
-(id)_actionsDescriptionForEnvironment:(id)arg1 ;
@end
