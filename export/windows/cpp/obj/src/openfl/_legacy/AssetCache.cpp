#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_AssetCache
#include <openfl/_legacy/AssetCache.h>
#endif
#ifndef INCLUDED_openfl__legacy_IAssetCache
#include <openfl/_legacy/IAssetCache.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
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
#ifndef INCLUDED_openfl__legacy_text_Font
#include <openfl/_legacy/text/Font.h>
#endif
namespace openfl{
namespace _legacy{

Void AssetCache_obj::__construct()
{
HX_STACK_FRAME("openfl._legacy.AssetCache","new",0x60cebf28,"openfl._legacy.AssetCache.new","openfl/_legacy/Assets.hx",1447,0x9276b055)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(1455)
	this->__enabled = true;
	HX_STACK_LINE(1460)
	::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1460)
	this->bitmapData = _g;
	HX_STACK_LINE(1461)
	::haxe::ds::StringMap _g1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(1461)
	this->font = _g1;
	HX_STACK_LINE(1462)
	::haxe::ds::StringMap _g2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(1462)
	this->sound = _g2;
}
;
	return null();
}

//AssetCache_obj::~AssetCache_obj() { }

Dynamic AssetCache_obj::__CreateEmpty() { return  new AssetCache_obj; }
hx::ObjectPtr< AssetCache_obj > AssetCache_obj::__new()
{  hx::ObjectPtr< AssetCache_obj > result = new AssetCache_obj();
	result->__construct();
	return result;}

Dynamic AssetCache_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetCache_obj > result = new AssetCache_obj();
	result->__construct();
	return result;}

hx::Object *AssetCache_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::_legacy::IAssetCache_obj)) return operator ::openfl::_legacy::IAssetCache_obj *();
	return super::__ToInterface(inType);
}

Void AssetCache_obj::clear( ::String prefix){
{
		HX_STACK_FRAME("openfl._legacy.AssetCache","clear",0xf085a255,"openfl._legacy.AssetCache.clear","openfl/_legacy/Assets.hx",1469,0x9276b055)
		HX_STACK_THIS(this)
		HX_STACK_ARG(prefix,"prefix")
		HX_STACK_LINE(1469)
		if (((prefix == null()))){
			HX_STACK_LINE(1471)
			::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1471)
			this->bitmapData = _g;
			HX_STACK_LINE(1472)
			::haxe::ds::StringMap _g1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1472)
			this->font = _g1;
			HX_STACK_LINE(1473)
			::haxe::ds::StringMap _g2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1473)
			this->sound = _g2;
		}
		else{
			HX_STACK_LINE(1477)
			Dynamic keys = this->bitmapData->keys();		HX_STACK_VAR(keys,"keys");
			HX_STACK_LINE(1479)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(keys);  __it->hasNext(); ){
				::String key = __it->next();
				if ((::StringTools_obj::startsWith(key,prefix))){
					HX_STACK_LINE(1483)
					this->bitmapData->remove(key);
				}
;
			}
			HX_STACK_LINE(1489)
			Dynamic keys1 = this->font->keys();		HX_STACK_VAR(keys1,"keys1");
			HX_STACK_LINE(1491)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(keys1);  __it->hasNext(); ){
				::String key = __it->next();
				if ((::StringTools_obj::startsWith(key,prefix))){
					HX_STACK_LINE(1495)
					this->font->remove(key);
				}
;
			}
			HX_STACK_LINE(1501)
			Dynamic keys2 = this->sound->keys();		HX_STACK_VAR(keys2,"keys2");
			HX_STACK_LINE(1503)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(keys2);  __it->hasNext(); ){
				::String key = __it->next();
				if ((::StringTools_obj::startsWith(key,prefix))){
					HX_STACK_LINE(1507)
					this->sound->remove(key);
				}
;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,clear,(void))

::openfl::_legacy::display::BitmapData AssetCache_obj::getBitmapData( ::String id){
	HX_STACK_FRAME("openfl._legacy.AssetCache","getBitmapData",0x82a74ab7,"openfl._legacy.AssetCache.getBitmapData","openfl/_legacy/Assets.hx",1520,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1520)
	return this->bitmapData->get(id);
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,getBitmapData,return )

