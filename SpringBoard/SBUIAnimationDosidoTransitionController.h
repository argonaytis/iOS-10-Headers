//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBUIMainScreenAnimationController.h"

@class SBAppStatusBarSettingsAssertion, SBDosidoAnimator, SBWindowSelfHostWrapper, UIView;

@interface SBUIAnimationDosidoTransitionController : SBUIMainScreenAnimationController
{
    UIView *_fromView;
    UIView *_toView;
    SBWindowSelfHostWrapper *_homeScreenHostWrapper;
    SBDosidoAnimator *_dosidoAnimator;
    long long _fromOrientation;
    _Bool _requiresHostView;
    _Bool _fromAppWantsLiveContent;
    _Bool _dosidoDidComplete;
    _Bool _crossfadeDidComplete;
    _Bool _activationFailed;
    _Bool _finishedActivating;
    unsigned long long _direction;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
}

@property(nonatomic) _Bool fromAppWantsLiveContent; // @synthesize fromAppWantsLiveContent=_fromAppWantsLiveContent;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
- (void).cxx_destruct;
- (id)_mainScreenSnapshot;
- (_Bool)_isTransitionToSpotlight;
- (_Bool)_isTransitionFromSpotlight;
- (void)_maybeReportAnimationFinished;
- (void)_performCrossfadeIfNeeded;
- (void)_maybeStartCrossfade;
- (void)_startAnimation;
- (void)__startAnimation;
- (void)_setFromView:(id)arg1;
- (void)captureFlagsForActivatingApp:(id)arg1;
- (id)_animationFactory;
- (void)_invalidateWrapperView:(id)arg1;
- (void)setToView:(id)arg1;
- (long long)orientationAtLaunch;
- (void)_evaluateTransparency;
- (void)_cleanupAnimation;
- (void)_prepareAnimation;
- (void)_setupDisplayModeForDeactivatingAppView:(id)arg1;
- (void)_setupDisplayModeForActivatingAppView:(id)arg1;
- (void)_setupDisplayModeForAppView:(id)arg1 displayMode:(long long)arg2;
- (_Bool)isReasonableMomentToInterrupt;
- (void)_applicationDependencyStateChanged;
- (id)_animationProgressDependencies;
- (_Bool)_waitsForApplicationActivationIfNecessary;
- (void)_setHidden:(_Bool)arg1;
- (void)enableSteppingWithAnimationSettings:(id)arg1;
- (id)animationSettings;
- (void)dealloc;
- (id)initWithTransitionContextProvider:(id)arg1;
- (id)_getTransitionWindow;

@end

