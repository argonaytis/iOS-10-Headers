//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray;

@interface SBAppSwitcherServiceSet : NSObject <NSCopying>
{
    NSMutableArray *_services;
}

@property(readonly, nonatomic) NSMutableArray *services; // @synthesize services=_services;
- (void).cxx_destruct;
- (id)displayItems;
- (id)serviceBundleIdentifiers;
- (id)serviceForBundleIdentifier:(id)arg1;
- (id)serviceAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)removeService:(id)arg1;
- (void)addService:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithServices:(id)arg1 zone:(struct _NSZone *)arg2;

@end

