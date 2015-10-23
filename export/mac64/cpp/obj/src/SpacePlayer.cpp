#include <hxcpp.h>

#ifndef INCLUDED_SpacePlayer
#include <SpacePlayer.h>
#endif
#ifndef INCLUDED_SpaceSprite
#include <SpaceSprite.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif

Void SpacePlayer_obj::__construct(Dynamic X,Dynamic Y)
{
HX_STACK_FRAME("SpacePlayer","new",0xb975dd19,"SpacePlayer.new","SpacePlayer.hx",9,0xe1d60877)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
{
	HX_STACK_LINE(16)
	this->_hurtCounter = (int)0;
	HX_STACK_LINE(13)
	this->RUN_SPEED = (int)120;
	HX_STACK_LINE(12)
	this->MAX_HEALTH = (int)10;
	HX_STACK_LINE(22)
	super::__construct(X,Y,null());
	HX_STACK_LINE(25)
	this->loadGraphic(HX_CSTRING("assets/images/pongShip.png"),true,(int)16,(int)8,null(),null());
	HX_STACK_LINE(26)
	this->animation->add(HX_CSTRING("polTrue"),Array_obj< int >::__new().Add((int)2).Add((int)3).Add((int)4),(int)60,true);
	HX_STACK_LINE(27)
	this->animation->add(HX_CSTRING("polFalse"),Array_obj< int >::__new().Add((int)7).Add((int)8).Add((int)9),(int)60,true);
	HX_STACK_LINE(28)
	this->maxVelocity->set_x(this->RUN_SPEED);
	HX_STACK_LINE(30)
	this->setPolarity(true);
}
;
	return null();
}

//SpacePlayer_obj::~SpacePlayer_obj() { }

Dynamic SpacePlayer_obj::__CreateEmpty() { return  new SpacePlayer_obj; }
hx::ObjectPtr< SpacePlayer_obj > SpacePlayer_obj::__new(Dynamic X,Dynamic Y)
{  hx::ObjectPtr< SpacePlayer_obj > result = new SpacePlayer_obj();
	result->__construct(X,Y);
	return result;}

Dynamic SpacePlayer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SpacePlayer_obj > result = new SpacePlayer_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void SpacePlayer_obj::update( ){
{
		HX_STACK_FRAME("SpacePlayer","update",0x17fb72f0,"SpacePlayer.update","SpacePlayer.hx",37,0xe1d60877)
		HX_STACK_THIS(this)
		HX_STACK_LINE(38)
		this->velocity->set_x((int)0);
		HX_STACK_LINE(40)
		if ((::flixel::FlxG_obj::keys->checkStatus((int)37,::flixel::FlxG_obj::keys->pressed->checkStatus))){
			HX_STACK_LINE(42)
			this->velocity->set_x(-(this->RUN_SPEED));
		}
		else{
			HX_STACK_LINE(45)
			if ((::flixel::FlxG_obj::keys->checkStatus((int)39,::flixel::FlxG_obj::keys->pressed->checkStatus))){
				HX_STACK_LINE(47)
				this->velocity->set_x(this->RUN_SPEED);
			}
		}
		HX_STACK_LINE(50)
		if ((::flixel::FlxG_obj::keys->checkStatus((int)32,::flixel::FlxG_obj::keys->justPressed->checkStatus))){
			HX_STACK_LINE(52)
			this->switchPolarity();
		}
		HX_STACK_LINE(55)
		this->super::update();
	}
return null();
}



SpacePlayer_obj::SpacePlayer_obj()
{
}

Dynamic SpacePlayer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"RUN_SPEED") ) { return RUN_SPEED; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"MAX_HEALTH") ) { return MAX_HEALTH; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_hurtCounter") ) { return _hurtCounter; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SpacePlayer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"RUN_SPEED") ) { RUN_SPEED=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"MAX_HEALTH") ) { MAX_HEALTH=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_hurtCounter") ) { _hurtCounter=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SpacePlayer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("MAX_HEALTH"));
	outFields->push(HX_CSTRING("RUN_SPEED"));
	outFields->push(HX_CSTRING("_hurtCounter"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(SpacePlayer_obj,MAX_HEALTH),HX_CSTRING("MAX_HEALTH")},
	{hx::fsInt,(int)offsetof(SpacePlayer_obj,RUN_SPEED),HX_CSTRING("RUN_SPEED")},
	{hx::fsInt,(int)offsetof(SpacePlayer_obj,_hurtCounter),HX_CSTRING("_hurtCounter")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("MAX_HEALTH"),
	HX_CSTRING("RUN_SPEED"),
	HX_CSTRING("_hurtCounter"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SpacePlayer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SpacePlayer_obj::__mClass,"__mClass");
};

#endif

Class SpacePlayer_obj::__mClass;

void SpacePlayer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("SpacePlayer"), hx::TCanCast< SpacePlayer_obj> ,sStaticFields,sMemberFields,
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

void SpacePlayer_obj::__boot()
{
}

