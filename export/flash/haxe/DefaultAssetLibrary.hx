package;


import haxe.Timer;
import haxe.Unserializer;
import lime.app.Future;
import lime.app.Preloader;
import lime.app.Promise;
import lime.audio.AudioSource;
import lime.audio.openal.AL;
import lime.audio.AudioBuffer;
import lime.graphics.Image;
import lime.text.Font;
import lime.utils.ByteArray;
import lime.utils.UInt8Array;
import lime.Assets;

#if sys
import sys.FileSystem;
#end

#if (js && html5)
import lime.net.URLLoader;
import lime.net.URLRequest;
#elseif flash
import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.Loader;
import flash.events.Event;
import flash.events.IOErrorEvent;
import flash.events.ProgressEvent;
import flash.media.Sound;
import flash.net.URLLoader;
import flash.net.URLRequest;
#end


class DefaultAssetLibrary extends AssetLibrary {
	
	
	public var className (default, null) = new Map <String, Dynamic> ();
	public var path (default, null) = new Map <String, String> ();
	public var type (default, null) = new Map <String, AssetType> ();
	
	private var lastModified:Float;
	private var timer:Timer;
	
	
	public function new () {
		
		super ();
		
		#if (openfl && !flash)
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_fonts_nokiafc22_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_fonts_arial_ttf);
		
		#end
		
		#if flash
		
