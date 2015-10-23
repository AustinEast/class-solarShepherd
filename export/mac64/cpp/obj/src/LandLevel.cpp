#include <hxcpp.h>

#ifndef INCLUDED_LandLevel
#include <LandLevel.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif

Void LandLevel_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("LandLevel","new",0x26db5ceb,"LandLevel.new","LandLevel.hx",15,0x5f74e8e5)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(15)
	super::__construct(MaxSize);
}
;
	return null();
}

//LandLevel_obj::~LandLevel_obj() { }

Dynamic LandLevel_obj::__CreateEmpty() { return  new LandLevel_obj; }
hx::ObjectPtr< LandLevel_obj > LandLevel_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< LandLevel_obj > result = new LandLevel_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic LandLevel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LandLevel_obj > result = new LandLevel_obj();
	result->__construct(inArgs[0]);
	return result;}

Void LandLevel_obj::Level1( ){
{
		HX_STACK_FRAME("LandLevel","Level1",0x267ccea2,"LandLevel.Level1","LandLevel.hx",25,0x5f74e8e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(27)
		::flixel::tile::FlxTilemap _g = ::flixel::tile::FlxTilemap_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(27)
		this->map = _g;
		HX_STACK_LINE(29)
		::String _g1 = ::openfl::_legacy::Assets_obj::getText(HX_CSTRING("assets/data/map1.csv"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		::flixel::tile::FlxTilemap _g2 = this->map->loadMap(_g1,HX_CSTRING("assets/images/Tiles.png"),(int)16,(int)16,null(),null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(29)
		this->add(_g2);
		HX_STACK_LINE(32)
		Float _g3 = this->map->get_width();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(32)
		this->width = _g3;
		HX_STACK_LINE(33)
		Float _g4 = this->map->get_height();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(33)
		this->height = _g4;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LandLevel_obj,Level1,(void))


LandLevel_obj::LandLevel_obj()
{
}

void LandLevel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LandLevel);
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	::flixel::group::FlxTypedGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LandLevel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	::flixel::group::FlxTypedGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic LandLevel_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"Level1") ) { return Level1_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LandLevel_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< ::flixel::tile::FlxTilemap >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LandLevel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("map"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::tile::FlxTilemap*/ ,(int)offsetof(LandLevel_obj,map),HX_CSTRING("map")},
	{hx::fsFloat,(int)offsetof(LandLevel_obj,width),HX_CSTRING("width")},
	{hx::fsFloat,(int)offsetof(LandLevel_obj,height),HX_CSTRING("height")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("map"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("Level1"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LandLevel_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LandLevel_obj::__mClass,"__mClass");
};

#endif

Class LandLevel_obj::__mClass;

void LandLevel_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("LandLevel"), hx::TCanCast< LandLevel_obj> ,sStaticFields,sMemberFields,
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

void LandLevel_obj::__boot()
{
}

