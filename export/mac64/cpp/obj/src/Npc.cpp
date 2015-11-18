#include <hxcpp.h>

#ifndef INCLUDED_Npc
#include <Npc.h>
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

Void Npc_obj::__construct(Float X,Float Y)
{
HX_STACK_FRAME("Npc","new",0x92e9a733,"Npc.new","Npc.hx",15,0xee4a7f9d)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
{
	HX_STACK_LINE(30)
	this->_hurtCounter = (int)0;
	HX_STACK_LINE(25)
	this->DISTANCE_SEEN = (int)120;
	HX_STACK_LINE(24)
	this->MAX_KNOCKEDOUT = (int)5;
	HX_STACK_LINE(23)
	this->GRAVITY = (int)500;
	HX_STACK_LINE(22)
	this->JUMP_SPEED = (int)120;
	HX_STACK_LINE(21)
	this->SPRINT_SPEED = (int)130;
	HX_STACK_LINE(20)
	this->RUN_SPEED = (int)40;
	HX_STACK_LINE(19)
	this->ACCELERATION = (int)400;
	HX_STACK_LINE(18)
	this->MAX_HEALTH = (int)10;
	HX_STACK_LINE(40)
	super::__construct(X,Y,null());
	HX_STACK_LINE(43)
	this->drag->set((this->RUN_SPEED * (int)6),(this->JUMP_SPEED * (int)5));
	HX_STACK_LINE(44)
	this->maxVelocity->set(this->RUN_SPEED,this->GRAVITY);
	HX_STACK_LINE(45)
	this->acceleration->set_y(this->GRAVITY);
	HX_STACK_LINE(48)
	this->health = this->MAX_HEALTH;
	HX_STACK_LINE(53)
	this->makeGraphic((int)12,(int)16,(int)-16776961,null(),null());
	HX_STACK_LINE(56)
	this->set_width((int)10);
	HX_STACK_LINE(57)
	this->set_height((int)16);
	HX_STACK_LINE(60)
	this->offset->set_x((int)2);
	HX_STACK_LINE(63)
	this->animation->add(HX_CSTRING("idle"),Array_obj< int >::__new().Add((int)0).Add((int)1),(int)5,true);
	HX_STACK_LINE(64)
	this->animation->add(HX_CSTRING("walk"),Array_obj< int >::__new().Add((int)7).Add((int)8).Add((int)9).Add((int)10).Add((int)11),(int)10,true);
	HX_STACK_LINE(65)
	this->animation->add(HX_CSTRING("run"),Array_obj< int >::__new().Add((int)2).Add((int)3).Add((int)4).Add((int)5).Add((int)6),(int)10,true);
	HX_STACK_LINE(66)
	this->animation->add(HX_CSTRING("jump"),Array_obj< int >::__new().Add((int)3).Add((int)4),(int)4,false);
	HX_STACK_LINE(67)
	this->animation->add(HX_CSTRING("fall"),Array_obj< int >::__new().Add((int)5),(int)0,false);
	HX_STACK_LINE(68)
	this->animation->add(HX_CSTRING("melee"),Array_obj< int >::__new().Add((int)12).Add((int)13).Add((int)14),(int)5,false);
	HX_STACK_LINE(69)
	this->animation->add(HX_CSTRING("hurt"),Array_obj< int >::__new().Add((int)3),(int)0,false);
	HX_STACK_LINE(70)
	this->animation->add(HX_CSTRING("dead"),Array_obj< int >::__new().Add((int)5),(int)0,false);
}
;
	return null();
}

//Npc_obj::~Npc_obj() { }

Dynamic Npc_obj::__CreateEmpty() { return  new Npc_obj; }
hx::ObjectPtr< Npc_obj > Npc_obj::__new(Float X,Float Y)
{  hx::ObjectPtr< Npc_obj > result = new Npc_obj();
	result->__construct(X,Y);
	return result;}

