#include <hxcpp.h>

#ifndef INCLUDED_AssetPaths
#include <AssetPaths.h>
#endif

Void AssetPaths_obj::__construct()
{
	return null();
}

//AssetPaths_obj::~AssetPaths_obj() { }

Dynamic AssetPaths_obj::__CreateEmpty() { return  new AssetPaths_obj; }
hx::ObjectPtr< AssetPaths_obj > AssetPaths_obj::__new()
{  hx::ObjectPtr< AssetPaths_obj > result = new AssetPaths_obj();
	result->__construct();
	return result;}

Dynamic AssetPaths_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetPaths_obj > result = new AssetPaths_obj();
	result->__construct();
	return result;}

::String AssetPaths_obj::data_goes_here__txt;

::String AssetPaths_obj::map1__csv;

::String AssetPaths_obj::Background3__png;

::String AssetPaths_obj::Dog__png;

::String AssetPaths_obj::images_go_here__txt;

::String AssetPaths_obj::polarityPalette__ase;

::String AssetPaths_obj::pongBullet__png;

::String AssetPaths_obj::pongShip__png;

::String AssetPaths_obj::pongShipGrn__png;

::String AssetPaths_obj::pongShipRed__png;

::String AssetPaths_obj::Sand_tile__png;

::String AssetPaths_obj::Tiles__png;

::String AssetPaths_obj::music_goes_here__txt;

::String AssetPaths_obj::sounds_go_here__txt;


AssetPaths_obj::AssetPaths_obj()
{
}

Dynamic AssetPaths_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic AssetPaths_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetPaths_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("data_goes_here__txt"),
	HX_CSTRING("map1__csv"),
	HX_CSTRING("Background3__png"),
	HX_CSTRING("Dog__png"),
	HX_CSTRING("images_go_here__txt"),
	HX_CSTRING("polarityPalette__ase"),
	HX_CSTRING("pongBullet__png"),
	HX_CSTRING("pongShip__png"),
	HX_CSTRING("pongShipGrn__png"),
	HX_CSTRING("pongShipRed__png"),
	HX_CSTRING("Sand_tile__png"),
	HX_CSTRING("Tiles__png"),
	HX_CSTRING("music_goes_here__txt"),
	HX_CSTRING("sounds_go_here__txt"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetPaths_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::data_goes_here__txt,"data_goes_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::map1__csv,"map1__csv");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::Background3__png,"Background3__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::Dog__png,"Dog__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::images_go_here__txt,"images_go_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::polarityPalette__ase,"polarityPalette__ase");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::pongBullet__png,"pongBullet__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::pongShip__png,"pongShip__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::pongShipGrn__png,"pongShipGrn__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::pongShipRed__png,"pongShipRed__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::Sand_tile__png,"Sand_tile__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::Tiles__png,"Tiles__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::music_goes_here__txt,"music_goes_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::sounds_go_here__txt,"sounds_go_here__txt");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::data_goes_here__txt,"data_goes_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::map1__csv,"map1__csv");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::Background3__png,"Background3__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::Dog__png,"Dog__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::images_go_here__txt,"images_go_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::polarityPalette__ase,"polarityPalette__ase");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::pongBullet__png,"pongBullet__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::pongShip__png,"pongShip__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::pongShipGrn__png,"pongShipGrn__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::pongShipRed__png,"pongShipRed__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::Sand_tile__png,"Sand_tile__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::Tiles__png,"Tiles__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::music_goes_here__txt,"music_goes_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::sounds_go_here__txt,"sounds_go_here__txt");
};

#endif

Class AssetPaths_obj::__mClass;

void AssetPaths_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("AssetPaths"), hx::TCanCast< AssetPaths_obj> ,sStaticFields,sMemberFields,
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

void AssetPaths_obj::__boot()
{
	data_goes_here__txt= HX_CSTRING("assets/data/data-goes-here.txt");
	map1__csv= HX_CSTRING("assets/data/map1.csv");
	Background3__png= HX_CSTRING("assets/images/Background3.png");
	Dog__png= HX_CSTRING("assets/images/Dog.png");
	images_go_here__txt= HX_CSTRING("assets/images/images-go-here.txt");
	polarityPalette__ase= HX_CSTRING("assets/images/polarityPalette.ase");
	pongBullet__png= HX_CSTRING("assets/images/pongBullet.png");
	pongShip__png= HX_CSTRING("assets/images/pongShip.png");
	pongShipGrn__png= HX_CSTRING("assets/images/pongShipGrn.png");
	pongShipRed__png= HX_CSTRING("assets/images/pongShipRed.png");
	Sand_tile__png= HX_CSTRING("assets/images/Sand_tile.png");
	Tiles__png= HX_CSTRING("assets/images/Tiles.png");
	music_goes_here__txt= HX_CSTRING("assets/music/music-goes-here.txt");
	sounds_go_here__txt= HX_CSTRING("assets/sounds/sounds-go-here.txt");
}

