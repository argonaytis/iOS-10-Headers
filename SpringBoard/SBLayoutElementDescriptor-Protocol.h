//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBLayoutElementIdentity-Protocol.h"

@protocol SBLayoutElementDescriptor <SBLayoutElementIdentity>
@property(readonly, copy, nonatomic) CDUnknownBlockType entityGenerator;
@property(readonly, nonatomic) Class viewControllerClass;
@property(readonly, nonatomic) unsigned long long layoutAttributes;
@property(readonly, nonatomic) unsigned long long supportedLayoutRoles;
@property(readonly, nonatomic) long long layoutRole;
- (_Bool)hasLayoutAttributes:(unsigned long long)arg1;
- (_Bool)supportsLayoutRole:(long long)arg1;
@end

