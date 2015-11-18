#ifndef INCLUDED_Npc
#define INCLUDED_Npc

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxSprite.h>
HX_DECLARE_CLASS0(Npc)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  Npc_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef Npc_obj OBJ_;
		Npc_obj();
		Void __construct(Float X,Float Y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Npc_obj > __new(Float X,Float Y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Npc_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Npc"); }

		int MAX_HEALTH;
		int ACCELERATION;
		int RUN_SPEED;
		int SPRINT_SPEED;
		int JUMP_SPEED;
		int GRAVITY;
		int MAX_KNOCKEDOUT;
		int DISTANCE_SEEN;
		Float _hurtCounter;
		bool _flickering;
		bool _knockedOut;
		Float _moveTimer;
		virtual Void update( );

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


#endif /* INCLUDED_Npc */ 
