package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.text.FlxText;
import flixel.group.FlxGroup;
import flixel.util.FlxColor;
import flixel.FlxObject;
import openfl.Assets;
import flixel.tile.FlxTilemap;

/** 
** This Class loads levels for the land portion.
**/
 class LandLevel extends FlxGroup
	{
		
		public var map:FlxTilemap;
		
		public var width:Float;
		public var height:Float;
		
		//This function loads level one.
		public function Level1() 
		{	
			//creates a new tilemap.
			map = new FlxTilemap();
			//loads the CSV file and the tiles needed for the map.
			add(map.loadMap(Assets.getText("assets/data/map1.csv"),"assets/images/Tiles.png",16,16));
			
			//sets the width and height for the levels.
			width = map.width;
			height = map.height;
						
		}
		
	}