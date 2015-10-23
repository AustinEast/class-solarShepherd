#ifndef INCLUDED___ASSET__assets_fonts_nokiafc22_ttf
#define INCLUDED___ASSET__assets_fonts_nokiafc22_ttf

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_legacy/text/Font.h>
HX_DECLARE_CLASS0(__ASSET__assets_fonts_nokiafc22_ttf)
HX_DECLARE_CLASS3(openfl,_legacy,text,Font)
HX_DECLARE_CLASS3(openfl,_legacy,text,FontStyle)
HX_DECLARE_CLASS3(openfl,_legacy,text,FontType)


class HXCPP_CLASS_ATTRIBUTES  __ASSET__assets_fonts_nokiafc22_ttf_obj : public ::openfl::_legacy::text::Font_obj{
	public:
		typedef ::openfl::_legacy::text::Font_obj super;
		typedef __ASSET__assets_fonts_nokiafc22_ttf_obj OBJ_;
		__ASSET__assets_fonts_nokiafc22_ttf_obj();
		Void __construct(::String __o_filename,::openfl::_legacy::text::FontStyle style,::openfl::_legacy::text::FontType type);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< __ASSET__assets_fonts_nokiafc22_ttf_obj > __new(::String __o_filename,::openfl::_legacy::text::FontStyle style,::openfl::_legacy::text::FontType type);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~__ASSET__assets_fonts_nokiafc22_ttf_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("__ASSET__assets_fonts_nokiafc22_ttf"); }

		static ::String resourceName;
};


#endif /* INCLUDED___ASSET__assets_fonts_nokiafc22_ttf */ 
