#include <hxcpp.h>

#ifndef INCLUDED_LandPlayer
#include <LandPlayer.h>
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

Void LandPlayer_obj::__construct(Float X,Float Y)
{
HX_STACK_FRAME("LandPlayer","new",0x5ddca2be,"LandPlayer.new","LandPlayer.hx",11,0xbdd67e72)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
{
	HX_STACK_LINE(24)
	this->meleeTrue = false;
	HX_STACK_LINE(23)
	this->meleeAnim = false;
	HX_STACK_LINE(22)
	this->_hurtCounter = (int)0;
	HX_STACK_LINE(19)
	this->GRAVITY = (int)400;
	HX_STACK_LINE(18)
	this->JUMP_SPEED = (int)200;
	HX_STACK_LINE(17)
	this->SPRINT_SPEED = (int)200;
	HX_STACK_LINE(16)
	this->RUN_SPEED = (int)80;
	HX_STACK_LINE(15)
	this->ACCELERATION = (int)400;
	HX_STACK_LINE(14)
	this->MAX_HEALTH = (int)10;
	HX_STACK_LINE(32)
	super::__construct(X,Y,null());
	HX_STACK_LINE(35)
	this->drag->set((this->RUN_SPEED * (int)5),(this->JUMP_SPEED * (int)2));
	HX_STACK_LINE(36)
	this->maxVelocity->set(this->RUN_SPEED,this->JUMP_SPEED);
	HX_STACK_LINE(37)
	this->acceleration->set_y(this->GRAVITY);
	HX_STACK_LINE(40)
	this->health = this->MAX_HEALTH;
	HX_STACK_LINE(44)
	this->loadGraphic(HX_CSTRING("assets/images/Dog.png"),true,(int)16,(int)16,null(),null());
	HX_STACK_LINE(48)
	this->set_width((int)12);
	HX_STACK_LINE(49)
	this->set_height((int)16);
	HX_STACK_LINE(52)
	this->offset->set_x((int)2);
	HX_STACK_LINE(55)
	this->animation->add(HX_CSTRING("idle"),Array_obj< int >::__new().Add((int)0).Add((int)1),(int)5,true);
	HX_STACK_LINE(56)
	this->animation->add(HX_CSTRING("walk"),Array_obj< int >::__new().Add((int)7).Add((int)8).Add((int)9).Add((int)10).Add((int)11),(int)10,true);
	HX_STACK_LINE(57)
	this->animation->add(HX_CSTRING("run"),Array_obj< int >::__new().Add((int)2).Add((int)3).Add((int)4).Add((int)5).Add((int)6),(int)10,true);
	HX_STACK_LINE(58)
	this->animation->add(HX_CSTRING("jump"),Array_obj< int >::__new().Add((int)3).Add((int)4),(int)4,false);
	HX_STACK_LINE(59)
	this->animation->add(HX_CSTRING("fall"),Array_obj< int >::__new().Add((int)5),(int)0,false);
	HX_STACK_LINE(60)
	this->animation->add(HX_CSTRING("melee"),Array_obj< int >::__new().Add((int)12).Add((int)13).Add((int)14),(int)5,false);
	HX_STACK_LINE(61)
	this->animation->add(HX_CSTRING("hurt"),Array_obj< int >::__new().Add((int)3),(int)0,false);
	HX_STACK_LINE(62)
	this->animation->add(HX_CSTRING("dead"),Array_obj< int >::__new().Add((int)5),(int)0,false);
}
;
	return null();
}

//LandPlayer_obj::~LandPlayer_obj() { }

Dynamic LandPlayer_obj::__CreateEmpty() { return  new LandPlayer_obj; }
hx::ObjectPtr< LandPlayer_obj > LandPlayer_obj::__new(Float X,Float Y)
{  hx::ObjectPtr< LandPlayer_obj > result = new LandPlayer_obj();
	result->__construct(X,Y);
	return result;}

