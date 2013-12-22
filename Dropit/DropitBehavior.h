//
//  DropitBehavior.h
//  Dropit
//
//  Created by Kai Ren on 12/22/13.
//  Copyright (c) 2013 Kai Ren. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DropitBehavior : UIDynamicBehavior
-(void)addItem:(id <UIDynamicItem>) item;
-(void)removeItem:(id <UIDynamicItem>) item;
@end
