//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBIdleTimer-Protocol.h"
#import "SBUserEventInterfaceObserver-Protocol.h"

@class NSString, SBUserEventInterface;
@protocol SBIdleTimerDelegate;

@interface SBManualIdleTimer : NSObject <SBUserEventInterfaceObserver, SBIdleTimer>
{
    id <SBIdleTimerDelegate> _delegate;
    SBUserEventInterface *_userEventTimer;
    double _interval;
}

@property(nonatomic) __weak id <SBIdleTimerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isEqualToTimer:(id)arg1;
- (void)reset;
- (void)userEventTimerPresenceTriggered:(id)arg1;
- (void)userEventTimerPresenceExpired:(id)arg1;
- (void)userEventTimerUserUnidled:(id)arg1;
- (void)userEventTimerUserIdled:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithInterval:(double)arg1 userEventInterface:(id)arg2;
- (id)initWithInterval:(double)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

