package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/data/data-goes-here.txt", "assets/data/data-goes-here.txt");
			type.set ("assets/data/data-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/data/map1.csv", "assets/data/map1.csv");
			type.set ("assets/data/map1.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/Background3.png", "assets/images/Background3.png");
			type.set ("assets/images/Background3.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Dog.png", "assets/images/Dog.png");
			type.set ("assets/images/Dog.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/images-go-here.txt", "assets/images/images-go-here.txt");
			type.set ("assets/images/images-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/polarityPalette.ase", "assets/images/polarityPalette.ase");
			type.set ("assets/images/polarityPalette.ase", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/pongBullet.png", "assets/images/pongBullet.png");
			type.set ("assets/images/pongBullet.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/pongShip.png", "assets/images/pongShip.png");
			type.set ("assets/images/pongShip.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/pongShipGrn.png", "assets/images/pongShipGrn.png");
			type.set ("assets/images/pongShipGrn.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/pongShipRed.png", "assets/images/pongShipRed.png");
			type.set ("assets/images/pongShipRed.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Sand_tile.png", "assets/images/Sand_tile.png");
			type.set ("assets/images/Sand_tile.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Tiles.png", "assets/images/Tiles.png");
			type.set ("assets/images/Tiles.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/music/music-goes-here.txt", "assets/music/music-goes-here.txt");
			type.set ("assets/music/music-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/sounds/sounds-go-here.txt", "assets/sounds/sounds-go-here.txt");
			type.set ("assets/sounds/sounds-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/sounds/beep.ogg", "assets/sounds/beep.ogg");
			type.set ("assets/sounds/beep.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/flixel.ogg", "assets/sounds/flixel.ogg");
			type.set ("assets/sounds/flixel.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/fonts/nokiafc22.ttf", "assets/fonts/nokiafc22.ttf");
			type.set ("assets/fonts/nokiafc22.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("assets/fonts/arial.ttf", "assets/fonts/arial.ttf");
			type.set ("assets/fonts/arial.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