		className.set ("assets/data/data-goes-here.txt", __ASSET__assets_data_data_goes_here_txt);
		type.set ("assets/data/data-goes-here.txt", AssetType.TEXT);
		className.set ("assets/data/map1.csv", __ASSET__assets_data_map1_csv);
		type.set ("assets/data/map1.csv", AssetType.TEXT);
		className.set ("assets/images/Background3.png", __ASSET__assets_images_background3_png);
		type.set ("assets/images/Background3.png", AssetType.IMAGE);
		className.set ("assets/images/Dog.png", __ASSET__assets_images_dog_png);
		type.set ("assets/images/Dog.png", AssetType.IMAGE);
		className.set ("assets/images/images-go-here.txt", __ASSET__assets_images_images_go_here_txt);
		type.set ("assets/images/images-go-here.txt", AssetType.TEXT);
		className.set ("assets/images/polarityPalette.ase", __ASSET__assets_images_polaritypalette_ase);
		type.set ("assets/images/polarityPalette.ase", AssetType.BINARY);
		className.set ("assets/images/pongBullet.png", __ASSET__assets_images_pongbullet_png);
		type.set ("assets/images/pongBullet.png", AssetType.IMAGE);
		className.set ("assets/images/pongShip.png", __ASSET__assets_images_pongship_png);
		type.set ("assets/images/pongShip.png", AssetType.IMAGE);
		className.set ("assets/images/pongShipGrn.png", __ASSET__assets_images_pongshipgrn_png);
		type.set ("assets/images/pongShipGrn.png", AssetType.IMAGE);
		className.set ("assets/images/pongShipRed.png", __ASSET__assets_images_pongshipred_png);
		type.set ("assets/images/pongShipRed.png", AssetType.IMAGE);
		className.set ("assets/images/Sand_tile.png", __ASSET__assets_images_sand_tile_png);
		type.set ("assets/images/Sand_tile.png", AssetType.IMAGE);
		className.set ("assets/images/Tiles.png", __ASSET__assets_images_tiles_png);
		type.set ("assets/images/Tiles.png", AssetType.IMAGE);
		className.set ("assets/music/music-goes-here.txt", __ASSET__assets_music_music_goes_here_txt);
		type.set ("assets/music/music-goes-here.txt", AssetType.TEXT);
		className.set ("assets/sounds/sounds-go-here.txt", __ASSET__assets_sounds_sounds_go_here_txt);
		type.set ("assets/sounds/sounds-go-here.txt", AssetType.TEXT);
		className.set ("assets/temp/astro.png", __ASSET__assets_temp_astro_png);
		type.set ("assets/temp/astro.png", AssetType.IMAGE);
		className.set ("assets/temp/battery.png", __ASSET__assets_temp_battery_png);
		type.set ("assets/temp/battery.png", AssetType.IMAGE);
		className.set ("assets/temp/beam.png", __ASSET__assets_temp_beam_png);
		type.set ("assets/temp/beam.png", AssetType.IMAGE);
		className.set ("assets/temp/beamsocket.png", __ASSET__assets_temp_beamsocket_png);
		type.set ("assets/temp/beamsocket.png", AssetType.IMAGE);
		className.set ("assets/temp/button.png", __ASSET__assets_temp_button_png);
		type.set ("assets/temp/button.png", AssetType.IMAGE);
		className.set ("assets/temp/crate.png", __ASSET__assets_temp_crate_png);
		type.set ("assets/temp/crate.png", AssetType.IMAGE);
		className.set ("assets/temp/crate2.png", __ASSET__assets_temp_crate2_png);
		type.set ("assets/temp/crate2.png", AssetType.IMAGE);
		className.set ("assets/temp/droplets.png", __ASSET__assets_temp_droplets_png);
		type.set ("assets/temp/droplets.png", AssetType.IMAGE);
		className.set ("assets/temp/dust.png", __ASSET__assets_temp_dust_png);
		type.set ("assets/temp/dust.png", AssetType.IMAGE);
		className.set ("assets/temp/editorblock.png", __ASSET__assets_temp_editorblock_png);
		type.set ("assets/temp/editorblock.png", AssetType.IMAGE);
		className.set ("assets/temp/explosion.png", __ASSET__assets_temp_explosion_png);
		type.set ("assets/temp/explosion.png", AssetType.IMAGE);
		className.set ("assets/temp/explosion2.png", __ASSET__assets_temp_explosion2_png);
		type.set ("assets/temp/explosion2.png", AssetType.IMAGE);
		className.set ("assets/temp/jet.png", __ASSET__assets_temp_jet_png);
		type.set ("assets/temp/jet.png", AssetType.IMAGE);
		className.set ("assets/temp/jet2.png", __ASSET__assets_temp_jet2_png);
		type.set ("assets/temp/jet2.png", AssetType.IMAGE);
		className.set ("assets/temp/jet3.png", __ASSET__assets_temp_jet3_png);
		type.set ("assets/temp/jet3.png", AssetType.IMAGE);
		className.set ("assets/temp/messagebox.png", __ASSET__assets_temp_messagebox_png);
		type.set ("assets/temp/messagebox.png", AssetType.IMAGE);
		className.set ("assets/temp/pit.png", __ASSET__assets_temp_pit_png);
		type.set ("assets/temp/pit.png", AssetType.IMAGE);
		className.set ("assets/temp/pod.png", __ASSET__assets_temp_pod_png);
		type.set ("assets/temp/pod.png", AssetType.IMAGE);
		className.set ("assets/temp/pod1.png", __ASSET__assets_temp_pod1_png);
		type.set ("assets/temp/pod1.png", AssetType.IMAGE);
		className.set ("assets/temp/portrait.png", __ASSET__assets_temp_portrait_png);
		type.set ("assets/temp/portrait.png", AssetType.IMAGE);
		className.set ("assets/temp/powerlight.png", __ASSET__assets_temp_powerlight_png);
		type.set ("assets/temp/powerlight.png", AssetType.IMAGE);
		className.set ("assets/temp/rocks.png", __ASSET__assets_temp_rocks_png);
		type.set ("assets/temp/rocks.png", AssetType.IMAGE);
		className.set ("assets/temp/shipbits.png", __ASSET__assets_temp_shipbits_png);
		type.set ("assets/temp/shipbits.png", AssetType.IMAGE);
		className.set ("assets/temp/smoke.png", __ASSET__assets_temp_smoke_png);
		type.set ("assets/temp/smoke.png", AssetType.IMAGE);
		className.set ("assets/temp/socket.png", __ASSET__assets_temp_socket_png);
		type.set ("assets/temp/socket.png", AssetType.IMAGE);
		className.set ("assets/temp/thickfont.png", __ASSET__assets_temp_thickfont_png);
		type.set ("assets/temp/thickfont.png", AssetType.IMAGE);
		className.set ("assets/temp/thinfont.png", __ASSET__assets_temp_thinfont_png);
		type.set ("assets/temp/thinfont.png", AssetType.IMAGE);
		className.set ("assets/temp/tiles.png", __ASSET__assets_temp_tiles_png);
		type.set ("assets/temp/tiles.png", AssetType.IMAGE);
		className.set ("assets/temp/timerswitch.png", __ASSET__assets_temp_timerswitch_png);
		type.set ("assets/temp/timerswitch.png", AssetType.IMAGE);
		className.set ("assets/sounds/beep.mp3", __ASSET__assets_sounds_beep_mp3);
		type.set ("assets/sounds/beep.mp3", AssetType.MUSIC);
		className.set ("assets/sounds/flixel.mp3", __ASSET__assets_sounds_flixel_mp3);
		type.set ("assets/sounds/flixel.mp3", AssetType.MUSIC);
		className.set ("assets/fonts/nokiafc22.ttf", __ASSET__assets_fonts_nokiafc22_ttf);
		type.set ("assets/fonts/nokiafc22.ttf", AssetType.FONT);
		className.set ("assets/fonts/arial.ttf", __ASSET__assets_fonts_arial_ttf);
		type.set ("assets/fonts/arial.ttf", AssetType.FONT);
		
		
		#elseif html5
		
