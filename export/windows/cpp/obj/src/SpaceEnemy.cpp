#include <hxcpp.h>

#ifndef INCLUDED_PolarSprite
#include <PolarSprite.h>
#endif
#ifndef INCLUDED_SpaceBullet
#include <SpaceBullet.h>
#endif
#ifndef INCLUDED_SpaceEnemy
#include <SpaceEnemy.h>
#endif
#ifndef INCLUDED_SpaceState
#include <SpaceState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
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
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
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
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif

Void SpaceEnemy_obj::__construct(Dynamic X,Dynamic Y)
{
HX_STACK_FRAME("SpaceEnemy","new",0x752a95b4,"SpaceEnemy.new","SpaceEnemy.hx",37,0x89229c3c)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
{
	HX_STACK_LINE(38)
	super::__construct(X,Y,null());
	HX_STACK_LINE(40)
	this->loadGraphic(HX_CSTRING("assets/images/pongShip.png"),true,(int)16,(int)8,null(),null());
	HX_STACK_LINE(41)
	this->animation->add(HX_CSTRING("polTrue"),Array_obj< int >::__new().Add((int)2).Add((int)3).Add((int)4),(int)60,true);
	HX_STACK_LINE(42)
	this->animation->add(HX_CSTRING("polFalse"),Array_obj< int >::__new().Add((int)7).Add((int)8).Add((int)9),(int)60,true);
	HX_STACK_LINE(43)
	this->set_flipY(true);
	HX_STACK_LINE(46)
	this->_originalX = X;
	HX_STACK_LINE(48)
	this->resetShotClock();
	HX_STACK_LINE(50)
	this->velocity->set_x((int)10);
	HX_STACK_LINE(52)
	this->setPolarity(true);
}
;
	return null();
}

//SpaceEnemy_obj::~SpaceEnemy_obj() { }

Dynamic SpaceEnemy_obj::__CreateEmpty() { return  new SpaceEnemy_obj; }
hx::ObjectPtr< SpaceEnemy_obj > SpaceEnemy_obj::__new(Dynamic X,Dynamic Y)
{  hx::ObjectPtr< SpaceEnemy_obj > result = new SpaceEnemy_obj();
	result->__construct(X,Y);
	return result;}

