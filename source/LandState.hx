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
import flixel.ui.FlxBar;

/**
 * A FlxState which can be used for the actual gameplay.
 */
class LandState extends FlxState
{
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
	public var _textcomplete:Bool;

	/**
	 * Function that is called up when to state is created to set it up. 
	 */
	override public function create():Void
	{
		FlxG.camera.bgColor = 0xff144954;
		
		//create levels and player.
		Reg.loadedLevel = new TiledStage(Reg.levels[Reg.level]);
		Reg.playerLand = new LandPlayer(20,50,20,50);
		_npc = new Npc(50,50);
		_enemies = new FlxGroup();
		_fuelGroup = new FlxGroup();
		_textbox = new TextBox("Commander");
		Reg.healthBar = new FlxBar(10,10,1,24, 4,Reg.playerLand,"health",0,5);
		Reg.healthBar.createImageBar(null,Reg.HEALTH,FlxColor.TRANSPARENT);
		Reg.healthBar.scrollFactor.x = 0;
		Reg.healthBar.scrollFactor.y = 0;
		Reg.fuelBar = new FlxBar(40,9,1,260,6,Reg,"fuelTotal",0,20,true);
		Reg.fuelBar.scrollFactor.x = 0;
		Reg.fuelBar.scrollFactor.y = 0;

		//add everything to the scene.
		add(Reg.loadedLevel.scenarioTiles);
		add(Reg.playerLand);
		add(Reg.healthBar);
		add(Reg.fuelBar);
		add(_npc);
		add(_enemies);
		add(_fuelGroup);
		add(Reg.enemyBullets);
		Reg.loadedLevel.loadObjects(this);
		add(_textbox);

		for (i in 0..._chaserArray.length)
		{
			_chaser = new Chaser(_chaserArray[i].x,_chaserArray[i].y,Reg.playerLand);
			_enemies.add(_chaser);
		}
		for (i in 0..._shooterArray.length)
		{
			_shooter = new Shooter(_shooterArray[i].x,_shooterArray[i].y,Reg.playerLand);
			_enemies.add(_shooter);
		}
		for (i in 0..._patrollerArray.length)
		{
			_patroller = new Patroller(_patrollerArray[i].x,_patrollerArray[i].y,Reg.playerLand);
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
		FlxG.camera.follow(Reg.playerLand,FlxCamera.STYLE_PLATFORMER);

		super.create();
	}
	
	/**
	 * Function that is called when this state is destroyed - you might want to 
	 * consider setting all objects this state uses to null to help garbage collection.
	 */
	override public function destroy():Void
	{
		_enemies.destroy();
		_enemies = null;
		_fuelGroup.destroy();
		_fuelGroup = null;

		super.destroy();
	}

	/**
	 * Function that is called once every frame.
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

		if (Reg.fuelTotal > 14 && !_textcomplete)
		{
			_textbox.talk(Reg.dialog[1]);
			_textcomplete = true;
		}
		FlxG.collide(Reg.loadedLevel.scenarioTiles,Reg.playerLand);
		FlxG.collide(Reg.loadedLevel.scenarioTiles,_npc);
		FlxG.collide(Reg.loadedLevel.scenarioTiles,_enemies);
		FlxG.overlap(Reg.loadedLevel.scenarioTiles,Reg.playerLand._crateGun.group,crateCollision);
		//FlxG.overlap(Reg.loadedLevel.scenarioTiles,Reg.enemyBullets,stunCollision);

		FlxG.overlap(Reg.playerLand,_enemies,enemyCollision);
		FlxG.overlap(Reg.playerLand,_npc,talk);
		FlxG.overlap(Reg.playerLand,_fuelGroup,collectFuel);
		FlxG.collide(Reg.playerLand,Reg.playerLand._crateGun.group);
		FlxG.collide(Reg.playerLand._crateGun.group,Reg.playerLand._crateGun.group);
		FlxG.overlap(Reg.playerLand,Reg.enemyBullets,playerHitWithBullet);

		FlxG.collide(_enemies,Reg.playerLand._crateGun.group);
		FlxG.overlap(_enemies,Reg.playerLand._stunGun.group,enemyHitWithBullet);
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
			_textbox.talk(Reg.dialog[1]);
		}
	}
	function crateCollision(Level:FlxObject, Bullet:FlxSprite)
	{
		FlxObject.separate(Level,Bullet);
		Bullet.drag.x = 400;
	}
	function collectFuel(Player:LandPlayer,Coin)
	{
		Reg.fuelTotal += 1;
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
	private function switchState():Void
	{
		FlxG.switchState(new MenuState());
	}
}