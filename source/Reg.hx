package;

import flixel.util.FlxSave;
import flixel.group.FlxGroup;
import flixel.ui.FlxBar;

/**
 * Handy, pre-built Registry class that can be used to store 
 * references to objects and other things for quick-access. Feel
 * free to simply ignore it or change it in any way you like.
 */
class Reg
{
	/**
	 * Generic levels Array that can be used for cross-state stuff.
	 * Example usage: Storing the levels of a platformer.
	 */
	public static var levels:Array<String> = ["assets/data/testMap.tmx"];
	/**
	 * Generic level variable that can be used for cross-state stuff.
	 * Example usage: Storing the current level number.
	 */
	public static var level:Int = 0;
	/**
	 * Holds class for loading a TMX file.
	 */
	public static var loadedLevel:TiledStage;
	/**
	 * Generic Dialog array that can be used for cross-state stuff.
	 * Example usage: .
	 */
	public static var dialog:Array<Array<String>> = [

	["this is one page","this is two page"],
	["this is a single page. I hope you like it you son of a gun. Ride 'em Cowboy!"]

	];
	/**
	 * Generic scores Array that can be used for cross-state stuff.
	 * Example usage: Storing the scores for level.
	 */
	public static var scores:Array<Dynamic> = [];
	/**
	 * Generic score variable that can be used for cross-state stuff.
	 * Example usage: Storing the current score.
	 */
	public static var score:Int = 0;
	/**
	 * Generic bucket for storing different FlxSaves.
	 * Especially useful for setting up multiple save slots.
	 */
	public static var saves:Array<FlxSave> = [];
	/**
	 * Store colors for polarity changes.
	 */
	public static var colors:Array<Int> = [0xff252c26, 0xffccc385, 0xffc83655, 0xff2a6c9f];
	/**
	 * Stores enemy bullets.
	 */
	public static var enemyBullets:FlxGroup = new FlxGroup();
	/**
	 * Fuel.
	 */
	public static var fuelTotal:Float = 0;
	/**
	 * Game Objects.
	 */
	 //Player
	public static var playerLand:LandPlayer;
	 //Health Bar
	public static var healthBar:FlxBar;
	 //Fuel Bar
	public static var fuelBar:FlxBar;
	/**
	 * Asset paths.
	 */
	 //Art
	public static inline var FUEL:String = "assets/images/fuel.png";
	public static inline var HEALTH:String = "assets/images/health.png";
	public static inline var TILES:String = "assets/images/map/";
	public static inline var LANDPLAYER:String = "assets/images/player.png";
	public static inline var STUNGUNBULLET:String = "assets/temp/beam.png";
	public static inline var NPC:String = "assets/images/commander.png";
	public static inline var CRATE:String = "assets/temp/editorblock.png";
	public static inline var TURTLE:String = "assets/images/turtle.png";

	 //Sounds
	public static inline var THUD:String = "assets/sounds/KnockOrBossFire.mp3";
	//public static inline var MUSIC1:String = "assets/music/gamemusic1.mp3";
	//public static inline var MUSIC2:String = "assets/music/gamemusic2.mp3";
	public static inline var MENUSELECT:String = "assets/sounds/MainMenuNavi.mp3";
	public static inline var STUNGUNSOUND:String = "assets/sounds/stunGun.mp3";
	public static inline var PLAYERJUMP:String = "assets/sounds/playerJump.mp3";
	public static inline var ENEMYSHIPDESTROYED:String = "assets/sounds/EnemySpaceshipDestroyed.mp3";
	public static inline var PLAYERSHIPDESTROYED:String = "assets/sounds/playerSpaceshipDestroyed.mp3";
	public static inline var PICKUP:String = "assets/sounds/powerupPickup.mp3";
}