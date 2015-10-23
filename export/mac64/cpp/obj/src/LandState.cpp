#include <hxcpp.h>

#ifndef INCLUDED_LandLevel
#include <LandLevel.h>
#endif
#ifndef INCLUDED_LandPlayer
#include <LandPlayer.h>
#endif
#ifndef INCLUDED_LandState
#include <LandState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
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
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif

Void LandState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("LandState","new",0xd3b387f8,"LandState.new","LandState.hx",18,0x987b9e78)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(18)
	super::__construct(MaxSize);
}
;
	return null();
}

//LandState_obj::~LandState_obj() { }

Dynamic LandState_obj::__CreateEmpty() { return  new LandState_obj; }
hx::ObjectPtr< LandState_obj > LandState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< LandState_obj > result = new LandState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic LandState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LandState_obj > result = new LandState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void LandState_obj::create( ){
{
		HX_STACK_FRAME("LandState","create",0x28947e64,"LandState.create","LandState.hx",26,0x987b9e78)
		HX_STACK_THIS(this)
		HX_STACK_LINE(27)
		::flixel::FlxG_obj::camera->bgColor = (int)-15447724;
		HX_STACK_LINE(30)
		::LandLevel _g = ::LandLevel_obj::__new(null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(30)
		this->level = _g;
		HX_STACK_LINE(31)
		this->level->Level1();
		HX_STACK_LINE(32)
		::LandPlayer _g1 = ::LandPlayer_obj::__new((int)20,(int)20);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(32)
		this->player = _g1;
		HX_STACK_LINE(35)
		this->add(this->level);
		HX_STACK_LINE(36)
		this->add(this->player);
		HX_STACK_LINE(39)
		{
			HX_STACK_LINE(39)
			::flixel::util::FlxRect _this = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(39)
			_this->x = (int)0;
			HX_STACK_LINE(39)
			_this->y = (int)0;
			HX_STACK_LINE(39)
			_this->width = this->level->width;
			HX_STACK_LINE(39)
			_this->height = this->level->height;
			HX_STACK_LINE(39)
			_this;
		}
		HX_STACK_LINE(42)
		::flixel::FlxG_obj::camera->setBounds((int)0,(int)0,this->level->width,this->level->height,null());
		HX_STACK_LINE(45)
		::flixel::FlxG_obj::camera->follow(this->player,(int)1,null(),null());
		HX_STACK_LINE(47)
		this->super::create();
	}
return null();
}


Void LandState_obj::destroy( ){
{
		HX_STACK_FRAME("LandState","destroy",0x6c759092,"LandState.destroy","LandState.hx",56,0x987b9e78)
		HX_STACK_THIS(this)
		HX_STACK_LINE(56)
		this->super::destroy();
	}
return null();
}


Void LandState_obj::update( ){
{
		HX_STACK_FRAME("LandState","update",0x338a9d71,"LandState.update","LandState.hx",63,0x987b9e78)
		HX_STACK_THIS(this)
		HX_STACK_LINE(64)
		this->super::update();
		HX_STACK_LINE(66)
		::flixel::FlxG_obj::overlap(this->player,this->level,null(),::flixel::FlxObject_obj::separate_dyn());
	}
return null();
}



LandState_obj::LandState_obj()
{
}

void LandState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LandState);
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_MEMBER_NAME(level,"level");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LandState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(level,"level");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic LandState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { return level; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LandState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { level=inValue.Cast< ::LandLevel >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::LandPlayer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LandState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("player"));
	outFields->push(HX_CSTRING("level"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::LandPlayer*/ ,(int)offsetof(LandState_obj,player),HX_CSTRING("player")},
	{hx::fsObject /*::LandLevel*/ ,(int)offsetof(LandState_obj,level),HX_CSTRING("level")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("player"),
	HX_CSTRING("level"),
	HX_CSTRING("create"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LandState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LandState_obj::__mClass,"__mClass");
};

#endif

Class LandState_obj::__mClass;

void LandState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("LandState"), hx::TCanCast< LandState_obj> ,sStaticFields,sMemberFields,
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

void LandState_obj::__boot()
{
}

