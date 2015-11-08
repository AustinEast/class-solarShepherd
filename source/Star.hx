package ;
import flixel.FlxG;
import flixel.FlxSprite;

/**
 * ...
 * @author x01010111
 */
class Star extends FlxSprite
{

	public function new() 
	{
		super(Math.floor(Math.random() * FlxG.width), Math.floor(Math.random() * FlxG.height));
		var i:Float = Math.random();
		//i > 0.75? makeGraphic(2, 2, Reg.colors[1]): makeGraphic(1, 1, Reg.colors[1]);
		i > 0.75? makeGraphic(2, 2): makeGraphic(1, 1);
		velocity.y = 25 + i * 125;
	}
	
	override public function update():Void 
	{
		if (y > FlxG.height) y = -1;
		super.update();
	}
	
}