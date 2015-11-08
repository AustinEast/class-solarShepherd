#ifndef INCLUDED_CrateGun
#define INCLUDED_CrateGun

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/addons/weapon/FlxWeapon.h>
HX_DECLARE_CLASS0(CrateGun)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,weapon,FlxWeapon)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,system,FlxSound)


class HXCPP_CLASS_ATTRIBUTES  CrateGun_obj : public ::flixel::addons::weapon::FlxWeapon_obj{
	public:
		typedef ::flixel::addons::weapon::FlxWeapon_obj super;
		typedef CrateGun_obj OBJ_;
		CrateGun_obj();
		Void __construct(::String Name,::flixel::FlxSprite ParentRef,::Class BulletType,Dynamic __o_BulletID);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CrateGun_obj > __new(::String Name,::flixel::FlxSprite ParentRef,::Class BulletType,Dynamic __o_BulletID);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CrateGun_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CrateGun"); }

		::flixel::system::FlxSound _shootSnd;
};


#endif /* INCLUDED_CrateGun */ 
