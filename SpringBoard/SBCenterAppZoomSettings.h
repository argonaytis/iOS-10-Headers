//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBCenterZoomSettings.h"

@class SBAnimationSettings;

@interface SBCenterAppZoomSettings : SBCenterZoomSettings
{
    _Bool _appViewBelowIcons;
    double _appHeadStart;
    SBAnimationSettings *_appZoomSettings;
    SBAnimationSettings *_appFadeSettings;
}

+ (id)settingsControllerModule;
@property(nonatomic) _Bool appViewBelowIcons; // @synthesize appViewBelowIcons=_appViewBelowIcons;
@property(retain) SBAnimationSettings *appFadeSettings; // @synthesize appFadeSettings=_appFadeSettings;
@property(retain) SBAnimationSettings *appZoomSettings; // @synthesize appZoomSettings=_appZoomSettings;
@property double appHeadStart; // @synthesize appHeadStart=_appHeadStart;
- (void).cxx_destruct;

@end

