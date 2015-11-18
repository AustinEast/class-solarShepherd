#ifndef INCLUDED_flixel_addons_text_TypeSound
#define INCLUDED_flixel_addons_text_TypeSound

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_legacy/media/Sound.h>
HX_DECLARE_CLASS3(flixel,addons,text,TypeSound)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,media,Sound)
HX_DECLARE_CLASS3(openfl,_legacy,net,URLRequest)
HX_DECLARE_CLASS2(openfl,media,SoundLoaderContext)
namespace flixel{
namespace addons{
namespace text{


class HXCPP_CLASS_ATTRIBUTES  TypeSound_obj : public ::openfl::_legacy::media::Sound_obj{
	public:
		typedef ::openfl::_legacy::media::Sound_obj super;
		typedef TypeSound_obj OBJ_;
		TypeSound_obj();
		Void __construct(::openfl::_legacy::net::URLRequest stream,::openfl::media::SoundLoaderContext context,Dynamic __o_forcePlayAsMusic);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TypeSound_obj > __new(::openfl::_legacy::net::URLRequest stream,::openfl::media::SoundLoaderContext context,Dynamic __o_forcePlayAsMusic);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TypeSound_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("TypeSound"); }

		static ::String resourceName;
};

} // end namespace flixel
} // end namespace addons
} // end namespace text

#endif /* INCLUDED_flixel_addons_text_TypeSound */ 
