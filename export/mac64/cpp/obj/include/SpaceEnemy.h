#ifndef INCLUDED_SpaceEnemy
#define INCLUDED_SpaceEnemy

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <SpaceSprite.h>
HX_DECLARE_CLASS0(SpaceEnemy)
HX_DECLARE_CLASS0(SpaceSprite)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  SpaceEnemy_obj : public ::SpaceSprite_obj{
	public:
		typedef ::SpaceSprite_obj super;
		typedef SpaceEnemy_obj OBJ_;
		SpaceEnemy_obj();
		Void __construct(Dynamic X,Dynamic Y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SpaceEnemy_obj > __new(Dynamic X,Dynamic Y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SpaceEnemy_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SpaceEnemy"); }

		Float _shotClock;
		Float _originalX;
		::flixel::group::FlxTypedGroup _bullets;
		virtual Void update( );

		virtual Void resetShotClock( );
		Dynamic resetShotClock_dyn();

};


#endif /* INCLUDED_SpaceEnemy */ 
