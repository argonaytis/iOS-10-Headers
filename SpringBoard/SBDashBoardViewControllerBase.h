//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BSDescriptionProviding-Protocol.h"
#import "SBDashBoardViewPresenting-Protocol.h"

@class FBDisplayLayoutElement, NSArray, NSHashTable, NSSet, NSString, SBDashBoardAppearance, SBDashBoardBehavior, SBDashBoardIsolatingViewController, SBDashBoardPresentation, UIColor, _UILegibilitySettings;
@protocol SBDashBoardViewPresenting, UICoordinateSpace;

@interface SBDashBoardViewControllerBase : UIViewController <BSDescriptionProviding, SBDashBoardViewPresenting>
{
    SBDashBoardAppearance *_appearance;
    SBDashBoardBehavior *_behavior;
    SBDashBoardPresentation *_presentation;
    _UILegibilitySettings *_legibilitySettings;
    FBDisplayLayoutElement *_displayLayoutElement;
    SBDashBoardIsolatingViewController *_isolatingViewController;
    SBDashBoardViewControllerBase *_isolatedViewController;
    Class _isolationClass;
    NSHashTable *_regionProviders;
    _Bool _forcingLayoutForPresentation;
    _Bool _isBeingPresented;
    id <SBDashBoardViewPresenting> _presenter;
}

+ (id)dashBoardIdentifier;
+ (Class)isolationViewControllerClass;
+ (Class)viewClass;
@property(nonatomic) __weak id <SBDashBoardViewPresenting> presenter; // @synthesize presenter=_presenter;
@property(readonly, nonatomic, getter=isPresentation) _Bool presentation; // @synthesize presentation=_isBeingPresented;
@property(readonly, nonatomic) UIViewController *isolatingViewController; // @synthesize isolatingViewController=_isolatingViewController;
- (void).cxx_destruct;
- (id)_regionsForView:(id)arg1;
- (_Bool)_presentationParticipant;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSArray *presentationRegions;
@property(readonly, nonatomic) __weak id <UICoordinateSpace> presentationCoordinateSpace;
@property(readonly, nonatomic) unsigned long long restrictedCapabilities;
@property(readonly, nonatomic) long long notificationBehavior;
@property(readonly, nonatomic) long long scrollingMode;
@property(readonly, nonatomic) long long idleWarnMode;
@property(readonly, nonatomic) long long idleTimerMode;
@property(readonly, nonatomic) long long idleTimerDuration;
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(readonly, copy, nonatomic) NSSet *components;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) long long backgroundStyle;
@property(readonly, copy, nonatomic) NSString *appearanceIdentifier;
- (_Bool)wouldHandleButtonEvent:(id)arg1;
- (_Bool)handleEvent:(id)arg1;
@property(readonly, nonatomic) long long presentationAltitude;
@property(readonly, nonatomic) long long presentationTransition;
@property(readonly, nonatomic) long long presentationPriority;
@property(readonly, nonatomic) long long presentationType;
@property(readonly, nonatomic) long long presentationStyle;
- (id)_presenter;
- (void)handleAction:(id)arg1 fromSender:(id)arg2;
- (void)updateAppearanceForController:(id)arg1 withAnimationSettings:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateAppearanceForController:(id)arg1;
- (void)updateBehaviorForController:(id)arg1;
@property(readonly, copy, nonatomic) SBDashBoardBehavior *activeBehavior;
@property(readonly, copy, nonatomic) SBDashBoardAppearance *activeAppearance;
@property(readonly, nonatomic) long long participantState;
@property(readonly, copy, nonatomic) NSString *dashBoardIdentifier;
- (void)_rebuildDisposition;
- (_Bool)_rebuildPresentation;
- (_Bool)_rebuildBehavior;
- (_Bool)_rebuildAppearance;
- (void)_layoutIfNeededForPresentation;
- (void)configureDisplayLayoutElement:(id)arg1;
- (id)displayLayoutElementIdentifier;
- (_Bool)handleAppearanceUpdateFromController:(id)arg1 animationSettings:(inout id *)arg2;
- (_Bool)handleAction:(id)arg1 fromController:(id)arg2;
- (void)performCustomTransitionToVisible:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)aggregatePresentation:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (void)aggregateAppearance:(id)arg1;
- (void)updateForPresentation:(id)arg1;
- (void)didTransitionToPresented:(_Bool)arg1;
- (void)willTransitionToPresented:(_Bool)arg1;
@property(readonly, nonatomic) UIViewController *kitPresentedViewController;
@property(readonly, nonatomic, getter=isDisappeared) _Bool disappeared;
@property(readonly, nonatomic) SBDashBoardViewControllerBase *isolatedViewController;
@property(readonly, nonatomic, getter=isIsolatingContent) _Bool isolatingContent;
- (void)synchronizeDrawingWithIsolatedContent;
- (void)isolateViewController:(id)arg1;
- (void)dismiss;
- (void)sendAction:(id)arg1;
- (void)updateBehavior:(CDUnknownBlockType)arg1;
- (void)updateAppearance:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateAppearance:(CDUnknownBlockType)arg1;
- (void)rebuildEverythingForReason:(id)arg1;
- (void)rebuildBehavior;
- (void)rebuildAppearance;
- (void)unregisterAllViews;
- (void)unregisterView:(id)arg1;
- (void)registerView:(id)arg1 forRole:(long long)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

