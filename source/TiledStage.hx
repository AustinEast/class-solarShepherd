package;

import openfl.Assets;
import haxe.io.Path;
import haxe.xml.Parser;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.group.FlxGroup;
import flixel.group.FlxTypedGroup;
import flixel.tile.FlxTilemap;
import flixel.util.FlxPoint;
import flixel.addons.editors.tiled.TiledMap;
import flixel.addons.editors.tiled.TiledObject;
import flixel.addons.editors.tiled.TiledObjectGroup;
import flixel.addons.editors.tiled.TiledTileSet;

class TiledStage extends TiledMap
{
	// For each "Tile Layer" in the map, you must define a "tileset" property which contains the name of a tile sheet image 
	// used to draw tiles in that layer (without file extension). The image file must be located in the directory specified bellow.
	
	
	// Array of tilemaps used for collision
	public var foregroundTiles:FlxGroup;
	public var backgroundTiles:FlxGroup;
	public var scenarioTiles:FlxGroup;

	//object groups

	private var collidableTileLayers:Array<FlxTilemap>;
	private var c:Int = 0;
	private var s:Int = 0;
	private var p:Int = 0;
	private var f:Int = 0;
	
	public function new(tiledLevel:Dynamic)
	{
		super(tiledLevel);
		
		foregroundTiles = new FlxGroup();
		backgroundTiles = new FlxGroup();
		scenarioTiles = new FlxGroup();
			
		// Load Tile Maps
		for (tileLayer in layers)
		{
			var tileSheetName:String = tileLayer.properties.get("tileset");
			
			if (tileSheetName == null)
				throw "'tileset' property not defined for the '" + tileLayer.name + "' layer. Please add the property to the layer.";
				
			var tileSet:TiledTileSet = null;
			for (ts in tilesets)
			{
				if (ts.name == tileSheetName)
				{
					tileSet = ts;
					break;
				}
			}
			
			if (tileSet == null)
				throw "Tileset '" + tileSheetName + " not found. Did you mispell the 'tilesheet' property in " + tileLayer.name + "' layer?";
				
			var imagePath 		= new Path(tileSet.imageSource);
			var processedPath 	= Reg.TILES + imagePath.file + "." + imagePath.ext;
			
			var tilemap:FlxTilemap = new FlxTilemap();
			tilemap.widthInTiles = width;
			tilemap.heightInTiles = height;
			tilemap.loadMap(tileLayer.tileArray, processedPath, tileSet.tileWidth, tileSet.tileHeight, 0, tileSet.firstGID, 1, 1);
			
			if (tileLayer.name == "bg"){

				backgroundTiles.add(tilemap);	

			}else if (tileLayer.name == "fg"){

				foregroundTiles.add(tilemap);

			}else{	

				if (collidableTileLayers == null)
					collidableTileLayers = new Array<FlxTilemap>();

				if (tileLayer.name == "scenario"){
					scenarioTiles.add(tilemap);
				}
				
				collidableTileLayers.push(tilemap);
			}
		}
	}
	
	public function loadObjects(state:LandState)
	{
		
		for (group in objectGroups)
		{
			for (o in group.objects)
			{
				loadObject(o, group, state);
			}
		}
	}
	
	private function loadObject(o:TiledObject, g:TiledObjectGroup, state:LandState)
	{
		var x:Int = o.x;	
		var y:Int = o.y;
		
		// objects in tiled are aligned bottom-left (top-left in flixel)
		if (o.gid != -1)
			y -= g.map.getGidOwner(o.gid).tileHeight;
		
		switch (o.type.toLowerCase())
		{	
			

			case "chaser":

				if (state._chaserArray == null){
				 	state._chaserArray = new Array<FlxPoint>();
				 }
				 state._chaserArray[c] = FlxPoint.get(x,y);
				 c += 1;

			case "shooter":

				 if (state._shooterArray == null){
				 	state._shooterArray = new Array<FlxPoint>();
				 }
				 state._shooterArray[s] = FlxPoint.get(x,y);
				 s += 1;

			case "patroller":

				if (state._patrollerArray == null){
				 	state._patrollerArray = new Array<FlxPoint>();
				 }
				 state._patrollerArray[p] = FlxPoint.get(x,y);
				 p += 1;

			case "fuel":

				if (state._fuelArray == null){
				 	state._fuelArray = new Array<FlxPoint>();
				 }
				 state._fuelArray[f] = FlxPoint.get(x,y);
				 f += 1;
				 
		}
	}
}