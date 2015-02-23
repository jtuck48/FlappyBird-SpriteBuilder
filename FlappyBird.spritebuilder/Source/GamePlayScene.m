#import "GamePlayScene.h"
#import "Character.h"
#import "Obstacle.h"

@implementation GamePlayScene

- (void)initialize
{
    //Create our character and add it to the screen
    // your code here
    character = (Character*)[CCBReader load:@"Character"];
    //Will load a new character from the CCB file we created for our named Character
    //CCB files are created by SpriteBuilder and describe the properties and appearence of in-game objects
    [physicsNode addChild:character];
    //Will add our character as a child of physicsNode so that physics will be applied to it
    [self addObstacle];
}

-(void)update:(CCTime)delta
{
    // put update code here
    
}

// put new methods here
-(void)touchBegan:(UITouch *)touch withEvent:(UIEvent *)event
{
    //This will get called every time the player touches the screen
    [character flap];
    
}

@end