		var id;
		id = "assets/data/data-goes-here.txt";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/data/map1.csv";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/images/Background3.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Dog.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/images-go-here.txt";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/images/polarityPalette.ase";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "assets/images/pongBullet.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/pongShip.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/pongShipGrn.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/pongShipRed.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Sand_tile.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Tiles.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/music/music-goes-here.txt";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/sounds/sounds-go-here.txt";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/temp/astro.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/temp/battery.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/temp/beam.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/temp/beamsocket.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/temp/button.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/temp/crate.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/temp/crate2.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/temp/droplets.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/temp/dust.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/temp/editorblock.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/temp/explosion.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/temp/explosion2.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/temp/jet.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/temp/jet2.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/temp/jet3.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/temp/messagebox.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/temp/pit.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/temp/pod.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/temp/pod1.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/temp/portrait.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/temp/powerlight.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/temp/rocks.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/temp/shipbits.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/temp/smoke.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/temp/socket.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/temp/thickfont.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/temp/thinfont.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/temp/tiles.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/temp/timerswitch.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/sounds/beep.mp3";
		path.set (id, id);
		
		type.set (id, AssetType.MUSIC);
		id = "assets/sounds/flixel.mp3";
		path.set (id, id);
		
		type.set (id, AssetType.MUSIC);
		id = "assets/fonts/nokiafc22.ttf";
		className.set (id, __ASSET__assets_fonts_nokiafc22_ttf);
		
		type.set (id, AssetType.FONT);
		id = "assets/fonts/arial.ttf";
		className.set (id, __ASSET__assets_fonts_arial_ttf);
		
		type.set (id, AssetType.FONT);
		
		
		var assetsPrefix = null;
		if (ApplicationMain.config != null && Reflect.hasField (ApplicationMain.config, "assetsPrefix")) {
			assetsPrefix = ApplicationMain.config.assetsPrefix;
		}
		if (assetsPrefix != null) {
			for (k in path.keys()) {
				path.set(k, assetsPrefix + path[k]);
			}
		}
		
		#else
		
		#if (windows || mac || linux)
		
		var useManifest = false;
		
		className.set ("assets/data/data-goes-here.txt", __ASSET__assets_data_data_goes_here_txt);
		type.set ("assets/data/data-goes-here.txt", AssetType.TEXT);
		
		className.set ("assets/data/map1.csv", __ASSET__assets_data_map1_csv);
		type.set ("assets/data/map1.csv", AssetType.TEXT);
		
		className.set ("assets/images/Background3.png", __ASSET__assets_images_background3_png);
		type.set ("assets/images/Background3.png", AssetType.IMAGE);
		
		className.set ("assets/images/Dog.png", __ASSET__assets_images_dog_png);
		type.set ("assets/images/Dog.png", AssetType.IMAGE);
		
		className.set ("assets/images/images-go-here.txt", __ASSET__assets_images_images_go_here_txt);
		type.set ("assets/images/images-go-here.txt", AssetType.TEXT);
		
		className.set ("assets/images/polarityPalette.ase", __ASSET__assets_images_polaritypalette_ase);
		type.set ("assets/images/polarityPalette.ase", AssetType.BINARY);
		
		className.set ("assets/images/pongBullet.png", __ASSET__assets_images_pongbullet_png);
		type.set ("assets/images/pongBullet.png", AssetType.IMAGE);
		
		className.set ("assets/images/pongShip.png", __ASSET__assets_images_pongship_png);
		type.set ("assets/images/pongShip.png", AssetType.IMAGE);
		
		className.set ("assets/images/pongShipGrn.png", __ASSET__assets_images_pongshipgrn_png);
		type.set ("assets/images/pongShipGrn.png", AssetType.IMAGE);
		
		className.set ("assets/images/pongShipRed.png", __ASSET__assets_images_pongshipred_png);
		type.set ("assets/images/pongShipRed.png", AssetType.IMAGE);
		
		className.set ("assets/images/Sand_tile.png", __ASSET__assets_images_sand_tile_png);
		type.set ("assets/images/Sand_tile.png", AssetType.IMAGE);
		
		className.set ("assets/images/Tiles.png", __ASSET__assets_images_tiles_png);
		type.set ("assets/images/Tiles.png", AssetType.IMAGE);
		
		className.set ("assets/music/music-goes-here.txt", __ASSET__assets_music_music_goes_here_txt);
		type.set ("assets/music/music-goes-here.txt", AssetType.TEXT);
		
		className.set ("assets/sounds/sounds-go-here.txt", __ASSET__assets_sounds_sounds_go_here_txt);
		type.set ("assets/sounds/sounds-go-here.txt", AssetType.TEXT);
		
		className.set ("assets/temp/astro.png", __ASSET__assets_temp_astro_png);
		type.set ("assets/temp/astro.png", AssetType.IMAGE);
		
		className.set ("assets/temp/battery.png", __ASSET__assets_temp_battery_png);
		type.set ("assets/temp/battery.png", AssetType.IMAGE);
		
