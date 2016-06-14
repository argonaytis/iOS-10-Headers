//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NCNotificationActionRunner-Protocol.h"

@class NSString, SBSCardItem;

@interface NCRevealWalletPassActionRunner : NSObject <NCNotificationActionRunner>
{
    SBSCardItem *_cardItem;
}

@property(readonly, retain, nonatomic) SBSCardItem *cardItem; // @synthesize cardItem=_cardItem;
- (void).cxx_destruct;
- (void)executeAction:(id)arg1 fromOrigin:(id)arg2 withParameters:(id)arg3;
- (id)initWithCardItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

