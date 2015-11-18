#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_LandState
#include <LandState.h>
#endif
#ifndef INCLUDED_TiledStage
#include <TiledStage.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledLayer
#include <flixel/addons/editors/tiled/TiledLayer.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledMap
#include <flixel/addons/editors/tiled/TiledMap.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledObject
#include <flixel/addons/editors/tiled/TiledObject.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledObjectGroup
#include <flixel/addons/editors/tiled/TiledObjectGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledPropertySet
#include <flixel/addons/editors/tiled/TiledPropertySet.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTileSet
#include <flixel/addons/editors/tiled/TiledTileSet.h>
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
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif

Void TiledStage_obj::__construct(Dynamic tiledLevel)
{
HX_STACK_FRAME("TiledStage","new",0xb4255a7a,"TiledStage.new","TiledStage.hx",18,0x390f1236)
HX_STACK_THIS(this)
HX_STACK_ARG(tiledLevel,"tiledLevel")
{
	HX_STACK_LINE(35)
	this->f = (int)0;
	HX_STACK_LINE(34)
	this->p = (int)0;
	HX_STACK_LINE(33)
	this->s = (int)0;
	HX_STACK_LINE(32)
	this->c = (int)0;
	HX_STACK_LINE(39)
	super::__construct(tiledLevel);
	HX_STACK_LINE(41)
	::flixel::group::FlxGroup _g = ::flixel::group::FlxGroup_obj::__new(null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(41)
	this->foregroundTiles = _g;
	HX_STACK_LINE(42)
	::flixel::group::FlxGroup _g1 = ::flixel::group::FlxGroup_obj::__new(null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(42)
	this->backgroundTiles = _g1;
	HX_STACK_LINE(43)
	::flixel::group::FlxGroup _g2 = ::flixel::group::FlxGroup_obj::__new(null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(43)
	this->scenarioTiles = _g2;
	HX_STACK_LINE(46)
	{
		HX_STACK_LINE(46)
		int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(46)
		Array< ::Dynamic > _g11 = this->layers;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(46)
		while((true)){
			HX_STACK_LINE(46)
			if ((!(((_g3 < _g11->length))))){
				HX_STACK_LINE(46)
				break;
			}
			HX_STACK_LINE(46)
			::flixel::addons::editors::tiled::TiledLayer tileLayer = _g11->__get(_g3).StaticCast< ::flixel::addons::editors::tiled::TiledLayer >();		HX_STACK_VAR(tileLayer,"tileLayer");
			HX_STACK_LINE(46)
			++(_g3);
			HX_STACK_LINE(48)
			::String tileSheetName = tileLayer->properties->keys->get(HX_CSTRING("tileset"));		HX_STACK_VAR(tileSheetName,"tileSheetName");
			HX_STACK_LINE(50)
			if (((tileSheetName == null()))){
				HX_STACK_LINE(51)
				HX_STACK_DO_THROW(((HX_CSTRING("'tileset' property not defined for the '") + tileLayer->name) + HX_CSTRING("' layer. Please add the property to the layer.")));
			}
			HX_STACK_LINE(53)
			::flixel::addons::editors::tiled::TiledTileSet tileSet = null();		HX_STACK_VAR(tileSet,"tileSet");
			HX_STACK_LINE(54)
			for(::cpp::FastIterator_obj< ::flixel::addons::editors::tiled::TiledTileSet > *__it = ::cpp::CreateFastIterator< ::flixel::addons::editors::tiled::TiledTileSet >(this->tilesets->iterator());  __it->hasNext(); ){
				::flixel::addons::editors::tiled::TiledTileSet ts = __it->next();
				if (((ts->name == tileSheetName))){
					HX_STACK_LINE(58)
					tileSet = ts;
					HX_STACK_LINE(59)
					break;
				}
;
			}
			HX_STACK_LINE(63)
			if (((tileSet == null()))){
				HX_STACK_LINE(64)
				HX_STACK_DO_THROW(((((HX_CSTRING("Tileset '") + tileSheetName) + HX_CSTRING(" not found. Did you mispell the 'tilesheet' property in ")) + tileLayer->name) + HX_CSTRING("' layer?")));
			}
			HX_STACK_LINE(66)
			::haxe::io::Path imagePath = ::haxe::io::Path_obj::__new(tileSet->imageSource);		HX_STACK_VAR(imagePath,"imagePath");
			HX_STACK_LINE(67)
			::String processedPath = (((HX_CSTRING("assets/images/map/") + imagePath->file) + HX_CSTRING(".")) + imagePath->ext);		HX_STACK_VAR(processedPath,"processedPath");
			HX_STACK_LINE(69)
			::flixel::tile::FlxTilemap tilemap = ::flixel::tile::FlxTilemap_obj::__new();		HX_STACK_VAR(tilemap,"tilemap");
			HX_STACK_LINE(70)
			tilemap->widthInTiles = this->width;
			HX_STACK_LINE(71)
			tilemap->heightInTiles = this->height;
			HX_STACK_LINE(72)
			Array< int > _g31 = tileLayer->get_tileArray();		HX_STACK_VAR(_g31,"_g31");
			HX_STACK_LINE(72)
			tilemap->loadMap(_g31,processedPath,tileSet->tileWidth,tileSet->tileHeight,(int)0,tileSet->firstGID,(int)1,(int)1);
			HX_STACK_LINE(74)
			if (((tileLayer->name == HX_CSTRING("bg")))){
				HX_STACK_LINE(76)
				this->backgroundTiles->add(tilemap);
			}
			else{
				HX_STACK_LINE(78)
				if (((tileLayer->name == HX_CSTRING("fg")))){
					HX_STACK_LINE(80)
					this->foregroundTiles->add(tilemap);
				}
				else{
					HX_STACK_LINE(84)
					if (((this->collidableTileLayers == null()))){
						HX_STACK_LINE(85)
						Array< ::Dynamic > _g4 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(85)
						this->collidableTileLayers = _g4;
					}
					HX_STACK_LINE(87)
					if (((tileLayer->name == HX_CSTRING("scenario")))){
						HX_STACK_LINE(88)
						this->scenarioTiles->add(tilemap);
					}
					HX_STACK_LINE(91)
					this->collidableTileLayers->push(tilemap);
				}
			}
		}
	}
}
;
	return null();
}

//TiledStage_obj::~TiledStage_obj() { }

Dynamic TiledStage_obj::__CreateEmpty() { return  new TiledStage_obj; }
hx::ObjectPtr< TiledStage_obj > TiledStage_obj::__new(Dynamic tiledLevel)
{  hx::ObjectPtr< TiledStage_obj > result = new TiledStage_obj();
	result->__construct(tiledLevel);
	return result;}

Dynamic TiledStage_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledStage_obj > result = new TiledStage_obj();
	result->__construct(inArgs[0]);
	return result;}

Void TiledStage_obj::loadObjects( ::LandState state){
{
		HX_STACK_FRAME("TiledStage","loadObjects",0x4edd5b68,"TiledStage.loadObjects","TiledStage.hx",99,0x390f1236)
		HX_STACK_THIS(this)
		HX_STACK_ARG(state,"state")
		HX_STACK_LINE(99)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(99)
		Array< ::Dynamic > _g1 = this->objectGroups;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(99)
		while((true)){
			HX_STACK_LINE(99)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(99)
				break;
			}
			HX_STACK_LINE(99)
			::flixel::addons::editors::tiled::TiledObjectGroup group = _g1->__get(_g).StaticCast< ::flixel::addons::editors::tiled::TiledObjectGroup >();		HX_STACK_VAR(group,"group");
			HX_STACK_LINE(99)
			++(_g);
			HX_STACK_LINE(101)
			{
				HX_STACK_LINE(101)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(101)
				Array< ::Dynamic > _g3 = group->objects;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(101)
				while((true)){
					HX_STACK_LINE(101)
					if ((!(((_g2 < _g3->length))))){
						HX_STACK_LINE(101)
						break;
					}
					HX_STACK_LINE(101)
					::flixel::addons::editors::tiled::TiledObject o = _g3->__get(_g2).StaticCast< ::flixel::addons::editors::tiled::TiledObject >();		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(101)
					++(_g2);
					HX_STACK_LINE(103)
					this->loadObject(o,group,state);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledStage_obj,loadObjects,(void))

Void TiledStage_obj::loadObject( ::flixel::addons::editors::tiled::TiledObject o,::flixel::addons::editors::tiled::TiledObjectGroup g,::LandState state){
{
		HX_STACK_FRAME("TiledStage","loadObject",0xa35dfaab,"TiledStage.loadObject","TiledStage.hx",109,0x390f1236)
		HX_STACK_THIS(this)
		HX_STACK_ARG(o,"o")
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(state,"state")
		HX_STACK_LINE(110)
		int x = o->x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(111)
		int y = o->y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(114)
		if (((o->gid != (int)-1))){
			HX_STACK_LINE(115)
			hx::SubEq(y,g->map->getGidOwner(o->gid)->tileHeight);
		}
		HX_STACK_LINE(117)
		{
			HX_STACK_LINE(117)
			::String _g = o->type.toLowerCase();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(117)
			::String _switch_1 = (_g);
			if (  ( _switch_1==HX_CSTRING("chaser"))){
				HX_STACK_LINE(123)
				if (((state->_chaserArray == null()))){
					HX_STACK_LINE(124)
					Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(124)
					state->_chaserArray = _g1;
				}
				HX_STACK_LINE(126)
				{
					HX_STACK_LINE(126)
					::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->__Field(HX_CSTRING("set"),true)(x,y);		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(126)
					point->_inPool = false;
					HX_STACK_LINE(126)
					state->_chaserArray[this->c] = point;
				}
				HX_STACK_LINE(127)
				hx::AddEq(this->c,(int)1);
			}
			else if (  ( _switch_1==HX_CSTRING("shooter"))){
				HX_STACK_LINE(131)
				if (((state->_shooterArray == null()))){
					HX_STACK_LINE(132)
					Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(132)
					state->_shooterArray = _g1;
				}
				HX_STACK_LINE(134)
				{
					HX_STACK_LINE(134)
					::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->__Field(HX_CSTRING("set"),true)(x,y);		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(134)
					point->_inPool = false;
					HX_STACK_LINE(134)
					state->_shooterArray[this->s] = point;
				}
				HX_STACK_LINE(135)
				hx::AddEq(this->s,(int)1);
			}
			else if (  ( _switch_1==HX_CSTRING("patroller"))){
				HX_STACK_LINE(139)
				if (((state->_patrollerArray == null()))){
					HX_STACK_LINE(140)
					Array< ::Dynamic > _g2 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(140)
					state->_patrollerArray = _g2;
				}
				HX_STACK_LINE(142)
				{
					HX_STACK_LINE(142)
					::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->__Field(HX_CSTRING("set"),true)(x,y);		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(142)
					point->_inPool = false;
					HX_STACK_LINE(142)
					state->_patrollerArray[this->p] = point;
				}
				HX_STACK_LINE(143)
				hx::AddEq(this->p,(int)1);
			}
			else if (  ( _switch_1==HX_CSTRING("fuel"))){
				HX_STACK_LINE(147)
				if (((state->_fuelArray == null()))){
					HX_STACK_LINE(148)
					Array< ::Dynamic > _g3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(148)
					state->_fuelArray = _g3;
				}
				HX_STACK_LINE(150)
				{
					HX_STACK_LINE(150)
					::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->__Field(HX_CSTRING("set"),true)(x,y);		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(150)
					point->_inPool = false;
					HX_STACK_LINE(150)
					state->_fuelArray[this->f] = point;
				}
				HX_STACK_LINE(151)
				hx::AddEq(this->f,(int)1);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TiledStage_obj,loadObject,(void))


TiledStage_obj::TiledStage_obj()
{
}

void TiledStage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledStage);
	HX_MARK_MEMBER_NAME(foregroundTiles,"foregroundTiles");
	HX_MARK_MEMBER_NAME(backgroundTiles,"backgroundTiles");
	HX_MARK_MEMBER_NAME(scenarioTiles,"scenarioTiles");
	HX_MARK_MEMBER_NAME(collidableTileLayers,"collidableTileLayers");
	HX_MARK_MEMBER_NAME(c,"c");
	HX_MARK_MEMBER_NAME(s,"s");
	HX_MARK_MEMBER_NAME(p,"p");
	HX_MARK_MEMBER_NAME(f,"f");
	::flixel::addons::editors::tiled::TiledMap_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TiledStage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(foregroundTiles,"foregroundTiles");
	HX_VISIT_MEMBER_NAME(backgroundTiles,"backgroundTiles");
	HX_VISIT_MEMBER_NAME(scenarioTiles,"scenarioTiles");
	HX_VISIT_MEMBER_NAME(collidableTileLayers,"collidableTileLayers");
	HX_VISIT_MEMBER_NAME(c,"c");
	HX_VISIT_MEMBER_NAME(s,"s");
	HX_VISIT_MEMBER_NAME(p,"p");
	HX_VISIT_MEMBER_NAME(f,"f");
	::flixel::addons::editors::tiled::TiledMap_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TiledStage_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"c") ) { return c; }
		if (HX_FIELD_EQ(inName,"s") ) { return s; }
		if (HX_FIELD_EQ(inName,"p") ) { return p; }
		if (HX_FIELD_EQ(inName,"f") ) { return f; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loadObject") ) { return loadObject_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"loadObjects") ) { return loadObjects_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"scenarioTiles") ) { return scenarioTiles; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"foregroundTiles") ) { return foregroundTiles; }
		if (HX_FIELD_EQ(inName,"backgroundTiles") ) { return backgroundTiles; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"collidableTileLayers") ) { return collidableTileLayers; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TiledStage_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"c") ) { c=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"p") ) { p=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"f") ) { f=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"scenarioTiles") ) { scenarioTiles=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"foregroundTiles") ) { foregroundTiles=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backgroundTiles") ) { backgroundTiles=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"collidableTileLayers") ) { collidableTileLayers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledStage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("foregroundTiles"));
	outFields->push(HX_CSTRING("backgroundTiles"));
	outFields->push(HX_CSTRING("scenarioTiles"));
	outFields->push(HX_CSTRING("collidableTileLayers"));
	outFields->push(HX_CSTRING("c"));
	outFields->push(HX_CSTRING("s"));
	outFields->push(HX_CSTRING("p"));
	outFields->push(HX_CSTRING("f"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(TiledStage_obj,foregroundTiles),HX_CSTRING("foregroundTiles")},
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(TiledStage_obj,backgroundTiles),HX_CSTRING("backgroundTiles")},
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(TiledStage_obj,scenarioTiles),HX_CSTRING("scenarioTiles")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TiledStage_obj,collidableTileLayers),HX_CSTRING("collidableTileLayers")},
	{hx::fsInt,(int)offsetof(TiledStage_obj,c),HX_CSTRING("c")},
	{hx::fsInt,(int)offsetof(TiledStage_obj,s),HX_CSTRING("s")},
	{hx::fsInt,(int)offsetof(TiledStage_obj,p),HX_CSTRING("p")},
	{hx::fsInt,(int)offsetof(TiledStage_obj,f),HX_CSTRING("f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("foregroundTiles"),
	HX_CSTRING("backgroundTiles"),
	HX_CSTRING("scenarioTiles"),
	HX_CSTRING("collidableTileLayers"),
	HX_CSTRING("c"),
	HX_CSTRING("s"),
	HX_CSTRING("p"),
	HX_CSTRING("f"),
	HX_CSTRING("loadObjects"),
	HX_CSTRING("loadObject"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledStage_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledStage_obj::__mClass,"__mClass");
};

#endif

Class TiledStage_obj::__mClass;

void TiledStage_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("TiledStage"), hx::TCanCast< TiledStage_obj> ,sStaticFields,sMemberFields,
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

void TiledStage_obj::__boot()
{
}

