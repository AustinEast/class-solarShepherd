package;

import flixel.util.FlxSave;
import flixel.group.FlxGroup;

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
	 * Generic level variable that can be used for cross-state stuff.
	 * Example usage: Storing the current level number.
	 */
	public static var loadedLevel:TiledStage;
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
	 * Asset paths.
	 */
	 //Art
	public static inline var TILES:String = "assets/images/map/";
	public static inline var LANDPLAYER:String = "assets/images/player.png";
	public static inline var STUNGUNBULLET:String = "assets/temp/beam.png";
	public static inline var CRATE:String = "assets/temp/editorblock.png";
	//Sounds
	public static inline var THUD:String = "assets/sounds/KnockOrBossFire.mp3";
	public static inline var MENUSELECT:String = "assets/sounds/MainMenuNavi.mp3";
	public static inline var STUNGUNSOUND:String = "assets/sounds/stunGun.mp3";
	public static inline var PLAYERJUMP:String = "assets/sounds/playerJump.mp3";
	public static inline var ENEMYSHIPDESTROYED:String = "assets/sounds/EnemySpaceshipDestroyed.mp3";
	public static inline var PLAYERSHIPDESTROYED:String = "assets/sounds/playerSpaceshipDestroyed.mp3";
	public static inline var PICKUP:String = "assets/sounds/powerupPickup.mp3";
}