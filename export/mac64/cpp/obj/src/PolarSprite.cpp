#include <hxcpp.h>

#ifndef INCLUDED_PolarSprite
#include <PolarSprite.h>
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

Void PolarSprite_obj::__construct(Dynamic X,Dynamic Y,Dynamic SimpleGraphic)
{
HX_STACK_FRAME("PolarSprite","new",0x81b3b8b5,"PolarSprite.new","PolarSprite.hx",18,0x3e92945b)
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

//PolarSprite_obj::~PolarSprite_obj() { }

Dynamic PolarSprite_obj::__CreateEmpty() { return  new PolarSprite_obj; }
hx::ObjectPtr< PolarSprite_obj > PolarSprite_obj::__new(Dynamic X,Dynamic Y,Dynamic SimpleGraphic)
{  hx::ObjectPtr< PolarSprite_obj > result = new PolarSprite_obj();
	result->__construct(X,Y,SimpleGraphic);
	return result;}

Dynamic PolarSprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PolarSprite_obj > result = new PolarSprite_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void PolarSprite_obj::setPolarity( bool polSet){
{
		HX_STACK_FRAME("PolarSprite","setPolarity",0xdc049c47,"PolarSprite.setPolarity","PolarSprite.hx",25,0x3e92945b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(polSet,"polSet")
		HX_STACK_LINE(25)
		if ((polSet)){
			HX_STACK_LINE(26)
			this->animation->play(HX_CSTRING("polTrue"),null(),null());
			HX_STACK_LINE(27)
			this->_polarity = true;
		}
		else{
			HX_STACK_LINE(30)
			this->animation->play(HX_CSTRING("polFalse"),null(),null());
			HX_STACK_LINE(31)
			this->_polarity = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PolarSprite_obj,setPolarity,(void))

Void PolarSprite_obj::switchPolarity( ){
{
		HX_STACK_FRAME("PolarSprite","switchPolarity",0xa410a50f,"PolarSprite.switchPolarity","PolarSprite.hx",37,0x3e92945b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(37)
		if ((this->_polarity)){
			HX_STACK_LINE(38)
			this->setPolarity(false);
		}
		else{
			HX_STACK_LINE(41)
			this->setPolarity(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PolarSprite_obj,switchPolarity,(void))


PolarSprite_obj::PolarSprite_obj()
{
}

Dynamic PolarSprite_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_polarity") ) { return _polarity; }
		if (HX_FIELD_EQ(inName,"important") ) { return important; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setPolarity") ) { return setPolarity_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"switchPolarity") ) { return switchPolarity_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PolarSprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_polarity") ) { _polarity=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"important") ) { important=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PolarSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_polarity"));
	outFields->push(HX_CSTRING("important"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(PolarSprite_obj,_polarity),HX_CSTRING("_polarity")},
	{hx::fsBool,(int)offsetof(PolarSprite_obj,important),HX_CSTRING("important")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_polarity"),
	HX_CSTRING("important"),
	HX_CSTRING("setPolarity"),
	HX_CSTRING("switchPolarity"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PolarSprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PolarSprite_obj::__mClass,"__mClass");
};

#endif

Class PolarSprite_obj::__mClass;

void PolarSprite_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("PolarSprite"), hx::TCanCast< PolarSprite_obj> ,sStaticFields,sMemberFields,
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

void PolarSprite_obj::__boot()
{
}

