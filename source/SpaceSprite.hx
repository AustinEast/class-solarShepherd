package;

 import flixel.FlxSprite;
 import flixel.FlxG;
 import flixel.group.FlxGroup;
 import flixel.util.FlxRandom;
 import flixel.util.FlxColor;
 import flixel.group.FlxTypedGroup;
 import flixel.util.FlxMath;
 import flixel.util.FlxPoint;
 import flixel.util.FlxSpriteUtil;
 import flixel.util.FlxVelocity;

/**
* This class is very important. It holds all the functions for Polairty,
* and all of the Space sprites inherit from this. 
**/
 class SpaceSprite extends FlxSprite
 {
 	public var _polarity:Bool;

     //This function sets the polarity.
    public function setPolarity(polSet) {
        if (polSet) {
            flixel.util.FlxSpriteUtil.fill(this, FlxColor.WHITE);
            _polarity = true;
        }
        else {
            flixel.util.FlxSpriteUtil.fill(this, FlxColor.BLACK);
            _polarity = false;
        }
     }

     //This function checks the polarity and switches it to the opposite.
    public function switchPolarity() {
     	if (_polarity) {
            setPolarity(false);
     	}
     	else {
     		setPolarity(true);
     	}
     }
 }