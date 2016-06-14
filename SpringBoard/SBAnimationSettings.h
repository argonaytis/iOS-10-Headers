//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBAnimationCurveSettings.h"

@class BSAnimationSettings;

@interface SBAnimationSettings : SBAnimationCurveSettings
{
    BSAnimationSettings *_exportedSettings;
    long long _animationType;
    double _delay;
    double _duration;
    double _mass;
    double _stiffness;
    double _damping;
    double _epsilon;
    double _calculatedDuration;
    double _speed;
}

+ (id)_moduleWithSectionTitle:(id)arg1 delay:(_Bool)arg2;
+ (id)_moduleWithSectionTitle:(id)arg1;
+ (id)settingsControllerModule;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) double calculatedDuration; // @synthesize calculatedDuration=_calculatedDuration;
@property(nonatomic) double epsilon; // @synthesize epsilon=_epsilon;
@property(nonatomic) double damping; // @synthesize damping=_damping;
@property(nonatomic) double stiffness; // @synthesize stiffness=_stiffness;
@property(nonatomic) double mass; // @synthesize mass=_mass;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) long long animationType; // @synthesize animationType=_animationType;
- (void).cxx_destruct;
- (id)BSAnimationSettings;
- (void)_invalidate;
- (void)setDefaultValues;

@end