Dynamic LandPlayer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LandPlayer_obj > result = new LandPlayer_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void LandPlayer_obj::update( ){
{
		HX_STACK_FRAME("LandPlayer","update",0x5b6e026b,"LandPlayer.update","LandPlayer.hx",69,0xbdd67e72)
		HX_STACK_THIS(this)
		HX_STACK_LINE(70)
		this->acceleration->set_x((int)0);
		HX_STACK_LINE(72)
		if ((::flixel::FlxG_obj::keys->checkStatus((int)37,::flixel::FlxG_obj::keys->pressed->checkStatus))){
			HX_STACK_LINE(74)
			this->acceleration->set_x(-(this->ACCELERATION));
			HX_STACK_LINE(75)
			this->set_flipX(true);
		}
		else{
			HX_STACK_LINE(77)
			if ((::flixel::FlxG_obj::keys->checkStatus((int)39,::flixel::FlxG_obj::keys->pressed->checkStatus))){
				HX_STACK_LINE(79)
				this->acceleration->set_x(this->ACCELERATION);
				HX_STACK_LINE(80)
				this->set_flipX(false);
			}
		}
		HX_STACK_LINE(83)
		if (((this->_hurtCounter > (int)0))){
			HX_STACK_LINE(85)
			this->animation->play(HX_CSTRING("hurt"),null(),null());
		}
		else{
			HX_STACK_LINE(87)
			if (((this->meleeTrue == true))){
				HX_STACK_LINE(89)
				if (((this->velocity->y == (int)0))){
					HX_STACK_LINE(91)
					this->meleeTrue = false;
				}
				else{
					HX_STACK_LINE(93)
					if (((this->meleeAnim == true))){
						HX_STACK_LINE(95)
						this->animation->play(HX_CSTRING("melee"),null(),null());
						HX_STACK_LINE(96)
						this->meleeAnim = false;
					}
				}
			}
			else{
				HX_STACK_LINE(101)
				if (((this->velocity->y < (int)0))){
					HX_STACK_LINE(103)
					this->animation->play(HX_CSTRING("jump"),null(),null());
				}
				else{
					HX_STACK_LINE(105)
					if (((this->velocity->y > (int)0))){
						HX_STACK_LINE(107)
						this->animation->play(HX_CSTRING("fall"),null(),null());
					}
					else{
						HX_STACK_LINE(111)
						if (((this->velocity->x == (int)0))){
							HX_STACK_LINE(113)
							this->animation->play(HX_CSTRING("idle"),null(),null());
						}
						else{
							HX_STACK_LINE(117)
							if (((bool((this->velocity->x > (int)130)) || bool((this->velocity->x < (int)-130))))){
								HX_STACK_LINE(119)
								this->animation->play(HX_CSTRING("run"),null(),null());
							}
							else{
								HX_STACK_LINE(123)
								this->animation->play(HX_CSTRING("walk"),null(),null());
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(129)
		if (((  ((::flixel::FlxG_obj::keys->checkStatus((int)88,::flixel::FlxG_obj::keys->justPressed->checkStatus))) ? bool((((int(this->touching) & int((int)4096))) > (int)0)) : bool(false) ))){
			HX_STACK_LINE(131)
			this->velocity->set_y(-(this->JUMP_SPEED));
		}
		HX_STACK_LINE(133)
		if (((  ((::flixel::FlxG_obj::keys->checkStatus((int)88,::flixel::FlxG_obj::keys->justReleased->checkStatus))) ? bool((this->velocity->y < (int)0)) : bool(false) ))){
			HX_STACK_LINE(135)
			this->velocity->set_y((Float(this->velocity->y) / Float((int)2)));
		}
		HX_STACK_LINE(138)
		if ((::flixel::FlxG_obj::keys->checkStatus((int)67,::flixel::FlxG_obj::keys->pressed->checkStatus))){
			HX_STACK_LINE(140)
			this->maxVelocity->set_x(this->SPRINT_SPEED);
		}
		else{
			HX_STACK_LINE(144)
			this->maxVelocity->set_x(this->RUN_SPEED);
		}
		HX_STACK_LINE(147)
		if (((  ((::flixel::FlxG_obj::keys->checkStatus((int)90,::flixel::FlxG_obj::keys->justPressed->checkStatus))) ? bool((this->velocity->y == (int)0)) : bool(false) ))){
			HX_STACK_LINE(149)
			if (((this->flipX == true))){
				HX_STACK_LINE(151)
				this->velocity->set_y((int)-75);
				HX_STACK_LINE(152)
				this->acceleration->set_x((int)-1600);
				HX_STACK_LINE(153)
				{
					HX_STACK_LINE(153)
					::flixel::util::FlxPoint _g = this->velocity;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(153)
					_g->set_x((_g->x + (int)-700));
				}
				HX_STACK_LINE(154)
				this->meleeTrue = true;
				HX_STACK_LINE(155)
				this->meleeAnim = true;
			}
			else{
				HX_STACK_LINE(159)
				this->velocity->set_y((int)-75);
				HX_STACK_LINE(160)
				this->acceleration->set_x((int)1600);
				HX_STACK_LINE(161)
				{
					HX_STACK_LINE(161)
					::flixel::util::FlxPoint _g = this->velocity;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(161)
					_g->set_x((_g->x + (int)700));
				}
				HX_STACK_LINE(162)
				this->meleeTrue = true;
				HX_STACK_LINE(163)
				this->meleeAnim = true;
			}
		}
		HX_STACK_LINE(167)
		this->super::update();
	}
return null();
}



LandPlayer_obj::LandPlayer_obj()
{
}

Dynamic LandPlayer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"GRAVITY") ) { return GRAVITY; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"RUN_SPEED") ) { return RUN_SPEED; }
		if (HX_FIELD_EQ(inName,"meleeAnim") ) { return meleeAnim; }
		if (HX_FIELD_EQ(inName,"meleeTrue") ) { return meleeTrue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"MAX_HEALTH") ) { return MAX_HEALTH; }
		if (HX_FIELD_EQ(inName,"JUMP_SPEED") ) { return JUMP_SPEED; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ACCELERATION") ) { return ACCELERATION; }
		if (HX_FIELD_EQ(inName,"SPRINT_SPEED") ) { return SPRINT_SPEED; }
		if (HX_FIELD_EQ(inName,"_hurtCounter") ) { return _hurtCounter; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LandPlayer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"GRAVITY") ) { GRAVITY=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"RUN_SPEED") ) { RUN_SPEED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"meleeAnim") ) { meleeAnim=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"meleeTrue") ) { meleeTrue=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"MAX_HEALTH") ) { MAX_HEALTH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"JUMP_SPEED") ) { JUMP_SPEED=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ACCELERATION") ) { ACCELERATION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SPRINT_SPEED") ) { SPRINT_SPEED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_hurtCounter") ) { _hurtCounter=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LandPlayer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("MAX_HEALTH"));
	outFields->push(HX_CSTRING("ACCELERATION"));
	outFields->push(HX_CSTRING("RUN_SPEED"));
	outFields->push(HX_CSTRING("SPRINT_SPEED"));
	outFields->push(HX_CSTRING("JUMP_SPEED"));
	outFields->push(HX_CSTRING("GRAVITY"));
	outFields->push(HX_CSTRING("_hurtCounter"));
	outFields->push(HX_CSTRING("meleeAnim"));
	outFields->push(HX_CSTRING("meleeTrue"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(LandPlayer_obj,MAX_HEALTH),HX_CSTRING("MAX_HEALTH")},
	{hx::fsInt,(int)offsetof(LandPlayer_obj,ACCELERATION),HX_CSTRING("ACCELERATION")},
	{hx::fsInt,(int)offsetof(LandPlayer_obj,RUN_SPEED),HX_CSTRING("RUN_SPEED")},
	{hx::fsInt,(int)offsetof(LandPlayer_obj,SPRINT_SPEED),HX_CSTRING("SPRINT_SPEED")},
	{hx::fsInt,(int)offsetof(LandPlayer_obj,JUMP_SPEED),HX_CSTRING("JUMP_SPEED")},
	{hx::fsInt,(int)offsetof(LandPlayer_obj,GRAVITY),HX_CSTRING("GRAVITY")},
	{hx::fsInt,(int)offsetof(LandPlayer_obj,_hurtCounter),HX_CSTRING("_hurtCounter")},
	{hx::fsBool,(int)offsetof(LandPlayer_obj,meleeAnim),HX_CSTRING("meleeAnim")},
	{hx::fsBool,(int)offsetof(LandPlayer_obj,meleeTrue),HX_CSTRING("meleeTrue")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("MAX_HEALTH"),
	HX_CSTRING("ACCELERATION"),
	HX_CSTRING("RUN_SPEED"),
	HX_CSTRING("SPRINT_SPEED"),
	HX_CSTRING("JUMP_SPEED"),
	HX_CSTRING("GRAVITY"),
	HX_CSTRING("_hurtCounter"),
	HX_CSTRING("meleeAnim"),
	HX_CSTRING("meleeTrue"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LandPlayer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LandPlayer_obj::__mClass,"__mClass");
};

#endif

Class LandPlayer_obj::__mClass;

void LandPlayer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("LandPlayer"), hx::TCanCast< LandPlayer_obj> ,sStaticFields,sMemberFields,
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

void LandPlayer_obj::__boot()
{
}

