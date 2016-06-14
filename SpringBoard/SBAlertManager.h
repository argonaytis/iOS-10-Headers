//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSDescriptionProviding-Protocol.h"
#import "FBSceneLayerManagerObserver-Protocol.h"
#import "SBAlertDelegate-Protocol.h"
#import "SBAlertWindowDelegate-Protocol.h"

@class FBSScene, FBScene, NSMapTable, NSMutableArray, NSMutableSet, NSSet, NSString, SBAlertWindow, UIScreen;
@protocol SBAlertManagerDelegate;

@interface SBAlertManager : NSObject <SBAlertDelegate, SBAlertWindowDelegate, FBSceneLayerManagerObserver, BSDescriptionProviding>
{
    UIScreen *_screen;
    FBScene *_alertServerScene;
    NSSet *_alertClientSceneOcclusions;
    FBSScene *_alertClientScene;
    SBAlertWindow *_alertWindow;
    SBAlertWindow *_deferredAlertWindow;
    NSMutableArray *_alerts;
    NSMapTable *_observers;
    NSMutableSet *_removalPendingAlerts;
    _Bool _deactivatingAllAlerts;
    struct {
        unsigned int deactivateDismissed:1;
        unsigned int newWindow:1;
        unsigned int defaultShouldAutorotate:1;
        unsigned int defaultPresentationOrientation:1;
        unsigned int defaultSupportedOrientations:1;
    } _delegateFlags;
    id <SBAlertManagerDelegate> _delegate;
}

@property(retain, nonatomic) SBAlertWindow *deferredAlertWindow; // @synthesize deferredAlertWindow=_deferredAlertWindow;
@property(nonatomic) __weak id <SBAlertManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SBAlertWindow *alertWindow; // @synthesize alertWindow=_alertWindow;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)sceneLayerManagerDidStopTrackingLayers:(id)arg1;
- (void)sceneLayerManagerWillStartTrackingLayers:(id)arg1;
- (unsigned long long)defaultSupportedInterfaceOrientationsForAlertWindow:(id)arg1;
- (long long)defaultInterfaceOrientationForPresentationOfAlertWindow:(id)arg1;
- (_Bool)defaultShouldAutorotateForAlertWindow:(id)arg1;
- (void)alert:(id)arg1 didChangeFaceContactExpectation:(_Bool)arg2;
- (unsigned long long)defaultSupportedInterfaceOrientationsForAlert:(id)arg1;
- (long long)defaultInterfaceOrientationForPresentationOfAlert:(id)arg1;
- (_Bool)defaultShouldAutorotateForAlert:(id)arg1;
- (void)alertWantsToForceWallpaperTunnelUpdate:(id)arg1;
- (void)alertIsReadyToBeRemovedFromView:(id)arg1;
- (void)alertIsReadyToBeDeactivated:(id)arg1;
- (void)alertWillDismiss:(id)arg1;
- (void)alertDidChangeOccluding:(id)arg1;
- (void)alertDidChangeOrientationEventsEnabled:(id)arg1;
- (void)alert:(id)arg1 didChangeStatusBarVisibility:(_Bool)arg2;
- (void)alert:(id)arg1 requestsBackgroundStyleChangeWithAnimationFactory:(id)arg2;
- (void)_updateSceneClientSettings;
- (void)_makeAlertWindowOpaque:(_Bool)arg1;
- (void)_resetAlertWindowOpacity;
- (void)_removeFromView:(id)arg1 oldAlertIndex:(unsigned long long)arg2;
- (void)_deactivate:(id)arg1;
- (void)_activate:(id)arg1;
- (void)_createAlertWindowIfNecessaryForAlert:(id)arg1;
- (void)_noteFinishedWithAlert:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_noteAlertWillDismiss:(id)arg1;
- (_Bool)_canAutorotate;
- (void)_noteWillDisplayAlert:(id)arg1;
- (id)_alertAtIndex:(unsigned long long)arg1;
- (unsigned long long)_alertCount;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)applicationFinishedAnimatingBeneathAlert;
- (void)applicationWillAnimateActivation;
- (void)deactivateAlertsAfterLaunch;
- (void)setAlertsShouldDeactivateAfterLaunch;
- (void)deactivateAll;
- (_Bool)deactivate:(id)arg1;
- (void)activate:(id)arg1;
- (id)allAlerts;
- (_Bool)containsAlert:(id)arg1;
- (id)stackedAlertsIncludingActiveAlert:(_Bool)arg1;
- (_Bool)hasStackedAlerts;
- (id)activeAlert;
- (id)contextHostManager;
- (id)screen;
- (void)dealloc;
- (id)init;
- (id)initWithScreen:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

