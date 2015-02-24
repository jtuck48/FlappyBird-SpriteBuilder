//
//  GamePlayScene.h
//  FlappyBird
//
//  Created by Gerald on 2/11/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCNode.h"
#import "Character.h"

typedef NS_ENUM(NSInteger, DrawingOrder) {
    DrawingOrderPipes,
    DrawingOrderGround,
    DrawingOrderHero
};

@interface GamePlayScene : CCNode <CCPhysicsCollisionDelegate>
{
    //The '*' declares two different variables in the class scope, which means they can be accessed anywhere in the GamePlayScene class.
    // define variables here;
    Character* character; //Stores an instance of our Flappy Bird
    CCPhysicsNode* physicsNode; //References a Node that simulates physics
    float timeSinceObstacle;
}

-(void) initialize;
-(void) addObstacle;
-(void) showScore;

@end
