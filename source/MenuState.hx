package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;

/**
 * A FlxState which can be used for the game's menu.
 */
class MenuState extends FlxState
{

	var _title:FlxText;
	var _instructions:FlxText;
	var _start:FlxText;
	var _spacePlay:FlxButton;
	var _landPlay:FlxButton;

	/**
	 * Function that is called up when to state is created to set it up. 
	 */
	override public function create():Void
	{
		//Creates the title text.
		_title = new FlxText(0,40,FlxG.width,"Solar Shepherd Gameplay Demo");
		_title.setFormat(null,16,0xFFFFFFFF,"center",1);
		add(_title);
		//Create the buttons for different states.
		_instructions = new FlxText(0,80,FlxG.width,"Controls: Arrow Keys, X, and C. While in the space level, use C to switch Polarity and reflect back bullets. When on land, use X and C to fire your weapons.");
		_instructions.setFormat(null,8,0xFFFFFFFF,"center",1);
		add(_instructions);
		_start = new FlxText(0,140,FlxG.width,"Press X + C to start");
		_start.setFormat(null,8,0xFFFFFFFF,"center",1);
		add(_start);


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
		if (FlxG.keys.pressed.C && FlxG.keys.pressed.X)
		{
			goToSpaceState();
		}
		if (FlxG.keys.pressed.Z)
		{
			goToLandState();
		}
	}
	//Sends to SpaceState.
	private function goToSpaceState():Void
	{
		FlxG.switchState(new SpaceState());
	}
	//Sends to SpaceState.
	private function goToLandState():Void
	{
		FlxG.switchState(new LandState());
	}
}