#ifndef INCLUDED_Reg
#define INCLUDED_Reg

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Reg)
HX_DECLARE_CLASS0(TiledStage)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledMap)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,FlxSave)


class HXCPP_CLASS_ATTRIBUTES  Reg_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Reg_obj OBJ_;
		Reg_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Reg_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Reg_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Reg"); }

		static Array< ::String > levels;
		static int level;
		static ::TiledStage loadedLevel;
		static Dynamic scores;
		static int score;
		static Array< ::Dynamic > saves;
		static Array< int > colors;
		static ::flixel::group::FlxGroup enemyBullets;
		static ::String TILES;
		static ::String LANDPLAYER;
		static ::String STUNGUNBULLET;
		static ::String CRATE;
		static ::String THUD;
		static ::String MENUSELECT;
		static ::String STUNGUNSOUND;
		static ::String PLAYERJUMP;
		static ::String ENEMYSHIPDESTROYED;
		static ::String PLAYERSHIPDESTROYED;
		static ::String PICKUP;
};


#endif /* INCLUDED_Reg */ 