		className.set ("assets/temp/beam.png", __ASSET__assets_temp_beam_png);
		type.set ("assets/temp/beam.png", AssetType.IMAGE);
		
		className.set ("assets/temp/beamsocket.png", __ASSET__assets_temp_beamsocket_png);
		type.set ("assets/temp/beamsocket.png", AssetType.IMAGE);
		
		className.set ("assets/temp/button.png", __ASSET__assets_temp_button_png);
		type.set ("assets/temp/button.png", AssetType.IMAGE);
		
		className.set ("assets/temp/crate.png", __ASSET__assets_temp_crate_png);
		type.set ("assets/temp/crate.png", AssetType.IMAGE);
		
		className.set ("assets/temp/crate2.png", __ASSET__assets_temp_crate2_png);
		type.set ("assets/temp/crate2.png", AssetType.IMAGE);
		
		className.set ("assets/temp/droplets.png", __ASSET__assets_temp_droplets_png);
		type.set ("assets/temp/droplets.png", AssetType.IMAGE);
		
		className.set ("assets/temp/dust.png", __ASSET__assets_temp_dust_png);
		type.set ("assets/temp/dust.png", AssetType.IMAGE);
		
		className.set ("assets/temp/editorblock.png", __ASSET__assets_temp_editorblock_png);
		type.set ("assets/temp/editorblock.png", AssetType.IMAGE);
		
		className.set ("assets/temp/explosion.png", __ASSET__assets_temp_explosion_png);
		type.set ("assets/temp/explosion.png", AssetType.IMAGE);
		
		className.set ("assets/temp/explosion2.png", __ASSET__assets_temp_explosion2_png);
		type.set ("assets/temp/explosion2.png", AssetType.IMAGE);
		
		className.set ("assets/temp/jet.png", __ASSET__assets_temp_jet_png);
		type.set ("assets/temp/jet.png", AssetType.IMAGE);
		
		className.set ("assets/temp/jet2.png", __ASSET__assets_temp_jet2_png);
		type.set ("assets/temp/jet2.png", AssetType.IMAGE);
		
		className.set ("assets/temp/jet3.png", __ASSET__assets_temp_jet3_png);
		type.set ("assets/temp/jet3.png", AssetType.IMAGE);
		
		className.set ("assets/temp/messagebox.png", __ASSET__assets_temp_messagebox_png);
		type.set ("assets/temp/messagebox.png", AssetType.IMAGE);
		
		className.set ("assets/temp/pit.png", __ASSET__assets_temp_pit_png);
		type.set ("assets/temp/pit.png", AssetType.IMAGE);
		
		className.set ("assets/temp/pod.png", __ASSET__assets_temp_pod_png);
		type.set ("assets/temp/pod.png", AssetType.IMAGE);
		
		className.set ("assets/temp/pod1.png", __ASSET__assets_temp_pod1_png);
		type.set ("assets/temp/pod1.png", AssetType.IMAGE);
		
		className.set ("assets/temp/portrait.png", __ASSET__assets_temp_portrait_png);
		type.set ("assets/temp/portrait.png", AssetType.IMAGE);
		
		className.set ("assets/temp/powerlight.png", __ASSET__assets_temp_powerlight_png);
		type.set ("assets/temp/powerlight.png", AssetType.IMAGE);
		
		className.set ("assets/temp/rocks.png", __ASSET__assets_temp_rocks_png);
		type.set ("assets/temp/rocks.png", AssetType.IMAGE);
		
		className.set ("assets/temp/shipbits.png", __ASSET__assets_temp_shipbits_png);
		type.set ("assets/temp/shipbits.png", AssetType.IMAGE);
		
		className.set ("assets/temp/smoke.png", __ASSET__assets_temp_smoke_png);
		type.set ("assets/temp/smoke.png", AssetType.IMAGE);
		
		className.set ("assets/temp/socket.png", __ASSET__assets_temp_socket_png);
		type.set ("assets/temp/socket.png", AssetType.IMAGE);
		
		className.set ("assets/temp/thickfont.png", __ASSET__assets_temp_thickfont_png);
		type.set ("assets/temp/thickfont.png", AssetType.IMAGE);
		
		className.set ("assets/temp/thinfont.png", __ASSET__assets_temp_thinfont_png);
		type.set ("assets/temp/thinfont.png", AssetType.IMAGE);
		
		className.set ("assets/temp/tiles.png", __ASSET__assets_temp_tiles_png);
		type.set ("assets/temp/tiles.png", AssetType.IMAGE);
		
		className.set ("assets/temp/timerswitch.png", __ASSET__assets_temp_timerswitch_png);
		type.set ("assets/temp/timerswitch.png", AssetType.IMAGE);
		
