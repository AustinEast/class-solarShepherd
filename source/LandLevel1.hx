package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.text.FlxText;
import flixel.group.FlxGroup;
import flixel.util.FlxColor;
import flixel.FlxObject;
import openfl.Assets;
import flixel.tile.FlxTilemap;


 class LandLevel1 extends FlxGroup
	{
		
		public var map:FlxTilemap;
		
		public var width:Float;
		public var height:Float;
		
		public function Level1() 
		{	
			map = new FlxTilemap();
			add(map.loadMap(Assets.getText("assets/data/map1.csv"),"assets/images/Tiles.png",16,16));
			
			
			width = map.width;
			height = map.height;
						
		}
		
	}