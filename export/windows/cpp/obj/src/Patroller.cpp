#include <hxcpp.h>

#ifndef INCLUDED_EnemyGun
#include <EnemyGun.h>
#endif
#ifndef INCLUDED_Patroller
#include <Patroller.h>
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
#ifndef INCLUDED_flixel_addons_weapon_FlxWeapon
#include <flixel/addons/weapon/FlxWeapon.h>
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

Void Patroller_obj::__construct(Float X,Float Y,::flixel::FlxSprite Target)
{
HX_STACK_FRAME("Patroller","new",0x0319b61f,"Patroller.new","Patroller.hx",14,0x6ac6b231)
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
	this->RUN_SPEED = (int)40;
	HX_STACK_LINE(18)
	this->ACCELERATION = (int)400;
	HX_STACK_LINE(17)
	this->MAX_HEALTH = (int)10;
	HX_STACK_LINE(43)
	super::__construct(X,Y,null());
	HX_STACK_LINE(46)
	this->drag->set((this->RUN_SPEED * (int)6),(this->JUMP_SPEED * (int)5));
	HX_STACK_LINE(47)
	this->maxVelocity->set(this->RUN_SPEED,this->GRAVITY);
	HX_STACK_LINE(48)
	this->acceleration->set_y(this->GRAVITY);
	HX_STACK_LINE(52)
	this->_target = Target;
	HX_STACK_LINE(54)
	this->health = this->MAX_HEALTH;
	HX_STACK_LINE(59)
	this->makeGraphic((int)12,(int)16,(int)-65536,null(),null());
	HX_STACK_LINE(62)
	this->set_width((int)10);
	HX_STACK_LINE(63)
	this->set_height((int)16);
	HX_STACK_LINE(66)
	this->offset->set_x((int)2);
	HX_STACK_LINE(69)
	this->animation->add(HX_CSTRING("idle"),Array_obj< int >::__new().Add((int)0).Add((int)1),(int)5,true);
	HX_STACK_LINE(70)
	this->animation->add(HX_CSTRING("walk"),Array_obj< int >::__new().Add((int)7).Add((int)8).Add((int)9).Add((int)10).Add((int)11),(int)10,true);
	HX_STACK_LINE(71)
	this->animation->add(HX_CSTRING("run"),Array_obj< int >::__new().Add((int)2).Add((int)3).Add((int)4).Add((int)5).Add((int)6),(int)10,true);
	HX_STACK_LINE(72)
	this->animation->add(HX_CSTRING("jump"),Array_obj< int >::__new().Add((int)3).Add((int)4),(int)4,false);
	HX_STACK_LINE(73)
	this->animation->add(HX_CSTRING("fall"),Array_obj< int >::__new().Add((int)5),(int)0,false);
	HX_STACK_LINE(74)
	this->animation->add(HX_CSTRING("melee"),Array_obj< int >::__new().Add((int)12).Add((int)13).Add((int)14),(int)5,false);
	HX_STACK_LINE(75)
	this->animation->add(HX_CSTRING("hurt"),Array_obj< int >::__new().Add((int)3),(int)0,false);
	HX_STACK_LINE(76)
	this->animation->add(HX_CSTRING("dead"),Array_obj< int >::__new().Add((int)5),(int)0,false);
}
;
	return null();
}

//Patroller_obj::~Patroller_obj() { }

Dynamic Patroller_obj::__CreateEmpty() { return  new Patroller_obj; }
hx::ObjectPtr< Patroller_obj > Patroller_obj::__new(Float X,Float Y,::flixel::FlxSprite Target)
{  hx::ObjectPtr< Patroller_obj > result = new Patroller_obj();
	result->__construct(X,Y,Target);
	return result;}

Dynamic Patroller_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Patroller_obj > result = new Patroller_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Patroller_obj::update( ){
{
		HX_STACK_FRAME("Patroller","update",0xa97c81aa,"Patroller.update","Patroller.hx",83,0x6ac6b231)
		HX_STACK_THIS(this)
		HX_STACK_LINE(84)
		this->acceleration->set_x((int)0);
		HX_STACK_LINE(85)
		if ((this->_knockedOut)){
			HX_STACK_LINE(87)
			this->knockedOut();
		}
		else{
			HX_STACK_LINE(91)
			this->controls();
		}
		HX_STACK_LINE(93)
		this->super::update();
	}
return null();
}


