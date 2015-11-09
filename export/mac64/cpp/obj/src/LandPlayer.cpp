#include <hxcpp.h>

#ifndef INCLUDED_CrateGun
#include <CrateGun.h>
#endif
#ifndef INCLUDED_LandPlayer
#include <LandPlayer.h>
#endif
#ifndef INCLUDED_PolarSprite
#include <PolarSprite.h>
#endif
#ifndef INCLUDED_StunGun
#include <StunGun.h>
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
#ifndef INCLUDED_flixel_addons_weapon_FlxWeapon
#include <flixel/addons/weapon/FlxWeapon.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_effects_FlxFlicker
#include <flixel/effects/FlxFlicker.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
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

Void LandPlayer_obj::__construct(Dynamic X,Dynamic Y)
{
HX_STACK_FRAME("LandPlayer","new",0x5ddca2be,"LandPlayer.new","LandPlayer.hx",14,0xbdd67e72)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
{
	HX_STACK_LINE(22)
	this->GRAVITY = (int)500;
	HX_STACK_LINE(21)
	this->JUMP_SPEED = (int)200;
	HX_STACK_LINE(20)
	this->SPRINT_SPEED = (int)130;
	HX_STACK_LINE(19)
	this->RUN_SPEED = (int)100;
	HX_STACK_LINE(18)
	this->ACCELERATION = (int)400;
	HX_STACK_LINE(17)
	this->MAX_HEALTH = (int)10;
	HX_STACK_LINE(37)
	super::__construct(X,Y,null());
	HX_STACK_LINE(40)
	this->drag->set((this->RUN_SPEED * (int)6),(this->JUMP_SPEED * (int)2));
	HX_STACK_LINE(41)
	this->maxVelocity->set(this->RUN_SPEED,this->JUMP_SPEED);
	HX_STACK_LINE(42)
	this->acceleration->set_y(this->GRAVITY);
	HX_STACK_LINE(45)
	this->health = this->MAX_HEALTH;
	HX_STACK_LINE(49)
	this->loadGraphic(HX_CSTRING("assets/images/Dog.png"),true,(int)16,(int)16,null(),null());
	HX_STACK_LINE(54)
	this->set_width((int)12);
	HX_STACK_LINE(55)
	this->set_height((int)16);
	HX_STACK_LINE(58)
	this->offset->set_x((int)2);
	HX_STACK_LINE(61)
	this->animation->add(HX_CSTRING("idle"),Array_obj< int >::__new().Add((int)0).Add((int)1),(int)5,true);
	HX_STACK_LINE(62)
	this->animation->add(HX_CSTRING("walk"),Array_obj< int >::__new().Add((int)7).Add((int)8).Add((int)9).Add((int)10).Add((int)11),(int)10,true);
	HX_STACK_LINE(63)
	this->animation->add(HX_CSTRING("run"),Array_obj< int >::__new().Add((int)2).Add((int)3).Add((int)4).Add((int)5).Add((int)6),(int)10,true);
	HX_STACK_LINE(64)
	this->animation->add(HX_CSTRING("jump"),Array_obj< int >::__new().Add((int)3).Add((int)4),(int)4,false);
	HX_STACK_LINE(65)
	this->animation->add(HX_CSTRING("fall"),Array_obj< int >::__new().Add((int)5),(int)0,false);
	HX_STACK_LINE(66)
	this->animation->add(HX_CSTRING("melee"),Array_obj< int >::__new().Add((int)12).Add((int)13).Add((int)14),(int)5,false);
	HX_STACK_LINE(67)
	this->animation->add(HX_CSTRING("hurt"),Array_obj< int >::__new().Add((int)3),(int)0,false);
	HX_STACK_LINE(68)
	this->animation->add(HX_CSTRING("dead"),Array_obj< int >::__new().Add((int)5),(int)0,false);
	HX_STACK_LINE(71)
	::StunGun _g = ::StunGun_obj::__new(HX_CSTRING("Stun Gun"),hx::ObjectPtr<OBJ_>(this),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(71)
	this->_stunGun = _g;
	HX_STACK_LINE(72)
	::flixel::FlxG_obj::game->_state->add(this->_stunGun->group);
	HX_STACK_LINE(74)
	::CrateGun _g1 = ::CrateGun_obj::__new(HX_CSTRING("Crate Gun"),hx::ObjectPtr<OBJ_>(this),null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(74)
	this->_crateGun = _g1;
	HX_STACK_LINE(75)
	::flixel::FlxG_obj::game->_state->add(this->_crateGun->group);
}
;
	return null();
}

//LandPlayer_obj::~LandPlayer_obj() { }

Dynamic LandPlayer_obj::__CreateEmpty() { return  new LandPlayer_obj; }
hx::ObjectPtr< LandPlayer_obj > LandPlayer_obj::__new(Dynamic X,Dynamic Y)
{  hx::ObjectPtr< LandPlayer_obj > result = new LandPlayer_obj();
	result->__construct(X,Y);
	return result;}

Dynamic LandPlayer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LandPlayer_obj > result = new LandPlayer_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void LandPlayer_obj::update( ){
{
		HX_STACK_FRAME("LandPlayer","update",0x5b6e026b,"LandPlayer.update","LandPlayer.hx",81,0xbdd67e72)
		HX_STACK_THIS(this)
		HX_STACK_LINE(82)
		this->acceleration->set_x((int)0);
		HX_STACK_LINE(83)
		this->animationCheck();
		HX_STACK_LINE(84)
		this->controls();
		HX_STACK_LINE(86)
		this->super::update();
	}
return null();
}


Void LandPlayer_obj::animationCheck( ){
{
		HX_STACK_FRAME("LandPlayer","animationCheck",0x8188d986,"LandPlayer.animationCheck","LandPlayer.hx",93,0xbdd67e72)
		HX_STACK_THIS(this)
		HX_STACK_LINE(93)
		if (((((int(this->touching) & int((int)4096))) > (int)0))){
			HX_STACK_LINE(95)
			if (((bool((this->velocity->x > (int)100)) || bool((this->velocity->x < (int)-100))))){
				HX_STACK_LINE(97)
				this->animation->play(HX_CSTRING("run"),null(),null());
			}
			else{
				HX_STACK_LINE(99)
				if (((bool((this->velocity->x > (int)0)) || bool((this->velocity->x < (int)0))))){
					HX_STACK_LINE(101)
					this->animation->play(HX_CSTRING("walk"),null(),null());
				}
				else{
					HX_STACK_LINE(105)
					this->animation->play(HX_CSTRING("idle"),null(),null());
				}
			}
		}
		else{
			HX_STACK_LINE(109)
			if (((this->velocity->y < (int)0))){
				HX_STACK_LINE(111)
				this->animation->play(HX_CSTRING("jump"),null(),null());
			}
			else{
				HX_STACK_LINE(115)
				this->animation->play(HX_CSTRING("fall"),null(),null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LandPlayer_obj,animationCheck,(void))

Void LandPlayer_obj::controls( ){
{
		HX_STACK_FRAME("LandPlayer","controls",0x54865f58,"LandPlayer.controls","LandPlayer.hx",119,0xbdd67e72)
		HX_STACK_THIS(this)
		HX_STACK_LINE(120)
		if ((::flixel::FlxG_obj::keys->checkStatus((int)37,::flixel::FlxG_obj::keys->pressed->checkStatus))){
			HX_STACK_LINE(122)
			this->acceleration->set_x(-(this->ACCELERATION));
			HX_STACK_LINE(123)
			this->set_flipX(true);
			HX_STACK_LINE(124)
			this->_stunGun->setBulletDirection((int)180,(int)300);
			HX_STACK_LINE(125)
			this->_stunGun->setBulletOffset((int)-5,(int)2);
			HX_STACK_LINE(126)
			this->_crateGun->setBulletDirection((int)195,(int)180);
			HX_STACK_LINE(127)
			this->_crateGun->setBulletOffset((int)-5,(int)2);
		}
		else{
			HX_STACK_LINE(129)
			if ((::flixel::FlxG_obj::keys->checkStatus((int)39,::flixel::FlxG_obj::keys->pressed->checkStatus))){
				HX_STACK_LINE(131)
				this->acceleration->set_x(this->ACCELERATION);
				HX_STACK_LINE(132)
				this->set_flipX(false);
				HX_STACK_LINE(133)
				this->_stunGun->setBulletDirection((int)360,(int)300);
				HX_STACK_LINE(134)
				this->_stunGun->setBulletOffset((int)5,(int)2);
				HX_STACK_LINE(135)
				this->_crateGun->setBulletDirection((int)345,(int)180);
				HX_STACK_LINE(136)
				this->_crateGun->setBulletOffset((int)5,(int)2);
			}
		}
		HX_STACK_LINE(139)
		if (((  ((::flixel::FlxG_obj::keys->checkStatus((int)38,::flixel::FlxG_obj::keys->justPressed->checkStatus))) ? bool((((int(this->touching) & int((int)4096))) > (int)0)) : bool(false) ))){
			HX_STACK_LINE(141)
			this->velocity->set_y(-(this->JUMP_SPEED));
		}
		HX_STACK_LINE(144)
		if (((  ((::flixel::FlxG_obj::keys->checkStatus((int)38,::flixel::FlxG_obj::keys->justReleased->checkStatus))) ? bool((this->velocity->y < (int)0)) : bool(false) ))){
			HX_STACK_LINE(146)
			this->velocity->set_y((Float(this->velocity->y) / Float((int)2)));
		}
		HX_STACK_LINE(154)
		if ((::flixel::FlxG_obj::keys->checkStatus((int)88,::flixel::FlxG_obj::keys->justPressed->checkStatus))){
			HX_STACK_LINE(156)
			this->_stunGun->soundFire();
		}
		HX_STACK_LINE(159)
		if ((::flixel::FlxG_obj::keys->checkStatus((int)90,::flixel::FlxG_obj::keys->pressed->checkStatus))){
			HX_STACK_LINE(161)
			this->_crateGun->runFire((int)0,null(),null(),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LandPlayer_obj,controls,(void))

Void LandPlayer_obj::hurt( Float Damage){
{
		HX_STACK_FRAME("LandPlayer","hurt",0xbf469bf1,"LandPlayer.hurt","LandPlayer.hx",165,0xbdd67e72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Damage,"Damage")
		HX_STACK_LINE(166)
		this->flicker((int)2);
		HX_STACK_LINE(167)
		return null(this->super::hurt(Damage));
	}
return null();
}


Void LandPlayer_obj::flicker( Float Duration){
{
		HX_STACK_FRAME("LandPlayer","flicker",0x7df13456,"LandPlayer.flicker","LandPlayer.hx",170,0xbdd67e72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Duration,"Duration")
		HX_STACK_LINE(169)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(171)
		{

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_g)
			Void run(::flixel::effects::FlxFlicker _){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","LandPlayer.hx",173,0xbdd67e72)
				HX_STACK_ARG(_,"_")
				{
					HX_STACK_LINE(173)
					_g->__get((int)0).StaticCast< ::LandPlayer >()->_flickering = false;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(171)
			::flixel::effects::FlxFlicker_obj::flicker(hx::ObjectPtr<OBJ_>(this),Duration,0.02,true,true, Dynamic(new _Function_2_1(_g)),null());
			HX_STACK_LINE(171)
			hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(175)
		this->_flickering = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LandPlayer_obj,flicker,(void))


LandPlayer_obj::LandPlayer_obj()
{
}

void LandPlayer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LandPlayer);
	HX_MARK_MEMBER_NAME(MAX_HEALTH,"MAX_HEALTH");
	HX_MARK_MEMBER_NAME(ACCELERATION,"ACCELERATION");
	HX_MARK_MEMBER_NAME(RUN_SPEED,"RUN_SPEED");
	HX_MARK_MEMBER_NAME(SPRINT_SPEED,"SPRINT_SPEED");
	HX_MARK_MEMBER_NAME(JUMP_SPEED,"JUMP_SPEED");
	HX_MARK_MEMBER_NAME(GRAVITY,"GRAVITY");
	HX_MARK_MEMBER_NAME(_stunGun,"_stunGun");
	HX_MARK_MEMBER_NAME(_crateGun,"_crateGun");
	HX_MARK_MEMBER_NAME(_flickering,"_flickering");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LandPlayer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(MAX_HEALTH,"MAX_HEALTH");
	HX_VISIT_MEMBER_NAME(ACCELERATION,"ACCELERATION");
	HX_VISIT_MEMBER_NAME(RUN_SPEED,"RUN_SPEED");
	HX_VISIT_MEMBER_NAME(SPRINT_SPEED,"SPRINT_SPEED");
	HX_VISIT_MEMBER_NAME(JUMP_SPEED,"JUMP_SPEED");
	HX_VISIT_MEMBER_NAME(GRAVITY,"GRAVITY");
	HX_VISIT_MEMBER_NAME(_stunGun,"_stunGun");
	HX_VISIT_MEMBER_NAME(_crateGun,"_crateGun");
	HX_VISIT_MEMBER_NAME(_flickering,"_flickering");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic LandPlayer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hurt") ) { return hurt_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"GRAVITY") ) { return GRAVITY; }
		if (HX_FIELD_EQ(inName,"flicker") ) { return flicker_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_stunGun") ) { return _stunGun; }
		if (HX_FIELD_EQ(inName,"controls") ) { return controls_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"RUN_SPEED") ) { return RUN_SPEED; }
		if (HX_FIELD_EQ(inName,"_crateGun") ) { return _crateGun; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"MAX_HEALTH") ) { return MAX_HEALTH; }
		if (HX_FIELD_EQ(inName,"JUMP_SPEED") ) { return JUMP_SPEED; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_flickering") ) { return _flickering; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ACCELERATION") ) { return ACCELERATION; }
		if (HX_FIELD_EQ(inName,"SPRINT_SPEED") ) { return SPRINT_SPEED; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"animationCheck") ) { return animationCheck_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LandPlayer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"GRAVITY") ) { GRAVITY=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_stunGun") ) { _stunGun=inValue.Cast< ::StunGun >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"RUN_SPEED") ) { RUN_SPEED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_crateGun") ) { _crateGun=inValue.Cast< ::CrateGun >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"MAX_HEALTH") ) { MAX_HEALTH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"JUMP_SPEED") ) { JUMP_SPEED=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_flickering") ) { _flickering=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ACCELERATION") ) { ACCELERATION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SPRINT_SPEED") ) { SPRINT_SPEED=inValue.Cast< int >(); return inValue; }
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
	outFields->push(HX_CSTRING("_stunGun"));
	outFields->push(HX_CSTRING("_crateGun"));
	outFields->push(HX_CSTRING("_flickering"));
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
	{hx::fsObject /*::StunGun*/ ,(int)offsetof(LandPlayer_obj,_stunGun),HX_CSTRING("_stunGun")},
	{hx::fsObject /*::CrateGun*/ ,(int)offsetof(LandPlayer_obj,_crateGun),HX_CSTRING("_crateGun")},
	{hx::fsBool,(int)offsetof(LandPlayer_obj,_flickering),HX_CSTRING("_flickering")},
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
	HX_CSTRING("_stunGun"),
	HX_CSTRING("_crateGun"),
	HX_CSTRING("_flickering"),
	HX_CSTRING("update"),
	HX_CSTRING("animationCheck"),
	HX_CSTRING("controls"),
	HX_CSTRING("hurt"),
	HX_CSTRING("flicker"),
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

