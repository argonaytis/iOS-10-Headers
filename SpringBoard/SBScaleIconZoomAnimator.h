//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBIconZoomAnimator.h"

@class NSDate, SBIcon, SBIconView, SBScaleZoomSettings, UIView;

@interface SBScaleIconZoomAnimator : SBIconZoomAnimator
{
    struct UIEdgeInsets _iconScootch;
    double _naturalVisualAltitude;
    UIView *_scalingView;
    SBIconView *_targetIconView;
    UIView *_targetIconPositioningView;
    NSDate *_startTime;
    double _currentPhaseTwoDelay;
    SBIcon *_targetIcon;
    unsigned long long _crossfadeType;
    struct CGPoint _zoomScaleDimension;
}

@property(nonatomic) unsigned long long crossfadeType; // @synthesize crossfadeType=_crossfadeType;
@property(readonly, nonatomic) struct CGPoint zoomScaleDimension; // @synthesize zoomScaleDimension=_zoomScaleDimension;
@property(readonly, nonatomic) SBIcon *targetIcon; // @synthesize targetIcon=_targetIcon;
- (void).cxx_destruct;
- (void)_applyOuterFadeFraction:(double)arg1;
- (void)_applyZoomFraction:(double)arg1;
- (void)_setIconAlpha:(double)arg1;
- (double)_zoomedVisualAltitude;
- (struct CGPoint)_zoomedIconCenter;
- (struct CGRect)_zoomedFrame;
- (void)_performAnimationToFraction:(double)arg1 withCentralAnimationSettings:(id)arg2 delay:(double)arg3 alreadyAnimating:(_Bool)arg4 sharedCompletion:(CDUnknownBlockType)arg5;
- (void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(CDUnknownBlockType)arg3;
- (void)hintToFraction:(double)arg1;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_cleanupAnimation;
- (void)_setAnimationFraction:(double)arg1;
- (void)_prepareAnimation;
@property(readonly, nonatomic) SBIconView *referenceIconView;
@property(readonly, nonatomic) SBIconView *targetIconView;
- (void)_setZoomScale:(struct CGPoint)arg1;
- (_Bool)_forceSquareZoomDimension;
@property(readonly, nonatomic) _Bool fadesHomeScreen;
@property(readonly, nonatomic) UIView *targetIconContainerView;
@property(readonly, nonatomic) double maxHomeScreenZoomScale;
@property(readonly, nonatomic) double zoomScale;
- (_Bool)isPastPointOfNoReturn;
- (id)initWithFolderController:(id)arg1 targetIcon:(id)arg2;

// Remaining properties
@property(retain, nonatomic) SBScaleZoomSettings *settings; // @dynamic settings;

@end

