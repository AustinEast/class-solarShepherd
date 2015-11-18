#include <hxcpp.h>

#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_PolarSprite
#include <PolarSprite.h>
#endif
#ifndef INCLUDED_SpaceBullet
#include <SpaceBullet.h>
#endif
#ifndef INCLUDED_SpaceEnemy
#include <SpaceEnemy.h>
#endif
#ifndef INCLUDED_SpacePlayer
#include <SpacePlayer.h>
#endif
#ifndef INCLUDED_SpaceState
#include <SpaceState.h>
#endif
#ifndef INCLUDED_Star
#include <Star.h>
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
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
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

Void SpaceState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("SpaceState","new",0xf7b311fd,"SpaceState.new","SpaceState.hx",17,0x048dfc13)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(17)
	super::__construct(MaxSize);
}
;
	return null();
}

//SpaceState_obj::~SpaceState_obj() { }

Dynamic SpaceState_obj::__CreateEmpty() { return  new SpaceState_obj; }
hx::ObjectPtr< SpaceState_obj > SpaceState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< SpaceState_obj > result = new SpaceState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic SpaceState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SpaceState_obj > result = new SpaceState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void SpaceState_obj::create( ){
{
		HX_STACK_FRAME("SpaceState","create",0x88b5457f,"SpaceState.create","SpaceState.hx",30,0x048dfc13)
		HX_STACK_THIS(this)
		HX_STACK_LINE(34)
		::flixel::group::FlxGroup _g = ::flixel::group::FlxGroup_obj::__new(this->_numEnemies);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(34)
		this->_enemies = _g;
		HX_STACK_LINE(35)
		this->_numEnemies = (int)12;
		HX_STACK_LINE(36)
		{
			HX_STACK_LINE(36)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(36)
			int _g2 = this->_numEnemies;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(36)
			while((true)){
				HX_STACK_LINE(36)
				if ((!(((_g1 < _g2))))){
					HX_STACK_LINE(36)
					break;
				}
				HX_STACK_LINE(36)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(37)
				::SpaceEnemy _g11 = ::SpaceEnemy_obj::__new(((int)12 + (i * (int)25)),(int)20);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(37)
				this->_enemy = _g11;
				HX_STACK_LINE(38)
				this->_enemies->add(this->_enemy);
			}
		}
		HX_STACK_LINE(42)
		::flixel::group::FlxGroup _g2 = ::flixel::group::FlxGroup_obj::__new(this->_numBullets);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(42)
		this->_bullets = _g2;
		HX_STACK_LINE(43)
		this->_numBullets = (int)50;
		HX_STACK_LINE(44)
		{
			HX_STACK_LINE(44)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(44)
			int _g3 = this->_numBullets;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(44)
			while((true)){
				HX_STACK_LINE(44)
				if ((!(((_g1 < _g3))))){
					HX_STACK_LINE(44)
					break;
				}
				HX_STACK_LINE(44)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(45)
				::SpaceBullet _g31 = ::SpaceBullet_obj::__new();		HX_STACK_VAR(_g31,"_g31");
				HX_STACK_LINE(45)
				this->_bullet = _g31;
				HX_STACK_LINE(46)
				this->_bullet->set_exists(false);
				HX_STACK_LINE(47)
				this->_bullets->add(this->_bullet);
			}
		}
		HX_STACK_LINE(51)
		::SpacePlayer _g4 = ::SpacePlayer_obj::__new((Float(::flixel::FlxG_obj::width) / Float((int)2)),(::flixel::FlxG_obj::height - (int)20));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(51)
		this->_player = _g4;
		HX_STACK_LINE(53)
		{
			HX_STACK_LINE(53)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(53)
			while((true)){
				HX_STACK_LINE(53)
				if ((!(((_g1 < (int)64))))){
					HX_STACK_LINE(53)
					break;
				}
				HX_STACK_LINE(53)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(54)
				::Star star = ::Star_obj::__new();		HX_STACK_VAR(star,"star");
				HX_STACK_LINE(55)
				this->add(star);
			}
		}
		HX_STACK_LINE(59)
		this->add(this->_enemies);
		HX_STACK_LINE(60)
		this->add(this->_bullets);
		HX_STACK_LINE(61)
		this->add(this->_player);
		HX_STACK_LINE(63)
		this->super::create();
	}
return null();
}


