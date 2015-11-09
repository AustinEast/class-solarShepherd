#ifndef INCLUDED_Chaser
#define INCLUDED_Chaser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxSprite.h>
HX_DECLARE_CLASS0(Chaser)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  Chaser_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef Chaser_obj OBJ_;
		Chaser_obj();
		Void __construct(Float X,Float Y,::flixel::FlxSprite Target);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Chaser_obj > __new(Float X,Float Y,::flixel::FlxSprite Target);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Chaser_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Chaser"); }

		int MAX_HEALTH;
		int ACCELERATION;
		int RUN_SPEED;
		int SPRINT_SPEED;
		int JUMP_SPEED;
		int GRAVITY;
		int MAX_KNOCKEDOUT;
		int DISTANCE_SEEN;
		bool _canJump;
		Float _jumpTimer;
		Float _targetDistance;
		Float _hurtCounter;
		::flixel::FlxSprite _target;
		bool _flickering;
		bool _knockedOut;
		virtual Void update( );

		virtual Void jumpCheck( );
		Dynamic jumpCheck_dyn();

		virtual Void animationCheck( );
		Dynamic animationCheck_dyn();

		virtual Void controls( );
		Dynamic controls_dyn();

		virtual Void stun( Float Damage);
		Dynamic stun_dyn();

		virtual Void flicker( Float Duration);
		Dynamic flicker_dyn();

		virtual Void knockedOut( );
		Dynamic knockedOut_dyn();

		virtual bool knockedOutCheck( );
		Dynamic knockedOutCheck_dyn();

};


#endif /* INCLUDED_Chaser */ 