Void Patroller_obj::animationCheck( ){
{
		HX_STACK_FRAME("Patroller","animationCheck",0x3a172fc5,"Patroller.animationCheck","Patroller.hx",97,0x6ac6b231)
		HX_STACK_THIS(this)
		HX_STACK_LINE(97)
		if (((((int(this->touching) & int((int)4096))) > (int)0))){
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


HX_DEFINE_DYNAMIC_FUNC0(Patroller_obj,animationCheck,(void))

Void Patroller_obj::turnAround( ){
{
		HX_STACK_FRAME("Patroller","turnAround",0xa7ef73cb,"Patroller.turnAround","Patroller.hx",120,0x6ac6b231)
		HX_STACK_THIS(this)
		HX_STACK_LINE(120)
		if ((this->flipX)){
			HX_STACK_LINE(122)
			this->set_flipX(false);
		}
		else{
			HX_STACK_LINE(126)
			this->set_flipX(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Patroller_obj,turnAround,(void))

Void Patroller_obj::controls( ){
{
		HX_STACK_FRAME("Patroller","controls",0x22a26c57,"Patroller.controls","Patroller.hx",130,0x6ac6b231)
		HX_STACK_THIS(this)
		HX_STACK_LINE(131)
		if ((this->flipX)){
			HX_STACK_LINE(133)
			this->velocity->set_x(-(this->RUN_SPEED));
		}
		else{
			HX_STACK_LINE(137)
			this->velocity->set_x(this->RUN_SPEED);
		}
		HX_STACK_LINE(139)
		if (((((int(this->touching) & int((int)17))) > (int)0))){
			HX_STACK_LINE(141)
			this->velocity->set_x((int)0);
			HX_STACK_LINE(142)
			this->turnAround();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Patroller_obj,controls,(void))

Void Patroller_obj::stun( Float Damage){
{
		HX_STACK_FRAME("Patroller","stun",0xb6bf169b,"Patroller.stun","Patroller.hx",146,0x6ac6b231)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Damage,"Damage")
		HX_STACK_LINE(147)
		hx::AddEq(this->_hurtCounter,Damage);
		HX_STACK_LINE(148)
		if ((this->knockedOutCheck())){
			HX_STACK_LINE(150)
			this->_knockedOut = true;
			HX_STACK_LINE(151)
			this->flicker(this->MAX_KNOCKEDOUT);
		}
		else{
			HX_STACK_LINE(155)
			this->flicker(0.2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Patroller_obj,stun,(void))

Void Patroller_obj::flicker( Float Duration){
{
		HX_STACK_FRAME("Patroller","flicker",0x7c920c37,"Patroller.flicker","Patroller.hx",159,0x6ac6b231)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Duration,"Duration")
		HX_STACK_LINE(158)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(160)
		{

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_g)
			Void run(::flixel::effects::FlxFlicker _){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","Patroller.hx",162,0x6ac6b231)
				HX_STACK_ARG(_,"_")
				{
					HX_STACK_LINE(162)
					_g->__get((int)0).StaticCast< ::Patroller >()->_flickering = false;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(160)
			::flixel::effects::FlxFlicker_obj::flicker(hx::ObjectPtr<OBJ_>(this),Duration,0.02,true,true, Dynamic(new _Function_2_1(_g)),null());
			HX_STACK_LINE(160)
			hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(164)
		this->_flickering = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Patroller_obj,flicker,(void))

Void Patroller_obj::knockedOut( ){
{
		HX_STACK_FRAME("Patroller","knockedOut",0xf31961fc,"Patroller.knockedOut","Patroller.hx",168,0x6ac6b231)
		HX_STACK_THIS(this)
		HX_STACK_LINE(168)
		if (((this->_hurtCounter > (int)0))){
			HX_STACK_LINE(170)
			hx::SubEq(this->_hurtCounter,::flixel::FlxG_obj::elapsed);
		}
		else{
			HX_STACK_LINE(174)
			this->_knockedOut = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Patroller_obj,knockedOut,(void))

bool Patroller_obj::knockedOutCheck( ){
	HX_STACK_FRAME("Patroller","knockedOutCheck",0x6b19f52c,"Patroller.knockedOutCheck","Patroller.hx",179,0x6ac6b231)
	HX_STACK_THIS(this)
	HX_STACK_LINE(179)
	if (((this->_hurtCounter > this->MAX_KNOCKEDOUT))){
		HX_STACK_LINE(181)
		return true;
	}
	else{
		HX_STACK_LINE(185)
		return false;
	}
	HX_STACK_LINE(179)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Patroller_obj,knockedOutCheck,return )


Patroller_obj::Patroller_obj()
{
}

void Patroller_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Patroller);
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
	HX_MARK_MEMBER_NAME(_touchGround,"_touchGround");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Patroller_obj::__Visit(HX_VISIT_PARAMS)
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
	HX_VISIT_MEMBER_NAME(_touchGround,"_touchGround");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Patroller_obj::__Field(const ::String &inName,bool inCallProp)
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
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"MAX_HEALTH") ) { return MAX_HEALTH; }
		if (HX_FIELD_EQ(inName,"JUMP_SPEED") ) { return JUMP_SPEED; }
		if (HX_FIELD_EQ(inName,"turnAround") ) { return turnAround_dyn(); }
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
		if (HX_FIELD_EQ(inName,"_touchGround") ) { return _touchGround; }
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

Dynamic Patroller_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
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
		if (HX_FIELD_EQ(inName,"_touchGround") ) { _touchGround=inValue.Cast< bool >(); return inValue; }
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

void Patroller_obj::__GetFields(Array< ::String> &outFields)
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
	outFields->push(HX_CSTRING("_touchGround"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Patroller_obj,MAX_HEALTH),HX_CSTRING("MAX_HEALTH")},
	{hx::fsInt,(int)offsetof(Patroller_obj,ACCELERATION),HX_CSTRING("ACCELERATION")},
	{hx::fsInt,(int)offsetof(Patroller_obj,RUN_SPEED),HX_CSTRING("RUN_SPEED")},
	{hx::fsInt,(int)offsetof(Patroller_obj,SPRINT_SPEED),HX_CSTRING("SPRINT_SPEED")},
	{hx::fsInt,(int)offsetof(Patroller_obj,JUMP_SPEED),HX_CSTRING("JUMP_SPEED")},
	{hx::fsInt,(int)offsetof(Patroller_obj,GRAVITY),HX_CSTRING("GRAVITY")},
	{hx::fsInt,(int)offsetof(Patroller_obj,MAX_KNOCKEDOUT),HX_CSTRING("MAX_KNOCKEDOUT")},
	{hx::fsInt,(int)offsetof(Patroller_obj,DISTANCE_SEEN),HX_CSTRING("DISTANCE_SEEN")},
	{hx::fsObject /*::EnemyGun*/ ,(int)offsetof(Patroller_obj,_enemyGun),HX_CSTRING("_enemyGun")},
	{hx::fsFloat,(int)offsetof(Patroller_obj,_targetDistance),HX_CSTRING("_targetDistance")},
	{hx::fsFloat,(int)offsetof(Patroller_obj,_hurtCounter),HX_CSTRING("_hurtCounter")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(Patroller_obj,_target),HX_CSTRING("_target")},
	{hx::fsBool,(int)offsetof(Patroller_obj,_flickering),HX_CSTRING("_flickering")},
	{hx::fsBool,(int)offsetof(Patroller_obj,_knockedOut),HX_CSTRING("_knockedOut")},
	{hx::fsBool,(int)offsetof(Patroller_obj,_touchGround),HX_CSTRING("_touchGround")},
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
	HX_CSTRING("_touchGround"),
	HX_CSTRING("update"),
	HX_CSTRING("animationCheck"),
	HX_CSTRING("turnAround"),
	HX_CSTRING("controls"),
	HX_CSTRING("stun"),
	HX_CSTRING("flicker"),
	HX_CSTRING("knockedOut"),
	HX_CSTRING("knockedOutCheck"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Patroller_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Patroller_obj::__mClass,"__mClass");
};

#endif

Class Patroller_obj::__mClass;

void Patroller_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Patroller"), hx::TCanCast< Patroller_obj> ,sStaticFields,sMemberFields,
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

void Patroller_obj::__boot()
{
}