		className.set ("assets/sounds/beep.mp3", __ASSET__assets_sounds_beep_mp3);
		type.set ("assets/sounds/beep.mp3", AssetType.MUSIC);
		
		className.set ("assets/sounds/flixel.mp3", __ASSET__assets_sounds_flixel_mp3);
		type.set ("assets/sounds/flixel.mp3", AssetType.MUSIC);
		
		className.set ("assets/fonts/nokiafc22.ttf", __ASSET__assets_fonts_nokiafc22_ttf);
		type.set ("assets/fonts/nokiafc22.ttf", AssetType.FONT);
		
		className.set ("assets/fonts/arial.ttf", __ASSET__assets_fonts_arial_ttf);
		type.set ("assets/fonts/arial.ttf", AssetType.FONT);
		
		
		if (useManifest) {
			
			loadManifest ();
			
			if (Sys.args ().indexOf ("-livereload") > -1) {
				
				var path = FileSystem.fullPath ("manifest");
				lastModified = FileSystem.stat (path).mtime.getTime ();
				
				timer = new Timer (2000);
				timer.run = function () {
					
					var modified = FileSystem.stat (path).mtime.getTime ();
					
					if (modified > lastModified) {
						
						lastModified = modified;
						loadManifest ();
						
						onChange.dispatch ();
						
					}
					
				}
				
			}
			
		}
		
		#else
		
		loadManifest ();
		
