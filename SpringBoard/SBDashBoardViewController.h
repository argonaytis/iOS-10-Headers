//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBLockScreenViewControllerBase.h"

#import "SBDashBoardLegibilityProviderDelegate-Protocol.h"
#import "SBDashBoardNotificationDestination-Protocol.h"
#import "SBDashBoardSlideUpToAppControllerDelegate-Protocol.h"
#import "SBDashBoardViewControllerProtocol-Protocol.h"
#import "SBDashBoardViewDelegate-Protocol.h"
#import "SBDashBoardViewTransitionSource-Protocol.h"
#import "SBFIrisWallpaperViewDelegate-Protocol.h"
#import "SBLockScreenActionProvider-Protocol.h"
#import "SBLockScreenPluginManagerDelegate-Protocol.h"
#import "SBLockScreenTimerViewControllerDelegate-Protocol.h"
#import "SBMesaUnlockBehaviorDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class BSTimer, FBDisplayLayoutTransition, NSArray, NSHashTable, NSSet, NSString, SBAppStatusBarSettingsAssertion, SBDashBoardAppearance, SBDashBoardBehavior, SBDashBoardBlockEventHandler, SBDashBoardChargingViewController, SBDashBoardLegibilityProvider, SBDashBoardMainPageViewController, SBDashBoardMesaUnlockBehavior, SBDashBoardModalPresentationViewController, SBDashBoardNotificationDispatcher, SBDashBoardPluginViewController, SBDashBoardPowerChangeObserver, SBDashBoardPresentation, SBDashBoardSetupViewController, SBDashBoardSlideUpToAppController, SBDashBoardSlidingPresentationViewController, SBFakeStatusBarView, SBIdleTimerEventPublisher, SBLockScreenActionContext, SBLockScreenActionManager, SBLockScreenDateViewController, SBLockScreenPluginManager, SBLockScreenTimerViewController, SBMainStatusBarStateProvider, SBPolicyAggregator, SBSteppedAnimationTimingFunctionCalculator, SBWallpaperAggdLogger, UIColor, UIPanGestureRecognizer, _UILegibilitySettings;
@protocol SBAlertingNotificationDestination, SBDashBoardNotificationDispatcher, SBDashBoardViewControllerDelegate, SBDashBoardViewPresenting, SBDashBoardViewTransitionSource, SBFIrisWallpaperView, SBFLockOutStatusProvider, SBWallpaperColorProvider, UICoordinateSpace;

