package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;
import flixel.util.FlxPoint;
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
	public var _npc:Npc;
	public var _enemies:FlxGroup;
	public var _chaser:Chaser;
	public var _chaserArray:Array<FlxPoint>;
	public var _shooter:Shooter;
	public var _shooterArray:Array<FlxPoint>;
	public var _patroller:Patroller;
	public var _patrollerArray:Array<FlxPoint>;
	public var _fuelGroup:FlxGroup;
	public var _fuel:Fuel;
	public var _fuelArray:Array<FlxPoint>;
	public var _textbox:TextBox;

	/**
	 * Function that is called up when to state is created to set it up. 
	 */
	override public function create():Void
	{
		FlxG.camera.bgColor = 0xff144954;
		
		//create levels and player.
		Reg.loadedLevel = new TiledStage(Reg.levels[Reg.level]);
		_player = new LandPlayer(20,50,20,50);
		_npc = new Npc(50,50);
		_enemies = new FlxGroup();
		_fuelGroup = new FlxGroup();
		_textbox = new TextBox("USER");

		//add everything to the scene.
		add(Reg.loadedLevel.scenarioTiles);
		add(_player);
		add(_npc);
		add(_enemies);
		add(_fuelGroup);
		add(Reg.enemyBullets);
		Reg.loadedLevel.loadObjects(this);

		for (i in 0..._chaserArray.length)
		{
			_chaser = new Chaser(_chaserArray[i].x,_chaserArray[i].y,_player);
			_enemies.add(_chaser);
		}
		for (i in 0..._shooterArray.length)
		{
			_shooter = new Shooter(_shooterArray[i].x,_shooterArray[i].y,_player);
			_enemies.add(_shooter);
		}
		for (i in 0..._patrollerArray.length)
		{
			_patroller = new Patroller(_patrollerArray[i].x,_patrollerArray[i].y,_player);
			_enemies.add(_patroller);
		}
		for (i in 0..._fuelArray.length)
		{
			_fuel = new Fuel(_fuelArray[i].x,_fuelArray[i].y);
			_fuelGroup.add(_fuel);
		}
		//	Tell flixel how big our game world is
		FlxG.worldBounds.set(0,0,Reg.loadedLevel.fullWidth,Reg.loadedLevel.fullHeight);
			
		//	Don't let the camera wander off the edges of the map
		FlxG.camera.setBounds(0,0,Reg.loadedLevel.fullWidth,Reg.loadedLevel.fullHeight);
		
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
		if(!_textbox._isVisible)
		{
		super.update();

		FlxG.collide(Reg.loadedLevel.scenarioTiles,_player);
		FlxG.collide(Reg.loadedLevel.scenarioTiles,_npc);
		FlxG.collide(Reg.loadedLevel.scenarioTiles,_enemies);
		FlxG.overlap(Reg.loadedLevel.scenarioTiles,_player._crateGun.group,crateCollision);
		//FlxG.overlap(Reg.loadedLevel.scenarioTiles,Reg.enemyBullets,stunCollision);

		FlxG.overlap(_player,_enemies,enemyCollision);
		FlxG.overlap(_player,_npc,talk);
		FlxG.overlap(_player,_fuelGroup,collectFuel);
		FlxG.collide(_player,_player._crateGun.group);
		FlxG.collide(_player._crateGun.group,_player._crateGun.group);
		FlxG.overlap(_player,Reg.enemyBullets,playerHitWithBullet);

		FlxG.collide(_enemies,_player._crateGun.group);
		FlxG.overlap(_enemies,_player._stunGun.group,enemyHitWithBullet);
		}
		else
		{
			_textbox.update();
		}
	}	
	function talk(Player,Npc)
	{
		if(FlxG.keys.justPressed.DOWN)
		{
			_textbox = new TextBox("USER");
			add(_textbox);
			_textbox.talk("This is a test. fadfsdfsdf sdfsdfsdfsd. REREFEFEEFE FEREEEEEEEEEE");
		}
	}
	function crateCollision(Level:FlxObject, Bullet:FlxSprite)
	{
		FlxObject.separate(Level,Bullet);
		Bullet.drag.x = 400;
	}
	function collectFuel(Player:LandPlayer,Coin)
	{
		Coin.kill();
	}
	function stunCollision(Level:FlxObject, Bullet:FlxSprite)
	{
		Bullet.kill();
	}
	function enemyCollision(Player:LandPlayer, Enemy:Dynamic)
	{
		if(Enemy._knockedOut)
		{
			FlxObject.separate(Player,Enemy);
		}
		else if(Player._flickering == false)
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
			Enemy.stun(1);
			Enemy.velocity.x = Bullet.velocity.x*2;
			Enemy.velocity.y -= 50;
		}
	}
	function playerHitWithBullet(Player:LandPlayer, Bullet:FlxSprite)
	{
		if(Player._flickering == false)
		{
			Player.hurt(1);
			Player.velocity.x = Bullet.velocity.x*2;
			Player.velocity.y -= 50;
			Bullet.kill();
		}
	}
}