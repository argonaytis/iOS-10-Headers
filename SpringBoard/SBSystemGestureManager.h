//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSDescriptionProviding-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class FBSDisplay, NSMutableDictionary, NSMutableSet, NSSet, NSString, UIGestureRecognizer;

@interface SBSystemGestureManager : NSObject <UIGestureRecognizerDelegate, BSDescriptionProviding>
{
    FBSDisplay *_display;
    NSMutableDictionary *_typeToGesture;
    NSMutableDictionary *_typeToState;
    NSMutableSet *_recognizingTouchGestures;
    NSMutableSet *_touchGestures;
    NSSet *_gesturesPreventedByStylus;
    UIGestureRecognizer *_stylusPriorityRecognizer;
    _Bool _systemGesturesDisabledForAccessibility;
}

+ (id)mainDisplayManager;
@property(retain, nonatomic) NSSet *gesturesPreventedByStylus; // @synthesize gesturesPreventedByStylus=_gesturesPreventedByStylus;
@property(nonatomic, getter=areSystemGesturesDisabledForAccessibility) _Bool systemGesturesDisabledForAccessibility; // @synthesize systemGesturesDisabledForAccessibility=_systemGesturesDisabledForAccessibility;
- (void).cxx_destruct;
- (void)_systemGestureChanged:(id)arg1;
- (void)_disableSystemGesture:(id)arg1 withType:(unsigned long long)arg2;
- (void)_enableSystemGesture:(id)arg1 withType:(unsigned long long)arg2;
- (_Bool)_isTouchGestureWithType:(unsigned long long)arg1;
- (_Bool)_shouldEnableSystemGestureWithType:(unsigned long long)arg1;
- (_Bool)_isGestureWithTypeAllowed:(unsigned long long)arg1;
- (void)_evaluateEnablement;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)windowForSystemGestures;
- (_Bool)isGestureWithTypeAllowed:(unsigned long long)arg1;
@property(readonly, nonatomic, getter=isAnyTouchGestureRunning) _Bool anyTouchGestureRunning;
@property(readonly, nonatomic) FBSDisplay *display;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)removeGestureRecognizer:(id)arg1;
- (void)addGestureRecognizer:(id)arg1 withType:(unsigned long long)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)dealloc;
- (id)initWithDisplay:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

