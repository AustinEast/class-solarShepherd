#include <hxcpp.h>

#ifndef INCLUDED_CrateGun
#include <CrateGun.h>
#endif
#ifndef INCLUDED_LandPlayer
#include <LandPlayer.h>
#endif
#ifndef INCLUDED_LandState
#include <LandState.h>
#endif
#ifndef INCLUDED_PolarSprite
#include <PolarSprite.h>
#endif
#ifndef INCLUDED_Reg
#include <Reg.h>
#endif
#ifndef INCLUDED_Shooter
#include <Shooter.h>
#endif
#ifndef INCLUDED_StunGun
#include <StunGun.h>
#endif
#ifndef INCLUDED_TiledStage
#include <TiledStage.h>
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledMap
#include <flixel/addons/editors/tiled/TiledMap.h>
#endif
#ifndef INCLUDED_flixel_addons_weapon_FlxWeapon
#include <flixel/addons/weapon/FlxWeapon.h>
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
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif

Void LandState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("LandState","new",0xd3b387f8,"LandState.new","LandState.hx",18,0x987b9e78)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(18)
	super::__construct(MaxSize);
}
;
	return null();
}

//LandState_obj::~LandState_obj() { }

Dynamic LandState_obj::__CreateEmpty() { return  new LandState_obj; }
hx::ObjectPtr< LandState_obj > LandState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< LandState_obj > result = new LandState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic LandState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LandState_obj > result = new LandState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void LandState_obj::create( ){
{
		HX_STACK_FRAME("LandState","create",0x28947e64,"LandState.create","LandState.hx",28,0x987b9e78)
		HX_STACK_THIS(this)
		HX_STACK_LINE(29)
		::flixel::FlxG_obj::camera->bgColor = (int)-15447724;
		HX_STACK_LINE(32)
		::TiledStage _g = ::TiledStage_obj::__new(::Reg_obj::levels->__get(::Reg_obj::level));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(32)
		this->_level = _g;
		HX_STACK_LINE(33)
		::LandPlayer _g1 = ::LandPlayer_obj::__new((int)20,(int)50);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(33)
		this->_player = _g1;
		HX_STACK_LINE(34)
		::flixel::group::FlxGroup _g2 = ::flixel::group::FlxGroup_obj::__new(null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(34)
		this->_enemies = _g2;
		HX_STACK_LINE(37)
		this->add(this->_level->scenarioTiles);
		HX_STACK_LINE(38)
		this->add(this->_enemies);
		HX_STACK_LINE(39)
		this->_level->loadObjects(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(42)
		{
			HX_STACK_LINE(42)
			::flixel::util::FlxRect _this = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(42)
			_this->x = (int)0;
			HX_STACK_LINE(42)
			_this->y = (int)0;
			HX_STACK_LINE(42)
			_this->width = this->_level->fullWidth;
			HX_STACK_LINE(42)
			_this->height = this->_level->fullHeight;
			HX_STACK_LINE(42)
			_this;
		}
		HX_STACK_LINE(48)
		::flixel::FlxG_obj::camera->follow(this->_player,(int)1,null(),null());
		HX_STACK_LINE(50)
		this->super::create();
	}
return null();
}


Void LandState_obj::destroy( ){
{
		HX_STACK_FRAME("LandState","destroy",0x6c759092,"LandState.destroy","LandState.hx",59,0x987b9e78)
		HX_STACK_THIS(this)
		HX_STACK_LINE(59)
		this->super::destroy();
	}
return null();
}


Void LandState_obj::update( ){
{
		HX_STACK_FRAME("LandState","update",0x338a9d71,"LandState.update","LandState.hx",66,0x987b9e78)
		HX_STACK_THIS(this)
		HX_STACK_LINE(67)
		this->super::update();
		HX_STACK_LINE(69)
		::flixel::FlxG_obj::overlap(this->_level->scenarioTiles,this->_player,null(),::flixel::FlxObject_obj::separate_dyn());
		HX_STACK_LINE(70)
		::flixel::FlxG_obj::overlap(this->_level->scenarioTiles,this->_enemies,null(),::flixel::FlxObject_obj::separate_dyn());
		HX_STACK_LINE(71)
		::flixel::FlxG_obj::overlap(this->_level->scenarioTiles,this->_player->_crateGun->group,this->crateCollision_dyn(),null());
		HX_STACK_LINE(73)
		::flixel::FlxG_obj::overlap(this->_player,this->_enemies,this->enemyCollision_dyn(),null());
		HX_STACK_LINE(74)
		::flixel::FlxG_obj::overlap(this->_player,this->_player->_crateGun->group,null(),::flixel::FlxObject_obj::separate_dyn());
		HX_STACK_LINE(75)
		::flixel::FlxG_obj::overlap(this->_player->_crateGun->group,this->_player->_crateGun->group,null(),::flixel::FlxObject_obj::separate_dyn());
		HX_STACK_LINE(77)
		::flixel::FlxG_obj::overlap(this->_enemies,this->_player->_crateGun->group,null(),::flixel::FlxObject_obj::separate_dyn());
		HX_STACK_LINE(78)
		::flixel::FlxG_obj::overlap(this->_enemies,this->_player->_stunGun->group,this->enemyHitWithBullet_dyn(),null());
	}
return null();
}


Void LandState_obj::crateCollision( ::flixel::FlxObject Level,::flixel::FlxSprite Bullet){
{
		HX_STACK_FRAME("LandState","crateCollision",0x9d85d697,"LandState.crateCollision","LandState.hx",81,0x987b9e78)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Level,"Level")
		HX_STACK_ARG(Bullet,"Bullet")
		HX_STACK_LINE(82)
		::flixel::FlxObject_obj::separate(Level,Bullet);
		HX_STACK_LINE(83)
		Bullet->drag->set_x((int)400);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(LandState_obj,crateCollision,(void))

Void LandState_obj::stunCollision( ::flixel::FlxObject Level,::flixel::FlxSprite Bullet){
{
		HX_STACK_FRAME("LandState","stunCollision",0x05c44170,"LandState.stunCollision","LandState.hx",87,0x987b9e78)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Level,"Level")
		HX_STACK_ARG(Bullet,"Bullet")
		HX_STACK_LINE(87)
		Bullet->kill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(LandState_obj,stunCollision,(void))

Void LandState_obj::enemyCollision( ::LandPlayer Player,Dynamic Enemy){
{
		HX_STACK_FRAME("LandState","enemyCollision",0x9298ac72,"LandState.enemyCollision","LandState.hx",91,0x987b9e78)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Player,"Player")
		HX_STACK_ARG(Enemy,"Enemy")
		HX_STACK_LINE(91)
		if (((Player->_flickering == false))){
			HX_STACK_LINE(93)
			Player->hurt((int)1);
			HX_STACK_LINE(94)
			Player->velocity->set_x((Enemy->__Field(HX_CSTRING("velocity"),true)->__Field(HX_CSTRING("x"),true) * (int)2));
			HX_STACK_LINE(95)
			{
				HX_STACK_LINE(95)
				::flixel::util::FlxPoint _g = Player->velocity;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(95)
				_g->set_y((_g->y - (int)100));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(LandState_obj,enemyCollision,(void))

Void LandState_obj::enemyHitWithBullet( Dynamic Enemy,::flixel::FlxSprite Bullet){
{
		HX_STACK_FRAME("LandState","enemyHitWithBullet",0xc23b591b,"LandState.enemyHitWithBullet","LandState.hx",100,0x987b9e78)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Enemy,"Enemy")
		HX_STACK_ARG(Bullet,"Bullet")
		HX_STACK_LINE(100)
		if (((Enemy->__Field(HX_CSTRING("_flickering"),true) == false))){
			HX_STACK_LINE(102)
			Enemy->__Field(HX_CSTRING("stun"),true)((int)1);
			HX_STACK_LINE(103)
			Enemy->__Field(HX_CSTRING("velocity"),true)->__FieldRef(HX_CSTRING("x")) = (Bullet->velocity->x * (int)2);
			HX_STACK_LINE(104)
			hx::SubEq(Enemy->__Field(HX_CSTRING("velocity"),true)->__FieldRef(HX_CSTRING("y")),(int)50);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(LandState_obj,enemyHitWithBullet,(void))


LandState_obj::LandState_obj()
{
}

void LandState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LandState);
	HX_MARK_MEMBER_NAME(_shooter,"_shooter");
	HX_MARK_MEMBER_NAME(_player,"_player");
	HX_MARK_MEMBER_NAME(_level,"_level");
	HX_MARK_MEMBER_NAME(_enemies,"_enemies");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LandState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_shooter,"_shooter");
	HX_VISIT_MEMBER_NAME(_player,"_player");
	HX_VISIT_MEMBER_NAME(_level,"_level");
	HX_VISIT_MEMBER_NAME(_enemies,"_enemies");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic LandState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_level") ) { return _level; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_player") ) { return _player; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_shooter") ) { return _shooter; }
		if (HX_FIELD_EQ(inName,"_enemies") ) { return _enemies; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stunCollision") ) { return stunCollision_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"crateCollision") ) { return crateCollision_dyn(); }
		if (HX_FIELD_EQ(inName,"enemyCollision") ) { return enemyCollision_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"enemyHitWithBullet") ) { return enemyHitWithBullet_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LandState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_level") ) { _level=inValue.Cast< ::TiledStage >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_player") ) { _player=inValue.Cast< ::LandPlayer >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_shooter") ) { _shooter=inValue.Cast< ::Shooter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_enemies") ) { _enemies=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LandState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_shooter"));
	outFields->push(HX_CSTRING("_player"));
	outFields->push(HX_CSTRING("_level"));
	outFields->push(HX_CSTRING("_enemies"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Shooter*/ ,(int)offsetof(LandState_obj,_shooter),HX_CSTRING("_shooter")},
	{hx::fsObject /*::LandPlayer*/ ,(int)offsetof(LandState_obj,_player),HX_CSTRING("_player")},
	{hx::fsObject /*::TiledStage*/ ,(int)offsetof(LandState_obj,_level),HX_CSTRING("_level")},
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(LandState_obj,_enemies),HX_CSTRING("_enemies")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_shooter"),
	HX_CSTRING("_player"),
	HX_CSTRING("_level"),
	HX_CSTRING("_enemies"),
	HX_CSTRING("create"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("crateCollision"),
	HX_CSTRING("stunCollision"),
	HX_CSTRING("enemyCollision"),
	HX_CSTRING("enemyHitWithBullet"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LandState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LandState_obj::__mClass,"__mClass");
};

#endif

Class LandState_obj::__mClass;

void LandState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("LandState"), hx::TCanCast< LandState_obj> ,sStaticFields,sMemberFields,
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

void LandState_obj::__boot()
{
}

