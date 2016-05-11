#if !macro


@:access(lime.app.Application)
@:access(lime.Assets)
@:access(openfl.display.Stage)


class ApplicationMain {
	
	
	public static var config:lime.app.Config;
	public static var preloader:openfl.display.Preloader;
	
	
	public static function create ():Void {
		
		var app = new openfl.display.Application ();
		app.create (config);
		
		var display = new flixel.system.FlxPreloader ();
		
		preloader = new openfl.display.Preloader (display);
		app.setPreloader (preloader);
		preloader.onComplete.add (init);
		preloader.create (config);
		
		#if (js && html5)
		var urls = [];
		var types = [];
		
		
		urls.push ("assets/data/data-goes-here.txt");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/data/firstLevel.tmx");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/data/map1.csv");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/data/testMap.tmx");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/data/Tiles.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/commander.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/Dog.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/fuel.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/health.ase");
		types.push (lime.Assets.AssetType.BINARY);
		
		
		urls.push ("assets/images/health.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/images-go-here.txt");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/images/map/Background3.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/map/mapObjects.ase");
		types.push (lime.Assets.AssetType.BINARY);
		
		
		urls.push ("assets/images/map/mapObjects.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/map/Sand_tile.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/map/Tile_grass_ground_planet1.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/map/Tile_ground_planet1.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/map/Tile_ground_planet3.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/map/Tile_ground_rock_planet2.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/map/Tile_ground_rock_vertical_planet2.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/map/Tile_ground_sand_planet2.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/map/Tile_ground_vertical_planet1.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/map/Tile_ground_vertical_planet3.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/map/Tile_ground_water_planet3.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/map/tiles.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/player.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/polarityPalette.ase");
		types.push (lime.Assets.AssetType.BINARY);
		
		
		urls.push ("assets/images/pongBullet.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/pongShip.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/pongShipGrn.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/pongShipRed.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/textbox.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/Tiles.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/images/turtle.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/music/gamemusic1.mp3");
		types.push (lime.Assets.AssetType.MUSIC);
		
		
		urls.push ("assets/music/gamemusic1.ogg");
		types.push (lime.Assets.AssetType.MUSIC);
		
		
		urls.push ("assets/music/gamemusic2.mp3");
		types.push (lime.Assets.AssetType.MUSIC);
		
		
		urls.push ("assets/music/gamemusic2.ogg");
		types.push (lime.Assets.AssetType.MUSIC);
		
		
		urls.push ("assets/music/music-goes-here.txt");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/sounds/EnemySpaceshipDestroyed.mp3");
		types.push (lime.Assets.AssetType.MUSIC);
		
		
		urls.push ("assets/sounds/KnockOrBossFire.mp3");
		types.push (lime.Assets.AssetType.MUSIC);
		
		
		urls.push ("assets/sounds/MainMenuNavi.mp3");
		types.push (lime.Assets.AssetType.MUSIC);
		
		
		urls.push ("assets/sounds/playerJump.mp3");
		types.push (lime.Assets.AssetType.MUSIC);
		
		
		urls.push ("assets/sounds/playerSpaceshipDestroyed.mp3");
		types.push (lime.Assets.AssetType.MUSIC);
		
		
		urls.push ("assets/sounds/powerupPickup.mp3");
		types.push (lime.Assets.AssetType.MUSIC);
		
		
		urls.push ("assets/sounds/sounds-go-here.txt");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/sounds/stunGun.mp3");
		types.push (lime.Assets.AssetType.MUSIC);
		
		
		urls.push ("assets/temp/astro.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/temp/battery.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/temp/beam.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/temp/beamsocket.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/temp/button.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/temp/crate.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/temp/crate2.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/temp/droplets.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/temp/dust.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/temp/editorblock.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/temp/explosion.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/temp/explosion2.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/temp/jet.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/temp/jet2.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/temp/jet3.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/temp/messagebox.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/temp/pit.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/temp/pod.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/temp/pod1.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/temp/portrait.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/temp/powerlight.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/temp/rocks.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/temp/shipbits.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/temp/smoke.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/temp/socket.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/temp/thickfont.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/temp/thinfont.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/temp/tiles.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/temp/timerswitch.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/sounds/beep.mp3");
		types.push (lime.Assets.AssetType.MUSIC);
		
		
		urls.push ("assets/sounds/flixel.mp3");
		types.push (lime.Assets.AssetType.MUSIC);
		
		
		urls.push ("Nokia Cellphone FC Small");
		types.push (lime.Assets.AssetType.FONT);
		
		
		urls.push ("Arial");
		types.push (lime.Assets.AssetType.FONT);
		
		
		
		if (config.assetsPrefix != null) {
			
			for (i in 0...urls.length) {
				
				if (types[i] != lime.Assets.AssetType.FONT) {
					
					urls[i] = config.assetsPrefix + urls[i];
					
				}
				
			}
			
		}
		
		preloader.load (urls, types);
		#end
		
		var result = app.exec ();
		
		#if (sys && !nodejs && !emscripten)
		Sys.exit (result);
		#end
		
	}
	
	
	public static function init ():Void {
		
		var loaded = 0;
		var total = 0;
		var library_onLoad = function (__) {
			
			loaded++;
			
			if (loaded == total) {
				
				start ();
				
			}
			
		}
		
		preloader = null;
		
		
		
		if (total == 0) {
			
			start ();
			
		}
		
	}
	
	
	public static function main () {
		
		config = {
			
			build: "1210",
			company: "HaxeFlixel",
			file: "FlxProject",
			fps: 60,
			name: "Solar Shepard",
			orientation: "portrait",
			packageName: "com.example.myapp",
			version: "0.0.1",
			windows: [
				
				{
					antialiasing: 0,
					background: 0,
					borderless: false,
					depthBuffer: false,
					display: 0,
					fullscreen: true,
					hardware: true,
					height: 180,
					parameters: "{}",
					resizable: true,
					stencilBuffer: true,
					title: "Solar Shepard",
					vsync: true,
					width: 320,
					x: null,
					y: null
				},
			]
			
		};
		
		#if hxtelemetry
		var telemetry = new hxtelemetry.HxTelemetry.Config ();
		telemetry.allocations = true;
		telemetry.host = "localhost";
		telemetry.app_name = config.name;
		Reflect.setField (config, "telemetry", telemetry);
		#end
		
		#if (js && html5)
		#if (munit || utest)
		openfl.Lib.embed (null, 320, 180, "000000");
		#end
		#else
		create ();
		#end
		
	}
	
	
	public static function start ():Void {
		
		var hasMain = false;
		var entryPoint = Type.resolveClass ("Main");
		
		for (methodName in Type.getClassFields (entryPoint)) {
			
			if (methodName == "main") {
				
				hasMain = true;
				break;
				
			}
			
		}
		
		lime.Assets.initialize ();
		
		if (hasMain) {
			
			Reflect.callMethod (entryPoint, Reflect.field (entryPoint, "main"), []);
			
		} else {
			
			var instance:DocumentClass = Type.createInstance (DocumentClass, []);
			
			/*if (Std.is (instance, openfl.display.DisplayObject)) {
				
				openfl.Lib.current.addChild (cast instance);
				
			}*/
			
		}
		
		#if !flash
		if (openfl.Lib.current.stage.window.fullscreen) {
			
			openfl.Lib.current.stage.dispatchEvent (new openfl.events.FullScreenEvent (openfl.events.FullScreenEvent.FULL_SCREEN, false, false, true, true));
			
		}
		
		openfl.Lib.current.stage.dispatchEvent (new openfl.events.Event (openfl.events.Event.RESIZE, false, false));
		#end
		
	}
	
	
	#if neko
	@:noCompletion @:dox(hide) public static function __init__ () {
		
		var loader = new neko.vm.Loader (untyped $loader);
		loader.addPath (haxe.io.Path.directory (Sys.executablePath ()));
		loader.addPath ("./");
		loader.addPath ("@executable_path/");
		
	}
	#end
	
	
}


@:build(DocumentClass.build())
@:keep class DocumentClass extends Main {}


#else


import haxe.macro.Context;
import haxe.macro.Expr;


class DocumentClass {
	
	
	macro public static function build ():Array<Field> {
		
		var classType = Context.getLocalClass ().get ();
		var searchTypes = classType;
		
		while (searchTypes.superClass != null) {
			
			if (searchTypes.pack.length == 2 && searchTypes.pack[1] == "display" && searchTypes.name == "DisplayObject") {
				
				var fields = Context.getBuildFields ();
				
				var method = macro {
					
					openfl.Lib.current.addChild (this);
					super ();
					dispatchEvent (new openfl.events.Event (openfl.events.Event.ADDED_TO_STAGE, false, false));
					
				}
				
				fields.push ({ name: "new", access: [ APublic ], kind: FFun({ args: [], expr: method, params: [], ret: macro :Void }), pos: Context.currentPos () });
				
				return fields;
				
			}
			
			searchTypes = searchTypes.superClass.t.get ();
			
		}
		
		return null;
		
	}
	
	
}


#end
