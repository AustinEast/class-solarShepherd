package;

 import flixel.FlxSprite;
 import flixel.FlxG;
 import flixel.util.FlxColor;
 import flixel.FlxControl;
/**
* This Class contains the functions for the Player on land.
**/
 class LandPlayer extends FlxSprite
 {
    private var _max_health:int = 10;
    public var _hurt_counter:Number = 0;
    public var meleeAnim:Boolean = false;
    public var meleeTrue:Boolean = false;
 	public var speed:Float = 100;

    /**
    * Handles the creation of a player creation.
    **/
     public function new(X, Y)
     {
         super(X, Y);

          //Set the player health
         health = 10;
            
        //  Load the player.png into this sprite.
        //  The 2nd parameter tells Flixel it's a sprite sheet and it should chop it up into 16x18 sized frames.
        loadGraphic("assets/images/Dog.png", true, true, 16, 16, true);
            
        //  The sprite is 16x18 in size, but that includes a little feather of hair on its head which we don't want to include in collision checks.
        //  We also shave 2 pixels off each side to make it slip through gaps easier. Changing the width/height does NOT change the visual sprite, just the bounding box used for physics.
        width = 12;
        height = 16;
            
        //  Because we've shaved a few pixels off, we need to offset the sprite to compensate
        offset.x = 2;
            
        //  The Animation sequences we need
        addAnimation("idle", [0, 1], 5, true);
        addAnimation("walk", [7, 8, 9, 10, 11], 10, true);
        addAnimation("run", [2, 3, 4, 5, 6], 10, true);
        addAnimation("jump", [3, 4], 4, false);
        addAnimation("fall", [5], 0, false);
        addAnimation("melee", [12, 13, 14], 5, false);
        addAnimation("hurt", [3], 0, false);
        addAnimation("dead", [5], 0, false);
         
     }
    /**
    * Updates the player, mostly for movement and eventually abilities. 
    **/
     override public function update():Void
     {
     	//Movement controls
     	if (FlxG.keys.pressed.LEFT)
     	{
     		velocity.x -= speed;
     	}
     	else if (FlxG.keys.pressed.RIGHT)
     	{
     		velocity.x += speed;
     	}

     	if (FlxG.keys.justPressed.SPACE)
     	{
  			switchPolarity();   		
       	}

        //Animations.
        if (_hurt_counter > 0)
            {
                play("hurt");
            }
            else if (meleeTrue == true)
            {
                if (velocity.y == 0)
                {
                    meleeTrue = false;
                }
                else if (meleeAnim == true)
                {
                    play("melee");
                    meleeAnim = false
                }
            }
            else            
            {
                if (velocity.y < 0)
                {
                    play("jump");
                }
                else if (velocity.y > 0)
                {
                    play("fall");
                }
                else
                {
                    if (velocity.x == 0)
                    {
                        play("idle");
                    }
                    else
                    {
                        if (velocity.x > 120 || velocity.x < -120)
                        {
                            play("run");
                        }
                        else 
                        {
                            play("walk");
                        }
                    }
                }
            }
            //Mario Style jump
            if (FlxG.keys.justReleased("X"))
            {
                velocity.y = velocity.y / 2;
            }
            //Dash button
            if (FlxG.keys.C)
            {
                FlxControl.player1.setMovementSpeed(400, 0, 150, 200, 400, 0);
            }
            else
            {
                FlxControl.player1.setMovementSpeed(400, 0, 80, 200, 400, 0);
            }
            if (FlxG.keys.justPressed("Z") && velocity.y == 0)
            {
                if (facing == RIGHT)
                {
                    velocity.y = -75;
                    acceleration.x = 5600;
                    velocity.x += 700;
                    meleeTrue = true;
                    meleeAnim = true;

                }
                if (facing == LEFT)
                {
                    velocity.y = -75;
                    acceleration.x = -1600;
                    velocity.x += -700;
                    meleeTrue = true;
                    meleeAnim = true;
                }
            }
     	super.update();	 

     }
 }