::openfl::_legacy::text::Font AssetCache_obj::getFont( ::String id){
	HX_STACK_FRAME("openfl._legacy.AssetCache","getFont",0xc1f1004d,"openfl._legacy.AssetCache.getFont","openfl/_legacy/Assets.hx",1527,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1527)
	return this->font->get(id);
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,getFont,return )

::openfl::_legacy::media::Sound AssetCache_obj::getSound( ::String id){
	HX_STACK_FRAME("openfl._legacy.AssetCache","getSound",0x6d2a1891,"openfl._legacy.AssetCache.getSound","openfl/_legacy/Assets.hx",1534,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1534)
	return this->sound->get(id);
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,getSound,return )

bool AssetCache_obj::hasBitmapData( ::String id){
	HX_STACK_FRAME("openfl._legacy.AssetCache","hasBitmapData",0x408ba67b,"openfl._legacy.AssetCache.hasBitmapData","openfl/_legacy/Assets.hx",1541,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1541)
	return this->bitmapData->exists(id);
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,hasBitmapData,return )

bool AssetCache_obj::hasFont( ::String id){
	HX_STACK_FRAME("openfl._legacy.AssetCache","hasFont",0xbeb27111,"openfl._legacy.AssetCache.hasFont","openfl/_legacy/Assets.hx",1548,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1548)
	return this->font->exists(id);
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,hasFont,return )

bool AssetCache_obj::hasSound( ::String id){
	HX_STACK_FRAME("openfl._legacy.AssetCache","hasSound",0x99ab534d,"openfl._legacy.AssetCache.hasSound","openfl/_legacy/Assets.hx",1555,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1555)
	return this->sound->exists(id);
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,hasSound,return )

bool AssetCache_obj::removeBitmapData( ::String id){
	HX_STACK_FRAME("openfl._legacy.AssetCache","removeBitmapData",0x839b4755,"openfl._legacy.AssetCache.removeBitmapData","openfl/_legacy/Assets.hx",1562,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1562)
	return this->bitmapData->remove(id);
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,removeBitmapData,return )

bool AssetCache_obj::removeFont( ::String id){
	HX_STACK_FRAME("openfl._legacy.AssetCache","removeFont",0x5927926b,"openfl._legacy.AssetCache.removeFont","openfl/_legacy/Assets.hx",1569,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1569)
	return this->font->remove(id);
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,removeFont,return )

bool AssetCache_obj::removeSound( ::String id){
	HX_STACK_FRAME("openfl._legacy.AssetCache","removeSound",0x25b360b3,"openfl._legacy.AssetCache.removeSound","openfl/_legacy/Assets.hx",1576,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1576)
	return this->sound->remove(id);
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,removeSound,return )

Void AssetCache_obj::setBitmapData( ::String id,::openfl::_legacy::display::BitmapData bitmapData){
{
		HX_STACK_FRAME("openfl._legacy.AssetCache","setBitmapData",0xc7ad2cc3,"openfl._legacy.AssetCache.setBitmapData","openfl/_legacy/Assets.hx",1583,0x9276b055)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(bitmapData,"bitmapData")
		HX_STACK_LINE(1583)
		this->bitmapData->set(id,bitmapData);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AssetCache_obj,setBitmapData,(void))

Void AssetCache_obj::setFont( ::String id,::openfl::_legacy::text::Font font){
{
		HX_STACK_FRAME("openfl._legacy.AssetCache","setFont",0xb4f29159,"openfl._legacy.AssetCache.setFont","openfl/_legacy/Assets.hx",1590,0x9276b055)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(font,"font")
		HX_STACK_LINE(1590)
		this->font->set(id,font);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AssetCache_obj,setFont,(void))

Void AssetCache_obj::setSound( ::String id,::openfl::_legacy::media::Sound sound){
{
		HX_STACK_FRAME("openfl._legacy.AssetCache","setSound",0x1b877205,"openfl._legacy.AssetCache.setSound","openfl/_legacy/Assets.hx",1597,0x9276b055)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(sound,"sound")
		HX_STACK_LINE(1597)
		this->sound->set(id,sound);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AssetCache_obj,setSound,(void))

bool AssetCache_obj::get_enabled( ){
	HX_STACK_FRAME("openfl._legacy.AssetCache","get_enabled",0xaade5b60,"openfl._legacy.AssetCache.get_enabled","openfl/_legacy/Assets.hx",1611,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1611)
	return this->__enabled;
}


HX_DEFINE_DYNAMIC_FUNC0(AssetCache_obj,get_enabled,return )

bool AssetCache_obj::set_enabled( bool value){
	HX_STACK_FRAME("openfl._legacy.AssetCache","set_enabled",0xb54b626c,"openfl._legacy.AssetCache.set_enabled","openfl/_legacy/Assets.hx",1618,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1618)
	return this->__enabled = value;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,set_enabled,return )


AssetCache_obj::AssetCache_obj()
{
}

void AssetCache_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetCache);
	HX_MARK_MEMBER_NAME(bitmapData,"bitmapData");
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(sound,"sound");
	HX_MARK_MEMBER_NAME(__enabled,"__enabled");
	HX_MARK_END_CLASS();
}

void AssetCache_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitmapData,"bitmapData");
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(sound,"sound");
	HX_VISIT_MEMBER_NAME(__enabled,"__enabled");
}

