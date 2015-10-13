package;

 import flixel.FlxSprite;
 import flixel.FlxG;
 import flixel.util.FlxColor;
 import flixel.FlxObject;
 import openfl.Assets;
/**
* This Class contains the functions for the Player on land.
**/
 class LandPlayer extends FlxSprite
 {
    //Player attributes
    private var MAX_HEALTH:Int = 10;
    private var ACCELERATION:Int = 400;
    private var RUN_SPEED:Int = 80;
    private var SPRINT_SPEED:Int = 200;
    private var JUMP_SPEED:Int = 200;
    private var GRAVITY:Int = 400;
    
    //Animation helper variables
    public var _hurtCounter:Int = 0;
    public var meleeAnim:Bool = false;
    public var meleeTrue:Bool = false;

    /**
    * Handles the creation of a player creation.
    **/
     public function new(X, Y)
     {

         super(X, Y);

         //Set movement variables.
         drag.set(RUN_SPEED*5,JUMP_SPEED*2);
         maxVelocity.set(RUN_SPEED,JUMP_SPEED);
         acceleration.y = GRAVITY;

          //Set the player health
         health = MAX_HEALTH;
            
        //  Load the player.png into this sprite.
        //  The 2nd parameter tells Flixel it's animated, then the third and fourth say it is a sprite sheet and it should chop it up into 16x16 sized frames.
        loadGraphic(AssetPaths.Dog__png, true, 16, 16);
            

        //  We also shave 2 pixels off each side to make it slip through gaps easier. Changing the width/height does NOT change the visual sprite, just the bounding box used for physics.
        width = 12;
        height = 16;
            
        //  Because we've shaved a few pixels off, we need to offset the sprite to compensate
        offset.x = 2;
            
        //  The Animation sequences we need
        animation.add("idle", [0, 1], 5, true);
        animation.add("walk", [7, 8, 9, 10, 11], 10, true);
        animation.add("run", [2, 3, 4, 5, 6], 10, true);
        animation.add("jump", [3, 4], 4, false);
        animation.add("fall", [5], 0, false);
        animation.add("melee", [12, 13, 14], 5, false);
        animation.add("hurt", [3], 0, false);
        animation.add("dead", [5], 0, false);
         
     }
    /**
    * Updates the player, mostly for movement and eventually abilities. 
    **/
     override public function update():Void
     {
        acceleration.x = 0;
        //Movement controls
        if (FlxG.keys.pressed.LEFT)
        {
            acceleration.x = -ACCELERATION;
            flipX = true;
        }
        else if (FlxG.keys.pressed.RIGHT)
        {
             acceleration.x = ACCELERATION;
             flipX = false;
        }
        //Animations.
        if (_hurtCounter > 0)
        {
            animation.play("hurt");
        }
        else if (meleeTrue == true)
        {
            if (velocity.y == 0)
            {
                meleeTrue = false;
            }
            else if (meleeAnim == true)
            {
                animation.play("melee");
                meleeAnim = false;
            }
        }
        else            
        {
            if (velocity.y < 0)
            {
                animation.play("jump");
            }
            else if (velocity.y > 0)
            {
                animation.play("fall");
            }
            else
            {
                if (velocity.x == 0)
                {
                    animation.play("idle");
                }
                else
                {
                    if (velocity.x > 130 || velocity.x < -130)
                    {
                        animation.play("run");
                    }
                    else 
                    {
                        animation.play("walk");
                    }
                }
            }
        }
        //Mario Style jump
        if(FlxG.keys.justPressed.X && isTouching(FlxObject.FLOOR))
        {
            velocity.y = -JUMP_SPEED;
        }
        if (FlxG.keys.justReleased.X && velocity.y < 0)
        {
            velocity.y = velocity.y / 2;
        }
        //Dash button
        if (FlxG.keys.pressed.C)
        {
            maxVelocity.x = SPRINT_SPEED; 
        }
        else
        {
            maxVelocity.x = RUN_SPEED; 
        }
        //Attack Button
        if (FlxG.keys.justPressed.Z && velocity.y == 0)
        {    
            if(flipX == true)
            {        
                velocity.y = -75;
                acceleration.x = -1600;
                velocity.x += -700;
                meleeTrue = true;
                meleeAnim = true;
            }
            else
            {        
                velocity.y = -75;
                acceleration.x = 1600;
                velocity.x += 700;
                meleeTrue = true;
                meleeAnim = true;
            }
        }

     	super.update();	 

     }
 }