@interface SBDashBoardViewController : SBLockScreenViewControllerBase <SBDashBoardViewDelegate, UIGestureRecognizerDelegate, SBDashBoardLegibilityProviderDelegate, SBLockScreenActionProvider, SBLockScreenPluginManagerDelegate, SBFIrisWallpaperViewDelegate, SBDashBoardViewTransitionSource, SBDashBoardSlideUpToAppControllerDelegate, SBDashBoardNotificationDestination, SBLockScreenTimerViewControllerDelegate, SBMesaUnlockBehaviorDelegate, SBDashBoardViewControllerProtocol>
{
    _Bool _screenOffMode;
    _Bool _hasContentAboveDashBoard;
    _Bool _preventAppearanceUpdatesForRotation;
    SBLockScreenPluginManager *_pluginManager;
    SBSteppedAnimationTimingFunctionCalculator *_interactiveAnimationCalculator;
    SBDashBoardPluginViewController *_pluginViewController;
    long long _pluginViewControllerPresentationStyle;
    NSHashTable *_externalAppearanceProviders;
    NSHashTable *_externalBehaviorProviders;
    NSHashTable *_externalEventHandlers;
    NSHashTable *_observers;
    NSHashTable *_applicationHosters;
    SBDashBoardNotificationDispatcher *_notificationDispatcher;
    long long _transitionType;
    CDStruct_7238a68f _transitionContext;
    FBDisplayLayoutTransition *_displayLayoutTransition;
    long long _participantState;
    _Bool _transitionDisabledIdleTimer;
    SBDashBoardModalPresentationViewController *_modalPresentationController;
    SBDashBoardSlidingPresentationViewController *_bottomPresentationController;
    SBDashBoardSlideUpToAppController *_slideUpToAppController;
    SBDashBoardChargingViewController *_chargingViewController;
    BSTimer *_chargingViewControllerTimer;
    SBDashBoardMesaUnlockBehavior *_mesaUnlockBehavior;
    SBIdleTimerEventPublisher *_idleTimerEventPublisher;
    SBDashBoardBlockEventHandler *_redirectHandler;
    _Bool _irisPlayerIsInteracting;
    _Bool _shouldTransitionIrisWallpaperToStillWhenPlaybackFinishes;
    id <SBDashBoardViewControllerDelegate> _delegate;
    SBDashBoardAppearance *_activeAppearance;
    SBDashBoardBehavior *_activeBehavior;
    id <SBDashBoardNotificationDispatcher> _dispatcher;
    SBPolicyAggregator *_policyAggregator;
    SBMainStatusBarStateProvider *_statusBarStateProvider;
    id <SBFIrisWallpaperView> _irisWallpaperView;
    id <SBWallpaperColorProvider> _wallpaperColorProvider;
    NSArray *_pageViewControllers;
    NSArray *_allowedPageViewControllers;
    SBDashBoardMainPageViewController *_mainPageViewController;
    unsigned long long _lastSettledPageIndex;
    SBDashBoardBehavior *_localBehavior;
    SBDashBoardBehavior *_irisBehavior;
    SBDashBoardBehavior *_setupBehavior;
    double _appearanceFraction;
    SBDashBoardAppearance *_previousAppearance;
    SBDashBoardAppearance *_localAppearance;
    SBDashBoardPresentation *_activePresentation;
    SBLockScreenDateViewController *_dateViewController;
    SBDashBoardPowerChangeObserver *_powerChangeObserver;
    SBLockScreenTimerViewController *_timerViewController;
    SBDashBoardLegibilityProvider *_legibilityProvider;
    SBLockScreenActionManager *_lockScreenActionManager;
    SBLockScreenActionContext *_customLockScreenActionContext;
    SBFakeStatusBarView *_fakeStatusBarView;
    SBAppStatusBarSettingsAssertion *_statusBarAssertion;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertionForScrolling;
    SBWallpaperAggdLogger *_wallpaperAggdLogger;
    UIPanGestureRecognizer *_scrollPanGestureRecognizer;
    id <SBFLockOutStatusProvider> _lockOutController;
    id <SBDashBoardViewTransitionSource> _currentTransitionSource;
    SBDashBoardSetupViewController *_setupController;
}

