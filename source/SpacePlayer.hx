package;

 import flixel.FlxSprite;
 import flixel.FlxG;
 import flixel.util.FlxColor;
/**
* This Class contains the functions for the Player... IN SPACE!
**/
 class SpacePlayer extends SpaceSprite
 {
 	public var speed:Float = 100;
    /**
    * Handles the creation of a player creation.
    **/
     public function new(X, Y)
     {
         super(X, Y);

         makeGraphic(32, 8);
         drag.x =2000;
         maxVelocity.x = 300;
         _polarity = true;
         
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

     	super.update();	 

     }

 }