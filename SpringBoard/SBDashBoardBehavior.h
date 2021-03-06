//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSDescriptionProviding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "SBDashBoardBehaviorProviding-Protocol.h"

@class NSString;

@interface SBDashBoardBehavior : NSObject <BSDescriptionProviding, SBDashBoardBehaviorProviding, NSCopying>
{
    long long _idleTimerDuration;
    long long _idleTimerMode;
    long long _idleWarnMode;
    long long _scrollingMode;
    unsigned long long _restrictedCapabilities;
    long long _notificationBehavior;
}

+ (id)behaviorForProvider:(id)arg1;
+ (id)behavior;
@property(nonatomic) unsigned long long restrictedCapabilities; // @synthesize restrictedCapabilities=_restrictedCapabilities;
@property(nonatomic) long long notificationBehavior; // @synthesize notificationBehavior=_notificationBehavior;
@property(nonatomic) long long scrollingMode; // @synthesize scrollingMode=_scrollingMode;
@property(nonatomic) long long idleWarnMode; // @synthesize idleWarnMode=_idleWarnMode;
@property(nonatomic) long long idleTimerMode; // @synthesize idleTimerMode=_idleTimerMode;
@property(nonatomic) long long idleTimerDuration; // @synthesize idleTimerDuration=_idleTimerDuration;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)removeRestrictedCapabilities:(unsigned long long)arg1;
- (void)addRestrictedCapabilities:(unsigned long long)arg1;
- (_Bool)areRestrictedCapabilities:(unsigned long long)arg1;
- (void)unionBehavior:(id)arg1;
- (void)reset;
- (_Bool)isEqualToBehavior:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

