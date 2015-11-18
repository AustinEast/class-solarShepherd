#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKey
#include <flixel/input/keyboard/FlxKey.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_debug_WatchEntry
#include <flixel/system/debug/WatchEntry.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_replay_FrameRecord
#include <flixel/system/replay/FrameRecord.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextFormat
#include <flixel/text/FlxTextFormat.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPath
#include <flixel/util/FlxPath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
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
namespace flixel{
namespace util{

Void FlxArrayUtil_obj::__construct()
{
	return null();
}

//FlxArrayUtil_obj::~FlxArrayUtil_obj() { }

Dynamic FlxArrayUtil_obj::__CreateEmpty() { return  new FlxArrayUtil_obj; }
hx::ObjectPtr< FlxArrayUtil_obj > FlxArrayUtil_obj::__new()
{  hx::ObjectPtr< FlxArrayUtil_obj > result = new FlxArrayUtil_obj();
	result->__construct();
	return result;}

Dynamic FlxArrayUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxArrayUtil_obj > result = new FlxArrayUtil_obj();
	result->__construct();
	return result;}

Void FlxArrayUtil_obj::setLength_flixel_system_replay_FrameRecord( Array< ::Dynamic > array,int newLength){
{
		HX_STACK_FRAME("flixel.util.FlxArrayUtil","setLength_flixel_system_replay_FrameRecord",0x79844eb5,"flixel.util.FlxArrayUtil.setLength_flixel_system_replay_FrameRecord","flixel/util/FlxArrayUtil.hx",22,0xa0dc755b)
		HX_STACK_ARG(array,"array")
		HX_STACK_ARG(newLength,"newLength")
		HX_STACK_LINE(23)
		if (((newLength < (int)0))){
			HX_STACK_LINE(23)
			return null();
		}
		HX_STACK_LINE(24)
		int oldLength = array->length;		HX_STACK_VAR(oldLength,"oldLength");
		HX_STACK_LINE(25)
		int diff = (newLength - oldLength);		HX_STACK_VAR(diff,"diff");
		HX_STACK_LINE(26)
		if (((diff < (int)0))){
			HX_STACK_LINE(31)
			diff = -(diff);
			HX_STACK_LINE(32)
			{
				HX_STACK_LINE(32)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(32)
				while((true)){
					HX_STACK_LINE(32)
					if ((!(((_g < diff))))){
						HX_STACK_LINE(32)
						break;
					}
					HX_STACK_LINE(32)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(34)
					array->pop().StaticCast< ::flixel::system::replay::FrameRecord >();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,setLength_flixel_system_replay_FrameRecord,(void))

Void FlxArrayUtil_obj::setLength_flixel_group_FlxTypedGroup_T( Dynamic array,int newLength){
{
		HX_STACK_FRAME("flixel.util.FlxArrayUtil","setLength_flixel_group_FlxTypedGroup_T",0x1139627b,"flixel.util.FlxArrayUtil.setLength_flixel_group_FlxTypedGroup_T","flixel/util/FlxArrayUtil.hx",22,0xa0dc755b)
		HX_STACK_ARG(array,"array")
		HX_STACK_ARG(newLength,"newLength")
		HX_STACK_LINE(23)
		if (((newLength < (int)0))){
			HX_STACK_LINE(23)
			return null();
		}
		HX_STACK_LINE(24)
		int oldLength = array->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(oldLength,"oldLength");
		HX_STACK_LINE(25)
		int diff = (newLength - oldLength);		HX_STACK_VAR(diff,"diff");
		HX_STACK_LINE(26)
		if (((diff < (int)0))){
			HX_STACK_LINE(31)
			diff = -(diff);
			HX_STACK_LINE(32)
			{
				HX_STACK_LINE(32)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(32)
				while((true)){
					HX_STACK_LINE(32)
					if ((!(((_g < diff))))){
						HX_STACK_LINE(32)
						break;
					}
					HX_STACK_LINE(32)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(34)
					array->__Field(HX_CSTRING("pop"),true)();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,setLength_flixel_group_FlxTypedGroup_T,(void))

Void FlxArrayUtil_obj::setLength_flixel_input_keyboard_FlxKey( Array< ::Dynamic > array,int newLength){
{
		HX_STACK_FRAME("flixel.util.FlxArrayUtil","setLength_flixel_input_keyboard_FlxKey",0xfee37d4f,"flixel.util.FlxArrayUtil.setLength_flixel_input_keyboard_FlxKey","flixel/util/FlxArrayUtil.hx",22,0xa0dc755b)
		HX_STACK_ARG(array,"array")
		HX_STACK_ARG(newLength,"newLength")
		HX_STACK_LINE(23)
		if (((newLength < (int)0))){
			HX_STACK_LINE(23)
			return null();
		}
		HX_STACK_LINE(24)
		int oldLength = array->length;		HX_STACK_VAR(oldLength,"oldLength");
		HX_STACK_LINE(25)
		int diff = (newLength - oldLength);		HX_STACK_VAR(diff,"diff");
		HX_STACK_LINE(26)
		if (((diff < (int)0))){
			HX_STACK_LINE(31)
			diff = -(diff);
			HX_STACK_LINE(32)
			{
				HX_STACK_LINE(32)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(32)
				while((true)){
					HX_STACK_LINE(32)
					if ((!(((_g < diff))))){
						HX_STACK_LINE(32)
						break;
					}
					HX_STACK_LINE(32)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(34)
					array->pop().StaticCast< ::flixel::input::keyboard::FlxKey >();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,setLength_flixel_input_keyboard_FlxKey,(void))

Array< ::Dynamic > FlxArrayUtil_obj::fastSplice_flixel_text_FlxTextFormat( Array< ::Dynamic > array,::flixel::text::FlxTextFormat element){
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","fastSplice_flixel_text_FlxTextFormat",0xed3cac0b,"flixel.util.FlxArrayUtil.fastSplice_flixel_text_FlxTextFormat","flixel/util/FlxArrayUtil.hx",80,0xa0dc755b)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(element,"element")
	HX_STACK_LINE(81)
	int index = array->indexOf(element,null());		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(82)
	if (((index != (int)-1))){
		HX_STACK_LINE(84)
		array[index] = array->__get((array->length - (int)1)).StaticCast< ::flixel::text::FlxTextFormat >();
		HX_STACK_LINE(84)
		array->pop().StaticCast< ::flixel::text::FlxTextFormat >();
		HX_STACK_LINE(84)
		return array;
	}
	HX_STACK_LINE(86)
	return array;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,fastSplice_flixel_text_FlxTextFormat,return )

Void FlxArrayUtil_obj::setLength_Int( Array< int > array,int newLength){
{
		HX_STACK_FRAME("flixel.util.FlxArrayUtil","setLength_Int",0x3efc372d,"flixel.util.FlxArrayUtil.setLength_Int","flixel/util/FlxArrayUtil.hx",22,0xa0dc755b)
		HX_STACK_ARG(array,"array")
		HX_STACK_ARG(newLength,"newLength")
		HX_STACK_LINE(23)
		if (((newLength < (int)0))){
			HX_STACK_LINE(23)
			return null();
		}
		HX_STACK_LINE(24)
		int oldLength = array->length;		HX_STACK_VAR(oldLength,"oldLength");
		HX_STACK_LINE(25)
		int diff = (newLength - oldLength);		HX_STACK_VAR(diff,"diff");
		HX_STACK_LINE(26)
		if (((diff < (int)0))){
			HX_STACK_LINE(31)
			diff = -(diff);
			HX_STACK_LINE(32)
			{
				HX_STACK_LINE(32)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(32)
				while((true)){
					HX_STACK_LINE(32)
					if ((!(((_g < diff))))){
						HX_STACK_LINE(32)
						break;
					}
					HX_STACK_LINE(32)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(34)
					array->pop();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,setLength_Int,(void))

Array< ::Dynamic > FlxArrayUtil_obj::fastSplice_flixel_tweens_FlxTween( Array< ::Dynamic > array,::flixel::tweens::FlxTween element){
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","fastSplice_flixel_tweens_FlxTween",0x134d3569,"flixel.util.FlxArrayUtil.fastSplice_flixel_tweens_FlxTween","flixel/util/FlxArrayUtil.hx",80,0xa0dc755b)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(element,"element")
	HX_STACK_LINE(81)
	int index = array->indexOf(element,null());		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(82)
	if (((index != (int)-1))){
		HX_STACK_LINE(84)
		array[index] = array->__get((array->length - (int)1)).StaticCast< ::flixel::tweens::FlxTween >();
		HX_STACK_LINE(84)
		array->pop().StaticCast< ::flixel::tweens::FlxTween >();
		HX_STACK_LINE(84)
		return array;
	}
	HX_STACK_LINE(86)
	return array;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,fastSplice_flixel_tweens_FlxTween,return )

Array< ::Dynamic > FlxArrayUtil_obj::fastSplice_flixel_util_FlxTimer( Array< ::Dynamic > array,::flixel::util::FlxTimer element){
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","fastSplice_flixel_util_FlxTimer",0x46676ae9,"flixel.util.FlxArrayUtil.fastSplice_flixel_util_FlxTimer","flixel/util/FlxArrayUtil.hx",80,0xa0dc755b)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(element,"element")
	HX_STACK_LINE(81)
	int index = array->indexOf(element,null());		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(82)
	if (((index != (int)-1))){
		HX_STACK_LINE(84)
		array[index] = array->__get((array->length - (int)1)).StaticCast< ::flixel::util::FlxTimer >();
		HX_STACK_LINE(84)
		array->pop().StaticCast< ::flixel::util::FlxTimer >();
		HX_STACK_LINE(84)
		return array;
	}
	HX_STACK_LINE(86)
	return array;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,fastSplice_flixel_util_FlxTimer,return )

Array< ::Dynamic > FlxArrayUtil_obj::fastSplice_flixel_util_FlxPath( Array< ::Dynamic > array,::flixel::util::FlxPath element){
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","fastSplice_flixel_util_FlxPath",0xb8c4eb01,"flixel.util.FlxArrayUtil.fastSplice_flixel_util_FlxPath","flixel/util/FlxArrayUtil.hx",80,0xa0dc755b)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(element,"element")
	HX_STACK_LINE(81)
	int index = array->indexOf(element,null());		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(82)
	if (((index != (int)-1))){
		HX_STACK_LINE(84)
		array[index] = array->__get((array->length - (int)1)).StaticCast< ::flixel::util::FlxPath >();
		HX_STACK_LINE(84)
		array->pop().StaticCast< ::flixel::util::FlxPath >();
		HX_STACK_LINE(84)
		return array;
	}
	HX_STACK_LINE(86)
	return array;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,fastSplice_flixel_util_FlxPath,return )

Dynamic FlxArrayUtil_obj::getRandom_flixel_group_FlxTypedGroup_T( Dynamic Objects,hx::Null< int >  __o_StartIndex,hx::Null< int >  __o_EndIndex){
int StartIndex = __o_StartIndex.Default(0);
int EndIndex = __o_EndIndex.Default(0);
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","getRandom_flixel_group_FlxTypedGroup_T",0x238278ca,"flixel.util.FlxArrayUtil.getRandom_flixel_group_FlxTypedGroup_T","flixel/util/FlxArrayUtil.hx",66,0xa0dc755b)
	HX_STACK_ARG(Objects,"Objects")
	HX_STACK_ARG(StartIndex,"StartIndex")
	HX_STACK_ARG(EndIndex,"EndIndex")
{
		HX_STACK_LINE(66)
		return ::flixel::util::FlxRandom_obj::getObject_getRandom_T(Objects,StartIndex,EndIndex);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxArrayUtil_obj,getRandom_flixel_group_FlxTypedGroup_T,return )

Array< ::Dynamic > FlxArrayUtil_obj::fastSplice_flixel_system_debug_WatchEntry( Array< ::Dynamic > array,::flixel::system::debug::WatchEntry element){
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","fastSplice_flixel_system_debug_WatchEntry",0x10964af8,"flixel.util.FlxArrayUtil.fastSplice_flixel_system_debug_WatchEntry","flixel/util/FlxArrayUtil.hx",80,0xa0dc755b)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(element,"element")
	HX_STACK_LINE(81)
	int index = array->indexOf(element,null());		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(82)
	if (((index != (int)-1))){
		HX_STACK_LINE(84)
		array[index] = array->__get((array->length - (int)1)).StaticCast< ::flixel::system::debug::WatchEntry >();
		HX_STACK_LINE(84)
		array->pop().StaticCast< ::flixel::system::debug::WatchEntry >();
		HX_STACK_LINE(84)
		return array;
	}
	HX_STACK_LINE(86)
	return array;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,fastSplice_flixel_system_debug_WatchEntry,return )

Array< ::Dynamic > FlxArrayUtil_obj::fastSplice_flixel_system_debug_Window( Array< ::Dynamic > array,::flixel::system::debug::Window element){
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","fastSplice_flixel_system_debug_Window",0x3304bcc5,"flixel.util.FlxArrayUtil.fastSplice_flixel_system_debug_Window","flixel/util/FlxArrayUtil.hx",80,0xa0dc755b)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(element,"element")
	HX_STACK_LINE(81)
	int index = array->indexOf(element,null());		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(82)
	if (((index != (int)-1))){
		HX_STACK_LINE(84)
		array[index] = array->__get((array->length - (int)1)).StaticCast< ::flixel::system::debug::Window >();
		HX_STACK_LINE(84)
		array->pop().StaticCast< ::flixel::system::debug::Window >();
		HX_STACK_LINE(84)
		return array;
	}
	HX_STACK_LINE(86)
	return array;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,fastSplice_flixel_system_debug_Window,return )

Dynamic FlxArrayUtil_obj::swapAndPop_fastSplice_T( Dynamic array,int index){
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","swapAndPop_fastSplice_T",0xfdfa2694,"flixel.util.FlxArrayUtil.swapAndPop_fastSplice_T","flixel/util/FlxArrayUtil.hx",110,0xa0dc755b)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(111)
	hx::IndexRef((array).mPtr,index) = array->__GetItem((array->__Field(HX_CSTRING("length"),true) - (int)1));
	HX_STACK_LINE(112)
	array->__Field(HX_CSTRING("pop"),true)();
	HX_STACK_LINE(113)
	return array;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,swapAndPop_fastSplice_T,return )

Void FlxArrayUtil_obj::clearArray( Dynamic array,hx::Null< bool >  __o_recursive){
bool recursive = __o_recursive.Default(false);
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","clearArray",0xac755a77,"flixel.util.FlxArrayUtil.clearArray","flixel/util/FlxArrayUtil.hx",126,0xa0dc755b)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(126)
		if (((array != null()))){
			HX_STACK_LINE(128)
			if ((!(recursive))){
				HX_STACK_LINE(130)
				while((true)){
					HX_STACK_LINE(130)
					if ((!(((array->__Field(HX_CSTRING("length"),true) > (int)0))))){
						HX_STACK_LINE(130)
						break;
					}
					HX_STACK_LINE(132)
					array->__Field(HX_CSTRING("pop"),true)();
				}
			}
			else{
				HX_STACK_LINE(137)
				while((true)){
					HX_STACK_LINE(137)
					if ((!(((array->__Field(HX_CSTRING("length"),true) > (int)0))))){
						HX_STACK_LINE(137)
						break;
					}
					HX_STACK_LINE(139)
					Dynamic thing = array->__Field(HX_CSTRING("pop"),true)();		HX_STACK_VAR(thing,"thing");
					HX_STACK_LINE(140)
					if ((::Std_obj::is(thing,hx::ClassOf< Array<int> >()))){
						HX_STACK_LINE(142)
						::flixel::util::FlxArrayUtil_obj::clearArray(array,recursive);
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,clearArray,(void))


FlxArrayUtil_obj::FlxArrayUtil_obj()
{
}

Dynamic FlxArrayUtil_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"clearArray") ) { return clearArray_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setLength_Int") ) { return setLength_Int_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"swapAndPop_fastSplice_T") ) { return swapAndPop_fastSplice_T_dyn(); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"fastSplice_flixel_util_FlxPath") ) { return fastSplice_flixel_util_FlxPath_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"fastSplice_flixel_util_FlxTimer") ) { return fastSplice_flixel_util_FlxTimer_dyn(); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"fastSplice_flixel_tweens_FlxTween") ) { return fastSplice_flixel_tweens_FlxTween_dyn(); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"fastSplice_flixel_text_FlxTextFormat") ) { return fastSplice_flixel_text_FlxTextFormat_dyn(); }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"fastSplice_flixel_system_debug_Window") ) { return fastSplice_flixel_system_debug_Window_dyn(); }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"setLength_flixel_group_FlxTypedGroup_T") ) { return setLength_flixel_group_FlxTypedGroup_T_dyn(); }
		if (HX_FIELD_EQ(inName,"setLength_flixel_input_keyboard_FlxKey") ) { return setLength_flixel_input_keyboard_FlxKey_dyn(); }
		if (HX_FIELD_EQ(inName,"getRandom_flixel_group_FlxTypedGroup_T") ) { return getRandom_flixel_group_FlxTypedGroup_T_dyn(); }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"fastSplice_flixel_system_debug_WatchEntry") ) { return fastSplice_flixel_system_debug_WatchEntry_dyn(); }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"setLength_flixel_system_replay_FrameRecord") ) { return setLength_flixel_system_replay_FrameRecord_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxArrayUtil_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxArrayUtil_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("setLength_flixel_system_replay_FrameRecord"),
	HX_CSTRING("setLength_flixel_group_FlxTypedGroup_T"),
	HX_CSTRING("setLength_flixel_input_keyboard_FlxKey"),
	HX_CSTRING("fastSplice_flixel_text_FlxTextFormat"),
	HX_CSTRING("setLength_Int"),
	HX_CSTRING("fastSplice_flixel_tweens_FlxTween"),
	HX_CSTRING("fastSplice_flixel_util_FlxTimer"),
	HX_CSTRING("fastSplice_flixel_util_FlxPath"),
	HX_CSTRING("getRandom_flixel_group_FlxTypedGroup_T"),
	HX_CSTRING("fastSplice_flixel_system_debug_WatchEntry"),
	HX_CSTRING("fastSplice_flixel_system_debug_Window"),
	HX_CSTRING("swapAndPop_fastSplice_T"),
	HX_CSTRING("clearArray"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxArrayUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxArrayUtil_obj::__mClass,"__mClass");
};

#endif

Class FlxArrayUtil_obj::__mClass;

void FlxArrayUtil_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxArrayUtil"), hx::TCanCast< FlxArrayUtil_obj> ,sStaticFields,sMemberFields,
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

void FlxArrayUtil_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
