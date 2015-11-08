#ifndef INCLUDED_PolarSprite
#define INCLUDED_PolarSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxSprite.h>
HX_DECLARE_CLASS0(PolarSprite)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  PolarSprite_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef PolarSprite_obj OBJ_;
		PolarSprite_obj();
		Void __construct(Dynamic X,Dynamic Y,Dynamic SimpleGraphic);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PolarSprite_obj > __new(Dynamic X,Dynamic Y,Dynamic SimpleGraphic);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PolarSprite_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("PolarSprite"); }

		bool _polarity;
		bool important;
		virtual Void setPolarity( bool polSet);
		Dynamic setPolarity_dyn();

		virtual Void switchPolarity( );
		Dynamic switchPolarity_dyn();

};


#endif /* INCLUDED_PolarSprite */ 
