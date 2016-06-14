//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NCNotificationAlertDestination-Protocol.h"
#import "NCNotificationViewControllerDelegatePrivate-Protocol.h"
#import "SBNotificationDestinationHomeButtonPressHandler-Protocol.h"

@class FBUIApplicationSceneDeactivationAssertion, NCNotificationViewController, NSString, SBAppStatusBarSettingsAssertion, SBLockScreenManager, SBNotificationBannerWindow, SBNotificationCenterController, SBQuietModeStateAggregator, SBSetupManager;
@protocol NCNotificationAlertDestinationDelegate, NCNotificationDestinationDelegate, OS_dispatch_source;

@interface SBNotificationBannerDestination : NSObject <NCNotificationViewControllerDelegatePrivate, NCNotificationAlertDestination, SBNotificationDestinationHomeButtonPressHandler>
{
    id <NCNotificationAlertDestinationDelegate> _delegate;
    SBLockScreenManager *_lockScreenManager;
    SBNotificationCenterController *_notificationCenterController;
    SBQuietModeStateAggregator *_quietModeStateAggregator;
    SBSetupManager *_setupManager;
    NCNotificationViewController *_presentedBanner;
    SBNotificationBannerWindow *_bannerWindow;
    NSObject<OS_dispatch_source> *_presentTimer;
    NSObject<OS_dispatch_source> *_replaceTimer;
    NSObject<OS_dispatch_source> *_dismissTimer;
    FBUIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
    SBAppStatusBarSettingsAssertion *_statusBarAssertion;
}

@property(retain, nonatomic) SBAppStatusBarSettingsAssertion *statusBarAssertion; // @synthesize statusBarAssertion=_statusBarAssertion;
@property(retain, nonatomic) FBUIApplicationSceneDeactivationAssertion *resignActiveAssertion; // @synthesize resignActiveAssertion=_resignActiveAssertion;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *dismissTimer; // @synthesize dismissTimer=_dismissTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *replaceTimer; // @synthesize replaceTimer=_replaceTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *presentTimer; // @synthesize presentTimer=_presentTimer;
@property(retain, nonatomic) SBNotificationBannerWindow *bannerWindow; // @synthesize bannerWindow=_bannerWindow;
@property(retain, nonatomic) NCNotificationViewController *presentedBanner; // @synthesize presentedBanner=_presentedBanner;
@property(retain, nonatomic) SBSetupManager *setupManager; // @synthesize setupManager=_setupManager;
@property(retain, nonatomic) SBQuietModeStateAggregator *quietModeStateAggregator; // @synthesize quietModeStateAggregator=_quietModeStateAggregator;
@property(retain, nonatomic) SBNotificationCenterController *notificationCenterController; // @synthesize notificationCenterController=_notificationCenterController;
@property(retain, nonatomic) SBLockScreenManager *lockScreenManager; // @synthesize lockScreenManager=_lockScreenManager;
@property(nonatomic) __weak id <NCNotificationDestinationDelegate> delegate;
- (void).cxx_destruct;
- (void)_dismissBannerForUILocking;
- (void)_dismissNonStickyBanner;
- (void)_dismissBannerCompleted;
- (void)_dismissPresentedBannerAnimated:(_Bool)arg1;
- (void)_setupDismissalNotifications;
- (void)_setupSystemStateChangeNotifications;
- (void)_setupTimers;
- (void)_cancelReplaceAndDismissTimers;
- (void)_cancelDismissTimer;
- (void)_cancelReplaceTimer;
- (void)_startReplaceAndDismissTimersForRequest:(id)arg1;
- (void)_startDismissTimer;
- (void)_startReplaceTimer;
- (void)_resetPresentTimer;
- (id)_presentNotificationViewControllerForRequest:(id)arg1 modal:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_viewControllerForPresentation;
- (id)_notificationViewControllerForRequest:(id)arg1;
- (_Bool)_isQuietModeEnabledAndActive;
- (_Bool)_isNotificationCenterVisible;
- (_Bool)_isInSetupMode;
- (_Bool)_isPresentedBannerBeingDragged;
- (_Bool)_isPresentingBannerInLongLook;
- (_Bool)_isShowingShortLookAtRest;
- (_Bool)_isPresentingStickyBanner;
- (_Bool)_isPresentingBanner;
- (void)_setStatusBarsHidden:(_Bool)arg1 withDuration:(double)arg2;
- (_Bool)_presentedBannerMatchesNotificationRequest:(id)arg1;
- (void)_postNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_cleanupRootViewControllerPresentationStack;
- (id)_rootViewController;
- (void)_setReadyForNotificationRequestsCoalescingWith:(id)arg1;
- (void)_setReadyForNotificationRequests;
- (void)_setupModeChanged;
- (void)_lockStateChanged;
- (id)colorInfusingViewForNotificationViewController:(id)arg1;
- (void)notificationViewController:(id)arg1 shouldFinishLongLookTransitionWithCompletionBlock:(CDUnknownBlockType)arg2;
- (id)notificationViewController:(id)arg1 staticContentProviderForNotificationRequest:(id)arg2;
- (_Bool)notificationViewControllerShouldInterpretTapAsDefaultAction:(id)arg1;
- (_Bool)notificationViewControllerShouldPan:(id)arg1;
- (void)notificationViewControllerWillBeginDragging:(id)arg1;
- (void)notificationViewControllerDidEndDragging:(id)arg1;
- (void)notificationViewController:(id)arg1 didCommitToLongLookPresentation:(_Bool)arg2 withCoordinator:(id)arg3;
- (void)notificationViewController:(id)arg1 didCommitToShortLookPresentation:(_Bool)arg2 withCoordinator:(id)arg3;
- (_Bool)notificationViewController:(id)arg1 suggestsDismissingShortLookWithSource:(id)arg2;
- (void)notificationViewController:(id)arg1 didDismissShortLook:(_Bool)arg2;
- (void)notificationViewController:(id)arg1 didDismissLongLook:(_Bool)arg2;
- (void)notificationViewController:(id)arg1 didPresentLongLook:(_Bool)arg2;
- (void)longLookWillPresentForNotificationViewController:(id)arg1;
- (void)notificationViewController:(id)arg1 executeAction:(id)arg2 withParameters:(id)arg3;
- (_Bool)handleHomeButtonPress;
- (void)withdrawNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)modifyNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)postNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (_Bool)canReceiveNotificationRequest:(id)arg1;
@property(readonly, nonatomic) NSString *identifier;
- (void)presentModalBannerForNotificationRequest:(id)arg1;
@property(readonly, nonatomic, getter=isPresentingBanner) _Bool presentingBanner;
- (id)init;
- (void)_runBannerPresentationTestWithBeginBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_runLongLookPresentationTestWithBeginBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
