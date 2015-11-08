#ifndef INCLUDED_SpacePlayer
#define INCLUDED_SpacePlayer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <PolarSprite.h>
HX_DECLARE_CLASS0(PolarSprite)
HX_DECLARE_CLASS0(SpacePlayer)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  SpacePlayer_obj : public ::PolarSprite_obj{
	public:
		typedef ::PolarSprite_obj super;
		typedef SpacePlayer_obj OBJ_;
		SpacePlayer_obj();
		Void __construct(Dynamic X,Dynamic Y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SpacePlayer_obj > __new(Dynamic X,Dynamic Y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SpacePlayer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("SpacePlayer"); }

		int MAX_HEALTH;
		int RUN_SPEED;
		int _hurtCounter;
		virtual Void update( );

};


#endif /* INCLUDED_SpacePlayer */ 
