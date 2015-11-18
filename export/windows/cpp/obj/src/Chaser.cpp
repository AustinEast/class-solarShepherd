#include <hxcpp.h>

#ifndef INCLUDED_Chaser
#include <Chaser.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_effects_FlxFlicker
#include <flixel/effects/FlxFlicker.h>
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

Void Chaser_obj::__construct(Float X,Float Y,::flixel::FlxSprite Target)
{
HX_STACK_FRAME("Chaser","new",0x8446d216,"Chaser.new","Chaser.hx",14,0xa14f821a)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
HX_STACK_ARG(Target,"Target")
{
	HX_STACK_LINE(34)
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
	this->RUN_SPEED = (int)90;
	HX_STACK_LINE(18)
	this->ACCELERATION = (int)400;
	HX_STACK_LINE(17)
	this->MAX_HEALTH = (int)10;
	HX_STACK_LINE(45)
	super::__construct(X,Y,null());
	HX_STACK_LINE(48)
	this->drag->set((this->RUN_SPEED * (int)6),(this->JUMP_SPEED * (int)5));
	HX_STACK_LINE(49)
	this->maxVelocity->set(this->RUN_SPEED,this->GRAVITY);
	HX_STACK_LINE(50)
	this->acceleration->set_y(this->GRAVITY);
	HX_STACK_LINE(51)
	this->_jumpTimer = (int)0;
	HX_STACK_LINE(55)
	this->_target = Target;
	HX_STACK_LINE(57)
	this->health = this->MAX_HEALTH;
	HX_STACK_LINE(62)
	this->makeGraphic((int)12,(int)16,null(),null(),null());
	HX_STACK_LINE(65)
	this->set_width((int)10);
	HX_STACK_LINE(66)
	this->set_height((int)16);
	HX_STACK_LINE(69)
	this->offset->set_x((int)2);
	HX_STACK_LINE(72)
	this->animation->add(HX_CSTRING("idle"),Array_obj< int >::__new().Add((int)0).Add((int)1),(int)5,true);
	HX_STACK_LINE(73)
	this->animation->add(HX_CSTRING("walk"),Array_obj< int >::__new().Add((int)7).Add((int)8).Add((int)9).Add((int)10).Add((int)11),(int)10,true);
	HX_STACK_LINE(74)
	this->animation->add(HX_CSTRING("run"),Array_obj< int >::__new().Add((int)2).Add((int)3).Add((int)4).Add((int)5).Add((int)6),(int)10,true);
	HX_STACK_LINE(75)
	this->animation->add(HX_CSTRING("jump"),Array_obj< int >::__new().Add((int)3).Add((int)4),(int)4,false);
	HX_STACK_LINE(76)
	this->animation->add(HX_CSTRING("fall"),Array_obj< int >::__new().Add((int)5),(int)0,false);
	HX_STACK_LINE(77)
	this->animation->add(HX_CSTRING("melee"),Array_obj< int >::__new().Add((int)12).Add((int)13).Add((int)14),(int)5,false);
	HX_STACK_LINE(78)
	this->animation->add(HX_CSTRING("hurt"),Array_obj< int >::__new().Add((int)3),(int)0,false);
	HX_STACK_LINE(79)
	this->animation->add(HX_CSTRING("dead"),Array_obj< int >::__new().Add((int)5),(int)0,false);
}
;
	return null();
}

//Chaser_obj::~Chaser_obj() { }

Dynamic Chaser_obj::__CreateEmpty() { return  new Chaser_obj; }
hx::ObjectPtr< Chaser_obj > Chaser_obj::__new(Float X,Float Y,::flixel::FlxSprite Target)
{  hx::ObjectPtr< Chaser_obj > result = new Chaser_obj();
	result->__construct(X,Y,Target);
	return result;}

Dynamic Chaser_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Chaser_obj > result = new Chaser_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Chaser_obj::update( ){
{
		HX_STACK_FRAME("Chaser","update",0xde75fa13,"Chaser.update","Chaser.hx",85,0xa14f821a)
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
			this->_targetY = (this->_target->y - this->y);
			HX_STACK_LINE(95)
			this->jumpCheck();
			HX_STACK_LINE(96)
			this->controls();
		}
		HX_STACK_LINE(98)
		this->super::update();
	}
return null();
}


