#include <hxcpp.h>

#ifndef INCLUDED_Reg
#include <Reg.h>
#endif
#ifndef INCLUDED_Star
#include <Star.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif

Void Star_obj::__construct()
{
HX_STACK_FRAME("Star","new",0xee1c91e4,"Star.new","Star.hx",13,0x0237360c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(14)
	Float _g1 = (_g * ::flixel::FlxG_obj::width);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(14)
	int _g2 = ::Math_obj::floor(_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(14)
	Float _g3 = ::Math_obj::random();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(14)
	Float _g4 = (_g3 * ::flixel::FlxG_obj::height);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(14)
	int _g5 = ::Math_obj::floor(_g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(14)
	super::__construct(_g2,_g5,null());
	HX_STACK_LINE(15)
	Float i = ::Math_obj::random();		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(16)
	if (((i > 0.75))){
		HX_STACK_LINE(16)
		this->makeGraphic((int)2,(int)2,::Reg_obj::colors->__get((int)1),null(),null());
	}
	else{
		HX_STACK_LINE(16)
		this->makeGraphic((int)1,(int)1,::Reg_obj::colors->__get((int)1),null(),null());
	}
	HX_STACK_LINE(17)
	this->velocity->set_y(((int)25 + (i * (int)125)));
}
;
	return null();
}

//Star_obj::~Star_obj() { }

Dynamic Star_obj::__CreateEmpty() { return  new Star_obj; }
hx::ObjectPtr< Star_obj > Star_obj::__new()
{  hx::ObjectPtr< Star_obj > result = new Star_obj();
	result->__construct();
	return result;}

Dynamic Star_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Star_obj > result = new Star_obj();
	result->__construct();
	return result;}

Void Star_obj::update( ){
{
		HX_STACK_FRAME("Star","update",0x4fab8f05,"Star.update","Star.hx",21,0x0237360c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(22)
		if (((this->y > ::flixel::FlxG_obj::height))){
			HX_STACK_LINE(22)
			this->set_y((int)-1);
		}
		HX_STACK_LINE(23)
		this->super::update();
	}
return null();
}



Star_obj::Star_obj()
{
}

Dynamic Star_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Star_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Star_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Star_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Star_obj::__mClass,"__mClass");
};

#endif

Class Star_obj::__mClass;

void Star_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Star"), hx::TCanCast< Star_obj> ,sStaticFields,sMemberFields,
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

void Star_obj::__boot()
{
}