		#end
		#end
		
	}
	
	
	public override function exists (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var assetType = this.type.get (id);
		
		if (assetType != null) {
			
			if (assetType == requestedType || ((requestedType == SOUND || requestedType == MUSIC) && (assetType == MUSIC || assetType == SOUND))) {
				
				return true;
				
			}
			
			#if flash
			
			if (requestedType == BINARY && (assetType == BINARY || assetType == TEXT || assetType == IMAGE)) {
				
				return true;
				
			} else if (requestedType == null || path.exists (id)) {
				
				return true;
				
			}
			
			#else
			
			if (requestedType == BINARY || requestedType == null || (assetType == BINARY && requestedType == TEXT)) {
				
				return true;
				
			}
			
			#end
			
		}
		
		return false;
		
	}
	
	
	public override function getAudioBuffer (id:String):AudioBuffer {
		
		#if flash
		
		var buffer = new AudioBuffer ();
		buffer.src = cast (Type.createInstance (className.get (id), []), Sound);
		return buffer;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		if (className.exists(id)) return AudioBuffer.fromBytes (cast (Type.createInstance (className.get (id), []), ByteArray));
		else return AudioBuffer.fromFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getBytes (id:String):ByteArray {
		
		#if flash
		
		switch (type.get (id)) {
			
			case TEXT, BINARY:
				
				return cast (Type.createInstance (className.get (id), []), ByteArray);
			
			case IMAGE:
				
				var bitmapData = cast (Type.createInstance (className.get (id), []), BitmapData);
				return bitmapData.getPixels (bitmapData.rect);
			
			default:
				
				return null;
			
		}
		
		return cast (Type.createInstance (className.get (id), []), ByteArray);
		
		#elseif html5
		
		var bytes:ByteArray = null;
		var loader = Preloader.loaders.get (path.get (id));
		
		if (loader == null) {
			
			return null;
			
		}
		
		var data = loader.data;
		
		if (Std.is (data, String)) {
			
			bytes = new ByteArray ();
			bytes.writeUTFBytes (data);
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes;
			
		} else {
			
			return null;
		}
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), ByteArray);
		else return ByteArray.readFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getFont (id:String):Font {
		
		#if flash
		
		var src = Type.createInstance (className.get (id), []);
		
		var font = new Font (src.fontName);
		font.src = src;
		return font;
		
		#elseif html5
		
		return cast (Type.createInstance (className.get (id), []), Font);
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Font);
			
		} else {
			
			return Font.fromFile (path.get (id));
			
		}
		
		#end
		
	}
	
	
	public override function getImage (id:String):Image {
		
		#if flash
		
		return Image.fromBitmapData (cast (Type.createInstance (className.get (id), []), BitmapData));
		
		#elseif html5
		
		return Image.fromImageElement (Preloader.images.get (path.get (id)));
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Image);
			
		} else {
			
			return Image.fromFile (path.get (id));
			
		}
		
		#end
		
	}
	
	
	/*public override function getMusic (id:String):Dynamic {
		
		#if flash
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif openfl_html5
		
		//var sound = new Sound ();
		//sound.__buffer = true;
		//sound.load (new URLRequest (path.get (id)));
		//return sound;
		return null;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		return null;
		//if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		//else return new Sound (new URLRequest (path.get (id)), null, true);
		
		#end
		
	}*/
	
	
	public override function getPath (id:String):String {
		
		//#if ios
		
		//return SystemPath.applicationDirectory + "/assets/" + path.get (id);
		
		//#else
		
		return path.get (id);
		
		//#end
		
	}
	
	
	public override function getText (id:String):String {
		
		#if html5
		
		var bytes:ByteArray = null;
		var loader = Preloader.loaders.get (path.get (id));
		
		if (loader == null) {
			
			return null;
			
		}
		
		var data = loader.data;
		
		if (Std.is (data, String)) {
			
			return cast data;
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes.readUTFBytes (bytes.length);
			
		} else {
			
			return null;
		}
		
		#else
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.readUTFBytes (bytes.length);
			
		}
		
		#end
		
	}
	
	
	public override function isLocal (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		
		#if flash
		
		//if (requestedType != AssetType.MUSIC && requestedType != AssetType.SOUND) {
			
			return className.exists (id);
			
		//}
		
		#end
		
		return true;
		
	}
	
	
	public override function list (type:String):Array<String> {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var items = [];
		
		for (id in this.type.keys ()) {
			
			if (requestedType == null || exists (id, type)) {
				
				items.push (id);
				
			}
			
		}
		
		return items;
		
	}
	
	
	public override function loadAudioBuffer (id:String):Future<AudioBuffer> {
		
		var promise = new Promise<AudioBuffer> ();
		
		#if (flash)
		
		if (path.exists (id)) {
			
			var soundLoader = new Sound ();
			soundLoader.addEventListener (Event.COMPLETE, function (event) {
				
				var audioBuffer:AudioBuffer = new AudioBuffer();
				audioBuffer.src = event.currentTarget;
				promise.complete (audioBuffer);
				
			});
			soundLoader.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			soundLoader.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			soundLoader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getAudioBuffer (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<AudioBuffer> (function () return getAudioBuffer (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	public override function loadBytes (id:String):Future<ByteArray> {
		
		var promise = new Promise<ByteArray> ();
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bytes = new ByteArray ();
				bytes.writeUTFBytes (event.currentTarget.data);
				bytes.position = 0;
				
				promise.complete (bytes);
				
			});
			loader.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			loader.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getBytes (id));
			
		}
		
		#elseif html5
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.dataFormat = BINARY;
			loader.onComplete.add (function (_):Void {
				
				promise.complete (loader.data);
				
			});
			loader.onProgress.add (function (_, loaded, total) {
				
				if (total == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (loaded / total);
					
				}
				
			});
			loader.onIOError.add (function (_, e) {
				
				promise.error (e);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getBytes (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<ByteArray> (function () return getBytes (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	public override function loadImage (id:String):Future<Image> {
		
		var promise = new Promise<Image> ();
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bitmapData = cast (event.currentTarget.content, Bitmap).bitmapData;
				promise.complete (Image.fromBitmapData (bitmapData));
				
			});
			loader.contentLoaderInfo.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			loader.contentLoaderInfo.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getImage (id));
			
		}
		
		#elseif html5
		
		if (path.exists (id)) {
			
			var image = new js.html.Image ();
			image.onload = function (_):Void {
				
				promise.complete (Image.fromImageElement (image));
				
			}
			image.onerror = promise.error;
			image.src = path.get (id);
			
		} else {
			
			promise.complete (getImage (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<Image> (function () return getImage (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	#if (!flash && !html5)
	private function loadManifest ():Void {
		
		try {
			
			#if blackberry
			var bytes = ByteArray.readFile ("app/native/manifest");
			#elseif tizen
			var bytes = ByteArray.readFile ("../res/manifest");
			#elseif emscripten
			var bytes = ByteArray.readFile ("assets/manifest");
			#elseif (mac && java)
			var bytes = ByteArray.readFile ("../Resources/manifest");
			#elseif (ios || tvos)
			var bytes = ByteArray.readFile ("assets/manifest");
			#else
			var bytes = ByteArray.readFile ("manifest");
			#end
			
			if (bytes != null) {
				
				bytes.position = 0;
				
				if (bytes.length > 0) {
					
					var data = bytes.readUTFBytes (bytes.length);
					
					if (data != null && data.length > 0) {
						
						var manifest:Array<Dynamic> = Unserializer.run (data);
						
						for (asset in manifest) {
							
							if (!className.exists (asset.id)) {
								
								#if (ios || tvos)
								path.set (asset.id, "assets/" + asset.path);
								#else
								path.set (asset.id, asset.path);
								#end
								type.set (asset.id, cast (asset.type, AssetType));
								
							}
							
						}
						
					}
					
				}
				
			} else {
				
				trace ("Warning: Could not load asset manifest (bytes was null)");
				
			}
		
		} catch (e:Dynamic) {
			
			trace ('Warning: Could not load asset manifest (${e})');
			
		}
		
	}
	#end
	
	
	public override function loadText (id:String):Future<String> {
		
		var promise = new Promise<String> ();
		
		#if html5
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.onComplete.add (function (_):Void {
				
				promise.complete (loader.data);
				
			});
			loader.onProgress.add (function (_, loaded, total) {
				
				if (total == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (loaded / total);
					
				}
				
			});
			loader.onIOError.add (function (_, msg) promise.error (msg));
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getText (id));
			
		}
		
		#else
		
		promise.completeWith (loadBytes (id).then (function (bytes) {
			
			return new Future<String> (function () {
				
				if (bytes == null) {
					
					return null;
					
				} else {
					
					return bytes.readUTFBytes (bytes.length);
					
				}
				
			});
			
		}));
		
		#end
		
		return promise.future;
		
	}
	
	
}


#if !display
#if flash

@:keep @:bind #if display private #end class __ASSET__assets_data_data_goes_here_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_data_map1_csv extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_images_background3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_dog_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_images_go_here_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_images_polaritypalette_ase extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_images_pongbullet_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_pongship_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_pongshipgrn_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_pongshipred_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_sand_tile_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_tiles_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_music_music_goes_here_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_sounds_go_here_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_temp_astro_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_temp_battery_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_temp_beam_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_temp_beamsocket_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_temp_button_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_temp_crate_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_temp_crate2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_temp_droplets_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_temp_dust_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_temp_editorblock_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_temp_explosion_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_temp_explosion2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_temp_jet_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_temp_jet2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_temp_jet3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_temp_messagebox_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_temp_pit_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_temp_pod_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_temp_pod1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_temp_portrait_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_temp_powerlight_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_temp_rocks_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_temp_shipbits_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_temp_smoke_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_temp_socket_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_temp_thickfont_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_temp_thinfont_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_temp_tiles_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_temp_timerswitch_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_beep_mp3 extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_flixel_mp3 extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_fonts_nokiafc22_ttf extends flash.text.Font { }
@:keep @:bind #if display private #end class __ASSET__assets_fonts_arial_ttf extends flash.text.Font { }


#elseif html5














































@:keep #if display private #end class __ASSET__assets_fonts_nokiafc22_ttf extends lime.text.Font { public function new () { super (); name = "Nokia Cellphone FC Small"; } } 
@:keep #if display private #end class __ASSET__assets_fonts_arial_ttf extends lime.text.Font { public function new () { super (); name = "Arial"; } } 


#else



#if (windows || mac || linux || cpp)


@:file("assets/data/data-goes-here.txt") #if display private #end class __ASSET__assets_data_data_goes_here_txt extends lime.utils.ByteArray {}
@:file("assets/data/map1.csv") #if display private #end class __ASSET__assets_data_map1_csv extends lime.utils.ByteArray {}
@:image("assets/images/Background3.png") #if display private #end class __ASSET__assets_images_background3_png extends lime.graphics.Image {}
@:image("assets/images/Dog.png") #if display private #end class __ASSET__assets_images_dog_png extends lime.graphics.Image {}
@:file("assets/images/images-go-here.txt") #if display private #end class __ASSET__assets_images_images_go_here_txt extends lime.utils.ByteArray {}
@:file("assets/images/polarityPalette.ase") #if display private #end class __ASSET__assets_images_polaritypalette_ase extends lime.utils.ByteArray {}
@:image("assets/images/pongBullet.png") #if display private #end class __ASSET__assets_images_pongbullet_png extends lime.graphics.Image {}
@:image("assets/images/pongShip.png") #if display private #end class __ASSET__assets_images_pongship_png extends lime.graphics.Image {}
@:image("assets/images/pongShipGrn.png") #if display private #end class __ASSET__assets_images_pongshipgrn_png extends lime.graphics.Image {}
@:image("assets/images/pongShipRed.png") #if display private #end class __ASSET__assets_images_pongshipred_png extends lime.graphics.Image {}
@:image("assets/images/Sand_tile.png") #if display private #end class __ASSET__assets_images_sand_tile_png extends lime.graphics.Image {}
@:image("assets/images/Tiles.png") #if display private #end class __ASSET__assets_images_tiles_png extends lime.graphics.Image {}
@:file("assets/music/music-goes-here.txt") #if display private #end class __ASSET__assets_music_music_goes_here_txt extends lime.utils.ByteArray {}
@:file("assets/sounds/sounds-go-here.txt") #if display private #end class __ASSET__assets_sounds_sounds_go_here_txt extends lime.utils.ByteArray {}
@:image("assets/temp/astro.png") #if display private #end class __ASSET__assets_temp_astro_png extends lime.graphics.Image {}
@:image("assets/temp/battery.png") #if display private #end class __ASSET__assets_temp_battery_png extends lime.graphics.Image {}
@:image("assets/temp/beam.png") #if display private #end class __ASSET__assets_temp_beam_png extends lime.graphics.Image {}
@:image("assets/temp/beamsocket.png") #if display private #end class __ASSET__assets_temp_beamsocket_png extends lime.graphics.Image {}
@:image("assets/temp/button.png") #if display private #end class __ASSET__assets_temp_button_png extends lime.graphics.Image {}
@:image("assets/temp/crate.png") #if display private #end class __ASSET__assets_temp_crate_png extends lime.graphics.Image {}
@:image("assets/temp/crate2.png") #if display private #end class __ASSET__assets_temp_crate2_png extends lime.graphics.Image {}
@:image("assets/temp/droplets.png") #if display private #end class __ASSET__assets_temp_droplets_png extends lime.graphics.Image {}
@:image("assets/temp/dust.png") #if display private #end class __ASSET__assets_temp_dust_png extends lime.graphics.Image {}
@:image("assets/temp/editorblock.png") #if display private #end class __ASSET__assets_temp_editorblock_png extends lime.graphics.Image {}
@:image("assets/temp/explosion.png") #if display private #end class __ASSET__assets_temp_explosion_png extends lime.graphics.Image {}
@:image("assets/temp/explosion2.png") #if display private #end class __ASSET__assets_temp_explosion2_png extends lime.graphics.Image {}
@:image("assets/temp/jet.png") #if display private #end class __ASSET__assets_temp_jet_png extends lime.graphics.Image {}
@:image("assets/temp/jet2.png") #if display private #end class __ASSET__assets_temp_jet2_png extends lime.graphics.Image {}
@:image("assets/temp/jet3.png") #if display private #end class __ASSET__assets_temp_jet3_png extends lime.graphics.Image {}
@:image("assets/temp/messagebox.png") #if display private #end class __ASSET__assets_temp_messagebox_png extends lime.graphics.Image {}
@:image("assets/temp/pit.png") #if display private #end class __ASSET__assets_temp_pit_png extends lime.graphics.Image {}
@:image("assets/temp/pod.png") #if display private #end class __ASSET__assets_temp_pod_png extends lime.graphics.Image {}
@:image("assets/temp/pod1.png") #if display private #end class __ASSET__assets_temp_pod1_png extends lime.graphics.Image {}
@:image("assets/temp/portrait.png") #if display private #end class __ASSET__assets_temp_portrait_png extends lime.graphics.Image {}
@:image("assets/temp/powerlight.png") #if display private #end class __ASSET__assets_temp_powerlight_png extends lime.graphics.Image {}
@:image("assets/temp/rocks.png") #if display private #end class __ASSET__assets_temp_rocks_png extends lime.graphics.Image {}
@:image("assets/temp/shipbits.png") #if display private #end class __ASSET__assets_temp_shipbits_png extends lime.graphics.Image {}
@:image("assets/temp/smoke.png") #if display private #end class __ASSET__assets_temp_smoke_png extends lime.graphics.Image {}
@:image("assets/temp/socket.png") #if display private #end class __ASSET__assets_temp_socket_png extends lime.graphics.Image {}
@:image("assets/temp/thickfont.png") #if display private #end class __ASSET__assets_temp_thickfont_png extends lime.graphics.Image {}
@:image("assets/temp/thinfont.png") #if display private #end class __ASSET__assets_temp_thinfont_png extends lime.graphics.Image {}
@:image("assets/temp/tiles.png") #if display private #end class __ASSET__assets_temp_tiles_png extends lime.graphics.Image {}
@:image("assets/temp/timerswitch.png") #if display private #end class __ASSET__assets_temp_timerswitch_png extends lime.graphics.Image {}
@:file("/usr/lib/haxe/lib/flixel/3,3,11/assets/sounds/beep.mp3") #if display private #end class __ASSET__assets_sounds_beep_mp3 extends lime.utils.ByteArray {}
@:file("/usr/lib/haxe/lib/flixel/3,3,11/assets/sounds/flixel.mp3") #if display private #end class __ASSET__assets_sounds_flixel_mp3 extends lime.utils.ByteArray {}
@:font("/usr/lib/haxe/lib/flixel/3,3,11/assets/fonts/nokiafc22.ttf") #if display private #end class __ASSET__assets_fonts_nokiafc22_ttf extends lime.text.Font {}
@:font("/usr/lib/haxe/lib/flixel/3,3,11/assets/fonts/arial.ttf") #if display private #end class __ASSET__assets_fonts_arial_ttf extends lime.text.Font {}



#end
#end

#if (openfl && !flash)
@:keep #if display private #end class __ASSET__OPENFL__assets_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { var font = new __ASSET__assets_fonts_nokiafc22_ttf (); src = font.src; name = font.name; super (); }}
@:keep #if display private #end class __ASSET__OPENFL__assets_fonts_arial_ttf extends openfl.text.Font { public function new () { var font = new __ASSET__assets_fonts_arial_ttf (); src = font.src; name = font.name; super (); }}

#end

#end