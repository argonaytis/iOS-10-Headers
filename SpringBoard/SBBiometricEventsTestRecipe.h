//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBTestRecipe-Protocol.h"

@class NSString;

@interface SBBiometricEventsTestRecipe : NSObject <SBTestRecipe>
{
    unsigned long long _eventIndex;
}

+ (id)title;
@property(nonatomic) unsigned long long eventIndex; // @synthesize eventIndex=_eventIndex;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (void)postEvent:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

