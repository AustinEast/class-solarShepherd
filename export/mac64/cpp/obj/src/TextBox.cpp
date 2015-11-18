#include <hxcpp.h>

#ifndef INCLUDED_TextBox
#include <TextBox.h>
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
#ifndef INCLUDED_flixel_addons_text_FlxTypeText
#include <flixel/addons/text/FlxTypeText.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif

Void TextBox_obj::__construct(::String NAME)
{
HX_STACK_FRAME("TextBox","new",0x43585330,"TextBox.new","TextBox.hx",23,0x958a2240)
HX_STACK_THIS(this)
HX_STACK_ARG(NAME,"NAME")
{
	HX_STACK_LINE(24)
	super::__construct(null());
	HX_STACK_LINE(27)
	::flixel::FlxSprite _g = ::flixel::FlxSprite_obj::__new((int)0,(::flixel::FlxG_obj::height - (int)80),HX_CSTRING("assets/images/textbox.png"));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(27)
	this->_background = _g;
	HX_STACK_LINE(28)
	this->_background->scrollFactor->set((int)0,(int)0);
	HX_STACK_LINE(31)
	::flixel::text::FlxText _g1 = ::flixel::text::FlxText_obj::__new((::flixel::FlxG_obj::width - (int)160),(this->_background->y + (int)7),(int)136,NAME,(int)8,null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(31)
	this->_name = _g1;
	HX_STACK_LINE(32)
	this->_name->set_color((int)-4408132);
	HX_STACK_LINE(35)
	::flixel::text::FlxText _g2 = ::flixel::text::FlxText_obj::__new((::flixel::FlxG_obj::width - (int)132),(::flixel::FlxG_obj::height - (int)24),(int)132,HX_CSTRING("press DOWN to continue"),(int)8,null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(35)
	this->_skip = _g2;
	HX_STACK_LINE(36)
	this->_skip->set_color((int)-4408132);
	HX_STACK_LINE(39)
	this->_isVisible = false;
	HX_STACK_LINE(40)
	this->_isTalking = false;
	HX_STACK_LINE(41)
	this->_doublePress = false;
}
;
	return null();
}

//TextBox_obj::~TextBox_obj() { }

Dynamic TextBox_obj::__CreateEmpty() { return  new TextBox_obj; }
hx::ObjectPtr< TextBox_obj > TextBox_obj::__new(::String NAME)
{  hx::ObjectPtr< TextBox_obj > result = new TextBox_obj();
	result->__construct(NAME);
	return result;}

Dynamic TextBox_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextBox_obj > result = new TextBox_obj();
	result->__construct(inArgs[0]);
	return result;}

Void TextBox_obj::show( ){
{
		HX_STACK_FRAME("TextBox","show",0xad40c82d,"TextBox.show","TextBox.hx",45,0x958a2240)
		HX_STACK_THIS(this)
		HX_STACK_LINE(46)
		this->add(this->_background);
		HX_STACK_LINE(47)
		this->add(this->_name);
		HX_STACK_LINE(48)
		this->add(this->_skip);
		HX_STACK_LINE(49)
		this->_isVisible = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextBox_obj,show,(void))

Void TextBox_obj::hide( ){
{
		HX_STACK_FRAME("TextBox","hide",0xa5fc27f2,"TextBox.hide","TextBox.hx",53,0x958a2240)
		HX_STACK_THIS(this)
		HX_STACK_LINE(54)
		this->remove(this->_background,null());
		HX_STACK_LINE(55)
		this->remove(this->_name,null());
		HX_STACK_LINE(56)
		this->remove(this->_typetext,null());
		HX_STACK_LINE(57)
		this->remove(this->_skip,null());
		HX_STACK_LINE(58)
		this->_isVisible = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextBox_obj,hide,(void))

Void TextBox_obj::talk( ::String TEXT){
{
		HX_STACK_FRAME("TextBox","talk",0xade4ac5c,"TextBox.talk","TextBox.hx",63,0x958a2240)
		HX_STACK_THIS(this)
		HX_STACK_ARG(TEXT,"TEXT")
		HX_STACK_LINE(63)
		if ((!(this->_isTalking))){
			HX_STACK_LINE(64)
			this->_isTalking = true;
			HX_STACK_LINE(65)
			this->show();
			HX_STACK_LINE(68)
			::flixel::addons::text::FlxTypeText _g = ::flixel::addons::text::FlxTypeText_obj::__new((this->_background->x + (int)16),(this->_background->y + (int)22),(int)298,TEXT,(int)8,null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(68)
			this->_typetext = _g;
			HX_STACK_LINE(71)
			this->_typetext->delay = 0.1;
			HX_STACK_LINE(72)
			this->_typetext->eraseDelay = 0.2;
			HX_STACK_LINE(73)
			this->_typetext->showCursor = true;
			HX_STACK_LINE(74)
			this->_typetext->cursorBlinkSpeed = 1.0;
			HX_STACK_LINE(75)
			this->_typetext->setTypingVariation(0.75,true);
			HX_STACK_LINE(76)
			this->_typetext->useDefaultSound = true;
			HX_STACK_LINE(77)
			this->_typetext->set_color((int)-4408132);
			HX_STACK_LINE(78)
			this->_typetext->skipKeys = Array_obj< ::String >::__new().Add(HX_CSTRING("DOWN"));
			HX_STACK_LINE(81)
			this->add(this->_typetext);
			HX_STACK_LINE(82)
			this->_typetext->start(0.02,null(),null(),null(),null(),null(),null());
			HX_STACK_LINE(85)
			::flixel::util::FlxTimer_obj::__new((int)20,this->quitTalk_dyn(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextBox_obj,talk,(void))

Void TextBox_obj::quitTalk( ::flixel::util::FlxTimer TIMER){
{
		HX_STACK_FRAME("TextBox","quitTalk",0x1bf703cb,"TextBox.quitTalk","TextBox.hx",90,0x958a2240)
		HX_STACK_THIS(this)
		HX_STACK_ARG(TIMER,"TIMER")
		HX_STACK_LINE(92)
		if (((TIMER != null()))){
			HX_STACK_LINE(93)
			TIMER->cancel();
		}
		HX_STACK_LINE(95)
		this->hide();
		HX_STACK_LINE(96)
		this->_isTalking = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextBox_obj,quitTalk,(void))

Void TextBox_obj::destroy( ){
{
		HX_STACK_FRAME("TextBox","destroy",0x144c57ca,"TextBox.destroy","TextBox.hx",101,0x958a2240)
		HX_STACK_THIS(this)
		HX_STACK_LINE(101)
		this->super::destroy();
	}
return null();
}


Void TextBox_obj::update( ){
{
		HX_STACK_FRAME("TextBox","update",0x75baa539,"TextBox.update","TextBox.hx",105,0x958a2240)
		HX_STACK_THIS(this)
		HX_STACK_LINE(106)
		this->super::update();
		HX_STACK_LINE(112)
		if (((  ((::flixel::FlxG_obj::keys->checkStatus((int)40,::flixel::FlxG_obj::keys->justReleased->checkStatus))) ? bool(this->_doublePress) : bool(false) ))){
			HX_STACK_LINE(113)
			this->quitTalk(null());
			HX_STACK_LINE(114)
			this->_doublePress = false;
		}
		else{
			HX_STACK_LINE(115)
			if ((::flixel::FlxG_obj::keys->checkStatus((int)40,::flixel::FlxG_obj::keys->justReleased->checkStatus))){
				HX_STACK_LINE(116)
				this->_doublePress = true;
			}
		}
	}
return null();
}



TextBox_obj::TextBox_obj()
{
}

void TextBox_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextBox);
	HX_MARK_MEMBER_NAME(_background,"_background");
	HX_MARK_MEMBER_NAME(_isVisible,"_isVisible");
	HX_MARK_MEMBER_NAME(_name,"_name");
	HX_MARK_MEMBER_NAME(_typetext,"_typetext");
	HX_MARK_MEMBER_NAME(_isTalking,"_isTalking");
	HX_MARK_MEMBER_NAME(_skip,"_skip");
	HX_MARK_MEMBER_NAME(_doublePress,"_doublePress");
	::flixel::group::FlxTypedGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextBox_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_background,"_background");
	HX_VISIT_MEMBER_NAME(_isVisible,"_isVisible");
	HX_VISIT_MEMBER_NAME(_name,"_name");
	HX_VISIT_MEMBER_NAME(_typetext,"_typetext");
	HX_VISIT_MEMBER_NAME(_isTalking,"_isTalking");
	HX_VISIT_MEMBER_NAME(_skip,"_skip");
	HX_VISIT_MEMBER_NAME(_doublePress,"_doublePress");
	::flixel::group::FlxTypedGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TextBox_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		if (HX_FIELD_EQ(inName,"hide") ) { return hide_dyn(); }
		if (HX_FIELD_EQ(inName,"talk") ) { return talk_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_name") ) { return _name; }
		if (HX_FIELD_EQ(inName,"_skip") ) { return _skip; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"quitTalk") ) { return quitTalk_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_typetext") ) { return _typetext; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_isVisible") ) { return _isVisible; }
		if (HX_FIELD_EQ(inName,"_isTalking") ) { return _isTalking; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_background") ) { return _background; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_doublePress") ) { return _doublePress; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextBox_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_name") ) { _name=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_skip") ) { _skip=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_typetext") ) { _typetext=inValue.Cast< ::flixel::addons::text::FlxTypeText >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_isVisible") ) { _isVisible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_isTalking") ) { _isTalking=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_background") ) { _background=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_doublePress") ) { _doublePress=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextBox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_background"));
	outFields->push(HX_CSTRING("_isVisible"));
	outFields->push(HX_CSTRING("_name"));
	outFields->push(HX_CSTRING("_typetext"));
	outFields->push(HX_CSTRING("_isTalking"));
	outFields->push(HX_CSTRING("_skip"));
	outFields->push(HX_CSTRING("_doublePress"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(TextBox_obj,_background),HX_CSTRING("_background")},
	{hx::fsBool,(int)offsetof(TextBox_obj,_isVisible),HX_CSTRING("_isVisible")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(TextBox_obj,_name),HX_CSTRING("_name")},
	{hx::fsObject /*::flixel::addons::text::FlxTypeText*/ ,(int)offsetof(TextBox_obj,_typetext),HX_CSTRING("_typetext")},
	{hx::fsBool,(int)offsetof(TextBox_obj,_isTalking),HX_CSTRING("_isTalking")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(TextBox_obj,_skip),HX_CSTRING("_skip")},
	{hx::fsBool,(int)offsetof(TextBox_obj,_doublePress),HX_CSTRING("_doublePress")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_background"),
	HX_CSTRING("_isVisible"),
	HX_CSTRING("_name"),
	HX_CSTRING("_typetext"),
	HX_CSTRING("_isTalking"),
	HX_CSTRING("_skip"),
	HX_CSTRING("_doublePress"),
	HX_CSTRING("show"),
	HX_CSTRING("hide"),
	HX_CSTRING("talk"),
	HX_CSTRING("quitTalk"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextBox_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextBox_obj::__mClass,"__mClass");
};

#endif

Class TextBox_obj::__mClass;

void TextBox_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("TextBox"), hx::TCanCast< TextBox_obj> ,sStaticFields,sMemberFields,
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

void TextBox_obj::__boot()
{
}

