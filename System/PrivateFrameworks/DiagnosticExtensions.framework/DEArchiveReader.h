/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DiagnosticExtensions/DiagnosticExtensions-Structs.h>
@interface DEArchiveReader : NSObject {

	archiveRef _archive;

}
-(id)initWithURL:(id)arg1 ;
-(void)closeArchive;
-(id)listContainedPaths;
@end
