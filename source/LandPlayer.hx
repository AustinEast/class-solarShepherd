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
    private var _max_health:Int = 10;
    public var _hurt_counter:Int = 0;
    public var meleeAnim:Bool = false;
    public var meleeTrue:Bool = false;
 	public var speed:Float = 100;

    /**
    * Handles the creation of a player creation.
    **/
     public function new(X, Y)
     {

         super(X, Y);

         //Set movement variables.
         drag.set(400,400);
         maxVelocity.set(80,200);
         acceleration.y = 400;

          //Set the player health
         health = 10;
            
        //  Load the player.png into this sprite.
        //  The 2nd parameter tells Flixel it's a sprite sheet and it should chop it up into 16x16 sized frames.
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
            acceleration.x = -400;
            flipX = true;
        }
        else if (FlxG.keys.pressed.RIGHT)
        {
             acceleration.x = 400;
             flipX = false;
        }
        //Animations.
        if (_hurt_counter > 0)
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
                    if (velocity.x > 120 || velocity.x < -120)
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
            velocity.y = -200;
        }
        if (FlxG.keys.justReleased.X && velocity.y < 0)
        {
            velocity.y = velocity.y / 2;
        }
        //Dash button
        if (FlxG.keys.pressed.C)
        {
            maxVelocity.x = 200; 
        }
        else
        {
            maxVelocity.x = 80; 
        }
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