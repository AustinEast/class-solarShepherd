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
    private var MAX_HEALTH:Int = 5;
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
         health = MAX_HEALTH;

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
     override function kill()
     {
        exists = false;
        FlxG.camera.flash(0xffFFFFFF, .30);
        FlxG.camera.fade(FlxColor.BLACK, 3, false, doneFadeOut);
     }
     /**
    * This function is called if the player gets hit and the game fades out.
    * It sends you back to the menu.
    **/
    private function doneFadeOut():Void 
    {
        FlxG.switchState(new MenuState());
    }
 }