/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/SFUDataRepresentation.h>
#import <libobjc.A.dylib/SFUZipArchiveDataRepresentation.h>

@class SFUFileDataRepresentation, NSString;

@interface SFUZipArchiveFileDataRepresentation : SFUDataRepresentation <SFUZipArchiveDataRepresentation> {

	SFUFileDataRepresentation* mFileRepresentation;
	int mFd;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)path;
-(id)initWithPath:(id)arg1 ;
-(BOOL)isEncrypted;
-(id)inputStream;
-(long long)dataLength;
-(BOOL)isReadable;
-(BOOL)hasSameLocationAs:(id)arg1 ;
-(id)inputStreamWithOffset:(long long)arg1 length:(long long)arg2 ;
-(id)bufferedInputStreamWithOffset:(long long)arg1 length:(long long)arg2 ;
@end
