#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Bitmap
#include <openfl/_legacy/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Loader
#include <openfl/_legacy/display/Loader.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_LoaderInfo
#include <openfl/_legacy/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_net_URLLoader
#include <openfl/_legacy/net/URLLoader.h>
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
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_system_LoaderContext
#include <openfl/system/LoaderContext.h>
#endif
namespace openfl{
namespace _legacy{
namespace display{

Void Loader_obj::__construct()
{
HX_STACK_FRAME("openfl._legacy.display.Loader","new",0x08d8c235,"openfl._legacy.display.Loader.new","openfl/_legacy/display/Loader.hx",26,0x567a0778)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(28)
	super::__construct();
	HX_STACK_LINE(30)
	::openfl::_legacy::display::LoaderInfo _g = ::openfl::_legacy::display::LoaderInfo_obj::create(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(30)
	this->contentLoaderInfo = _g;
	HX_STACK_LINE(32)
	this->contentLoaderInfo->__onComplete = this->__onComplete_dyn();
}
;
	return null();
}

//Loader_obj::~Loader_obj() { }

Dynamic Loader_obj::__CreateEmpty() { return  new Loader_obj; }
hx::ObjectPtr< Loader_obj > Loader_obj::__new()
{  hx::ObjectPtr< Loader_obj > result = new Loader_obj();
	result->__construct();
	return result;}

Dynamic Loader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Loader_obj > result = new Loader_obj();
	result->__construct();
	return result;}

Void Loader_obj::load( ::openfl::_legacy::net::URLRequest request,::openfl::system::LoaderContext context){
{
		HX_STACK_FRAME("openfl._legacy.display.Loader","load",0xb38642b1,"openfl._legacy.display.Loader.load","openfl/_legacy/display/Loader.hx",40,0x567a0778)
		HX_STACK_THIS(this)
		HX_STACK_ARG(request,"request")
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(40)
		this->contentLoaderInfo->load(request);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,load,(void))

Void Loader_obj::loadBytes( ::openfl::_legacy::utils::ByteArray bytes,::openfl::system::LoaderContext context){
{
		HX_STACK_FRAME("openfl._legacy.display.Loader","loadBytes",0x6a7ad3fa,"openfl._legacy.display.Loader.loadBytes","openfl/_legacy/display/Loader.hx",47,0x567a0778)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(47)
		if ((this->__onComplete(bytes))){
			HX_STACK_LINE(49)
			::openfl::_legacy::events::Event event = ::openfl::_legacy::events::Event_obj::__new(::openfl::_legacy::events::Event_obj::COMPLETE,null(),null());		HX_STACK_VAR(event,"event");
			HX_STACK_LINE(50)
			event->set_currentTarget(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(51)
			this->contentLoaderInfo->dispatchEvent(event);
		}
		else{
			HX_STACK_LINE(55)
			this->contentLoaderInfo->__dispatchIOErrorEvent();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,loadBytes,(void))

Void Loader_obj::unload( ){
{
		HX_STACK_FRAME("openfl._legacy.display.Loader","unload",0x60bec24a,"openfl._legacy.display.Loader.unload","openfl/_legacy/display/Loader.hx",62,0x567a0778)
		HX_STACK_THIS(this)
		HX_STACK_LINE(64)
		int _g = this->get_numChildren();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(64)
		if (((_g > (int)0))){
			HX_STACK_LINE(66)
			while((true)){
				HX_STACK_LINE(66)
				int _g1 = this->get_numChildren();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(66)
				if ((!(((_g1 > (int)0))))){
					HX_STACK_LINE(66)
					break;
				}
				HX_STACK_LINE(68)
				this->removeChildAt((int)0);
			}
			HX_STACK_LINE(72)
			{
				HX_STACK_LINE(74)
				this->contentLoaderInfo->url = null();
				HX_STACK_LINE(75)
				this->contentLoaderInfo->contentType = null();
				HX_STACK_LINE(76)
				this->contentLoaderInfo->content = null();
				HX_STACK_LINE(77)
				int _g2 = this->contentLoaderInfo->bytesTotal = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(77)
				this->contentLoaderInfo->bytesLoaded = _g2;
				HX_STACK_LINE(78)
				this->contentLoaderInfo->width = (int)0;
				HX_STACK_LINE(79)
				this->contentLoaderInfo->height = (int)0;
			}
			HX_STACK_LINE(83)
			::openfl::_legacy::events::Event event = ::openfl::_legacy::events::Event_obj::__new(::openfl::_legacy::events::Event_obj::UNLOAD,null(),null());		HX_STACK_VAR(event,"event");
			HX_STACK_LINE(84)
			event->set_currentTarget(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(85)
			this->dispatchEvent(event);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,unload,(void))

bool Loader_obj::__onComplete( ::openfl::_legacy::utils::ByteArray bytes){
	HX_STACK_FRAME("openfl._legacy.display.Loader","__onComplete",0x75dcfba3,"openfl._legacy.display.Loader.__onComplete","openfl/_legacy/display/Loader.hx",92,0x567a0778)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(94)
	if (((bytes == null()))){
		HX_STACK_LINE(96)
		return false;
	}
	HX_STACK_LINE(100)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(102)
		::openfl::_legacy::display::BitmapData _g = ::openfl::_legacy::display::BitmapData_obj::loadFromBytes(bytes,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(102)
		this->__image = _g;
		HX_STACK_LINE(103)
		::openfl::_legacy::display::Bitmap bitmap = ::openfl::_legacy::display::Bitmap_obj::__new(this->__image,null(),null());		HX_STACK_VAR(bitmap,"bitmap");
		HX_STACK_LINE(104)
		this->content = bitmap;
		HX_STACK_LINE(105)
		this->contentLoaderInfo->content = bitmap;
		HX_STACK_LINE(107)
		while((true)){
			HX_STACK_LINE(107)
			int _g1 = this->get_numChildren();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(107)
			if ((!(((_g1 > (int)0))))){
				HX_STACK_LINE(107)
				break;
			}
			HX_STACK_LINE(109)
			this->removeChildAt((int)0);
		}
		HX_STACK_LINE(113)
		this->addChild(bitmap);
		HX_STACK_LINE(114)
		return true;
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(118)
				return false;
			}
		}
	}
	HX_STACK_LINE(100)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,__onComplete,return )

Void Loader_obj::contentLoaderInfo_onData( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("openfl._legacy.display.Loader","contentLoaderInfo_onData",0xe2fdc719,"openfl._legacy.display.Loader.contentLoaderInfo_onData","openfl/_legacy/display/Loader.hx",132,0x567a0778)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(134)
		event->stopImmediatePropagation();
		HX_STACK_LINE(135)
		::openfl::_legacy::utils::ByteArray _g = this->contentLoaderInfo->get_bytes();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(135)
		this->__onComplete(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,contentLoaderInfo_onData,(void))


Loader_obj::Loader_obj()
{
}

void Loader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Loader);
	HX_MARK_MEMBER_NAME(content,"content");
	HX_MARK_MEMBER_NAME(contentLoaderInfo,"contentLoaderInfo");
	HX_MARK_MEMBER_NAME(__image,"__image");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Loader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(content,"content");
	HX_VISIT_MEMBER_NAME(contentLoaderInfo,"contentLoaderInfo");
	HX_VISIT_MEMBER_NAME(__image,"__image");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Loader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"unload") ) { return unload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { return content; }
		if (HX_FIELD_EQ(inName,"__image") ) { return __image; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadBytes") ) { return loadBytes_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__onComplete") ) { return __onComplete_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"contentLoaderInfo") ) { return contentLoaderInfo; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"contentLoaderInfo_onData") ) { return contentLoaderInfo_onData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Loader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { content=inValue.Cast< ::openfl::_legacy::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__image") ) { __image=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"contentLoaderInfo") ) { contentLoaderInfo=inValue.Cast< ::openfl::_legacy::display::LoaderInfo >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Loader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("content"));
	outFields->push(HX_CSTRING("contentLoaderInfo"));
	outFields->push(HX_CSTRING("__image"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::display::DisplayObject*/ ,(int)offsetof(Loader_obj,content),HX_CSTRING("content")},
	{hx::fsObject /*::openfl::_legacy::display::LoaderInfo*/ ,(int)offsetof(Loader_obj,contentLoaderInfo),HX_CSTRING("contentLoaderInfo")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(Loader_obj,__image),HX_CSTRING("__image")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("content"),
	HX_CSTRING("contentLoaderInfo"),
	HX_CSTRING("__image"),
	HX_CSTRING("load"),
	HX_CSTRING("loadBytes"),
	HX_CSTRING("unload"),
	HX_CSTRING("__onComplete"),
	HX_CSTRING("contentLoaderInfo_onData"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Loader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Loader_obj::__mClass,"__mClass");
};

#endif

Class Loader_obj::__mClass;

void Loader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._legacy.display.Loader"), hx::TCanCast< Loader_obj> ,sStaticFields,sMemberFields,
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

void Loader_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace display
