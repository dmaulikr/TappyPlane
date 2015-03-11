//
//  TPPlane.h
//  Tappy Plane
//
//  Created by Rob Norback on 3/2/15.
//  Copyright (c) 2015 Sidecar Games. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface TPPlane : SKSpriteNode


@property (nonatomic) BOOL engineRunning;
@property (nonatomic) BOOL accelerating;

-(void)setRandomColor;
-(void)update;

@end
