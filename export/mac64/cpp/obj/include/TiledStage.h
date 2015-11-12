#ifndef INCLUDED_TiledStage
#define INCLUDED_TiledStage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/addons/editors/tiled/TiledMap.h>
HX_DECLARE_CLASS0(LandPlayer)
HX_DECLARE_CLASS0(LandState)
HX_DECLARE_CLASS0(PolarSprite)
HX_DECLARE_CLASS0(TiledStage)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledMap)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledObject)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledObjectGroup)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemap)


class HXCPP_CLASS_ATTRIBUTES  TiledStage_obj : public ::flixel::addons::editors::tiled::TiledMap_obj{
	public:
		typedef ::flixel::addons::editors::tiled::TiledMap_obj super;
		typedef TiledStage_obj OBJ_;
		TiledStage_obj();
		Void __construct(Dynamic tiledLevel);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TiledStage_obj > __new(Dynamic tiledLevel);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TiledStage_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TiledStage"); }

		::flixel::group::FlxGroup foregroundTiles;
		::flixel::group::FlxGroup backgroundTiles;
		::flixel::group::FlxGroup scenarioTiles;
		::LandPlayer _player;
		Array< ::Dynamic > collidableTileLayers;
		virtual Void loadObjects( ::LandState state);
		Dynamic loadObjects_dyn();

		virtual Void loadObject( ::flixel::addons::editors::tiled::TiledObject o,::flixel::addons::editors::tiled::TiledObjectGroup g,::LandState state);
		Dynamic loadObject_dyn();

};


#endif /* INCLUDED_TiledStage */ 