Dynamic SpaceEnemy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SpaceEnemy_obj > result = new SpaceEnemy_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void SpaceEnemy_obj::update( ){
{
		HX_STACK_FRAME("SpaceEnemy","update",0xaa7dcd35,"SpaceEnemy.update","SpaceEnemy.hx",58,0x89229c3c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(60)
		if (((this->x < (this->_originalX - (int)8)))){
			HX_STACK_LINE(62)
			this->set_x((this->_originalX - (int)8));
			HX_STACK_LINE(63)
			this->velocity->set_x(-(this->velocity->x));
			HX_STACK_LINE(64)
			{
				HX_STACK_LINE(64)
				::flixel::util::FlxPoint _g = this->velocity;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(64)
				Float _g1 = _g->y;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(64)
				_g->set_y((_g1 + (int)1));
				HX_STACK_LINE(64)
				_g1;
			}
		}
		HX_STACK_LINE(68)
		if (((this->x > (this->_originalX + (int)8)))){
			HX_STACK_LINE(70)
			this->set_x((this->_originalX + (int)8));
			HX_STACK_LINE(71)
			this->velocity->set_x(-(this->velocity->x));
		}
		HX_STACK_LINE(75)
		if (((this->y > (::flixel::FlxG_obj::height * 0.05)))){
			HX_STACK_LINE(78)
			hx::SubEq(this->_shotClock,::flixel::FlxG_obj::elapsed);
		}
		HX_STACK_LINE(80)
		if (((this->_shotClock <= (int)0))){
			HX_STACK_LINE(83)
			this->resetShotClock();
			HX_STACK_LINE(85)
			this->switchPolarity();
			HX_STACK_LINE(87)
			::SpaceBullet bullet;		HX_STACK_VAR(bullet,"bullet");
			HX_STACK_LINE(87)
			bullet = hx::TCast< SpaceBullet >::cast((hx::TCast< SpaceState >::cast(::flixel::FlxG_obj::game->_state))->_bullets->recycle(null(),null(),null(),null()));
			HX_STACK_LINE(89)
			bullet->switchPolarity();
			HX_STACK_LINE(91)
			Float _g = this->get_width();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(91)
			Float _g1 = (Float(_g) / Float((int)2));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(91)
			Float _g2 = (this->x + _g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(91)
			Float _g3 = bullet->get_width();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(91)
			Float _g4 = (Float(_g3) / Float((int)2));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(91)
			Float _g5 = (_g2 - _g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(91)
			bullet->reset(_g5,(this->y + (int)10));
			HX_STACK_LINE(93)
			bullet->velocity->set_y((int)65);
			HX_STACK_LINE(95)
			int _g6 = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(95)
			Float _g7 = (Float(_g6) / Float((int)2147483647));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(95)
			Float _g8 = (_g7 * (int)-30);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(95)
			Float _g9 = ((int)1 + _g8);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(95)
			bullet->velocity->set_x(_g9);
		}
		HX_STACK_LINE(98)
		this->super::update();
	}
return null();
}


Void SpaceEnemy_obj::resetShotClock( ){
{
		HX_STACK_FRAME("SpaceEnemy","resetShotClock",0x2f3b11d1,"SpaceEnemy.resetShotClock","SpaceEnemy.hx",105,0x89229c3c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(106)
		int _g = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(106)
		Float _g1 = (Float(_g) / Float((int)2147483647));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(106)
		Float _g2 = (_g1 * (int)10);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(106)
		Float _g3 = ((int)1 + _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(106)
		this->_shotClock = _g3;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpaceEnemy_obj,resetShotClock,(void))


SpaceEnemy_obj::SpaceEnemy_obj()
{
}

void SpaceEnemy_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SpaceEnemy);
	HX_MARK_MEMBER_NAME(_shotClock,"_shotClock");
	HX_MARK_MEMBER_NAME(_originalX,"_originalX");
	HX_MARK_MEMBER_NAME(_bullets,"_bullets");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SpaceEnemy_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_shotClock,"_shotClock");
	HX_VISIT_MEMBER_NAME(_originalX,"_originalX");
	HX_VISIT_MEMBER_NAME(_bullets,"_bullets");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SpaceEnemy_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_bullets") ) { return _bullets; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_shotClock") ) { return _shotClock; }
		if (HX_FIELD_EQ(inName,"_originalX") ) { return _originalX; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resetShotClock") ) { return resetShotClock_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SpaceEnemy_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_bullets") ) { _bullets=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_shotClock") ) { _shotClock=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_originalX") ) { _originalX=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SpaceEnemy_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_shotClock"));
	outFields->push(HX_CSTRING("_originalX"));
	outFields->push(HX_CSTRING("_bullets"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(SpaceEnemy_obj,_shotClock),HX_CSTRING("_shotClock")},
	{hx::fsFloat,(int)offsetof(SpaceEnemy_obj,_originalX),HX_CSTRING("_originalX")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(SpaceEnemy_obj,_bullets),HX_CSTRING("_bullets")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_shotClock"),
	HX_CSTRING("_originalX"),
	HX_CSTRING("_bullets"),
	HX_CSTRING("update"),
	HX_CSTRING("resetShotClock"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SpaceEnemy_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SpaceEnemy_obj::__mClass,"__mClass");
};

#endif

Class SpaceEnemy_obj::__mClass;

void SpaceEnemy_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("SpaceEnemy"), hx::TCanCast< SpaceEnemy_obj> ,sStaticFields,sMemberFields,
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

void SpaceEnemy_obj::__boot()
{
}

