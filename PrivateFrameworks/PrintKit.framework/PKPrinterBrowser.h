/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKBrowserClientProtocol.h>

@protocol PKPrinterBrowserDelegate;
@class NSXPCConnection, NSMutableDictionary, NSString;

@interface PKPrinterBrowser : NSObject <PKBrowserClientProtocol> {

	unsigned char _originalCellFlag;
	unsigned char _originalWifiFlag;
	BOOL _delegateRespondsToProximityUpdate;
	id<PKPrinterBrowserDelegate> _delegate;
	NSXPCConnection* _pkBrowseConnection;
	NSMutableDictionary* _printers;
	NSMutableDictionary* _btDevices;

}

@property (nonatomic,retain) NSXPCConnection * pkBrowseConnection;               //@synthesize pkBrowseConnection=_pkBrowseConnection - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * printers;                     //@synthesize printers=_printers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * btDevices;                    //@synthesize btDevices=_btDevices - In the implementation block
@property (assign,nonatomic) id<PKPrinterBrowserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)browserWithDelegate:(id)arg1 ;
-(void)dealloc;
-(id<PKPrinterBrowserDelegate>)delegate;
-(void)setDelegate:(id<PKPrinterBrowserDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)setPrinters:(NSMutableDictionary *)arg1 ;
-(void)setBtDevices:(NSMutableDictionary *)arg1 ;
-(NSXPCConnection *)pkBrowseConnection;
-(void)setPkBrowseConnection:(NSXPCConnection *)arg1 ;
-(void)aggdDiscoveredPrinterStatistics;
-(void)printerAdded:(id)arg1 more:(BOOL)arg2 ;
-(void)printerRemoved:(id)arg1 more:(BOOL)arg2 ;
-(void)btleRssiUpdated:(id)arg1 rssi:(id)arg2 ;
-(void)btlePrinterFound:(id)arg1 ;
-(NSMutableDictionary *)printers;
-(NSMutableDictionary *)btDevices;
@end
