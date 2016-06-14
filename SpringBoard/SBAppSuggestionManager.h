//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UABestAppSuggestionManagerDelegate-Protocol.h"

@class NSString, SBBestAppSuggestion, UABestAppSuggestion, UABestAppSuggestionManager;

@interface SBAppSuggestionManager : NSObject <UABestAppSuggestionManagerDelegate>
{
    UABestAppSuggestionManager *_continuitySuggestionManager;
    UABestAppSuggestion *_continuityCurrentBestSuggestion;
    SBBestAppSuggestion *_currentBestSuggestion;
    _Bool _isListeningForContinuitySuggestion;
    _Bool _isListeningForExpertCenterSuggestion;
    _Bool _screenOnDueToUserEvent;
    _Bool _screenOnAndLookingForEvent;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)bestAppSuggestionChanged:(id)arg1;
- (void)_calculateBestSuggestionAndNotifyListeners;
- (void)noteNotActivatingForAppSuggestion:(id)arg1 fromSource:(long long)arg2;
- (void)noteActivatingForAppSuggestion:(id)arg1 fromSource:(long long)arg2;
- (void)_setContinuitySuggestionUpdatesEnabled:(_Bool)arg1 expertCenterSuggestionUpdatesEnabled:(_Bool)arg2;
- (void)_evaluateSuggestionUpdates:(id)arg1;
- (void)_handleInitialSpringBoardLaunch;
- (void)_nextUserEventOccured:(id)arg1;
- (void)_screenDidUndim:(id)arg1;
- (void)_screenDidDim:(id)arg1;
- (void)startFetchingPayloadForAppSuggestion:(id)arg1;
- (void)performWithCurrentSuggestedAppAndApplication:(CDUnknownBlockType)arg1;
- (id)currentSuggestedApp;
- (void)_stopListeningForNotifications;
- (void)_listenForNotifications;
- (void)_destroySuggestionSources;
- (void)_createSuggestionSources;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
