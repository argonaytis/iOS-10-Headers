//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSDescriptionProviding-Protocol.h"
#import "SBDisplayLayoutContext-Protocol.h"

@class BSAnimationSettings, FBSDisplay, NSMutableDictionary, NSSet, NSString, SBLayoutState, SBWorkspaceTransitionRequest;
@protocol SBWorkspaceTransitionLayoutDelegate;

@interface SBWorkspaceTransitionContext : NSObject <SBDisplayLayoutContext, BSDescriptionProviding>
{
    NSMutableDictionary *_entities;
    NSMutableDictionary *_previousEntities;
    _Bool _finalized;
    SBLayoutState *_layoutState;
    SBLayoutState *_previousLayoutState;
    _Bool _animationDisabled;
    BSAnimationSettings *_animationSettings;
    SBWorkspaceTransitionRequest *_request;
    id <SBWorkspaceTransitionLayoutDelegate> _layoutDelegate;
}

+ (id)context;
@property(readonly, nonatomic, getter=_isFinalized) _Bool _finalized; // @synthesize _finalized;
@property(nonatomic) __weak id <SBWorkspaceTransitionLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property(retain, nonatomic) BSAnimationSettings *animationSettings; // @synthesize animationSettings=_animationSettings;
@property(nonatomic) _Bool animationDisabled; // @synthesize animationDisabled=_animationDisabled;
@property(nonatomic) __weak SBWorkspaceTransitionRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, nonatomic) FBSDisplay *display;
- (id)_display;
- (void)finalize;
- (id)previousEntityForIdentifier:(id)arg1;
- (id)previousEntityForKey:(id)arg1;
- (void)setPreviousEntity:(id)arg1 forKey:(id)arg2;
@property(readonly, copy, nonatomic) NSSet *previousEntities;
@property(readonly, nonatomic) SBLayoutState *previousLayoutState; // @synthesize previousLayoutState=_previousLayoutState;
@property(readonly, nonatomic) SBLayoutState *layoutState; // @synthesize layoutState=_layoutState;
- (id)entityForIdentifier:(id)arg1;
- (id)entityForKey:(id)arg1;
- (void)setEntity:(id)arg1 forKey:(id)arg2;
@property(readonly, copy, nonatomic) NSSet *entities;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

