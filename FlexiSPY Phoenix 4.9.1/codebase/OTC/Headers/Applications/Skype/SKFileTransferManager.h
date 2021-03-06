/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "SKSingleObject.h"

@class Dispatcher, NSMutableArray, NSNotificationCenter;

@protocol StatsLogger;


@interface SKFileTransferManager : NSObject//SKSingleObject
{
    NSMutableArray *_tms;
    NSMutableArray *_convs;
    id <StatsLogger> _statsLogger;
    NSNotificationCenter *_notificationCenter;
    Dispatcher *_dispatcher;
}

@property(retain, nonatomic) Dispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property(retain, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) id <StatsLogger> statsLogger; // @synthesize statsLogger=_statsLogger;
//- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)addMessage:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end

