#ifndef INCLUDED_LandPlayer
#define INCLUDED_LandPlayer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxSprite.h>
HX_DECLARE_CLASS0(LandPlayer)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  LandPlayer_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef LandPlayer_obj OBJ_;
		LandPlayer_obj();
		Void __construct(Float X,Float Y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< LandPlayer_obj > __new(Float X,Float Y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LandPlayer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("LandPlayer"); }

		int MAX_HEALTH;
		int ACCELERATION;
		int RUN_SPEED;
		int SPRINT_SPEED;
		int JUMP_SPEED;
		int GRAVITY;
		int _hurtCounter;
		bool meleeAnim;
		bool meleeTrue;
		virtual Void update( );

};


#endif /* INCLUDED_LandPlayer */ 
