#ifndef INCLUDED_SpaceBullet
#define INCLUDED_SpaceBullet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <PolarSprite.h>
HX_DECLARE_CLASS0(PolarSprite)
HX_DECLARE_CLASS0(SpaceBullet)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  SpaceBullet_obj : public ::PolarSprite_obj{
	public:
		typedef ::PolarSprite_obj super;
		typedef SpaceBullet_obj OBJ_;
		SpaceBullet_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SpaceBullet_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SpaceBullet_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SpaceBullet"); }

		::PolarSprite hitPaddle;
		virtual Void update( );

		virtual Void destroy( );

		virtual Void bounce( ::PolarSprite paddle);
		Dynamic bounce_dyn();

		virtual Void doneFadeOut( );
		Dynamic doneFadeOut_dyn();

};


#endif /* INCLUDED_SpaceBullet */ 