Dynamic Npc_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Npc_obj > result = new Npc_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Npc_obj::update( ){
{
		HX_STACK_FRAME("Npc","update",0xfeb17516,"Npc.update","Npc.hx",77,0xee4a7f9d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(78)
		this->acceleration->set_x((int)0);
		HX_STACK_LINE(79)
		if ((this->_knockedOut)){
			HX_STACK_LINE(81)
			this->knockedOut();
		}
		else{
		}
		HX_STACK_LINE(86)
		this->super::update();
	}
return null();
}


Void Npc_obj::animationCheck( ){
{
		HX_STACK_FRAME("Npc","animationCheck",0x07cf6f31,"Npc.animationCheck","Npc.hx",90,0xee4a7f9d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(90)
		if (((((int(this->touching) & int((int)4096))) > (int)0))){
			HX_STACK_LINE(92)
			if (((bool((this->velocity->x > (int)0)) || bool((this->velocity->x < (int)0))))){
				HX_STACK_LINE(94)
				this->animation->play(HX_CSTRING("walk"),null(),null());
			}
			else{
				HX_STACK_LINE(98)
				this->animation->play(HX_CSTRING("idle"),null(),null());
			}
		}
		else{
			HX_STACK_LINE(102)
			if (((this->velocity->y < (int)0))){
				HX_STACK_LINE(104)
				this->animation->play(HX_CSTRING("jump"),null(),null());
			}
			else{
				HX_STACK_LINE(108)
				this->animation->play(HX_CSTRING("fall"),null(),null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Npc_obj,animationCheck,(void))

Void Npc_obj::controls( ){
{
		HX_STACK_FRAME("Npc","controls",0xe58c12c3,"Npc.controls","Npc.hx",113,0xee4a7f9d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(113)
		if ((this->flipX)){
			HX_STACK_LINE(115)
			this->velocity->set_x(-(this->RUN_SPEED));
		}
		else{
			HX_STACK_LINE(119)
			this->velocity->set_x(this->RUN_SPEED);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Npc_obj,controls,(void))

Void Npc_obj::stun( Float Damage){
{
		HX_STACK_FRAME("Npc","stun",0xfce21707,"Npc.stun","Npc.hx",124,0xee4a7f9d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Damage,"Damage")
		HX_STACK_LINE(125)
		hx::AddEq(this->_hurtCounter,Damage);
		HX_STACK_LINE(126)
		if ((this->knockedOutCheck())){
			HX_STACK_LINE(128)
			this->_knockedOut = true;
			HX_STACK_LINE(129)
			this->flicker(this->MAX_KNOCKEDOUT);
		}
		else{
			HX_STACK_LINE(133)
			this->flicker(0.2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Npc_obj,stun,(void))

Void Npc_obj::flicker( Float Duration){
{
		HX_STACK_FRAME("Npc","flicker",0xb5b2174b,"Npc.flicker","Npc.hx",137,0xee4a7f9d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Duration,"Duration")
		HX_STACK_LINE(136)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(138)
		{

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_g)
			Void run(::flixel::effects::FlxFlicker _){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","Npc.hx",140,0xee4a7f9d)
				HX_STACK_ARG(_,"_")
				{
					HX_STACK_LINE(140)
					_g->__get((int)0).StaticCast< ::Npc >()->_flickering = false;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(138)
			::flixel::effects::FlxFlicker_obj::flicker(hx::ObjectPtr<OBJ_>(this),Duration,0.02,true,true, Dynamic(new _Function_2_1(_g)),null());
			HX_STACK_LINE(138)
			hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(142)
		this->_flickering = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Npc_obj,flicker,(void))

Void Npc_obj::knockedOut( ){
{
		HX_STACK_FRAME("Npc","knockedOut",0x808a7b68,"Npc.knockedOut","Npc.hx",146,0xee4a7f9d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(146)
		if (((this->_hurtCounter > (int)0))){
			HX_STACK_LINE(148)
			hx::SubEq(this->_hurtCounter,::flixel::FlxG_obj::elapsed);
		}
		else{
			HX_STACK_LINE(152)
			this->_knockedOut = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Npc_obj,knockedOut,(void))

bool Npc_obj::knockedOutCheck( ){
	HX_STACK_FRAME("Npc","knockedOutCheck",0x9e993440,"Npc.knockedOutCheck","Npc.hx",157,0xee4a7f9d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(157)
	if (((this->_hurtCounter > this->MAX_KNOCKEDOUT))){
		HX_STACK_LINE(159)
		return true;
	}
	else{
		HX_STACK_LINE(163)
		return false;
	}
	HX_STACK_LINE(157)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Npc_obj,knockedOutCheck,return )


Npc_obj::Npc_obj()
{
}

Dynamic Npc_obj::__Field(const ::String &inName,bool inCallProp)
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
		if (HX_FIELD_EQ(inName,"flicker") ) { return flicker_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"controls") ) { return controls_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"RUN_SPEED") ) { return RUN_SPEED; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"MAX_HEALTH") ) { return MAX_HEALTH; }
		if (HX_FIELD_EQ(inName,"JUMP_SPEED") ) { return JUMP_SPEED; }
		if (HX_FIELD_EQ(inName,"_moveTimer") ) { return _moveTimer; }
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
		if (HX_FIELD_EQ(inName,"knockedOutCheck") ) { return knockedOutCheck_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Npc_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"GRAVITY") ) { GRAVITY=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"RUN_SPEED") ) { RUN_SPEED=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"MAX_HEALTH") ) { MAX_HEALTH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"JUMP_SPEED") ) { JUMP_SPEED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_moveTimer") ) { _moveTimer=inValue.Cast< Float >(); return inValue; }
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
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Npc_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("MAX_HEALTH"));
	outFields->push(HX_CSTRING("ACCELERATION"));
	outFields->push(HX_CSTRING("RUN_SPEED"));
	outFields->push(HX_CSTRING("SPRINT_SPEED"));
	outFields->push(HX_CSTRING("JUMP_SPEED"));
	outFields->push(HX_CSTRING("GRAVITY"));
	outFields->push(HX_CSTRING("MAX_KNOCKEDOUT"));
	outFields->push(HX_CSTRING("DISTANCE_SEEN"));
	outFields->push(HX_CSTRING("_hurtCounter"));
	outFields->push(HX_CSTRING("_flickering"));
	outFields->push(HX_CSTRING("_knockedOut"));
	outFields->push(HX_CSTRING("_moveTimer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Npc_obj,MAX_HEALTH),HX_CSTRING("MAX_HEALTH")},
	{hx::fsInt,(int)offsetof(Npc_obj,ACCELERATION),HX_CSTRING("ACCELERATION")},
	{hx::fsInt,(int)offsetof(Npc_obj,RUN_SPEED),HX_CSTRING("RUN_SPEED")},
	{hx::fsInt,(int)offsetof(Npc_obj,SPRINT_SPEED),HX_CSTRING("SPRINT_SPEED")},
	{hx::fsInt,(int)offsetof(Npc_obj,JUMP_SPEED),HX_CSTRING("JUMP_SPEED")},
	{hx::fsInt,(int)offsetof(Npc_obj,GRAVITY),HX_CSTRING("GRAVITY")},
	{hx::fsInt,(int)offsetof(Npc_obj,MAX_KNOCKEDOUT),HX_CSTRING("MAX_KNOCKEDOUT")},
	{hx::fsInt,(int)offsetof(Npc_obj,DISTANCE_SEEN),HX_CSTRING("DISTANCE_SEEN")},
	{hx::fsFloat,(int)offsetof(Npc_obj,_hurtCounter),HX_CSTRING("_hurtCounter")},
	{hx::fsBool,(int)offsetof(Npc_obj,_flickering),HX_CSTRING("_flickering")},
	{hx::fsBool,(int)offsetof(Npc_obj,_knockedOut),HX_CSTRING("_knockedOut")},
	{hx::fsFloat,(int)offsetof(Npc_obj,_moveTimer),HX_CSTRING("_moveTimer")},
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
	HX_CSTRING("_hurtCounter"),
	HX_CSTRING("_flickering"),
	HX_CSTRING("_knockedOut"),
	HX_CSTRING("_moveTimer"),
	HX_CSTRING("update"),
	HX_CSTRING("animationCheck"),
	HX_CSTRING("controls"),
	HX_CSTRING("stun"),
	HX_CSTRING("flicker"),
	HX_CSTRING("knockedOut"),
	HX_CSTRING("knockedOutCheck"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Npc_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Npc_obj::__mClass,"__mClass");
};

#endif

Class Npc_obj::__mClass;

void Npc_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Npc"), hx::TCanCast< Npc_obj> ,sStaticFields,sMemberFields,
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

void Npc_obj::__boot()
{
}

