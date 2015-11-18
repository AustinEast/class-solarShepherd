#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_text_TypeSound
#include <flixel/addons/text/TypeSound.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_media_Sound
#include <openfl/_legacy/media/Sound.h>
#endif
#ifndef INCLUDED_openfl__legacy_net_URLRequest
#include <openfl/_legacy/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl_media_SoundLoaderContext
#include <openfl/media/SoundLoaderContext.h>
#endif
namespace flixel{
namespace addons{
namespace text{

Void TypeSound_obj::__construct(::openfl::_legacy::net::URLRequest stream,::openfl::media::SoundLoaderContext context,Dynamic __o_forcePlayAsMusic)
{
HX_STACK_FRAME("flixel.addons.text.TypeSound","new",0xea1a5b8f,"flixel.addons.text.TypeSound.new","openfl/_legacy/Assets.hx",2283,0x9276b055)
HX_STACK_THIS(this)
HX_STACK_ARG(stream,"stream")
HX_STACK_ARG(context,"context")
HX_STACK_ARG(__o_forcePlayAsMusic,"forcePlayAsMusic")
Dynamic forcePlayAsMusic = __o_forcePlayAsMusic.Default(false);
{
	HX_STACK_LINE(2285)
	super::__construct(null(),null(),null());
	HX_STACK_LINE(2287)
	::haxe::io::Bytes _g = ::haxe::Resource_obj::getBytes(::flixel::addons::text::TypeSound_obj::resourceName);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(2287)
	::openfl::_legacy::utils::ByteArray byteArray = ::openfl::_legacy::utils::ByteArray_obj::fromBytes(_g);		HX_STACK_VAR(byteArray,"byteArray");
	HX_STACK_LINE(2288)
	this->loadCompressedDataFromByteArray(byteArray,byteArray->length,forcePlayAsMusic);
}
;
	return null();
}

//TypeSound_obj::~TypeSound_obj() { }

Dynamic TypeSound_obj::__CreateEmpty() { return  new TypeSound_obj; }
hx::ObjectPtr< TypeSound_obj > TypeSound_obj::__new(::openfl::_legacy::net::URLRequest stream,::openfl::media::SoundLoaderContext context,Dynamic __o_forcePlayAsMusic)
{  hx::ObjectPtr< TypeSound_obj > result = new TypeSound_obj();
	result->__construct(stream,context,__o_forcePlayAsMusic);
	return result;}

Dynamic TypeSound_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TypeSound_obj > result = new TypeSound_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::String TypeSound_obj::resourceName;


TypeSound_obj::TypeSound_obj()
{
}

Dynamic TypeSound_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { return resourceName; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TypeSound_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TypeSound_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("resourceName"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TypeSound_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TypeSound_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TypeSound_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TypeSound_obj::resourceName,"resourceName");
};

#endif

Class TypeSound_obj::__mClass;

void TypeSound_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.text.TypeSound"), hx::TCanCast< TypeSound_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void TypeSound_obj::__boot()
{
	resourceName= HX_CSTRING("__ASSET__:sound_flixel_addons_text_TypeSound");
}

} // end namespace flixel
} // end namespace addons
} // end namespace text
