#ifndef INCLUDED_LandState
#define INCLUDED_LandState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxState.h>
HX_DECLARE_CLASS0(Chaser)
HX_DECLARE_CLASS0(Fuel)
HX_DECLARE_CLASS0(LandPlayer)
HX_DECLARE_CLASS0(LandState)
HX_DECLARE_CLASS0(Npc)
HX_DECLARE_CLASS0(Patroller)
HX_DECLARE_CLASS0(PolarSprite)
HX_DECLARE_CLASS0(Shooter)
HX_DECLARE_CLASS0(TextBox)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)


class HXCPP_CLASS_ATTRIBUTES  LandState_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef LandState_obj OBJ_;
		LandState_obj();
		Void __construct(Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< LandState_obj > __new(Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LandState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("LandState"); }

		::LandPlayer _player;
		::Npc _npc;
		::flixel::group::FlxGroup _enemies;
		::Chaser _chaser;
		Array< ::Dynamic > _chaserArray;
		::Shooter _shooter;
		Array< ::Dynamic > _shooterArray;
		::Patroller _patroller;
		Array< ::Dynamic > _patrollerArray;
		::flixel::group::FlxGroup _fuelGroup;
		::Fuel _fuel;
		Array< ::Dynamic > _fuelArray;
		::TextBox _textbox;
		virtual Void create( );

		virtual Void destroy( );

		virtual Void update( );

		virtual Void talk( Dynamic Player,Dynamic Npc);
		Dynamic talk_dyn();

		virtual Void crateCollision( ::flixel::FlxObject Level,::flixel::FlxSprite Bullet);
		Dynamic crateCollision_dyn();

		virtual Void collectFuel( ::LandPlayer Player,Dynamic Coin);
		Dynamic collectFuel_dyn();

		virtual Void stunCollision( ::flixel::FlxObject Level,::flixel::FlxSprite Bullet);
		Dynamic stunCollision_dyn();

		virtual Void enemyCollision( ::LandPlayer Player,Dynamic Enemy);
		Dynamic enemyCollision_dyn();

		virtual Void enemyHitWithBullet( Dynamic Enemy,::flixel::FlxSprite Bullet);
		Dynamic enemyHitWithBullet_dyn();

		virtual Void playerHitWithBullet( ::LandPlayer Player,::flixel::FlxSprite Bullet);
		Dynamic playerHitWithBullet_dyn();

};


#endif /* INCLUDED_LandState */ 
