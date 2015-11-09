#include <hxcpp.h>

#ifndef INCLUDED_EnemyGun
#include <EnemyGun.h>
#endif
#ifndef INCLUDED_Shooter
#include <Shooter.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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

Void Shooter_obj::__construct(Float X,Float Y,::flixel::FlxSprite Target)
{
HX_STACK_FRAME("Shooter","new",0x26187ede,"Shooter.new","Shooter.hx",14,0xb3418652)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
HX_STACK_ARG(Target,"Target")
{
	HX_STACK_LINE(31)
	this->_hurtCounter = (int)0;
	HX_STACK_LINE(24)
	this->DISTANCE_SEEN = (int)120;
	HX_STACK_LINE(23)
	this->MAX_KNOCKEDOUT = (int)5;
	HX_STACK_LINE(22)
	this->GRAVITY = (int)500;
	HX_STACK_LINE(21)
	this->JUMP_SPEED = (int)120;
	HX_STACK_LINE(20)
	this->SPRINT_SPEED = (int)130;
	HX_STACK_LINE(19)
	this->RUN_SPEED = (int)50;
	HX_STACK_LINE(18)
	this->ACCELERATION = (int)400;
	HX_STACK_LINE(17)
	this->MAX_HEALTH = (int)10;
	HX_STACK_LINE(42)
	super::__construct(X,Y,null());
	HX_STACK_LINE(45)
	this->drag->set((this->RUN_SPEED * (int)6),(this->JUMP_SPEED * (int)5));
	HX_STACK_LINE(46)
	this->maxVelocity->set(this->RUN_SPEED,this->GRAVITY);
	HX_STACK_LINE(47)
	this->acceleration->set_y(this->GRAVITY);
	HX_STACK_LINE(51)
	this->_target = Target;
	HX_STACK_LINE(53)
	this->health = this->MAX_HEALTH;
	HX_STACK_LINE(58)
	this->makeGraphic((int)12,(int)16,(int)-65536,null(),null());
	HX_STACK_LINE(61)
	this->set_width((int)10);
	HX_STACK_LINE(62)
	this->set_height((int)16);
	HX_STACK_LINE(65)
	this->offset->set_x((int)2);
	HX_STACK_LINE(68)
	this->animation->add(HX_CSTRING("idle"),Array_obj< int >::__new().Add((int)0).Add((int)1),(int)5,true);
	HX_STACK_LINE(69)
	this->animation->add(HX_CSTRING("walk"),Array_obj< int >::__new().Add((int)7).Add((int)8).Add((int)9).Add((int)10).Add((int)11),(int)10,true);
	HX_STACK_LINE(70)
	this->animation->add(HX_CSTRING("run"),Array_obj< int >::__new().Add((int)2).Add((int)3).Add((int)4).Add((int)5).Add((int)6),(int)10,true);
	HX_STACK_LINE(71)
	this->animation->add(HX_CSTRING("jump"),Array_obj< int >::__new().Add((int)3).Add((int)4),(int)4,false);
	HX_STACK_LINE(72)
	this->animation->add(HX_CSTRING("fall"),Array_obj< int >::__new().Add((int)5),(int)0,false);
	HX_STACK_LINE(73)
	this->animation->add(HX_CSTRING("melee"),Array_obj< int >::__new().Add((int)12).Add((int)13).Add((int)14),(int)5,false);
	HX_STACK_LINE(74)
	this->animation->add(HX_CSTRING("hurt"),Array_obj< int >::__new().Add((int)3),(int)0,false);
	HX_STACK_LINE(75)
	this->animation->add(HX_CSTRING("dead"),Array_obj< int >::__new().Add((int)5),(int)0,false);
	HX_STACK_LINE(78)
	::EnemyGun _g = ::EnemyGun_obj::__new(HX_CSTRING("Enemy Gun"),hx::ObjectPtr<OBJ_>(this),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(78)
	this->_enemyGun = _g;
	HX_STACK_LINE(79)
	::flixel::FlxG_obj::game->_state->add(this->_enemyGun->group);
}
;
	return null();
}

//Shooter_obj::~Shooter_obj() { }

Dynamic Shooter_obj::__CreateEmpty() { return  new Shooter_obj; }
hx::ObjectPtr< Shooter_obj > Shooter_obj::__new(Float X,Float Y,::flixel::FlxSprite Target)
{  hx::ObjectPtr< Shooter_obj > result = new Shooter_obj();
	result->__construct(X,Y,Target);
	return result;}

Dynamic Shooter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Shooter_obj > result = new Shooter_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Shooter_obj::update( ){
{
		HX_STACK_FRAME("Shooter","update",0xaa2a7a4b,"Shooter.update","Shooter.hx",85,0xb3418652)
		HX_STACK_THIS(this)
		HX_STACK_LINE(86)
		this->acceleration->set_x((int)0);
		HX_STACK_LINE(87)
		if ((this->_knockedOut)){
			HX_STACK_LINE(89)
			this->knockedOut();
		}
		else{
			HX_STACK_LINE(93)
			int _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(93)
			{
				HX_STACK_LINE(93)
				::flixel::FlxSprite SpriteA = this->_target;		HX_STACK_VAR(SpriteA,"SpriteA");
				HX_STACK_LINE(93)
				Float dx = ((SpriteA->x + SpriteA->origin->x) - ((this->x + this->origin->x)));		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(93)
				Float dy = ((SpriteA->y + SpriteA->origin->y) - ((this->y + this->origin->y)));		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(93)
				Float _g = ::Math_obj::sqrt(((dx * dx) + (dy * dy)));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(93)
				_g1 = ::Std_obj::_int(_g);
			}
			HX_STACK_LINE(93)
			this->_targetDistance = _g1;
			HX_STACK_LINE(94)
			this->fireCheck();
			HX_STACK_LINE(95)
			this->controls();
		}
		HX_STACK_LINE(97)
		this->super::update();
	}
return null();
}


Void Shooter_obj::fireCheck( ){
{
		HX_STACK_FRAME("Shooter","fireCheck",0x206aa230,"Shooter.fireCheck","Shooter.hx",101,0xb3418652)
		HX_STACK_THIS(this)
		HX_STACK_LINE(101)
		if (((this->_targetDistance < (int)80))){
			HX_STACK_LINE(103)
			this->_enemyGun->runFire((int)0,null(),null(),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shooter_obj,fireCheck,(void))

Void Shooter_obj::animationCheck( ){
{
		HX_STACK_FRAME("Shooter","animationCheck",0xb7503166,"Shooter.animationCheck","Shooter.hx",108,0xb3418652)
		HX_STACK_THIS(this)
		HX_STACK_LINE(108)
		if (((((int(this->touching) & int((int)4096))) > (int)0))){
			HX_STACK_LINE(110)
			if (((bool((this->velocity->x > (int)0)) || bool((this->velocity->x < (int)0))))){
				HX_STACK_LINE(112)
				this->animation->play(HX_CSTRING("walk"),null(),null());
			}
			else{
				HX_STACK_LINE(116)
				this->animation->play(HX_CSTRING("idle"),null(),null());
			}
		}
		else{
			HX_STACK_LINE(120)
			if (((this->velocity->y < (int)0))){
				HX_STACK_LINE(122)
				this->animation->play(HX_CSTRING("jump"),null(),null());
			}
			else{
				HX_STACK_LINE(126)
				this->animation->play(HX_CSTRING("fall"),null(),null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shooter_obj,animationCheck,(void))

Void Shooter_obj::controls( ){
{
		HX_STACK_FRAME("Shooter","controls",0x25388f38,"Shooter.controls","Shooter.hx",131,0xb3418652)
		HX_STACK_THIS(this)
		HX_STACK_LINE(131)
		if (((bool((bool((this->_targetDistance < (int)180)) && bool((this->_targetDistance > (int)50)))) && bool(!(this->_flickering))))){
			HX_STACK_LINE(133)
			if (((this->_target->x < this->x))){
				HX_STACK_LINE(135)
				this->acceleration->set_x(-(this->ACCELERATION));
				HX_STACK_LINE(136)
				this->set_flipX(true);
				HX_STACK_LINE(137)
				this->_enemyGun->setBulletDirection((int)180,(int)300);
			}
			else{
				HX_STACK_LINE(141)
				this->acceleration->set_x(this->ACCELERATION);
				HX_STACK_LINE(142)
				this->set_flipX(false);
				HX_STACK_LINE(143)
				this->_enemyGun->setBulletDirection((int)360,(int)300);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shooter_obj,controls,(void))

Void Shooter_obj::stun( Float Damage){
{
		HX_STACK_FRAME("Shooter","stun",0x32aff4fc,"Shooter.stun","Shooter.hx",148,0xb3418652)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Damage,"Damage")
		HX_STACK_LINE(149)
		hx::AddEq(this->_hurtCounter,Damage);
		HX_STACK_LINE(150)
		if ((this->knockedOutCheck())){
			HX_STACK_LINE(152)
			this->_knockedOut = true;
			HX_STACK_LINE(153)
			this->flicker(this->MAX_KNOCKEDOUT);
		}
		else{
			HX_STACK_LINE(157)
			this->flicker(0.2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Shooter_obj,stun,(void))

Void Shooter_obj::flicker( Float Duration){
{
		HX_STACK_FRAME("Shooter","flicker",0x141da076,"Shooter.flicker","Shooter.hx",161,0xb3418652)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Duration,"Duration")
		HX_STACK_LINE(160)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(162)
		{

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_g)
			Void run(::flixel::effects::FlxFlicker _){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","Shooter.hx",164,0xb3418652)
				HX_STACK_ARG(_,"_")
				{
					HX_STACK_LINE(164)
					_g->__get((int)0).StaticCast< ::Shooter >()->_flickering = false;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(162)
			::flixel::effects::FlxFlicker_obj::flicker(hx::ObjectPtr<OBJ_>(this),Duration,0.02,true,true, Dynamic(new _Function_2_1(_g)),null());
			HX_STACK_LINE(162)
			hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(166)
		this->_flickering = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Shooter_obj,flicker,(void))

Void Shooter_obj::knockedOut( ){
{
		HX_STACK_FRAME("Shooter","knockedOut",0x61a6bf1d,"Shooter.knockedOut","Shooter.hx",170,0xb3418652)
		HX_STACK_THIS(this)
		HX_STACK_LINE(170)
		if (((this->_hurtCounter > (int)0))){
			HX_STACK_LINE(172)
			hx::SubEq(this->_hurtCounter,::flixel::FlxG_obj::elapsed);
		}
		else{
			HX_STACK_LINE(176)
			this->_knockedOut = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shooter_obj,knockedOut,(void))

bool Shooter_obj::knockedOutCheck( ){
	HX_STACK_FRAME("Shooter","knockedOutCheck",0x7fc2606b,"Shooter.knockedOutCheck","Shooter.hx",181,0xb3418652)
	HX_STACK_THIS(this)
	HX_STACK_LINE(181)
	if (((this->_hurtCounter > this->MAX_KNOCKEDOUT))){
		HX_STACK_LINE(183)
		return true;
	}
	else{
		HX_STACK_LINE(187)
		return false;
	}
	HX_STACK_LINE(181)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Shooter_obj,knockedOutCheck,return )


Shooter_obj::Shooter_obj()
{
}

void Shooter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Shooter);
	HX_MARK_MEMBER_NAME(MAX_HEALTH,"MAX_HEALTH");
	HX_MARK_MEMBER_NAME(ACCELERATION,"ACCELERATION");
	HX_MARK_MEMBER_NAME(RUN_SPEED,"RUN_SPEED");
	HX_MARK_MEMBER_NAME(SPRINT_SPEED,"SPRINT_SPEED");
	HX_MARK_MEMBER_NAME(JUMP_SPEED,"JUMP_SPEED");
	HX_MARK_MEMBER_NAME(GRAVITY,"GRAVITY");
	HX_MARK_MEMBER_NAME(MAX_KNOCKEDOUT,"MAX_KNOCKEDOUT");
	HX_MARK_MEMBER_NAME(DISTANCE_SEEN,"DISTANCE_SEEN");
	HX_MARK_MEMBER_NAME(_enemyGun,"_enemyGun");
	HX_MARK_MEMBER_NAME(_targetDistance,"_targetDistance");
	HX_MARK_MEMBER_NAME(_hurtCounter,"_hurtCounter");
	HX_MARK_MEMBER_NAME(_target,"_target");
	HX_MARK_MEMBER_NAME(_flickering,"_flickering");
	HX_MARK_MEMBER_NAME(_knockedOut,"_knockedOut");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Shooter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(MAX_HEALTH,"MAX_HEALTH");
	HX_VISIT_MEMBER_NAME(ACCELERATION,"ACCELERATION");
	HX_VISIT_MEMBER_NAME(RUN_SPEED,"RUN_SPEED");
	HX_VISIT_MEMBER_NAME(SPRINT_SPEED,"SPRINT_SPEED");
	HX_VISIT_MEMBER_NAME(JUMP_SPEED,"JUMP_SPEED");
	HX_VISIT_MEMBER_NAME(GRAVITY,"GRAVITY");
	HX_VISIT_MEMBER_NAME(MAX_KNOCKEDOUT,"MAX_KNOCKEDOUT");
	HX_VISIT_MEMBER_NAME(DISTANCE_SEEN,"DISTANCE_SEEN");
	HX_VISIT_MEMBER_NAME(_enemyGun,"_enemyGun");
	HX_VISIT_MEMBER_NAME(_targetDistance,"_targetDistance");
	HX_VISIT_MEMBER_NAME(_hurtCounter,"_hurtCounter");
	HX_VISIT_MEMBER_NAME(_target,"_target");
	HX_VISIT_MEMBER_NAME(_flickering,"_flickering");
	HX_VISIT_MEMBER_NAME(_knockedOut,"_knockedOut");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Shooter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stun") ) { return stun_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"GRAVITY") ) { return GRAVITY; }
		if (HX_FIELD_EQ(inName,"_target") ) { return _target; }
		if (HX_FIELD_EQ(inName,"flicker") ) { return flicker_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"controls") ) { return controls_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"RUN_SPEED") ) { return RUN_SPEED; }
		if (HX_FIELD_EQ(inName,"_enemyGun") ) { return _enemyGun; }
		if (HX_FIELD_EQ(inName,"fireCheck") ) { return fireCheck_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"MAX_HEALTH") ) { return MAX_HEALTH; }
		if (HX_FIELD_EQ(inName,"JUMP_SPEED") ) { return JUMP_SPEED; }
		if (HX_FIELD_EQ(inName,"knockedOut") ) { return knockedOut_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_flickering") ) { return _flickering; }
		if (HX_FIELD_EQ(inName,"_knockedOut") ) { return _knockedOut; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ACCELERATION") ) { return ACCELERATION; }
		if (HX_FIELD_EQ(inName,"SPRINT_SPEED") ) { return SPRINT_SPEED; }
		if (HX_FIELD_EQ(inName,"_hurtCounter") ) { return _hurtCounter; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"DISTANCE_SEEN") ) { return DISTANCE_SEEN; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"MAX_KNOCKEDOUT") ) { return MAX_KNOCKEDOUT; }
		if (HX_FIELD_EQ(inName,"animationCheck") ) { return animationCheck_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_targetDistance") ) { return _targetDistance; }
		if (HX_FIELD_EQ(inName,"knockedOutCheck") ) { return knockedOutCheck_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Shooter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"GRAVITY") ) { GRAVITY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_target") ) { _target=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"RUN_SPEED") ) { RUN_SPEED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_enemyGun") ) { _enemyGun=inValue.Cast< ::EnemyGun >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"MAX_HEALTH") ) { MAX_HEALTH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"JUMP_SPEED") ) { JUMP_SPEED=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_flickering") ) { _flickering=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_knockedOut") ) { _knockedOut=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ACCELERATION") ) { ACCELERATION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SPRINT_SPEED") ) { SPRINT_SPEED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_hurtCounter") ) { _hurtCounter=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"DISTANCE_SEEN") ) { DISTANCE_SEEN=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"MAX_KNOCKEDOUT") ) { MAX_KNOCKEDOUT=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_targetDistance") ) { _targetDistance=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Shooter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("MAX_HEALTH"));
	outFields->push(HX_CSTRING("ACCELERATION"));
	outFields->push(HX_CSTRING("RUN_SPEED"));
	outFields->push(HX_CSTRING("SPRINT_SPEED"));
	outFields->push(HX_CSTRING("JUMP_SPEED"));
	outFields->push(HX_CSTRING("GRAVITY"));
	outFields->push(HX_CSTRING("MAX_KNOCKEDOUT"));
	outFields->push(HX_CSTRING("DISTANCE_SEEN"));
	outFields->push(HX_CSTRING("_enemyGun"));
	outFields->push(HX_CSTRING("_targetDistance"));
	outFields->push(HX_CSTRING("_hurtCounter"));
	outFields->push(HX_CSTRING("_target"));
	outFields->push(HX_CSTRING("_flickering"));
	outFields->push(HX_CSTRING("_knockedOut"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Shooter_obj,MAX_HEALTH),HX_CSTRING("MAX_HEALTH")},
	{hx::fsInt,(int)offsetof(Shooter_obj,ACCELERATION),HX_CSTRING("ACCELERATION")},
	{hx::fsInt,(int)offsetof(Shooter_obj,RUN_SPEED),HX_CSTRING("RUN_SPEED")},
	{hx::fsInt,(int)offsetof(Shooter_obj,SPRINT_SPEED),HX_CSTRING("SPRINT_SPEED")},
	{hx::fsInt,(int)offsetof(Shooter_obj,JUMP_SPEED),HX_CSTRING("JUMP_SPEED")},
	{hx::fsInt,(int)offsetof(Shooter_obj,GRAVITY),HX_CSTRING("GRAVITY")},
	{hx::fsInt,(int)offsetof(Shooter_obj,MAX_KNOCKEDOUT),HX_CSTRING("MAX_KNOCKEDOUT")},
	{hx::fsInt,(int)offsetof(Shooter_obj,DISTANCE_SEEN),HX_CSTRING("DISTANCE_SEEN")},
	{hx::fsObject /*::EnemyGun*/ ,(int)offsetof(Shooter_obj,_enemyGun),HX_CSTRING("_enemyGun")},
	{hx::fsFloat,(int)offsetof(Shooter_obj,_targetDistance),HX_CSTRING("_targetDistance")},
	{hx::fsFloat,(int)offsetof(Shooter_obj,_hurtCounter),HX_CSTRING("_hurtCounter")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(Shooter_obj,_target),HX_CSTRING("_target")},
	{hx::fsBool,(int)offsetof(Shooter_obj,_flickering),HX_CSTRING("_flickering")},
	{hx::fsBool,(int)offsetof(Shooter_obj,_knockedOut),HX_CSTRING("_knockedOut")},
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
	HX_CSTRING("MAX_KNOCKEDOUT"),
	HX_CSTRING("DISTANCE_SEEN"),
	HX_CSTRING("_enemyGun"),
	HX_CSTRING("_targetDistance"),
	HX_CSTRING("_hurtCounter"),
	HX_CSTRING("_target"),
	HX_CSTRING("_flickering"),
	HX_CSTRING("_knockedOut"),
	HX_CSTRING("update"),
	HX_CSTRING("fireCheck"),
	HX_CSTRING("animationCheck"),
	HX_CSTRING("controls"),
	HX_CSTRING("stun"),
	HX_CSTRING("flicker"),
	HX_CSTRING("knockedOut"),
	HX_CSTRING("knockedOutCheck"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Shooter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Shooter_obj::__mClass,"__mClass");
};

#endif

Class Shooter_obj::__mClass;

void Shooter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Shooter"), hx::TCanCast< Shooter_obj> ,sStaticFields,sMemberFields,
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

void Shooter_obj::__boot()
{
}

