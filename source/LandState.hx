package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;
import flixel.group.FlxGroup;
import flixel.util.FlxColor;
import flixel.FlxObject;
import flixel.FlxCamera;


/**
 * A FlxState which can be used for the actual gameplay.
 */
class LandState extends FlxState
{
	private var player:LandPlayer;
	public var level:LandLevel1;
	/**
	 * Function that is called up when to state is created to set it up. 
	 */
	override public function create():Void
	{
		FlxG.camera.bgColor = 0xff144954;
			
		level = new LandLevel1();
		level.Level1();
		player = new LandPlayer(20,20);

		add(level);
		add(player);

		//	Tell flixel how big our game world is
		FlxG.worldBounds.set(0,0,level.width,level.height);
			
		//	Don't let the camera wander off the edges of the map
		FlxG.camera.setBounds(0, 0, level.width, level.height);
		
		//	The camera will follow the player
		FlxG.camera.follow(player, FlxCamera.STYLE_PLATFORMER);

		super.create();
	}
	
	/**
	 * Function that is called when this state is destroyed - you might want to 
	 * consider setting all objects this state uses to null to help garbage collection.
	 */
	override public function destroy():Void
	{
		super.destroy();
	}

	/**
	 * Function that is called once every frame.
	 */
	override public function update():Void
	{
		super.update();

		FlxG.collide(player, level);
	}	

}