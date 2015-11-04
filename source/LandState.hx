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
	public var _player:LandPlayer;
	public var _level:LandLevel;
	public var _spiny:Spiney;
	public var _enemyGroup:FlxGroup;
	/**
	 * Function that is called up when to state is created to set it up. 
	 */
	override public function create():Void
	{
		FlxG.camera.bgColor = 0xff144954;
		
		//create levels and player.
		_level = new LandLevel();
		_level.Level1();
		_player = new LandPlayer(20,20);
		_player._polarity = true;
		_spiny = new Spiney(200,20,_player);
		_enemyGroup = new FlxGroup();
		_enemyGroup.add(_spiny);

		//add everything to the scene.
		add(_level);
		add(_player);
		add(_enemyGroup);

		//	Tell flixel how big our game world is
		FlxG.worldBounds.set(0,0,_level.width,_level.height);
			
		//	Don't let the camera wander off the edges of the map
		FlxG.camera.setBounds(0,0,_level.width,_level.height);
		
		//	The camera will follow the player
		FlxG.camera.follow(_player,FlxCamera.STYLE_PLATFORMER);

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

		FlxG.collide(_level,_player);
		FlxG.collide(_level,_spiny);
		FlxG.collide(_level,_player._stunGun.group);
		FlxG.overlap(_level,_player._crateGun.group,crateCollision);

		FlxG.overlap(_player,_spiny,enemyCollision);
		FlxG.collide(_player,_player._crateGun.group);
		FlxG.collide(_player._crateGun.group,_player._crateGun.group);

		FlxG.collide(_enemyGroup,_player._crateGun.group);
		FlxG.overlap(_enemyGroup,_player._stunGun.group,enemyHitWithBullet);
	}	
	function crateCollision(Level:FlxObject, Bullet:FlxSprite)
	{
		FlxObject.separate(Level,Bullet);
		Bullet.drag.x = 400;
	}
	function stunCollision(Level:FlxObject, Bullet:FlxSprite)
	{
		Bullet.kill();
	}
	function enemyCollision(Player:LandPlayer, Enemy)
	{
		if(Player._flickering == false)
		{
			Player.hurt(1);
			Player.velocity.x = Enemy.velocity.x*2;
			Player.velocity.y -= 100;
		}
	}
	function enemyHitWithBullet(Enemy, Bullet:FlxSprite)
	{
		if(Enemy._flickering == false)
		{
			Enemy.hurt(1);
			Enemy.velocity.x = Bullet.velocity.x*2;
			Enemy.velocity.y -= 50;
		}
	}
}