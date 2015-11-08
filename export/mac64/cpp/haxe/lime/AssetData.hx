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
			path.set ("assets/temp/astro.png", "assets/temp/astro.png");
			type.set ("assets/temp/astro.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/temp/battery.png", "assets/temp/battery.png");
			type.set ("assets/temp/battery.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/temp/beam.png", "assets/temp/beam.png");
			type.set ("assets/temp/beam.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/temp/beamsocket.png", "assets/temp/beamsocket.png");
			type.set ("assets/temp/beamsocket.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/temp/button.png", "assets/temp/button.png");
			type.set ("assets/temp/button.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/temp/crate.png", "assets/temp/crate.png");
			type.set ("assets/temp/crate.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/temp/crate2.png", "assets/temp/crate2.png");
			type.set ("assets/temp/crate2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/temp/droplets.png", "assets/temp/droplets.png");
			type.set ("assets/temp/droplets.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/temp/dust.png", "assets/temp/dust.png");
			type.set ("assets/temp/dust.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/temp/editorblock.png", "assets/temp/editorblock.png");
			type.set ("assets/temp/editorblock.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/temp/explosion.png", "assets/temp/explosion.png");
			type.set ("assets/temp/explosion.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/temp/explosion2.png", "assets/temp/explosion2.png");
			type.set ("assets/temp/explosion2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/temp/jet.png", "assets/temp/jet.png");
			type.set ("assets/temp/jet.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/temp/jet2.png", "assets/temp/jet2.png");
			type.set ("assets/temp/jet2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/temp/jet3.png", "assets/temp/jet3.png");
			type.set ("assets/temp/jet3.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/temp/messagebox.png", "assets/temp/messagebox.png");
			type.set ("assets/temp/messagebox.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/temp/pit.png", "assets/temp/pit.png");
			type.set ("assets/temp/pit.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/temp/pod.png", "assets/temp/pod.png");
			type.set ("assets/temp/pod.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/temp/pod1.png", "assets/temp/pod1.png");
			type.set ("assets/temp/pod1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/temp/portrait.png", "assets/temp/portrait.png");
			type.set ("assets/temp/portrait.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/temp/powerlight.png", "assets/temp/powerlight.png");
			type.set ("assets/temp/powerlight.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/temp/rocks.png", "assets/temp/rocks.png");
			type.set ("assets/temp/rocks.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/temp/shipbits.png", "assets/temp/shipbits.png");
			type.set ("assets/temp/shipbits.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/temp/smoke.png", "assets/temp/smoke.png");
			type.set ("assets/temp/smoke.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/temp/socket.png", "assets/temp/socket.png");
			type.set ("assets/temp/socket.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/temp/thickfont.png", "assets/temp/thickfont.png");
			type.set ("assets/temp/thickfont.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/temp/thinfont.png", "assets/temp/thinfont.png");
			type.set ("assets/temp/thinfont.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/temp/tiles.png", "assets/temp/tiles.png");
			type.set ("assets/temp/tiles.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/temp/timerswitch.png", "assets/temp/timerswitch.png");
			type.set ("assets/temp/timerswitch.png", Reflect.field (AssetType, "image".toUpperCase ()));
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
