#include <hxcpp.h>

#ifndef INCLUDED_Reg
#include <Reg.h>
#endif
#ifndef INCLUDED_TiledStage
#include <TiledStage.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledMap
#include <flixel/addons/editors/tiled/TiledMap.h>
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
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif

Void Reg_obj::__construct()
{
	return null();
}

//Reg_obj::~Reg_obj() { }

Dynamic Reg_obj::__CreateEmpty() { return  new Reg_obj; }
hx::ObjectPtr< Reg_obj > Reg_obj::__new()
{  hx::ObjectPtr< Reg_obj > result = new Reg_obj();
	result->__construct();
	return result;}

Dynamic Reg_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Reg_obj > result = new Reg_obj();
	result->__construct();
	return result;}

Array< ::String > Reg_obj::levels;

int Reg_obj::level;

::TiledStage Reg_obj::loadedLevel;

Dynamic Reg_obj::scores;

int Reg_obj::score;

Array< ::Dynamic > Reg_obj::saves;

Array< int > Reg_obj::colors;

::flixel::group::FlxGroup Reg_obj::enemyBullets;

::String Reg_obj::TILES;

::String Reg_obj::LANDPLAYER;

::String Reg_obj::STUNGUNBULLET;

::String Reg_obj::CRATE;

::String Reg_obj::THUD;

::String Reg_obj::MENUSELECT;

::String Reg_obj::STUNGUNSOUND;

::String Reg_obj::PLAYERJUMP;

::String Reg_obj::ENEMYSHIPDESTROYED;

::String Reg_obj::PLAYERSHIPDESTROYED;

::String Reg_obj::PICKUP;


Reg_obj::Reg_obj()
{
}

