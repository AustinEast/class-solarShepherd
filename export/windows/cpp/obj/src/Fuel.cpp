#include <hxcpp.h>

#ifndef INCLUDED_Fuel
#include <Fuel.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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

Void Fuel_obj::__construct(Float X,Float Y)
{
HX_STACK_FRAME("Fuel","new",0x55283388,"Fuel.new","Fuel.hx",13,0x959e94e8)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
{
	HX_STACK_LINE(14)
	super::__construct(X,Y,null());
	HX_STACK_LINE(16)
	this->makeGraphic((int)8,(int)8,(int)-1,null(),null());
}
;
	return null();
}

//Fuel_obj::~Fuel_obj() { }

Dynamic Fuel_obj::__CreateEmpty() { return  new Fuel_obj; }
hx::ObjectPtr< Fuel_obj > Fuel_obj::__new(Float X,Float Y)
{  hx::ObjectPtr< Fuel_obj > result = new Fuel_obj();
	result->__construct(X,Y);
	return result;}

Dynamic Fuel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Fuel_obj > result = new Fuel_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


Fuel_obj::Fuel_obj()
{
}

Dynamic Fuel_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Fuel_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Fuel_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Fuel_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Fuel_obj::__mClass,"__mClass");
};

#endif

Class Fuel_obj::__mClass;

void Fuel_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Fuel"), hx::TCanCast< Fuel_obj> ,sStaticFields,sMemberFields,
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

void Fuel_obj::__boot()
{
}

