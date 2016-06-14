//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBApplicationIcon.h"

#import "SBDateTimeOverrideObserver-Protocol.h"

@class NSString;

@interface SBCalendarApplicationIcon : SBApplicationIcon <SBDateTimeOverrideObserver>
{
}

+ (id)countriesRequiringBlackDayOfWeek;
- (void)_drawIconIntoCurrentContextWithImageSize:(struct CGSize)arg1 iconBase:(id)arg2;
- (id)numberFont;
- (id)colorForDayOfWeek;
- (_Bool)isBlackDayOfWeekRequiredForLocale:(id)arg1;
- (id)getUnmaskedIconImage:(int)arg1;
- (id)generateIconImage:(int)arg1;
- (id)_compositedIconImageForFormat:(int)arg1 withBaseImageProvider:(CDUnknownBlockType)arg2;
- (void)_stopListeningForSignificantTimeChanges;
- (void)_startListeningForSignificantTimeChanges;
- (void)localeChanged;
- (void)controller:(id)arg1 didChangeOverrideDateFromDate:(id)arg2;
- (void)dealloc;
- (id)initWithApplication:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

