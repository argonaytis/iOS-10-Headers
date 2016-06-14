//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBSecureWindow.h"

#import "BSDescriptionProviding-Protocol.h"
#import "SBUIActiveOrientationObserver-Protocol.h"

@class NSString, _SBDummyRootVC;

@interface SBActiveInterfaceOrientationFollowingWindow : SBSecureWindow <SBUIActiveOrientationObserver, BSDescriptionProviding>
{
    _SBDummyRootVC *_rootVC;
}

- (void).cxx_destruct;
- (void)_updateInterfaceOrientationToCurrentActiveInterfaceOrientationWithDuration:(double)arg1;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)setHidden:(_Bool)arg1;
- (id)initWithDebugName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
