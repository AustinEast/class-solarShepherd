package;

 import flixel.FlxSprite;
 import flixel.FlxG;
 import flixel.util.FlxColor;
/**
* This Class contains the functions for the Player... IN SPACE!
**/
 class SpacePlayer extends PolarSprite
 {
 	//Player attributes
    private var MAX_HEALTH:Int = 10;
    private var RUN_SPEED:Int = 120;
    
    //Animation helper variables
    public var _hurtCounter:Int = 0;
    /**
    * Handles the creation of a player creation.
    **/
     public function new(X, Y)
     {
         super(X, Y);

         //Loads graphics/animations
         loadGraphic("assets/images/pongShip.png",true,16,8);
         animation.add("polTrue",[2,3,4],60,true);
         animation.add("polFalse",[7,8,9],60,true); 
         maxVelocity.x = RUN_SPEED;
         important = true;

         setPolarity(true);
     
     }
    /**
    * Updates the player, mostly for movement and eventually abilities. 
    **/
     override public function update():Void
     {
        super.update();
        
        velocity.x = 0;
     	//Movement controls
     	if (FlxG.keys.pressed.LEFT)
     	{
     		velocity.x = -RUN_SPEED;

     	}
     	else if (FlxG.keys.pressed.RIGHT)
     	{
     		velocity.x = RUN_SPEED;
     	}

     	if (FlxG.keys.justPressed.C)
     	{
  			switchPolarity();   		
       	}	 

     }

 }