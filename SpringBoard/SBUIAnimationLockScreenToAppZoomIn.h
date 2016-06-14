//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBUIMainScreenAnimationController.h"

@class NSMutableArray, SBAlert, SBAppStatusBarSettingsAssertion, SBSceneLayoutAnimationWrapperView, SBUILockScreenNotificationAnimationHandler, SBWindowSelfHostWrapper, UIView;

@interface SBUIAnimationLockScreenToAppZoomIn : SBUIMainScreenAnimationController
{
    SBAlert *_fromAlert;
    SBSceneLayoutAnimationWrapperView *_animationWrapperView;
    SBWindowSelfHostWrapper *_pipWindowWrapper;
    UIView *_viewToAnimate;
    NSMutableArray *_appsRequiringHostView;
    _Bool _finishedZooming;
    _Bool _finishedActivating;
    _Bool _finishedCrossfadingToHostView;
    _Bool _finishedNotificationAnimations;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
    SBUILockScreenNotificationAnimationHandler *_notificationAnimationHandler;
}

- (void).cxx_destruct;
- (id)_lockScreenViewController;
- (void)_maybeReportAnimationFinished;
- (void)_noteContextHostCrossfadeDidFinish;
- (void)_maybeStartCrossfade;
- (void)_noteNotificationAnimationsDidFinish;
- (void)_finishedZooming;
- (void)_applicationDependencyStateChanged;
- (_Bool)isReasonableMomentToInterrupt;
- (void)_cleanupAnimation;
- (id)animationSettings;
- (void)_doAnimation:(CDUnknownBlockType)arg1;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (void)_willSetupStartDependencies;
- (id)_animationProgressDependencies;
- (_Bool)_waitsForApplicationActivationIfNecessary;
- (void)_setHidden:(_Bool)arg1;
- (_Bool)_shouldDismissBanner;
- (void)dealloc;
- (id)initWithTransitionContextProvider:(id)arg1;
- (id)_getTransitionWindow;

@end

