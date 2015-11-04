package;

 import flixel.FlxSprite;
 import flixel.FlxG;
 import flixel.group.FlxGroup;
 import flixel.util.FlxRandom;
 import flixel.util.FlxColor;
 import flixel.group.FlxTypedGroup;
 import flixel.util.FlxMath;
 import flixel.util.FlxPoint;
 import flixel.util.FlxSpriteUtil;
 import flixel.util.FlxVelocity;

/**
* This Class holds all the info about the Space Enemy Class.
* Will most likely be chopped up and expanded for different enemy types. Woo!
**/
 class SpaceEnemy extends PolarSprite
 {
    /**
     * A simple timer for deciding when to shoot
     */ 
    private var _shotClock:Float;
    /**
     * Saves the starting horizontal position (for movement logic)
     */
    private var _originalX:Float;
    /**
     * A group of enemy bullet objects (Enemies shoot these out)
     */ 
    private var _bullets:FlxTypedGroup<SpaceBullet>;

    /**
    * This function creates an instance the enemy and sets its attributes.
    **/
     public function new(X, Y)
     {
         super(X, Y);
         //Set attributes of the Enemy.
         loadGraphic("assets/images/pongShip.png",true,16,8);
         animation.add("polTrue",[2,3,4],60,true);
         animation.add("polFalse",[7,8,9],60,true);
         flipY = true;

         //Movement logic. Helps create the back & forth effect like Space Invaders.
         _originalX = X;
         //Calls function to reset shot timer.
         resetShotClock();
         //Sets horizontal velocity.
         velocity.x = 10;

         setPolarity(true);
     }
    /**
    * This function updates the enemy. 
    **/
     override public function update():Void
     {
        // If alien has moved too far to the left, reverse direction and increase speed!
         if (x < _originalX - 8)
        {
             x = _originalX - 8;
             velocity.x = -velocity.x;
             velocity.y++;
        }
        
        // If alien has moved too far to the right, reverse direction
         if (x > _originalX + 8) 
        {
             x = _originalX + 8;
             velocity.x = -velocity.x;
        }
        
        // Then do some bullet shooting logic
         if (y > FlxG.height * 0.05)
        {
             // Only count down if on the bottom two-thirds of the screen
             _shotClock -= FlxG.elapsed; 
        }
         if (_shotClock <= 0)
        {
            // We counted down to zero, so it's time to shoot a bullet!
            resetShotClock();
            //changes the enemies polarity, just for funziez.
            switchPolarity();
            //recycles a bullet from the SpaceState.
            var bullet:SpaceBullet = cast(cast(FlxG.state, SpaceState)._bullets.recycle(), SpaceBullet);
            //switches the bullets polarity, again for funziez. 
            bullet.switchPolarity();
            //Centers bullet in the enemy.
            bullet.reset(x + width / 2 - bullet.width / 2, y+10);
            //Shoots the bullet downwards.
            bullet.velocity.y = 65;
            //adds a random left velocity, just so the bullets aren't going straight down.
            bullet.velocity.x = 1 + FlxRandom.float() * -30;
        }
     	
     	super.update();	 

     }
     /**
     * This function just resets our bullet logic timer to a random value between 1 and 11
     */
    private function resetShotClock():Void
    {
        _shotClock = 1 + FlxRandom.float() * 10;
    }
 }