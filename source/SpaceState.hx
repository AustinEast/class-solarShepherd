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


/**
 * A FlxState which can be used for the actual gameplay.
 */
class SpaceState extends FlxState
{
	public var _enemies:FlxGroup;
	public var _numEnemies:Int;
	public var _enemy:SpaceEnemy;
	public var _player:SpacePlayer;
	public var _bullet:SpaceBullet;
	public var _numBullets:Int;
	public var _bullets:FlxGroup;
	/**
	 * Function that is called up when to state is created to set it up. 
	 */
	override public function create():Void
	{

		//create enemies. Uses a loop to put a bunch of them in a group(FlxGroup).
		//think of this as adding them all to an array, but without an index.
		_enemies = new FlxGroup(_numEnemies);
		_numEnemies = 12;
		for (i in 0 ... _numEnemies) {
			_enemy = new SpaceEnemy(12+(i*25),20);
			_enemies.add(_enemy);
		}

		//create bullets. Same as enemies.
		_bullets = new FlxGroup(_numBullets);
		_numBullets = 50;
		for (i in 0 ... _numBullets) {
			_bullet = new SpaceBullet();
			_bullet.exists = false;
			_bullets.add(_bullet);
		}

		//create player.
		_player = new SpacePlayer(FlxG.width/2,FlxG.height-20);

		for (i in 0...64) {
			var star:Star = new Star();
			add(star);
		}

		//add everything to the Play State.
		add(_enemies);
		add(_bullets);
		add(_player);

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
	 * Function that is called once every frame. Here it is used for collisions.
	 */
	override public function update():Void
	{
		super.update();

		FlxG.overlap(_bullets,_player,onHitPaddle);
		FlxG.overlap(_bullets,_enemies,onHitPaddle);
	}	
	/**
    * This function takes the info from bullet collisions above,
    * and sends them to the bounce function in the Space Bullet class.
    **/
	public function onHitPaddle(thisBall:Dynamic, thisPaddle:Dynamic):Void
	{
		thisBall.bounce(thisPaddle);
	}
}