Void Chaser_obj::jumpCheck( ){
{
		HX_STACK_FRAME("Chaser","jumpCheck",0x736fd330,"Chaser.jumpCheck","Chaser.hx",102,0xa14f821a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(102)
		if (((bool((this->_jumpTimer <= (int)0)) && bool((this->_targetDistance < (int)30))))){
			HX_STACK_LINE(104)
			this->_canJump = true;
		}
		else{
			HX_STACK_LINE(108)
			hx::SubEq(this->_jumpTimer,::flixel::FlxG_obj::elapsed);
			HX_STACK_LINE(109)
			this->_canJump = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Chaser_obj,jumpCheck,(void))

Void Chaser_obj::animationCheck( ){
{
		HX_STACK_FRAME("Chaser","animationCheck",0x3e4cb92e,"Chaser.animationCheck","Chaser.hx",114,0xa14f821a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(114)
		if (((((int(this->touching) & int((int)4096))) > (int)0))){
			HX_STACK_LINE(116)
			if (((bool((this->velocity->x > (int)0)) || bool((this->velocity->x < (int)0))))){
				HX_STACK_LINE(118)
				this->animation->play(HX_CSTRING("walk"),null(),null());
			}
			else{
				HX_STACK_LINE(122)
				this->animation->play(HX_CSTRING("idle"),null(),null());
			}
		}
		else{
			HX_STACK_LINE(126)
			if (((this->velocity->y < (int)0))){
				HX_STACK_LINE(128)
				this->animation->play(HX_CSTRING("jump"),null(),null());
			}
			else{
				HX_STACK_LINE(132)
				this->animation->play(HX_CSTRING("fall"),null(),null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Chaser_obj,animationCheck,(void))

Void Chaser_obj::controls( ){
{
		HX_STACK_FRAME("Chaser","controls",0xa3399100,"Chaser.controls","Chaser.hx",137,0xa14f821a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(137)
		if (((bool((bool((bool((this->_targetDistance < (int)150)) && bool((this->_targetY < (int)50)))) && bool((this->_targetY > (int)-50)))) && bool(!(this->_flickering))))){
			HX_STACK_LINE(139)
			if (((this->_target->x < this->x))){
				HX_STACK_LINE(141)
				this->acceleration->set_x(-(this->ACCELERATION));
				HX_STACK_LINE(142)
				this->set_flipX(true);
			}
			else{
				HX_STACK_LINE(146)
				this->acceleration->set_x(this->ACCELERATION);
				HX_STACK_LINE(147)
				this->set_flipX(false);
			}
			HX_STACK_LINE(150)
			if (((bool(this->_canJump) && bool((((int(this->touching) & int((int)4096))) > (int)0))))){
				HX_STACK_LINE(152)
				this->velocity->set_y(-(this->JUMP_SPEED));
				HX_STACK_LINE(153)
				this->_jumpTimer = (int)1;
			}
			HX_STACK_LINE(155)
			if (((bool((this->_jumpTimer > (int)0)) && bool((((int(this->touching) & int((int)4096))) > (int)0))))){
				HX_STACK_LINE(157)
				this->velocity->set_x((int)0);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Chaser_obj,controls,(void))

Void Chaser_obj::stun( Float Damage){
{
		HX_STACK_FRAME("Chaser","stun",0x3d0a72c4,"Chaser.stun","Chaser.hx",162,0xa14f821a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Damage,"Damage")
		HX_STACK_LINE(163)
		hx::AddEq(this->_hurtCounter,Damage);
		HX_STACK_LINE(164)
		if ((this->knockedOutCheck())){
			HX_STACK_LINE(166)
			this->_knockedOut = true;
			HX_STACK_LINE(167)
			this->flicker(this->MAX_KNOCKEDOUT);
		}
		else{
			HX_STACK_LINE(171)
			this->flicker(0.2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Chaser_obj,stun,(void))

Void Chaser_obj::flicker( Float Duration){
{
		HX_STACK_FRAME("Chaser","flicker",0xa1e1efae,"Chaser.flicker","Chaser.hx",175,0xa14f821a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Duration,"Duration")
		HX_STACK_LINE(174)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(176)
		{

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_g)
			Void run(::flixel::effects::FlxFlicker _){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","Chaser.hx",178,0xa14f821a)
				HX_STACK_ARG(_,"_")
				{
					HX_STACK_LINE(178)
					_g->__get((int)0).StaticCast< ::Chaser >()->_flickering = false;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(176)
			::flixel::effects::FlxFlicker_obj::flicker(hx::ObjectPtr<OBJ_>(this),Duration,0.02,true,true, Dynamic(new _Function_2_1(_g)),null());
			HX_STACK_LINE(176)
			hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(180)
		this->_flickering = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Chaser_obj,flicker,(void))

Void Chaser_obj::knockedOut( ){
{
		HX_STACK_FRAME("Chaser","knockedOut",0x2341c2e5,"Chaser.knockedOut","Chaser.hx",184,0xa14f821a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(184)
		if (((this->_hurtCounter > (int)0))){
			HX_STACK_LINE(186)
			hx::SubEq(this->_hurtCounter,::flixel::FlxG_obj::elapsed);
		}
		else{
			HX_STACK_LINE(190)
			this->_knockedOut = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Chaser_obj,knockedOut,(void))

bool Chaser_obj::knockedOutCheck( ){
	HX_STACK_FRAME("Chaser","knockedOutCheck",0x15bca7a3,"Chaser.knockedOutCheck","Chaser.hx",195,0xa14f821a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(195)
	if (((this->_hurtCounter > this->MAX_KNOCKEDOUT))){
		HX_STACK_LINE(197)
		::flixel::FlxG_obj::camera->shake(0.01,0.2,null(),null(),null());
		HX_STACK_LINE(198)
		return true;
	}
	else{
		HX_STACK_LINE(202)
		return false;
	}
	HX_STACK_LINE(195)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Chaser_obj,knockedOutCheck,return )


Chaser_obj::Chaser_obj()
{
}

void Chaser_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Chaser);
	HX_MARK_MEMBER_NAME(MAX_HEALTH,"MAX_HEALTH");
	HX_MARK_MEMBER_NAME(ACCELERATION,"ACCELERATION");
	HX_MARK_MEMBER_NAME(RUN_SPEED,"RUN_SPEED");
	HX_MARK_MEMBER_NAME(SPRINT_SPEED,"SPRINT_SPEED");
	HX_MARK_MEMBER_NAME(JUMP_SPEED,"JUMP_SPEED");
	HX_MARK_MEMBER_NAME(GRAVITY,"GRAVITY");
	HX_MARK_MEMBER_NAME(MAX_KNOCKEDOUT,"MAX_KNOCKEDOUT");
	HX_MARK_MEMBER_NAME(DISTANCE_SEEN,"DISTANCE_SEEN");
	HX_MARK_MEMBER_NAME(_canJump,"_canJump");
	HX_MARK_MEMBER_NAME(_jumpTimer,"_jumpTimer");
	HX_MARK_MEMBER_NAME(_targetDistance,"_targetDistance");
	HX_MARK_MEMBER_NAME(_targetY,"_targetY");
	HX_MARK_MEMBER_NAME(_hurtCounter,"_hurtCounter");
	HX_MARK_MEMBER_NAME(_target,"_target");
	HX_MARK_MEMBER_NAME(_flickering,"_flickering");
	HX_MARK_MEMBER_NAME(_knockedOut,"_knockedOut");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Chaser_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(MAX_HEALTH,"MAX_HEALTH");
	HX_VISIT_MEMBER_NAME(ACCELERATION,"ACCELERATION");
	HX_VISIT_MEMBER_NAME(RUN_SPEED,"RUN_SPEED");
	HX_VISIT_MEMBER_NAME(SPRINT_SPEED,"SPRINT_SPEED");
	HX_VISIT_MEMBER_NAME(JUMP_SPEED,"JUMP_SPEED");
	HX_VISIT_MEMBER_NAME(GRAVITY,"GRAVITY");
	HX_VISIT_MEMBER_NAME(MAX_KNOCKEDOUT,"MAX_KNOCKEDOUT");
	HX_VISIT_MEMBER_NAME(DISTANCE_SEEN,"DISTANCE_SEEN");
	HX_VISIT_MEMBER_NAME(_canJump,"_canJump");
	HX_VISIT_MEMBER_NAME(_jumpTimer,"_jumpTimer");
	HX_VISIT_MEMBER_NAME(_targetDistance,"_targetDistance");
	HX_VISIT_MEMBER_NAME(_targetY,"_targetY");
	HX_VISIT_MEMBER_NAME(_hurtCounter,"_hurtCounter");
	HX_VISIT_MEMBER_NAME(_target,"_target");
	HX_VISIT_MEMBER_NAME(_flickering,"_flickering");
	HX_VISIT_MEMBER_NAME(_knockedOut,"_knockedOut");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Chaser_obj::__Field(const ::String &inName,bool inCallProp)
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
		if (HX_FIELD_EQ(inName,"_canJump") ) { return _canJump; }
		if (HX_FIELD_EQ(inName,"_targetY") ) { return _targetY; }
		if (HX_FIELD_EQ(inName,"controls") ) { return controls_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"RUN_SPEED") ) { return RUN_SPEED; }
		if (HX_FIELD_EQ(inName,"jumpCheck") ) { return jumpCheck_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"MAX_HEALTH") ) { return MAX_HEALTH; }
		if (HX_FIELD_EQ(inName,"JUMP_SPEED") ) { return JUMP_SPEED; }
		if (HX_FIELD_EQ(inName,"_jumpTimer") ) { return _jumpTimer; }
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

Dynamic Chaser_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"GRAVITY") ) { GRAVITY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_target") ) { _target=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_canJump") ) { _canJump=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_targetY") ) { _targetY=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"RUN_SPEED") ) { RUN_SPEED=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"MAX_HEALTH") ) { MAX_HEALTH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"JUMP_SPEED") ) { JUMP_SPEED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_jumpTimer") ) { _jumpTimer=inValue.Cast< Float >(); return inValue; }
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

void Chaser_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("MAX_HEALTH"));
	outFields->push(HX_CSTRING("ACCELERATION"));
	outFields->push(HX_CSTRING("RUN_SPEED"));
	outFields->push(HX_CSTRING("SPRINT_SPEED"));
	outFields->push(HX_CSTRING("JUMP_SPEED"));
	outFields->push(HX_CSTRING("GRAVITY"));
	outFields->push(HX_CSTRING("MAX_KNOCKEDOUT"));
	outFields->push(HX_CSTRING("DISTANCE_SEEN"));
	outFields->push(HX_CSTRING("_canJump"));
	outFields->push(HX_CSTRING("_jumpTimer"));
	outFields->push(HX_CSTRING("_targetDistance"));
	outFields->push(HX_CSTRING("_targetY"));
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
	{hx::fsInt,(int)offsetof(Chaser_obj,MAX_HEALTH),HX_CSTRING("MAX_HEALTH")},
	{hx::fsInt,(int)offsetof(Chaser_obj,ACCELERATION),HX_CSTRING("ACCELERATION")},
	{hx::fsInt,(int)offsetof(Chaser_obj,RUN_SPEED),HX_CSTRING("RUN_SPEED")},
	{hx::fsInt,(int)offsetof(Chaser_obj,SPRINT_SPEED),HX_CSTRING("SPRINT_SPEED")},
	{hx::fsInt,(int)offsetof(Chaser_obj,JUMP_SPEED),HX_CSTRING("JUMP_SPEED")},
	{hx::fsInt,(int)offsetof(Chaser_obj,GRAVITY),HX_CSTRING("GRAVITY")},
	{hx::fsInt,(int)offsetof(Chaser_obj,MAX_KNOCKEDOUT),HX_CSTRING("MAX_KNOCKEDOUT")},
	{hx::fsInt,(int)offsetof(Chaser_obj,DISTANCE_SEEN),HX_CSTRING("DISTANCE_SEEN")},
	{hx::fsBool,(int)offsetof(Chaser_obj,_canJump),HX_CSTRING("_canJump")},
	{hx::fsFloat,(int)offsetof(Chaser_obj,_jumpTimer),HX_CSTRING("_jumpTimer")},
	{hx::fsFloat,(int)offsetof(Chaser_obj,_targetDistance),HX_CSTRING("_targetDistance")},
	{hx::fsFloat,(int)offsetof(Chaser_obj,_targetY),HX_CSTRING("_targetY")},
	{hx::fsFloat,(int)offsetof(Chaser_obj,_hurtCounter),HX_CSTRING("_hurtCounter")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(Chaser_obj,_target),HX_CSTRING("_target")},
	{hx::fsBool,(int)offsetof(Chaser_obj,_flickering),HX_CSTRING("_flickering")},
	{hx::fsBool,(int)offsetof(Chaser_obj,_knockedOut),HX_CSTRING("_knockedOut")},
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
	HX_CSTRING("_canJump"),
	HX_CSTRING("_jumpTimer"),
	HX_CSTRING("_targetDistance"),
	HX_CSTRING("_targetY"),
	HX_CSTRING("_hurtCounter"),
	HX_CSTRING("_target"),
	HX_CSTRING("_flickering"),
	HX_CSTRING("_knockedOut"),
	HX_CSTRING("update"),
	HX_CSTRING("jumpCheck"),
	HX_CSTRING("animationCheck"),
	HX_CSTRING("controls"),
	HX_CSTRING("stun"),
	HX_CSTRING("flicker"),
	HX_CSTRING("knockedOut"),
	HX_CSTRING("knockedOutCheck"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Chaser_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Chaser_obj::__mClass,"__mClass");
};

#endif

Class Chaser_obj::__mClass;

void Chaser_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Chaser"), hx::TCanCast< Chaser_obj> ,sStaticFields,sMemberFields,
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

void Chaser_obj::__boot()
{
}

