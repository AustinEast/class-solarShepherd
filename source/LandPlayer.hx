package;

 import flixel.FlxSprite;
 import flixel.FlxG;
 import flixel.util.FlxColor;
 import flixel.FlxObject;
 import openfl.Assets;
 import flixel.util.FlxSpriteUtil;


/**
* This Class contains the functions for the Player on land.
**/
 class LandPlayer extends PolarSprite
 {
    //Player attributes
    private var MAX_HEALTH:Int = 10;
    private var ACCELERATION:Int = 400;
    private var RUN_SPEED:Int = 100;
    private var JUMP_SPEED:Int = 200;
    private var GRAVITY:Int = 500;

    //Abilities
    public var _stunGun:StunGun;
    public var _crateGun:CrateGun;
    
    //Animation helper variables
    public var _flickering:Bool;

    /**
    * Handles the creation of a player creation.
    **/
     public function new(X, Y)
     {

         super(X, Y);

         //Set movement variables.
         drag.set(RUN_SPEED*6,JUMP_SPEED*2);
         maxVelocity.set(RUN_SPEED,JUMP_SPEED);
         acceleration.y = GRAVITY;

          //Set the player health
         health = MAX_HEALTH;
            
        //  Load the player.png into this sprite.
        //  The 2nd parameter tells Flixel it's animated, then the third and fourth say it is a sprite sheet and it should chop it up into 16x16 sized frames.
        loadGraphic(Reg.LANDPLAYER, true, 16, 16);
        //makeGraphic(16,16)
            

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

        //  Add the Stun Gun
        _stunGun = new StunGun("Stun Gun",this);
        FlxG.state.add(_stunGun.group);
        // Add the Crate Gun
         _crateGun = new CrateGun("Crate Gun",this);
        FlxG.state.add(_crateGun.group);
     }
    /**
    * Updates the player, mostly for movement and eventually abilities. 
    **/
     override public function update():Void
     {
        acceleration.x = 0; 
        animationCheck();
        controls(); 

        super.update();  

     }

     private function animationCheck()
     {

        if (isTouching(FlxObject.FLOOR))
        {
            if (velocity.x > 0 || velocity.x < 0)
            {
                animation.play("walk");
            }
            else
            {
                animation.play("idle");
            }
        }
        
        else if (velocity.y < 0)
        {
            animation.play("jump");
        }
        else
        {
            animation.play("fall");
        }
    }
    private function controls()
    {
        if (FlxG.keys.pressed.LEFT)
        {
            acceleration.x = -ACCELERATION;
            flipX = true;
            _stunGun.setBulletDirection(180,300);
            _stunGun.setBulletOffset(-5,2);
            _crateGun.setBulletDirection(195,180);
            _crateGun.setBulletOffset(-5,2);
        }
        else if (FlxG.keys.pressed.RIGHT)
        {
            acceleration.x = ACCELERATION;
            flipX = false;
            _stunGun.setBulletDirection(360,300);
            _stunGun.setBulletOffset(5,2);
            _crateGun.setBulletDirection(345,180); 
            _crateGun.setBulletOffset(5,2);
        }
        // Mario Style jump
        if(FlxG.keys.justPressed.UP && isTouching(FlxObject.FLOOR))
        {
            velocity.y = -JUMP_SPEED;

        }
        if (FlxG.keys.justReleased.UP && velocity.y < 0)
        {
            velocity.y = velocity.y / 2;
        }
        // Polarity
        /*if (FlxG.keys.justPressed.C)
        {
            switchPolarity();           
        }*/
        // Stun Gun
        if (FlxG.keys.justPressed.X)
        {   
            _stunGun.soundFire();
        }
        // Crate gun
        if (FlxG.keys.pressed.Z)
        {   
            _crateGun.fire();
        }
     }
     override function hurt(Damage:Float)
        {
            flicker(2);
            return super.hurt(Damage);
        } 
     private function flicker(Duration:Float):Void
     {
         FlxSpriteUtil.flicker(this, Duration, 0.02, true, true, function(_) 
         {
            _flickering = false;
         });
         _flickering = true;
     }      
 }