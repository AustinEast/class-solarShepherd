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
class PlayState extends FlxState
{
	public var _enemies:FlxGroup;
	public var _numEnemies:Int;
	public var _enemy:Enemy;
	public var _player:Player;
	public var _bullet:PongBall;
	public var _numBullets:Int;
	public var _bullets:FlxGroup;
	/**
	 * Function that is called up when to state is created to set it up. 
	 */
	override public function create():Void
	{
		FlxG.camera.bgColor = FlxColor.TAN;

		//create walls

		//create enemies
		_enemies = new FlxGroup(_numEnemies);
		_numEnemies = 12;
		for (i in 0 ... _numEnemies) {
			_enemy = new Enemy(25+(i*50),20);
			_enemies.add(_enemy);
		}

		//create bullets
		_bullets = new FlxGroup(_numBullets);
		_numBullets = 50;
		for (i in 0 ... _numBullets) {
			_bullet = new PongBall();
			_bullet.exists = false;
			_bullets.add(_bullet);
		}

		//create player
		_player = new Player(FlxG.width/2,FlxG.height-20);

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
	 * Function that is called once every frame.
	 */
	override public function update():Void
	{
		FlxG.overlap(_bullets,_player,onHitPaddle);
		FlxG.overlap(_bullets,_enemies,onHitPaddle);

		super.update();
	}	

	function onHitPaddle(thisBall:Dynamic, thisPaddle:Dynamic):Void
	{
		thisBall.bounce(thisPaddle);
	}
}