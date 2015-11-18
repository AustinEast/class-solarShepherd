#include <hxcpp.h>

#ifndef INCLUDED_LandState
#include <LandState.h>
#endif
#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_SpaceState
#include <SpaceState.h>
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
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
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

Void MenuState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("MenuState","new",0xe563b1c4,"MenuState.new","MenuState.hx",13,0xdfbcb22c)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(13)
	super::__construct(MaxSize);
}
;
	return null();
}

//MenuState_obj::~MenuState_obj() { }

Dynamic MenuState_obj::__CreateEmpty() { return  new MenuState_obj; }
hx::ObjectPtr< MenuState_obj > MenuState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< MenuState_obj > result = new MenuState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic MenuState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MenuState_obj > result = new MenuState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void MenuState_obj::create( ){
{
		HX_STACK_FRAME("MenuState","create",0xe57b7c18,"MenuState.create","MenuState.hx",24,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(26)
		::flixel::text::FlxText _g = ::flixel::text::FlxText_obj::__new((int)0,(int)40,::flixel::FlxG_obj::width,HX_CSTRING("Solar Shepherd Gameplay Modules"),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(26)
		this->_title = _g;
		HX_STACK_LINE(27)
		this->_title->setFormat(null(),(int)16,(int)-1,HX_CSTRING("center"),(int)1,null(),null());
		HX_STACK_LINE(28)
		this->add(this->_title);
		HX_STACK_LINE(30)
		::flixel::ui::FlxButton _g1 = ::flixel::ui::FlxButton_obj::__new(((Float(::flixel::FlxG_obj::width) / Float((int)2)) - (int)90),(int)80,HX_CSTRING("Space"),this->goToSpaceState_dyn());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(30)
		this->_spacePlay = _g1;
		HX_STACK_LINE(31)
		::flixel::ui::FlxButton _g2 = ::flixel::ui::FlxButton_obj::__new(((Float(::flixel::FlxG_obj::width) / Float((int)2)) + (int)30),(int)80,HX_CSTRING("Land"),this->goToLandState_dyn());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		this->_landPlay = _g2;
		HX_STACK_LINE(32)
		this->add(this->_spacePlay);
		HX_STACK_LINE(33)
		this->add(this->_landPlay);
		HX_STACK_LINE(35)
		this->super::create();
	}
return null();
}


Void MenuState_obj::destroy( ){
{
		HX_STACK_FRAME("MenuState","destroy",0xf9ac905e,"MenuState.destroy","MenuState.hx",44,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(44)
		this->super::destroy();
	}
return null();
}


Void MenuState_obj::update( ){
{
		HX_STACK_FRAME("MenuState","update",0xf0719b25,"MenuState.update","MenuState.hx",52,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(52)
		this->super::update();
	}
return null();
}


Void MenuState_obj::goToSpaceState( ){
{
		HX_STACK_FRAME("MenuState","goToSpaceState",0x76d5502a,"MenuState.goToSpaceState","MenuState.hx",57,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(57)
		::flixel::FlxState State = ::SpaceState_obj::__new(null());		HX_STACK_VAR(State,"State");
		HX_STACK_LINE(57)
		::flixel::FlxG_obj::game->_requestedState = State;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,goToSpaceState,(void))

Void MenuState_obj::goToLandState( ){
{
		HX_STACK_FRAME("MenuState","goToLandState",0xb997a447,"MenuState.goToLandState","MenuState.hx",62,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(62)
		::flixel::FlxState State = ::LandState_obj::__new(null());		HX_STACK_VAR(State,"State");
		HX_STACK_LINE(62)
		::flixel::FlxG_obj::game->_requestedState = State;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,goToLandState,(void))


MenuState_obj::MenuState_obj()
{
}

void MenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuState);
	HX_MARK_MEMBER_NAME(_title,"_title");
	HX_MARK_MEMBER_NAME(_spacePlay,"_spacePlay");
	HX_MARK_MEMBER_NAME(_landPlay,"_landPlay");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_title,"_title");
	HX_VISIT_MEMBER_NAME(_spacePlay,"_spacePlay");
	HX_VISIT_MEMBER_NAME(_landPlay,"_landPlay");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MenuState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_title") ) { return _title; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_landPlay") ) { return _landPlay; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_spacePlay") ) { return _spacePlay; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"goToLandState") ) { return goToLandState_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"goToSpaceState") ) { return goToSpaceState_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MenuState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_title") ) { _title=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_landPlay") ) { _landPlay=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_spacePlay") ) { _spacePlay=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_title"));
	outFields->push(HX_CSTRING("_spacePlay"));
	outFields->push(HX_CSTRING("_landPlay"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(MenuState_obj,_title),HX_CSTRING("_title")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(MenuState_obj,_spacePlay),HX_CSTRING("_spacePlay")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(MenuState_obj,_landPlay),HX_CSTRING("_landPlay")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_title"),
	HX_CSTRING("_spacePlay"),
	HX_CSTRING("_landPlay"),
	HX_CSTRING("create"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("goToSpaceState"),
	HX_CSTRING("goToLandState"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#endif

Class MenuState_obj::__mClass;

void MenuState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("MenuState"), hx::TCanCast< MenuState_obj> ,sStaticFields,sMemberFields,
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

void MenuState_obj::__boot()
{
}

