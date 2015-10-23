#include <hxcpp.h>

#ifndef INCLUDED___ASSET__assets_fonts_nokiafc22_ttf
#include <__ASSET__assets_fonts_nokiafc22_ttf.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_Font
#include <openfl/_legacy/text/Font.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_FontStyle
#include <openfl/_legacy/text/FontStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_FontType
#include <openfl/_legacy/text/FontType.h>
#endif

Void __ASSET__assets_fonts_nokiafc22_ttf_obj::__construct(::String __o_filename,::openfl::_legacy::text::FontStyle style,::openfl::_legacy::text::FontType type)
{
HX_STACK_FRAME("__ASSET__assets_fonts_nokiafc22_ttf","new",0x9dff4251,"__ASSET__assets_fonts_nokiafc22_ttf.new","DefaultAssetLibrary.hx",509,0x0fc48912)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_filename,"filename")
HX_STACK_ARG(style,"style")
HX_STACK_ARG(type,"type")
::String filename = __o_filename.Default(HX_CSTRING(""));
{
	HX_STACK_LINE(509)
	super::__construct(filename,style,type);
}
;
	return null();
}

//__ASSET__assets_fonts_nokiafc22_ttf_obj::~__ASSET__assets_fonts_nokiafc22_ttf_obj() { }

Dynamic __ASSET__assets_fonts_nokiafc22_ttf_obj::__CreateEmpty() { return  new __ASSET__assets_fonts_nokiafc22_ttf_obj; }
hx::ObjectPtr< __ASSET__assets_fonts_nokiafc22_ttf_obj > __ASSET__assets_fonts_nokiafc22_ttf_obj::__new(::String __o_filename,::openfl::_legacy::text::FontStyle style,::openfl::_legacy::text::FontType type)
{  hx::ObjectPtr< __ASSET__assets_fonts_nokiafc22_ttf_obj > result = new __ASSET__assets_fonts_nokiafc22_ttf_obj();
	result->__construct(__o_filename,style,type);
	return result;}

Dynamic __ASSET__assets_fonts_nokiafc22_ttf_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< __ASSET__assets_fonts_nokiafc22_ttf_obj > result = new __ASSET__assets_fonts_nokiafc22_ttf_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::String __ASSET__assets_fonts_nokiafc22_ttf_obj::resourceName;


__ASSET__assets_fonts_nokiafc22_ttf_obj::__ASSET__assets_fonts_nokiafc22_ttf_obj()
{
}

Dynamic __ASSET__assets_fonts_nokiafc22_ttf_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { return resourceName; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic __ASSET__assets_fonts_nokiafc22_ttf_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void __ASSET__assets_fonts_nokiafc22_ttf_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(__ASSET__assets_fonts_nokiafc22_ttf_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(__ASSET__assets_fonts_nokiafc22_ttf_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(__ASSET__assets_fonts_nokiafc22_ttf_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(__ASSET__assets_fonts_nokiafc22_ttf_obj::resourceName,"resourceName");
};

#endif

Class __ASSET__assets_fonts_nokiafc22_ttf_obj::__mClass;

void __ASSET__assets_fonts_nokiafc22_ttf_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("__ASSET__assets_fonts_nokiafc22_ttf"), hx::TCanCast< __ASSET__assets_fonts_nokiafc22_ttf_obj> ,sStaticFields,sMemberFields,
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

void __ASSET__assets_fonts_nokiafc22_ttf_obj::__boot()
{
	resourceName= HX_CSTRING("NME_font___ASSET__assets_fonts_nokiafc22_ttf");
}