Dynamic Reg_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { return level; }
		if (HX_FIELD_EQ(inName,"score") ) { return score; }
		if (HX_FIELD_EQ(inName,"saves") ) { return saves; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"levels") ) { return levels; }
		if (HX_FIELD_EQ(inName,"scores") ) { return scores; }
		if (HX_FIELD_EQ(inName,"colors") ) { return colors; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"loadedLevel") ) { return loadedLevel; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"enemyBullets") ) { return enemyBullets; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Reg_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { level=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"score") ) { score=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"saves") ) { saves=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"levels") ) { levels=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scores") ) { scores=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colors") ) { colors=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"loadedLevel") ) { loadedLevel=inValue.Cast< ::TiledStage >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"enemyBullets") ) { enemyBullets=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Reg_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("levels"),
	HX_CSTRING("level"),
	HX_CSTRING("loadedLevel"),
	HX_CSTRING("scores"),
	HX_CSTRING("score"),
	HX_CSTRING("saves"),
	HX_CSTRING("colors"),
	HX_CSTRING("enemyBullets"),
	HX_CSTRING("TILES"),
	HX_CSTRING("LANDPLAYER"),
	HX_CSTRING("STUNGUNBULLET"),
	HX_CSTRING("CRATE"),
	HX_CSTRING("THUD"),
	HX_CSTRING("MENUSELECT"),
	HX_CSTRING("STUNGUNSOUND"),
	HX_CSTRING("PLAYERJUMP"),
	HX_CSTRING("ENEMYSHIPDESTROYED"),
	HX_CSTRING("PLAYERSHIPDESTROYED"),
	HX_CSTRING("PICKUP"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Reg_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Reg_obj::levels,"levels");
	HX_MARK_MEMBER_NAME(Reg_obj::level,"level");
	HX_MARK_MEMBER_NAME(Reg_obj::loadedLevel,"loadedLevel");
	HX_MARK_MEMBER_NAME(Reg_obj::scores,"scores");
	HX_MARK_MEMBER_NAME(Reg_obj::score,"score");
	HX_MARK_MEMBER_NAME(Reg_obj::saves,"saves");
	HX_MARK_MEMBER_NAME(Reg_obj::colors,"colors");
	HX_MARK_MEMBER_NAME(Reg_obj::enemyBullets,"enemyBullets");
	HX_MARK_MEMBER_NAME(Reg_obj::TILES,"TILES");
	HX_MARK_MEMBER_NAME(Reg_obj::LANDPLAYER,"LANDPLAYER");
	HX_MARK_MEMBER_NAME(Reg_obj::STUNGUNBULLET,"STUNGUNBULLET");
	HX_MARK_MEMBER_NAME(Reg_obj::CRATE,"CRATE");
	HX_MARK_MEMBER_NAME(Reg_obj::THUD,"THUD");
	HX_MARK_MEMBER_NAME(Reg_obj::MENUSELECT,"MENUSELECT");
	HX_MARK_MEMBER_NAME(Reg_obj::STUNGUNSOUND,"STUNGUNSOUND");
	HX_MARK_MEMBER_NAME(Reg_obj::PLAYERJUMP,"PLAYERJUMP");
	HX_MARK_MEMBER_NAME(Reg_obj::ENEMYSHIPDESTROYED,"ENEMYSHIPDESTROYED");
	HX_MARK_MEMBER_NAME(Reg_obj::PLAYERSHIPDESTROYED,"PLAYERSHIPDESTROYED");
	HX_MARK_MEMBER_NAME(Reg_obj::PICKUP,"PICKUP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Reg_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Reg_obj::levels,"levels");
	HX_VISIT_MEMBER_NAME(Reg_obj::level,"level");
	HX_VISIT_MEMBER_NAME(Reg_obj::loadedLevel,"loadedLevel");
	HX_VISIT_MEMBER_NAME(Reg_obj::scores,"scores");
	HX_VISIT_MEMBER_NAME(Reg_obj::score,"score");
	HX_VISIT_MEMBER_NAME(Reg_obj::saves,"saves");
	HX_VISIT_MEMBER_NAME(Reg_obj::colors,"colors");
	HX_VISIT_MEMBER_NAME(Reg_obj::enemyBullets,"enemyBullets");
	HX_VISIT_MEMBER_NAME(Reg_obj::TILES,"TILES");
	HX_VISIT_MEMBER_NAME(Reg_obj::LANDPLAYER,"LANDPLAYER");
	HX_VISIT_MEMBER_NAME(Reg_obj::STUNGUNBULLET,"STUNGUNBULLET");
	HX_VISIT_MEMBER_NAME(Reg_obj::CRATE,"CRATE");
	HX_VISIT_MEMBER_NAME(Reg_obj::THUD,"THUD");
	HX_VISIT_MEMBER_NAME(Reg_obj::MENUSELECT,"MENUSELECT");
	HX_VISIT_MEMBER_NAME(Reg_obj::STUNGUNSOUND,"STUNGUNSOUND");
	HX_VISIT_MEMBER_NAME(Reg_obj::PLAYERJUMP,"PLAYERJUMP");
	HX_VISIT_MEMBER_NAME(Reg_obj::ENEMYSHIPDESTROYED,"ENEMYSHIPDESTROYED");
	HX_VISIT_MEMBER_NAME(Reg_obj::PLAYERSHIPDESTROYED,"PLAYERSHIPDESTROYED");
	HX_VISIT_MEMBER_NAME(Reg_obj::PICKUP,"PICKUP");
};

#endif

Class Reg_obj::__mClass;

void Reg_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Reg"), hx::TCanCast< Reg_obj> ,sStaticFields,sMemberFields,
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

void Reg_obj::__boot()
{
	levels= Array_obj< ::String >::__new().Add(HX_CSTRING("assets/data/testMap.tmx"));
	level= (int)0;
	scores= Dynamic( Array_obj<Dynamic>::__new());
	score= (int)0;
	saves= Array_obj< ::Dynamic >::__new();
	colors= Array_obj< int >::__new().Add((int)-14341082).Add((int)-3357819).Add((int)-3656107).Add((int)-13996897);
	enemyBullets= ::flixel::group::FlxGroup_obj::__new(null());
	TILES= HX_CSTRING("assets/images/map/");
	LANDPLAYER= HX_CSTRING("assets/images/Dog.png");
	STUNGUNBULLET= HX_CSTRING("assets/temp/beam.png");
	CRATE= HX_CSTRING("assets/temp/editorblock.png");
	THUD= HX_CSTRING("assets/sounds/KnockOrBossFire.mp3");
	MENUSELECT= HX_CSTRING("assets/sounds/MainMenuNavi.mp3");
	STUNGUNSOUND= HX_CSTRING("assets/sounds/stunGun.mp3");
	PLAYERJUMP= HX_CSTRING("assets/sounds/playerJump.mp3");
	ENEMYSHIPDESTROYED= HX_CSTRING("assets/sounds/EnemySpaceshipDestroyed.mp3");
	PLAYERSHIPDESTROYED= HX_CSTRING("assets/sounds/playerSpaceshipDestroyed.mp3");
	PICKUP= HX_CSTRING("assets/sounds/powerupPickup.mp3");
}

