package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxBar;
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
	public var _textbox:TextBox;
	public var _textcomplete:Bool;
	/**
	 * Function that is called up when to state is created to set it up. 
	 */
	override public function create():Void
	{

		
		Reg.fuelTotal = 18;
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

		Reg.healthBar = new FlxBar(10,10,1,24, 4,_player,"health",0,5);
		Reg.healthBar.createImageBar(null,Reg.HEALTH,FlxColor.TRANSPARENT);
		Reg.healthBar.scrollFactor.x = 0;
		Reg.healthBar.scrollFactor.y = 0;
		Reg.fuelBar = new FlxBar(40,9,1,260,6,Reg,"fuelTotal",0,18,true);

		for (i in 0...64) {
			var star:Star = new Star();
			add(star);
		}
		_textbox = new TextBox("Commander");

		//add everything to the Play State.
		add(_enemies);
		add(_bullets);
		add(_player);
		add(Reg.healthBar);
		add(Reg.fuelBar);
		add(_textbox);

		super.create();
	}
	
	/**
	 * Function that is called when this state is destroyed - you might want to 
	 * consider setting all objects this state uses to null to help garbage collection.
	 */
	override public function destroy():Void
	{
		_bullets.destroy();
		_bullets = null;
		_enemies.destroy();
		_enemies = null;

		super.destroy();
	}

	/**
	 * Function that is called once every frame. Here it is used for collisions.
	 */
	override public function update():Void
	{
		if(!_textbox.isVisible)
		{
		super.update();

		if(_textcomplete)
		{
			FlxG.camera.fade(FlxColor.BLACK,2,false,switchState);
		}

		if (Reg.fuelTotal < 3 && !_textcomplete)
		{
			_textbox.talk(Reg.dialog[0]);
			_textcomplete = true;
		}

		FlxG.overlap(_bullets,_player,bounce);
		FlxG.overlap(_bullets,_enemies,bounce);
		Reg.fuelTotal -= FlxG.elapsed/2;
		}
		else
		{
			_textbox.update();
		}
	}	
	/**
    * This function takes the info from bullet collisions above,
    * and sends them to the bounce function in the Space Bullet class.
    **/
	public function onHitPaddle(thisBall:Dynamic, thisPaddle:Dynamic):Void
	{
		thisBall.bounce(thisPaddle);
	}
	public function bounce(_bullet,_paddle:PolarSprite):Void
    {   
        //Method to keep the bullet from overlapping with whichever enemy.
        if (_bullet._hitPaddle != _paddle)
        {   
            //If the bullet is the same polarity as the object, it will "Bounce".
            if(_paddle._polarity == _bullet._polarity)
            {   
                _bullet.velocity.x += _paddle.velocity.x/5;
                _bullet.velocity.y *= -1;
                _bullet._hitPaddle = _paddle;
                FlxG.sound.play(Reg.MENUSELECT);
            }
            //If the bullet isn't, kill the item, bullet and make a screen shake.
            else if(_paddle._polarity != _bullet._polarity)
            {
                _paddle.hurt(1);
                _bullet.kill();
                FlxG.camera.shake(0.02, 0.25); 
                FlxG.sound.play(Reg.ENEMYSHIPDESTROYED);
            }
        }
    }
    private function switchState():Void
	{
		FlxG.switchState(new LandState());
	}
}