#include <hxcpp.h>

#ifndef INCLUDED_SpaceSprite
#include <SpaceSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif

Void SpaceSprite_obj::__construct(Dynamic X,Dynamic Y,Dynamic SimpleGraphic)
{
HX_STACK_FRAME("SpaceSprite","new",0xfc41efbd,"SpaceSprite.new","SpaceSprite.hx",18,0x37161653)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
HX_STACK_ARG(SimpleGraphic,"SimpleGraphic")
{
	HX_STACK_LINE(18)
	super::__construct(X,Y,SimpleGraphic);
}
;
	return null();
}

//SpaceSprite_obj::~SpaceSprite_obj() { }

Dynamic SpaceSprite_obj::__CreateEmpty() { return  new SpaceSprite_obj; }
hx::ObjectPtr< SpaceSprite_obj > SpaceSprite_obj::__new(Dynamic X,Dynamic Y,Dynamic SimpleGraphic)
{  hx::ObjectPtr< SpaceSprite_obj > result = new SpaceSprite_obj();
	result->__construct(X,Y,SimpleGraphic);
	return result;}

Dynamic SpaceSprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SpaceSprite_obj > result = new SpaceSprite_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void SpaceSprite_obj::setPolarity( bool polSet){
{
		HX_STACK_FRAME("SpaceSprite","setPolarity",0x09ad1b4f,"SpaceSprite.setPolarity","SpaceSprite.hx",24,0x37161653)
		HX_STACK_THIS(this)
		HX_STACK_ARG(polSet,"polSet")
		HX_STACK_LINE(24)
		if ((polSet)){
			HX_STACK_LINE(25)
			this->animation->play(HX_CSTRING("polTrue"),null(),null());
			HX_STACK_LINE(26)
			this->_polarity = true;
		}
		else{
			HX_STACK_LINE(29)
			this->animation->play(HX_CSTRING("polFalse"),null(),null());
			HX_STACK_LINE(30)
			this->_polarity = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SpaceSprite_obj,setPolarity,(void))

Void SpaceSprite_obj::switchPolarity( ){
{
		HX_STACK_FRAME("SpaceSprite","switchPolarity",0x66cb3b07,"SpaceSprite.switchPolarity","SpaceSprite.hx",36,0x37161653)
		HX_STACK_THIS(this)
		HX_STACK_LINE(36)
		if ((this->_polarity)){
			HX_STACK_LINE(37)
			this->setPolarity(false);
		}
		else{
			HX_STACK_LINE(40)
			this->setPolarity(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpaceSprite_obj,switchPolarity,(void))


SpaceSprite_obj::SpaceSprite_obj()
{
}

Dynamic SpaceSprite_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_polarity") ) { return _polarity; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setPolarity") ) { return setPolarity_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"switchPolarity") ) { return switchPolarity_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SpaceSprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_polarity") ) { _polarity=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SpaceSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_polarity"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(SpaceSprite_obj,_polarity),HX_CSTRING("_polarity")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_polarity"),
	HX_CSTRING("setPolarity"),
	HX_CSTRING("switchPolarity"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SpaceSprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SpaceSprite_obj::__mClass,"__mClass");
};

#endif

Class SpaceSprite_obj::__mClass;

void SpaceSprite_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("SpaceSprite"), hx::TCanCast< SpaceSprite_obj> ,sStaticFields,sMemberFields,
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

void SpaceSprite_obj::__boot()
{
}