Dynamic AssetCache_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { return font; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sound") ) { return sound; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return get_enabled(); }
		if (HX_FIELD_EQ(inName,"getFont") ) { return getFont_dyn(); }
		if (HX_FIELD_EQ(inName,"hasFont") ) { return hasFont_dyn(); }
		if (HX_FIELD_EQ(inName,"setFont") ) { return setFont_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getSound") ) { return getSound_dyn(); }
		if (HX_FIELD_EQ(inName,"hasSound") ) { return hasSound_dyn(); }
		if (HX_FIELD_EQ(inName,"setSound") ) { return setSound_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__enabled") ) { return __enabled; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { return bitmapData; }
		if (HX_FIELD_EQ(inName,"removeFont") ) { return removeFont_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeSound") ) { return removeSound_dyn(); }
		if (HX_FIELD_EQ(inName,"get_enabled") ) { return get_enabled_dyn(); }
		if (HX_FIELD_EQ(inName,"set_enabled") ) { return set_enabled_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { return getBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"hasBitmapData") ) { return hasBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"setBitmapData") ) { return setBitmapData_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"removeBitmapData") ) { return removeBitmapData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AssetCache_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { font=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sound") ) { sound=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return set_enabled(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__enabled") ) { __enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { bitmapData=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetCache_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bitmapData"));
	outFields->push(HX_CSTRING("enabled"));
	outFields->push(HX_CSTRING("font"));
	outFields->push(HX_CSTRING("sound"));
	outFields->push(HX_CSTRING("__enabled"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetCache_obj,bitmapData),HX_CSTRING("bitmapData")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetCache_obj,font),HX_CSTRING("font")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetCache_obj,sound),HX_CSTRING("sound")},
	{hx::fsBool,(int)offsetof(AssetCache_obj,__enabled),HX_CSTRING("__enabled")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bitmapData"),
	HX_CSTRING("font"),
	HX_CSTRING("sound"),
	HX_CSTRING("__enabled"),
	HX_CSTRING("clear"),
	HX_CSTRING("getBitmapData"),
	HX_CSTRING("getFont"),
	HX_CSTRING("getSound"),
	HX_CSTRING("hasBitmapData"),
	HX_CSTRING("hasFont"),
	HX_CSTRING("hasSound"),
	HX_CSTRING("removeBitmapData"),
	HX_CSTRING("removeFont"),
	HX_CSTRING("removeSound"),
	HX_CSTRING("setBitmapData"),
	HX_CSTRING("setFont"),
	HX_CSTRING("setSound"),
	HX_CSTRING("get_enabled"),
	HX_CSTRING("set_enabled"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetCache_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetCache_obj::__mClass,"__mClass");
};

#endif

Class AssetCache_obj::__mClass;

void AssetCache_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._legacy.AssetCache"), hx::TCanCast< AssetCache_obj> ,sStaticFields,sMemberFields,
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

void AssetCache_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _legacy
