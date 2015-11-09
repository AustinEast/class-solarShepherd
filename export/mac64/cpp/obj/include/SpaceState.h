#ifndef INCLUDED_SpaceState
#define INCLUDED_SpaceState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxState.h>
HX_DECLARE_CLASS0(PolarSprite)
HX_DECLARE_CLASS0(SpaceBullet)
HX_DECLARE_CLASS0(SpaceEnemy)
HX_DECLARE_CLASS0(SpacePlayer)
HX_DECLARE_CLASS0(SpaceState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  SpaceState_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef SpaceState_obj OBJ_;
		SpaceState_obj();
		Void __construct(Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SpaceState_obj > __new(Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SpaceState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SpaceState"); }

		::flixel::group::FlxGroup _enemies;
		int _numEnemies;
		::SpaceEnemy _enemy;
		::SpacePlayer _player;
		::SpaceBullet _bullet;
		int _numBullets;
		::flixel::group::FlxGroup _bullets;
		virtual Void create( );

		virtual Void destroy( );

		virtual Void update( );

		virtual Void onHitPaddle( Dynamic thisBall,Dynamic thisPaddle);
		Dynamic onHitPaddle_dyn();

		virtual Void bounce( Dynamic _bullet,::PolarSprite _paddle);
		Dynamic bounce_dyn();

		virtual Void doneFadeOut( );
		Dynamic doneFadeOut_dyn();

};


#endif /* INCLUDED_SpaceState */ 