Void SpaceState_obj::destroy( ){
{
		HX_STACK_FRAME("SpaceState","destroy",0x29030117,"SpaceState.destroy","SpaceState.hx",72,0x048dfc13)
		HX_STACK_THIS(this)
		HX_STACK_LINE(72)
		this->super::destroy();
	}
return null();
}


Void SpaceState_obj::update( ){
{
		HX_STACK_FRAME("SpaceState","update",0x93ab648c,"SpaceState.update","SpaceState.hx",79,0x048dfc13)
		HX_STACK_THIS(this)
		HX_STACK_LINE(80)
		this->super::update();
		HX_STACK_LINE(82)
		::flixel::FlxG_obj::overlap(this->_bullets,this->_player,this->bounce_dyn(),null());
		HX_STACK_LINE(83)
		::flixel::FlxG_obj::overlap(this->_bullets,this->_enemies,this->bounce_dyn(),null());
	}
return null();
}


Void SpaceState_obj::onHitPaddle( Dynamic thisBall,Dynamic thisPaddle){
{
		HX_STACK_FRAME("SpaceState","onHitPaddle",0xd2a6889b,"SpaceState.onHitPaddle","SpaceState.hx",91,0x048dfc13)
		HX_STACK_THIS(this)
		HX_STACK_ARG(thisBall,"thisBall")
		HX_STACK_ARG(thisPaddle,"thisPaddle")
		HX_STACK_LINE(91)
		thisBall->__Field(HX_CSTRING("bounce"),true)(thisPaddle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SpaceState_obj,onHitPaddle,(void))

Void SpaceState_obj::bounce( Dynamic _bullet,::PolarSprite _paddle){
{
		HX_STACK_FRAME("SpaceState","bounce",0x72c3640b,"SpaceState.bounce","SpaceState.hx",96,0x048dfc13)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_bullet,"_bullet")
		HX_STACK_ARG(_paddle,"_paddle")
		HX_STACK_LINE(96)
		if (((_bullet->__Field(HX_CSTRING("_hitPaddle"),true) != _paddle))){
			HX_STACK_LINE(99)
			if (((_paddle->_polarity == _bullet->__Field(HX_CSTRING("_polarity"),true)))){
				HX_STACK_LINE(101)
				hx::AddEq(_bullet->__Field(HX_CSTRING("velocity"),true)->__FieldRef(HX_CSTRING("x")),(Float(_paddle->velocity->x) / Float((int)2)));
				HX_STACK_LINE(102)
				hx::MultEq(_bullet->__Field(HX_CSTRING("velocity"),true)->__FieldRef(HX_CSTRING("y")),(int)-1);
				HX_STACK_LINE(103)
				_bullet->__FieldRef(HX_CSTRING("_hitPaddle")) = _paddle;
				HX_STACK_LINE(104)
				::flixel::FlxG_obj::sound->play(HX_CSTRING("assets/sounds/MainMenuNavi.mp3"),null(),null(),null(),null());
			}
			else{
				HX_STACK_LINE(107)
				if (((_paddle->_polarity != _bullet->__Field(HX_CSTRING("_polarity"),true)))){
					HX_STACK_LINE(109)
					_paddle->kill();
					HX_STACK_LINE(110)
					_bullet->__Field(HX_CSTRING("kill"),true)();
					HX_STACK_LINE(111)
					::flixel::FlxG_obj::camera->shake(0.02,0.25,null(),null(),null());
					HX_STACK_LINE(112)
					::flixel::FlxG_obj::sound->play(HX_CSTRING("assets/sounds/EnemySpaceshipDestroyed.mp3"),null(),null(),null(),null());
					HX_STACK_LINE(115)
					if (((_paddle->important == true))){
						HX_STACK_LINE(117)
						::flixel::FlxG_obj::camera->flash((int)-1,(int)1,null(),null());
						HX_STACK_LINE(118)
						::flixel::FlxG_obj::camera->fade((int)-16777216,.33,false,this->doneFadeOut_dyn(),null());
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SpaceState_obj,bounce,(void))

Void SpaceState_obj::doneFadeOut( ){
{
		HX_STACK_FRAME("SpaceState","doneFadeOut",0x82710aad,"SpaceState.doneFadeOut","SpaceState.hx",129,0x048dfc13)
		HX_STACK_THIS(this)
		HX_STACK_LINE(129)
		::flixel::FlxState State = ::MenuState_obj::__new(null());		HX_STACK_VAR(State,"State");
		HX_STACK_LINE(129)
		::flixel::FlxG_obj::game->_requestedState = State;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpaceState_obj,doneFadeOut,(void))


SpaceState_obj::SpaceState_obj()
{
}

void SpaceState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SpaceState);
	HX_MARK_MEMBER_NAME(_enemies,"_enemies");
	HX_MARK_MEMBER_NAME(_numEnemies,"_numEnemies");
	HX_MARK_MEMBER_NAME(_enemy,"_enemy");
	HX_MARK_MEMBER_NAME(_player,"_player");
	HX_MARK_MEMBER_NAME(_bullet,"_bullet");
	HX_MARK_MEMBER_NAME(_numBullets,"_numBullets");
	HX_MARK_MEMBER_NAME(_bullets,"_bullets");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SpaceState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_enemies,"_enemies");
	HX_VISIT_MEMBER_NAME(_numEnemies,"_numEnemies");
	HX_VISIT_MEMBER_NAME(_enemy,"_enemy");
	HX_VISIT_MEMBER_NAME(_player,"_player");
	HX_VISIT_MEMBER_NAME(_bullet,"_bullet");
	HX_VISIT_MEMBER_NAME(_numBullets,"_numBullets");
	HX_VISIT_MEMBER_NAME(_bullets,"_bullets");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SpaceState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_enemy") ) { return _enemy; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"bounce") ) { return bounce_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_player") ) { return _player; }
		if (HX_FIELD_EQ(inName,"_bullet") ) { return _bullet; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_enemies") ) { return _enemies; }
		if (HX_FIELD_EQ(inName,"_bullets") ) { return _bullets; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_numEnemies") ) { return _numEnemies; }
		if (HX_FIELD_EQ(inName,"_numBullets") ) { return _numBullets; }
		if (HX_FIELD_EQ(inName,"onHitPaddle") ) { return onHitPaddle_dyn(); }
		if (HX_FIELD_EQ(inName,"doneFadeOut") ) { return doneFadeOut_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SpaceState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_enemy") ) { _enemy=inValue.Cast< ::SpaceEnemy >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_player") ) { _player=inValue.Cast< ::SpacePlayer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bullet") ) { _bullet=inValue.Cast< ::SpaceBullet >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_enemies") ) { _enemies=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bullets") ) { _bullets=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_numEnemies") ) { _numEnemies=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_numBullets") ) { _numBullets=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SpaceState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_enemies"));
	outFields->push(HX_CSTRING("_numEnemies"));
	outFields->push(HX_CSTRING("_enemy"));
	outFields->push(HX_CSTRING("_player"));
	outFields->push(HX_CSTRING("_bullet"));
	outFields->push(HX_CSTRING("_numBullets"));
	outFields->push(HX_CSTRING("_bullets"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(SpaceState_obj,_enemies),HX_CSTRING("_enemies")},
	{hx::fsInt,(int)offsetof(SpaceState_obj,_numEnemies),HX_CSTRING("_numEnemies")},
	{hx::fsObject /*::SpaceEnemy*/ ,(int)offsetof(SpaceState_obj,_enemy),HX_CSTRING("_enemy")},
	{hx::fsObject /*::SpacePlayer*/ ,(int)offsetof(SpaceState_obj,_player),HX_CSTRING("_player")},
	{hx::fsObject /*::SpaceBullet*/ ,(int)offsetof(SpaceState_obj,_bullet),HX_CSTRING("_bullet")},
	{hx::fsInt,(int)offsetof(SpaceState_obj,_numBullets),HX_CSTRING("_numBullets")},
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(SpaceState_obj,_bullets),HX_CSTRING("_bullets")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_enemies"),
	HX_CSTRING("_numEnemies"),
	HX_CSTRING("_enemy"),
	HX_CSTRING("_player"),
	HX_CSTRING("_bullet"),
	HX_CSTRING("_numBullets"),
	HX_CSTRING("_bullets"),
	HX_CSTRING("create"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("onHitPaddle"),
	HX_CSTRING("bounce"),
	HX_CSTRING("doneFadeOut"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SpaceState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SpaceState_obj::__mClass,"__mClass");
};

#endif

Class SpaceState_obj::__mClass;

void SpaceState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("SpaceState"), hx::TCanCast< SpaceState_obj> ,sStaticFields,sMemberFields,
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

void SpaceState_obj::__boot()
{
}