@property(retain, nonatomic) SBDashBoardSetupViewController *setupController; // @synthesize setupController=_setupController;
@property(retain, nonatomic) id <SBDashBoardViewTransitionSource> currentTransitionSource; // @synthesize currentTransitionSource=_currentTransitionSource;
@property(retain, nonatomic, getter=_lockOutController, setter=_setLockOutController:) id <SBFLockOutStatusProvider> lockOutController; // @synthesize lockOutController=_lockOutController;
@property(retain, nonatomic) SBDashBoardModalPresentationViewController *modalPresentationController; // @synthesize modalPresentationController=_modalPresentationController;
@property(retain, nonatomic) UIPanGestureRecognizer *scrollPanGestureRecognizer; // @synthesize scrollPanGestureRecognizer=_scrollPanGestureRecognizer;
@property(retain, nonatomic) SBWallpaperAggdLogger *wallpaperAggdLogger; // @synthesize wallpaperAggdLogger=_wallpaperAggdLogger;
@property(nonatomic) _Bool shouldTransitionIrisWallpaperToStillWhenPlaybackFinishes; // @synthesize shouldTransitionIrisWallpaperToStillWhenPlaybackFinishes=_shouldTransitionIrisWallpaperToStillWhenPlaybackFinishes;
@property(nonatomic) _Bool irisPlayerIsInteracting; // @synthesize irisPlayerIsInteracting=_irisPlayerIsInteracting;
@property(retain, nonatomic) SBAppStatusBarSettingsAssertion *hideStatusBarAssertionForScrolling; // @synthesize hideStatusBarAssertionForScrolling=_hideStatusBarAssertionForScrolling;
@property(retain, nonatomic) SBAppStatusBarSettingsAssertion *statusBarAssertion; // @synthesize statusBarAssertion=_statusBarAssertion;
@property(retain, nonatomic) SBFakeStatusBarView *fakeStatusBarView; // @synthesize fakeStatusBarView=_fakeStatusBarView;
@property(retain, nonatomic) SBLockScreenActionContext *customLockScreenActionContext; // @synthesize customLockScreenActionContext=_customLockScreenActionContext;
@property(retain, nonatomic) SBLockScreenActionManager *lockScreenActionManager; // @synthesize lockScreenActionManager=_lockScreenActionManager;
@property(retain, nonatomic) SBDashBoardLegibilityProvider *legibilityProvider; // @synthesize legibilityProvider=_legibilityProvider;
@property(retain, nonatomic) SBLockScreenTimerViewController *timerViewController; // @synthesize timerViewController=_timerViewController;
@property(retain, nonatomic) SBDashBoardPowerChangeObserver *powerChangeObserver; // @synthesize powerChangeObserver=_powerChangeObserver;
@property(retain, nonatomic) SBLockScreenDateViewController *dateViewController; // @synthesize dateViewController=_dateViewController;
@property(retain, nonatomic) SBDashBoardPresentation *activePresentation; // @synthesize activePresentation=_activePresentation;
@property(copy, nonatomic) SBDashBoardAppearance *localAppearance; // @synthesize localAppearance=_localAppearance;
@property(copy, nonatomic) SBDashBoardAppearance *previousAppearance; // @synthesize previousAppearance=_previousAppearance;
@property(nonatomic) double appearanceFraction; // @synthesize appearanceFraction=_appearanceFraction;
@property(retain, nonatomic) SBDashBoardBehavior *setupBehavior; // @synthesize setupBehavior=_setupBehavior;
@property(retain, nonatomic) SBDashBoardBehavior *irisBehavior; // @synthesize irisBehavior=_irisBehavior;
@property(retain, nonatomic) SBDashBoardBehavior *localBehavior; // @synthesize localBehavior=_localBehavior;
@property(nonatomic) unsigned long long lastSettledPageIndex; // @synthesize lastSettledPageIndex=_lastSettledPageIndex;
@property(retain, nonatomic, setter=_setMainPageViewController:) SBDashBoardMainPageViewController *mainPageViewController; // @synthesize mainPageViewController=_mainPageViewController;
@property(copy, nonatomic, getter=_allowedPageViewControllers, setter=_setAllowedPageViewControllers:) NSArray *allowedPageViewControllers; // @synthesize allowedPageViewControllers=_allowedPageViewControllers;
@property(copy, nonatomic, setter=_setPageViewControllers:) NSArray *pageViewControllers; // @synthesize pageViewControllers=_pageViewControllers;
@property(nonatomic) __weak id <SBWallpaperColorProvider> wallpaperColorProvider; // @synthesize wallpaperColorProvider=_wallpaperColorProvider;
@property(retain, nonatomic) id <SBFIrisWallpaperView> irisWallpaperView; // @synthesize irisWallpaperView=_irisWallpaperView;
@property(retain, nonatomic, getter=_statusBarStateProvider, setter=_setStatusBarStateProvider:) SBMainStatusBarStateProvider *statusBarStateProvider; // @synthesize statusBarStateProvider=_statusBarStateProvider;
@property(retain, nonatomic, getter=_policyAggregator, setter=_setPolicyAggregator:) SBPolicyAggregator *policyAggregator; // @synthesize policyAggregator=_policyAggregator;
@property(nonatomic) __weak id <SBDashBoardNotificationDispatcher> dispatcher; // @synthesize dispatcher=_dispatcher;
@property(readonly, nonatomic) CDStruct_7238a68f transitionContext; // @synthesize transitionContext=_transitionContext;
@property(copy, nonatomic) SBDashBoardBehavior *activeBehavior; // @synthesize activeBehavior=_activeBehavior;
@property(copy, nonatomic) SBDashBoardAppearance *activeAppearance; // @synthesize activeAppearance=_activeAppearance;
@property(nonatomic) __weak id <SBDashBoardViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_reloadLiftToWakeSupport;
- (void)_setupMesaUnlockBehavior;
- (void)_dismissApplicationWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_dismissAppBelowDashBoard:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_activateAppBelowDashBoard:(id)arg1;
- (void)_setBottomPresentationControllerVisibility:(_Bool)arg1;
- (void)_presentOrDismissSetupViewController:(_Bool)arg1;
- (void)_addOrRemoveBlockedViewIfNecessaryAnimated:(_Bool)arg1;
- (void)_addOrRemoveThermalTrapViewIfNecessaryAnimated:(_Bool)arg1;
- (void)_dismissModalViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_dismissModalViewControllersWithIdentifier:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_presentModalViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_isPresentingModalViewControllerWithIdentifier:(id)arg1;
- (void)_setModalPresentationControllerVisibility:(_Bool)arg1;
- (void)_updateModalPresentationControllerVisibility;
- (void)_displayLayoutDidUpdate:(id)arg1;
- (void)_displayWillUndim:(id)arg1;
- (void)_displayWillTurnOnWhileOnDashBoard:(id)arg1;
- (void)_transitionChargingViewToVisible:(_Bool)arg1 showBattery:(_Bool)arg2 animated:(_Bool)arg3;
- (void)_powerStatusChangedToConnectedState:(_Bool)arg1;
- (void)_transitionTimerViewToVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)timerControllerDidStopTimer:(id)arg1;
- (void)timerControllerDidStartTimer:(id)arg1;
- (_Bool)_isFadeInAnimationInProgress;
- (void)_startFadeInAnimationForSource:(long long)arg1 fadingToBatteryView:(_Bool)arg2;
- (void)startLockScreenFadeInAnimationForSource:(int)arg1;
- (void)_actuallyUpdateUIForIrisPlaying:(_Bool)arg1;
- (void)_actuallyUpdateUIForIrisNotPlaying;
- (void)_actuallyUpdateUIForIrisPlaying;
- (void)_updateUIForPlaying:(_Bool)arg1 immediately:(_Bool)arg2;
- (void)_setupIrisWallpaperGesture;
- (id)_createFakeStatusBarView;
- (void)_setFakeStatusBarEnabled:(_Bool)arg1;
- (void)updateStatusBarForLockScreenTeardown;
- (void)_updateLegibilitySettings;
- (void)_updateTintingView;
- (void)_updateWallpaperEffectView;
- (void)_updateScrollingBehavior;
- (void)_updatePageContent;
- (void)_updatePageControl;
- (void)_updateStatusBar;
- (void)_updateDateTimeView;
- (void)_updateForegroundView;
- (double)_alphaForTransitionFromHidden:(_Bool)arg1 toHidden:(_Bool)arg2 timingFunction:(id)arg3;
- (struct CGPoint)_offsetForTransitionFromOffset:(struct CGPoint)arg1 toOffset:(struct CGPoint)arg2 timingFunction:(id)arg3;
- (double)_valueForTransitionInterval:(CDStruct_3e878e9e)arg1 timingFunction:(id)arg2;
- (void)_updateBackground;
- (void)_updateSetupBehavior;
- (void)_updateNotificationsAndTodayViewBehavior;
- (void)_updateCameraBehavior;
- (void)_updateActiveBehaviorsForReason:(id)arg1;
- (void)_updateActiveAppearanceForReason:(id)arg1;
- (_Bool)_updateLocalAppearanceForPresentation;
- (id)_presentationForParticipant:(id)arg1;
- (id)_appearanceForParticipant:(id)arg1;
- (id)_behaviorForParticipant:(id)arg1;
- (void)_updateLocalAppearanceForRequester:(id)arg1 animationSettings:(id)arg2 actions:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)_handleEvent:(id)arg1;
- (_Bool)_handleEventType:(long long)arg1;
- (unsigned long long)_indexOfPageViewControllerClass:(Class)arg1;
- (unsigned long long)_indexOfCameraPage;
- (unsigned long long)_indexOfMainPage;
- (unsigned long long)_indexOfTodayPage;
- (void)_updateVisibilityForPageViewControllers;
- (id)_eligiblePageViewControllers;
- (unsigned long long)_pageCapabilities;
- (void)_removeAllowedPageViewController:(id)arg1;
- (void)_addVisiblePageViewController:(id)arg1;
- (void)_loadViewsForRestrictedPagesIfPossible;
- (id)pageViewControllerAtIndex:(unsigned long long)arg1;
- (id)visiblePageViewController;
- (void)_presentPluginViewController:(id)arg1 withStyle:(long long)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_dismissPluginViewController:(id)arg1 withStyle:(long long)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_setPluginViewController:(id)arg1;
- (id)dashBoardView;
- (_Bool)_isSourceForHorizontalScrolling:(id)arg1;
- (void)mesaUnlockBehavior:(id)arg1 requestsUnlock:(id)arg2 withFeedback:(id)arg3;
- (void)mesaUnlockBehavior:(id)arg1 requestsFeedback:(id)arg2;
- (void)biometricEventMonitor:(id)arg1 handleBiometricEvent:(unsigned long long)arg2;
- (_Bool)shouldAutoUnlockForSource:(int)arg1;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1;
- (id)hostedApp;
- (_Bool)isHostingAnApp;
- (_Bool)canHostAnApp;
- (void)updateNotificationSectionSettings:(id)arg1;
- (void)withdrawNotificationRequest:(id)arg1;
- (void)updateNotificationRequest:(id)arg1;
- (void)postNotificationRequest:(id)arg1;
- (id)slideControllerRequestedGrabberView:(id)arg1;
- (void)slideController:(id)arg1 requestedUnlockWithActionBlock:(CDUnknownBlockType)arg2;
- (void)slideController:(id)arg1 didUpdateWithApplication:(id)arg2;
- (_Bool)slideControllerShouldBeginSliding:(id)arg1;
- (long long)slideControllerRequestedInterfaceOrientation:(id)arg1;
- (_Bool)pluginManager:(id)arg1 plugin:(id)arg2 handleAction:(id)arg3;
- (void)pluginManager:(id)arg1 displayedPluginDidChangeFromPlugin:(id)arg2 toPlugin:(id)arg3;
- (void)pluginManager:(id)arg1 displayedPluginDidUpdateAppearance:(id)arg2;
- (void)pluginManager:(id)arg1 activePluginDidChange:(id)arg2;
- (void)pluginManager:(id)arg1 willUnloadPlugin:(id)arg2;
- (void)pluginManager:(id)arg1 didLoadPlugin:(id)arg2;
- (void)screenFadeAnimationController:(id)arg1 setRelevantViewsHidden:(_Bool)arg2 forRequester:(id)arg3;
- (void)invalidateLockScreenActionContext;
- (id)lockScreenActionContext;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)relinquishHostingOfWallpaperOverlay;
- (void)startHostingWallpaperOverlay:(id)arg1;
- (void)irisWallpaperView:(id)arg1 didReplaceGestureRecognizer:(id)arg2 withGestureRecognizer:(id)arg3;
- (void)irisWallpaperViewIsInteractingDidChange:(id)arg1;
- (void)irisWallpaperViewPlaybackStateDidChange:(id)arg1;
- (void)transitionSource:(id)arg1 didEndWithContext:(CDStruct_7238a68f)arg2;
- (void)transitionSource:(id)arg1 didUpdateTransitionWithContext:(CDStruct_7238a68f)arg2;
- (void)transitionSource:(id)arg1 willBeginWithType:(long long)arg2;
- (_Bool)isTransitioningInteractively;
@property(readonly, nonatomic, getter=isTransitioning) _Bool transitioning;
- (void)dashBoardLegibilityProviderDidUpdate:(id)arg1;
- (_Bool)wouldHandleButtonEvent:(id)arg1;
- (_Bool)handleEvent:(id)arg1;
- (_Bool)wantsLockScreenIdleTimer;
- (void)handleAction:(id)arg1 fromSender:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *presentationRegions;
@property(readonly, nonatomic) __weak id <UICoordinateSpace> presentationCoordinateSpace;
@property(readonly, nonatomic) long long scrollingMode;
@property(readonly, nonatomic) long long idleWarnMode;
@property(readonly, nonatomic) long long idleTimerMode;
@property(readonly, nonatomic) long long idleTimerDuration;
@property(readonly, nonatomic) unsigned long long restrictedCapabilities;
@property(readonly, nonatomic) long long notificationBehavior;
- (void)setLegibilitySettings:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *components;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) long long backgroundStyle;
@property(readonly, copy, nonatomic) NSString *appearanceIdentifier;
@property(readonly, nonatomic) long long presentationAltitude;
@property(readonly, nonatomic) long long presentationTransition;
@property(readonly, nonatomic) long long presentationPriority;
@property(readonly, nonatomic) long long presentationType;
@property(readonly, nonatomic) long long presentationStyle;
@property(nonatomic) __weak id <SBDashBoardViewPresenting> presenter;
- (void)updateAppearanceForController:(id)arg1 withAnimationSettings:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateAppearanceForController:(id)arg1;
- (void)updateBehaviorForController:(id)arg1;
@property(readonly, nonatomic) long long participantState;
@property(readonly, copy, nonatomic) NSString *dashBoardIdentifier;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)noteMenuButtonUp;
- (void)noteMenuButtonDown;
- (_Bool)allowSystemGestureAtLocation:(struct CGPoint)arg1;
- (_Bool)isSystemGesturePermittedForPresentingController:(id)arg1;
- (_Bool)shouldShowLockStatusBarTime;
- (_Bool)_canHandleTransitionRequest:(id)arg1;
- (_Bool)handleTransitionRequest:(id)arg1;
- (void)activateCameraAnimated:(_Bool)arg1;
- (void)setShowingMediaControls:(_Bool)arg1;
- (_Bool)isShowingMediaControls;
- (void)emergencyDialerExitedWithError:(id)arg1;
- (void)exitEmergencyDialerAnimated:(_Bool)arg1;
- (void)launchEmergencyDialer;
- (_Bool)isMakingEmergencyCall;
- (_Bool)shouldUnlockUIOnKeyDownEvent;
- (_Bool)isShowingOverheatUI;
- (void)noteDeviceBlockedStatusUpdated;
- (void)launchInCallAlert;
- (void)disableLockScreenPluginWithContext:(id)arg1;
- (void)enableLockScreenPluginWithContext:(id)arg1;
- (id)activeLockScreenPlugin;
- (_Bool)isLockScreenPluginViewVisible;
- (_Bool)isMainPageVisible;
- (void)setInScreenOffMode:(_Bool)arg1 forAutoUnlock:(_Bool)arg2;
- (_Bool)isInScreenOffMode;
- (void)setBacklightLevel:(double)arg1;
- (_Bool)canBeDeactivatedForUIUnlockFromSource:(int)arg1;
- (void)finishUIUnlockFromSource:(int)arg1;
- (void)prepareForUIUnlock;
- (_Bool)canUIUnlockFromSource:(int)arg1;
- (void)setAuthenticated:(_Bool)arg1;
- (void)setPasscodeLockVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isPasscodeLockVisible;
- (void)_deactivateLayoutElement;
- (long long)statusBarStyle;
- (_Bool)wantsTimeInStatusBar;
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
- (_Bool)handleHeadsetButtonPressed:(_Bool)arg1;
- (_Bool)handleVolumeDownButtonPressed;
- (_Bool)handleVolumeUpButtonPressed;
- (_Bool)handleLockButtonPressed;
- (_Bool)handleMenuButtonTap;
- (_Bool)suppressesControlCenter;
- (_Bool)suppressesNotificationCenter;
- (_Bool)suppressesBanners;
- (_Bool)managesOwnStatusBarAtActivation;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;
- (_Bool)_shouldDismissSwitcherOnActivation;
- (_Bool)hasTranslucentBackground;
- (void)deactivate;
- (void)didStackWithAlert:(id)arg1;
- (void)willStackWithAlert:(id)arg1;
- (_Bool)allowsStackingOfAlert:(id)arg1;
- (void)displayDidDisappear;
- (void)setView:(id)arg1;
- (void)displayWillAppear;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)presentViewController:(id)arg1 withTransition:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentModalViewController:(id)arg1 withTransition:(int)arg2;
- (void)presentModalViewController:(id)arg1 fromRect:(struct CGRect)arg2 inView:(id)arg3 animated:(_Bool)arg4;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)shouldAutorotate;
- (void)_addBackgroundView;
- (void)_addWallpaperEffectView;
- (void)loadView;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (_Bool)isIdleTimerDisabledForReason:(id)arg1;
- (void)removeIdleTimerDisabledAssertionReason:(id)arg1;
- (void)addIdleTimerDisabledAssertionReason:(id)arg1;
- (void)unregisterExternalEventHandler:(id)arg1;
- (void)registerExternalEventHandler:(id)arg1;
- (void)unregisterExternalBehaviorProvider:(id)arg1;
- (void)externalBehaviorProviderBehaviorChanged:(id)arg1;
- (void)registerExternalBehaviorProvider:(id)arg1;
- (void)unregisterExternalAppearanceProvider:(id)arg1;
- (void)externalAppearanceProviderAppearanceChanged:(id)arg1;
- (void)registerExternalAppearanceProvider:(id)arg1;
- (void)activateTodayViewWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) id <SBAlertingNotificationDestination> notificationDestination;
- (id)initWithPageViewControllers:(id)arg1 mainPageViewController:(id)arg2 legibilityProvider:(id)arg3;
- (id)initWithPageViewControllers:(id)arg1 mainPageViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

