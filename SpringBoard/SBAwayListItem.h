//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "SBAwayListCellButtonHandler-Protocol.h"
#import "SBUIQuietModePlayability-Protocol.h"

@class NSDate, NSString, SBLockScreenActionContext;

@interface SBAwayListItem : NSObject <SBAwayListCellButtonHandler, SBUIQuietModePlayability, NSCopying>
{
    NSDate *_timestamp;
    _Bool _isNewItem;
    SBLockScreenActionContext *_lockScreenActionContext;
    NSString *_buttonLabel;
}

@property(copy, nonatomic) NSString *buttonLabel; // @synthesize buttonLabel=_buttonLabel;
@property(nonatomic) _Bool isNewItem; // @synthesize isNewItem=_isNewItem;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (_Bool)overridesPocketMode;
- (_Bool)overridesQuietMode;
- (_Bool)isCritical;
- (_Bool)inertWhenLocked;
- (void)prepareWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)canBeRemovedByUnlock;
- (_Bool)canBeRemovedByNotificationCenterPresentation;
@property(readonly, nonatomic) _Bool shouldPlayLightsAndSirens;
- (_Bool)wantsHighlightOnInsert;
- (void)buttonPressed;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

