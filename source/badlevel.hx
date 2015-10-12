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
import openfl.Assets;


 class LandLevel1 extends FlxGroup
	{
		
		public var map:FlxTilemap;
		
		public var width:int;
		public var height:int;
		
		public function Level1() 
		{
			super();
			
			map = new FlxTilemap();
			map.loadMap(Assets.getText("assets/data/map1.csv"),"assets/images/Tiles.png",16,16,FlxTilemap.OFF);
			
			
			width = map.width;
			height = map.height;
			
		
			add(map);
			
		}
		
	}