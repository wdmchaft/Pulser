//
//  PulseNode.h
//  Pulser
//
//  Created by Matthew Mcgoogan on 4/11/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"
#import "chipmunk.h"
@class MeteorNode;
@class Player;

#define PULSENODE_RADIUS 50.0f
#define PULSENODE_MASS 50.0f

@interface PulseNode : CCLayer {
	CCQuadParticleSystem *particleSystem;
	cpShape *shape;
	NSMutableArray *meteors;
	Player *player;
	
	@private
	cpSpace *_space;
	CGPoint currentDestination;
	cpBody *pathBody;
}

@property (nonatomic, retain) CCQuadParticleSystem *particleSystem;
@property (nonatomic, readonly) NSMutableArray *meteors;
@property (nonatomic, retain) Player *player;

- (id)initWithPosition:(CGPoint)pos space:(cpSpace *)space;

- (CGPoint)randomPoint;

- (void)removeMeteor:(MeteorNode *)meteor;

@end
