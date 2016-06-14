//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, SBBestAppSuggestion, SBDisplayItem, SBMainDisplayLayoutState, SBWorkspaceTransitionRequest;
@protocol SBMainAppSwitcherContentViewControllerDelegate;

@protocol SBMainAppSwitcherContentViewControlling <NSObject>
+ (double)snapshotScale;
@property(retain, nonatomic) SBBestAppSuggestion *bestAppSuggestion;
@property(nonatomic) id <SBMainAppSwitcherContentViewControllerDelegate> delegate;
@property(copy, nonatomic) NSArray *displayItems;
@property(retain, nonatomic, setter=_setInitialLayoutState:) SBMainDisplayLayoutState *_initialLayoutState;
@property(copy, nonatomic, setter=_setInitialDisplayItem:) SBDisplayItem *_initialDisplayItem;
@property(copy, nonatomic, setter=_setReturnToSideDisplayItem:) SBDisplayItem *_returnToSideDisplayItem;
@property(copy, nonatomic, setter=_setReturnToDisplayItem:) SBDisplayItem *_returnToDisplayItem;
- (void)replaceDisplayItem:(SBDisplayItem *)arg1 withDisplayItem:(SBDisplayItem *)arg2 completion:(void (^)(_Bool, SBDisplayItem *, SBDisplayItem *))arg3;
- (void)removeDisplayItem:(SBDisplayItem *)arg1 forReason:(long long)arg2 completion:(void (^)(_Bool, SBDisplayItem *, SBDisplayItem *))arg3;
- (void)insertDisplayItem:(SBDisplayItem *)arg1 atIndex:(unsigned long long)arg2 completion:(void (^)(_Bool, SBDisplayItem *, SBDisplayItem *))arg3;
- (void)animateDismissalToDisplayItem:(SBDisplayItem *)arg1 forTransitionRequest:(SBWorkspaceTransitionRequest *)arg2 withCompletion:(void (^)(void))arg3;
- (void)animatePresentationForTransitionRequest:(SBWorkspaceTransitionRequest *)arg1 withCompletion:(void (^)(void))arg2;
- (void)endTransitionWithSuccess:(_Bool)arg1 completion:(void (^)(_Bool))arg2;
- (SBDisplayItem *)nextDisplayItem;
- (void)setTransitionParameters:(CDStruct_efa48ab2)arg1;
- (void)endInteractionWithCommitment:(_Bool)arg1;
- (void)startInteractiveTransition:(_Bool)arg1 presenting:(_Bool)arg2 withRequest:(SBWorkspaceTransitionRequest *)arg3;
- (_Bool)hasInteractiveContentAtBottomOfScreen;
- (void)invalidate;
@end

