#ifndef INCLUDED_LandPlayer
#define INCLUDED_LandPlayer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <PolarSprite.h>
HX_DECLARE_CLASS0(CrateGun)
HX_DECLARE_CLASS0(LandPlayer)
HX_DECLARE_CLASS0(PolarSprite)
HX_DECLARE_CLASS0(StunGun)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,weapon,FlxWeapon)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  LandPlayer_obj : public ::PolarSprite_obj{
	public:
		typedef ::PolarSprite_obj super;
		typedef LandPlayer_obj OBJ_;
		LandPlayer_obj();
		Void __construct(Dynamic X,Dynamic Y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< LandPlayer_obj > __new(Dynamic X,Dynamic Y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LandPlayer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("LandPlayer"); }

		int MAX_HEALTH;
		int ACCELERATION;
		int RUN_SPEED;
		int SPRINT_SPEED;
		int JUMP_SPEED;
		int GRAVITY;
		::StunGun _stunGun;
		::CrateGun _crateGun;
		bool _flickering;
		virtual Void update( );

		virtual Void animationCheck( );
		Dynamic animationCheck_dyn();

		virtual Void controls( );
		Dynamic controls_dyn();

		virtual Void hurt( Float Damage);

		virtual Void flicker( Float Duration);
		Dynamic flicker_dyn();

};


#endif /* INCLUDED_LandPlayer */ 
