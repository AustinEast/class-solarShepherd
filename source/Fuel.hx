package;

 import flixel.FlxSprite;
 import flixel.FlxG;
 import flixel.FlxObject;
 import flixel.util.FlxColor;
 import openfl.Assets;
 import flixel.util.FlxSpriteUtil;


class Fuel extends FlxSprite{
	public function new(X:Float, Y:Float)
	{
		super(X,Y);

		makeGraphic(8,8,FlxColor.WHITE);
	}
}