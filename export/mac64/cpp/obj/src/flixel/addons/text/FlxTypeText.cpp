#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
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
#ifndef INCLUDED_flixel_addons_text_TypeSound
#include <flixel/addons/text/TypeSound.h>
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
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_media_Sound
#include <openfl/_legacy/media/Sound.h>
#endif
#ifndef INCLUDED_openfl__legacy_net_URLRequest
#include <openfl/_legacy/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_media_SoundLoaderContext
#include <openfl/media/SoundLoaderContext.h>
#endif
namespace flixel{
namespace addons{
namespace text{

Void FlxTypeText_obj::__construct(Float X,Float Y,int Width,::String Text,hx::Null< int >  __o_Size,hx::Null< bool >  __o_EmbeddedFont)
{
HX_STACK_FRAME("flixel.addons.text.FlxTypeText","new",0x24edf2f3,"flixel.addons.text.FlxTypeText.new","flixel/addons/text/FlxTypeText.hx",20,0x9451ed7e)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
HX_STACK_ARG(Width,"Width")
HX_STACK_ARG(Text,"Text")
HX_STACK_ARG(__o_Size,"Size")
HX_STACK_ARG(__o_EmbeddedFont,"EmbeddedFont")
int Size = __o_Size.Default(8);
bool EmbeddedFont = __o_EmbeddedFont.Default(true);
{
	HX_STACK_LINE(150)
	this->_typeVarPercent = 0.5;
	HX_STACK_LINE(145)
	this->_typingVariation = false;
	HX_STACK_LINE(140)
	this->_cursorTimer = 0.0;
	HX_STACK_LINE(135)
	this->_waiting = false;
	HX_STACK_LINE(130)
	this->_erasing = false;
	HX_STACK_LINE(125)
	this->_typing = false;
	HX_STACK_LINE(120)
	this->_length = (int)0;
	HX_STACK_LINE(115)
	this->_waitTimer = 0.0;
	HX_STACK_LINE(110)
	this->_timer = 0.0;
	HX_STACK_LINE(100)
	this->_onErase = null();
	HX_STACK_LINE(90)
	this->_onComplete = null();
	HX_STACK_LINE(85)
	this->_finalText = HX_CSTRING("");
	HX_STACK_LINE(70)
	this->useDefaultSound = false;
	HX_STACK_LINE(65)
	this->paused = false;
	HX_STACK_LINE(60)
	this->waitTime = 1.0;
	HX_STACK_LINE(55)
	this->autoErase = false;
	HX_STACK_LINE(50)
	this->prefix = HX_CSTRING("");
	HX_STACK_LINE(45)
	this->cursorBlinkSpeed = 0.5;
	HX_STACK_LINE(40)
	this->cursorCharacter = HX_CSTRING("|");
	HX_STACK_LINE(35)
	this->showCursor = false;
	HX_STACK_LINE(30)
	this->eraseDelay = 0.02;
	HX_STACK_LINE(25)
	this->delay = 0.05;
	HX_STACK_LINE(170)
	super::__construct(X,Y,Width,HX_CSTRING(""),Size,EmbeddedFont);
	HX_STACK_LINE(171)
	this->_finalText = Text;
	HX_STACK_LINE(173)
	this->_onComplete = null();
	HX_STACK_LINE(174)
	this->_onErase = null();
	HX_STACK_LINE(175)
	this->_onCompleteParams = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(176)
	this->_onEraseParams = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(177)
	this->skipKeys = Array_obj< ::String >::__new();
}
;
	return null();
}

//FlxTypeText_obj::~FlxTypeText_obj() { }

Dynamic FlxTypeText_obj::__CreateEmpty() { return  new FlxTypeText_obj; }
hx::ObjectPtr< FlxTypeText_obj > FlxTypeText_obj::__new(Float X,Float Y,int Width,::String Text,hx::Null< int >  __o_Size,hx::Null< bool >  __o_EmbeddedFont)
{  hx::ObjectPtr< FlxTypeText_obj > result = new FlxTypeText_obj();
	result->__construct(X,Y,Width,Text,__o_Size,__o_EmbeddedFont);
	return result;}

Dynamic FlxTypeText_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTypeText_obj > result = new FlxTypeText_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Void FlxTypeText_obj::setCompleteCallback( Dynamic Callback,Dynamic Params){
{
		HX_STACK_FRAME("flixel.addons.text.FlxTypeText","setCompleteCallback",0x54384bf3,"flixel.addons.text.FlxTypeText.setCompleteCallback","flixel/addons/text/FlxTypeText.hx",187,0x9451ed7e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Callback,"Callback")
		HX_STACK_ARG(Params,"Params")
		HX_STACK_LINE(188)
		this->_onComplete = Callback;
		HX_STACK_LINE(190)
		if (((Params == null()))){
			HX_STACK_LINE(192)
			Params = Dynamic( Array_obj<Dynamic>::__new());
		}
		HX_STACK_LINE(195)
		this->_onCompleteParams = Params;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypeText_obj,setCompleteCallback,(void))

Void FlxTypeText_obj::setEraseCallback( Dynamic Callback,Dynamic Params){
{
		HX_STACK_FRAME("flixel.addons.text.FlxTypeText","setEraseCallback",0xa603a956,"flixel.addons.text.FlxTypeText.setEraseCallback","flixel/addons/text/FlxTypeText.hx",206,0x9451ed7e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Callback,"Callback")
		HX_STACK_ARG(Params,"Params")
		HX_STACK_LINE(207)
		this->_onErase = Callback;
		HX_STACK_LINE(209)
		if (((Params == null()))){
			HX_STACK_LINE(211)
			Params = Dynamic( Array_obj<Dynamic>::__new());
		}
		HX_STACK_LINE(214)
		this->_onEraseParams = Params;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypeText_obj,setEraseCallback,(void))

Void FlxTypeText_obj::start( Dynamic Delay,hx::Null< bool >  __o_ForceRestart,hx::Null< bool >  __o_AutoErase,::flixel::system::FlxSound Sound,Array< ::String > SkipKeys,Dynamic Callback,Dynamic Params){
bool ForceRestart = __o_ForceRestart.Default(false);
bool AutoErase = __o_AutoErase.Default(false);
	HX_STACK_FRAME("flixel.addons.text.FlxTypeText","start",0x9d61a1b5,"flixel.addons.text.FlxTypeText.start","flixel/addons/text/FlxTypeText.hx",229,0x9451ed7e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Delay,"Delay")
	HX_STACK_ARG(ForceRestart,"ForceRestart")
	HX_STACK_ARG(AutoErase,"AutoErase")
	HX_STACK_ARG(Sound,"Sound")
	HX_STACK_ARG(SkipKeys,"SkipKeys")
	HX_STACK_ARG(Callback,"Callback")
	HX_STACK_ARG(Params,"Params")
{
		HX_STACK_LINE(230)
		if (((Delay != null()))){
			HX_STACK_LINE(232)
			this->delay = Delay;
		}
		HX_STACK_LINE(235)
		this->_typing = true;
		HX_STACK_LINE(236)
		this->_erasing = false;
		HX_STACK_LINE(237)
		this->paused = false;
		HX_STACK_LINE(238)
		this->_waiting = false;
		HX_STACK_LINE(240)
		if ((ForceRestart)){
			HX_STACK_LINE(242)
			this->set_text(HX_CSTRING(""));
			HX_STACK_LINE(243)
			this->_length = (int)0;
		}
		HX_STACK_LINE(246)
		this->autoErase = AutoErase;
		HX_STACK_LINE(249)
		if (((Sound != null()))){
			HX_STACK_LINE(251)
			this->sound = Sound;
		}
		else{
			HX_STACK_LINE(253)
			if ((this->useDefaultSound)){
				HX_STACK_LINE(255)
				::flixel::addons::text::TypeSound _g = ::flixel::addons::text::TypeSound_obj::__new(null(),null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(255)
				::flixel::system::FlxSound _g1 = ::flixel::FlxG_obj::sound->load(_g,null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(255)
				this->sound = _g1;
			}
		}
		HX_STACK_LINE(259)
		if (((SkipKeys != null()))){
			HX_STACK_LINE(261)
			this->skipKeys = SkipKeys;
		}
		HX_STACK_LINE(264)
		if (((Callback != null()))){
			HX_STACK_LINE(266)
			this->_onComplete = Callback;
		}
		HX_STACK_LINE(269)
		if (((Params != null()))){
			HX_STACK_LINE(271)
			this->_onCompleteParams = Params;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(FlxTypeText_obj,start,(void))

Void FlxTypeText_obj::erase( Dynamic Delay,hx::Null< bool >  __o_ForceRestart,::flixel::system::FlxSound Sound,Array< ::String > SkipKeys,Dynamic Callback,Dynamic Params){
bool ForceRestart = __o_ForceRestart.Default(false);
	HX_STACK_FRAME("flixel.addons.text.FlxTypeText","erase",0x8c731639,"flixel.addons.text.FlxTypeText.erase","flixel/addons/text/FlxTypeText.hx",286,0x9451ed7e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Delay,"Delay")
	HX_STACK_ARG(ForceRestart,"ForceRestart")
	HX_STACK_ARG(Sound,"Sound")
	HX_STACK_ARG(SkipKeys,"SkipKeys")
	HX_STACK_ARG(Callback,"Callback")
	HX_STACK_ARG(Params,"Params")
{
		HX_STACK_LINE(287)
		this->_erasing = true;
		HX_STACK_LINE(288)
		this->_typing = false;
		HX_STACK_LINE(289)
		this->paused = false;
		HX_STACK_LINE(290)
		this->_waiting = false;
		HX_STACK_LINE(292)
		if (((Delay != null()))){
			HX_STACK_LINE(294)
			this->eraseDelay = Delay;
		}
		HX_STACK_LINE(297)
		if ((ForceRestart)){
			HX_STACK_LINE(299)
			this->_length = this->_finalText.length;
			HX_STACK_LINE(300)
			this->set_text(this->_finalText);
		}
		HX_STACK_LINE(304)
		if (((Sound != null()))){
			HX_STACK_LINE(306)
			this->sound = Sound;
		}
		else{
			HX_STACK_LINE(308)
			if ((this->useDefaultSound)){
				HX_STACK_LINE(310)
				::flixel::addons::text::TypeSound _g = ::flixel::addons::text::TypeSound_obj::__new(null(),null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(310)
				::flixel::system::FlxSound _g1 = ::flixel::FlxG_obj::sound->load(_g,null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(310)
				this->sound = _g1;
			}
		}
		HX_STACK_LINE(314)
		if (((SkipKeys != null()))){
			HX_STACK_LINE(316)
			this->skipKeys = SkipKeys;
		}
		HX_STACK_LINE(319)
		if (((Callback != null()))){
			HX_STACK_LINE(321)
			this->_onErase = Callback;
		}
		HX_STACK_LINE(324)
		if (((Params != null()))){
			HX_STACK_LINE(326)
			this->_onEraseParams = Params;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(FlxTypeText_obj,erase,(void))

Void FlxTypeText_obj::resetText( ::String Text){
{
		HX_STACK_FRAME("flixel.addons.text.FlxTypeText","resetText",0xe198a8ef,"flixel.addons.text.FlxTypeText.resetText","flixel/addons/text/FlxTypeText.hx",336,0x9451ed7e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Text,"Text")
		HX_STACK_LINE(337)
		this->set_text(HX_CSTRING(""));
		HX_STACK_LINE(338)
		this->_finalText = Text;
		HX_STACK_LINE(339)
		this->_typing = false;
		HX_STACK_LINE(340)
		this->_erasing = false;
		HX_STACK_LINE(341)
		this->paused = false;
		HX_STACK_LINE(342)
		this->_waiting = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypeText_obj,resetText,(void))

Void FlxTypeText_obj::setSkipKeys( Array< ::String > Keys){
{
		HX_STACK_FRAME("flixel.addons.text.FlxTypeText","setSkipKeys",0x6ce80768,"flixel.addons.text.FlxTypeText.setSkipKeys","flixel/addons/text/FlxTypeText.hx",352,0x9451ed7e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Keys,"Keys")
		HX_STACK_LINE(352)
		this->skipKeys = Keys;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypeText_obj,setSkipKeys,(void))

Void FlxTypeText_obj::setSound( ::flixel::system::FlxSound Sound){
{
		HX_STACK_FRAME("flixel.addons.text.FlxTypeText","setSound",0x64e19e5a,"flixel.addons.text.FlxTypeText.setSound","flixel/addons/text/FlxTypeText.hx",362,0x9451ed7e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sound,"Sound")
		HX_STACK_LINE(362)
		this->sound = Sound;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypeText_obj,setSound,(void))

Void FlxTypeText_obj::setTypingVariation( hx::Null< Float >  __o_Amount,hx::Null< bool >  __o_On){
Float Amount = __o_Amount.Default(0.5);
bool On = __o_On.Default(true);
	HX_STACK_FRAME("flixel.addons.text.FlxTypeText","setTypingVariation",0x5d85e3a7,"flixel.addons.text.FlxTypeText.setTypingVariation","flixel/addons/text/FlxTypeText.hx",374,0x9451ed7e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Amount,"Amount")
	HX_STACK_ARG(On,"On")
{
		HX_STACK_LINE(375)
		this->_typingVariation = On;
		HX_STACK_LINE(377)
		if (((bool((Amount > (int)0)) && bool((Amount < (int)1))))){
			HX_STACK_LINE(379)
			this->_typeVarPercent = Amount;
		}
		else{
			HX_STACK_LINE(383)
			this->_typeVarPercent = 0.5;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypeText_obj,setTypingVariation,(void))

Void FlxTypeText_obj::onComplete( ){
{
		HX_STACK_FRAME("flixel.addons.text.FlxTypeText","onComplete",0xeb447ac5,"flixel.addons.text.FlxTypeText.onComplete","flixel/addons/text/FlxTypeText.hx",391,0x9451ed7e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(392)
		this->_timer = (int)0;
		HX_STACK_LINE(393)
		this->_typing = false;
		HX_STACK_LINE(395)
		if (((this->_onComplete != null()))){
			HX_STACK_LINE(397)
			::Reflect_obj::callMethod(null(),this->_onComplete,this->_onCompleteParams);
		}
		HX_STACK_LINE(400)
		if (((bool(this->autoErase) && bool((this->waitTime <= (int)0))))){
			HX_STACK_LINE(402)
			this->_erasing = true;
		}
		else{
			HX_STACK_LINE(404)
			if ((this->autoErase)){
				HX_STACK_LINE(406)
				this->_waitTimer = this->waitTime;
				HX_STACK_LINE(407)
				this->_waiting = true;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypeText_obj,onComplete,(void))

Void FlxTypeText_obj::onErased( ){
{
		HX_STACK_FRAME("flixel.addons.text.FlxTypeText","onErased",0xfbbc7fca,"flixel.addons.text.FlxTypeText.onErased","flixel/addons/text/FlxTypeText.hx",412,0x9451ed7e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(413)
		this->_timer = (int)0;
		HX_STACK_LINE(414)
		this->_erasing = false;
		HX_STACK_LINE(416)
		if (((this->_onErase != null()))){
			HX_STACK_LINE(418)
			::Reflect_obj::callMethod(null(),this->_onErase,this->_onEraseParams);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypeText_obj,onErased,(void))

Void FlxTypeText_obj::update( ){
{
		HX_STACK_FRAME("flixel.addons.text.FlxTypeText","update",0x99170156,"flixel.addons.text.FlxTypeText.update","flixel/addons/text/FlxTypeText.hx",423,0x9451ed7e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(427)
		if (((  (((bool((this->skipKeys != null())) && bool((this->skipKeys->length > (int)0))))) ? bool(::flixel::FlxG_obj::keys->checkKeyStatus(this->skipKeys,(int)2)) : bool(false) ))){
			HX_STACK_LINE(429)
			this->skip();
		}
		HX_STACK_LINE(433)
		if (((bool(this->_waiting) && bool(!(this->paused))))){
			HX_STACK_LINE(435)
			hx::SubEq(this->_waitTimer,::flixel::FlxG_obj::elapsed);
			HX_STACK_LINE(437)
			if (((this->_waitTimer <= (int)0))){
				HX_STACK_LINE(439)
				this->_waiting = false;
				HX_STACK_LINE(440)
				this->_erasing = true;
			}
		}
		HX_STACK_LINE(446)
		if (((bool(!(this->_waiting)) && bool(!(this->paused))))){
			HX_STACK_LINE(448)
			if (((bool((this->_length < this->_finalText.length)) && bool(this->_typing)))){
				HX_STACK_LINE(450)
				hx::AddEq(this->_timer,::flixel::FlxG_obj::elapsed);
			}
			HX_STACK_LINE(453)
			if (((bool((this->_length > (int)0)) && bool(this->_erasing)))){
				HX_STACK_LINE(455)
				hx::AddEq(this->_timer,::flixel::FlxG_obj::elapsed);
			}
		}
		HX_STACK_LINE(461)
		if (((bool(this->_typing) || bool(this->_erasing)))){
			HX_STACK_LINE(463)
			if (((bool(this->_typing) && bool((this->_timer >= this->delay))))){
				HX_STACK_LINE(465)
				(this->_length)++;
			}
			HX_STACK_LINE(468)
			if (((bool(this->_erasing) && bool((this->_timer >= this->eraseDelay))))){
				HX_STACK_LINE(470)
				(this->_length)--;
			}
			HX_STACK_LINE(473)
			if (((bool((bool(this->_typing) && bool((this->_timer >= this->delay)))) || bool((bool(this->_erasing) && bool((this->_timer >= this->eraseDelay))))))){
				HX_STACK_LINE(475)
				if ((this->_typingVariation)){
					HX_STACK_LINE(477)
					if ((this->_typing)){
						HX_STACK_LINE(479)
						Float _g = ::flixel::util::FlxRandom_obj::floatRanged((Float((-(this->delay) * this->_typeVarPercent)) / Float((int)2)),(Float((this->delay * this->_typeVarPercent)) / Float((int)2)),null());		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(479)
						this->_timer = _g;
					}
					else{
						HX_STACK_LINE(483)
						Float _g1 = ::flixel::util::FlxRandom_obj::floatRanged((Float((-(this->eraseDelay) * this->_typeVarPercent)) / Float((int)2)),(Float((this->eraseDelay * this->_typeVarPercent)) / Float((int)2)),null());		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(483)
						this->_timer = _g1;
					}
				}
				else{
					HX_STACK_LINE(488)
					this->_timer = (int)0;
				}
				HX_STACK_LINE(492)
				if (((this->sound != null()))){
					HX_STACK_LINE(494)
					this->sound->play(true);
				}
			}
		}
		HX_STACK_LINE(502)
		::String _g2 = this->_finalText.substr((int)0,this->_length);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(502)
		::String _g3 = (this->prefix + _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(502)
		::flixel::addons::text::FlxTypeText_obj::helperString = _g3;
		HX_STACK_LINE(506)
		if ((this->showCursor)){
			HX_STACK_LINE(508)
			hx::AddEq(this->_cursorTimer,::flixel::FlxG_obj::elapsed);
			HX_STACK_LINE(510)
			if (((this->_cursorTimer > (Float(this->cursorBlinkSpeed) / Float((int)2))))){
				HX_STACK_LINE(512)
				::String _g4 = this->cursorCharacter.charAt((int)0);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(512)
				hx::AddEq(::flixel::addons::text::FlxTypeText_obj::helperString,_g4);
			}
			HX_STACK_LINE(515)
			if (((this->_cursorTimer > this->cursorBlinkSpeed))){
				HX_STACK_LINE(517)
				this->_cursorTimer = (int)0;
			}
		}
		HX_STACK_LINE(523)
		::String _g5 = this->get_text();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(523)
		if (((::flixel::addons::text::FlxTypeText_obj::helperString != _g5))){
			HX_STACK_LINE(525)
			this->set_text(::flixel::addons::text::FlxTypeText_obj::helperString);
			HX_STACK_LINE(529)
			if (((bool((bool((bool((this->_length >= this->_finalText.length)) && bool(this->_typing))) && bool(!(this->_waiting)))) && bool(!(this->_erasing))))){
				HX_STACK_LINE(531)
				this->onComplete();
			}
			HX_STACK_LINE(536)
			if (((bool((bool((bool((this->_length == (int)0)) && bool(this->_erasing))) && bool(!(this->_typing)))) && bool(!(this->_waiting))))){
				HX_STACK_LINE(538)
				this->onErased();
			}
		}
		HX_STACK_LINE(542)
		this->super::update();
	}
return null();
}


Void FlxTypeText_obj::skip( ){
{
		HX_STACK_FRAME("flixel.addons.text.FlxTypeText","skip",0x2e99348c,"flixel.addons.text.FlxTypeText.skip","flixel/addons/text/FlxTypeText.hx",551,0x9451ed7e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(551)
		if (((bool(this->_erasing) || bool(this->_waiting)))){
			HX_STACK_LINE(553)
			this->_length = (int)0;
			HX_STACK_LINE(554)
			this->_waiting = false;
		}
		else{
			HX_STACK_LINE(556)
			if ((this->_typing)){
				HX_STACK_LINE(558)
				this->_length = this->_finalText.length;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypeText_obj,skip,(void))

::String FlxTypeText_obj::helperString;


FlxTypeText_obj::FlxTypeText_obj()
{
}

void FlxTypeText_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTypeText);
	HX_MARK_MEMBER_NAME(delay,"delay");
	HX_MARK_MEMBER_NAME(eraseDelay,"eraseDelay");
	HX_MARK_MEMBER_NAME(showCursor,"showCursor");
	HX_MARK_MEMBER_NAME(cursorCharacter,"cursorCharacter");
	HX_MARK_MEMBER_NAME(cursorBlinkSpeed,"cursorBlinkSpeed");
	HX_MARK_MEMBER_NAME(prefix,"prefix");
	HX_MARK_MEMBER_NAME(autoErase,"autoErase");
	HX_MARK_MEMBER_NAME(waitTime,"waitTime");
	HX_MARK_MEMBER_NAME(paused,"paused");
	HX_MARK_MEMBER_NAME(useDefaultSound,"useDefaultSound");
	HX_MARK_MEMBER_NAME(sound,"sound");
	HX_MARK_MEMBER_NAME(skipKeys,"skipKeys");
	HX_MARK_MEMBER_NAME(_finalText,"_finalText");
	HX_MARK_MEMBER_NAME(_onComplete,"_onComplete");
	HX_MARK_MEMBER_NAME(_onCompleteParams,"_onCompleteParams");
	HX_MARK_MEMBER_NAME(_onErase,"_onErase");
	HX_MARK_MEMBER_NAME(_onEraseParams,"_onEraseParams");
	HX_MARK_MEMBER_NAME(_timer,"_timer");
	HX_MARK_MEMBER_NAME(_waitTimer,"_waitTimer");
	HX_MARK_MEMBER_NAME(_length,"_length");
	HX_MARK_MEMBER_NAME(_typing,"_typing");
	HX_MARK_MEMBER_NAME(_erasing,"_erasing");
	HX_MARK_MEMBER_NAME(_waiting,"_waiting");
	HX_MARK_MEMBER_NAME(_cursorTimer,"_cursorTimer");
	HX_MARK_MEMBER_NAME(_typingVariation,"_typingVariation");
	HX_MARK_MEMBER_NAME(_typeVarPercent,"_typeVarPercent");
	::flixel::text::FlxText_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTypeText_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(delay,"delay");
	HX_VISIT_MEMBER_NAME(eraseDelay,"eraseDelay");
	HX_VISIT_MEMBER_NAME(showCursor,"showCursor");
	HX_VISIT_MEMBER_NAME(cursorCharacter,"cursorCharacter");
	HX_VISIT_MEMBER_NAME(cursorBlinkSpeed,"cursorBlinkSpeed");
	HX_VISIT_MEMBER_NAME(prefix,"prefix");
	HX_VISIT_MEMBER_NAME(autoErase,"autoErase");
	HX_VISIT_MEMBER_NAME(waitTime,"waitTime");
	HX_VISIT_MEMBER_NAME(paused,"paused");
	HX_VISIT_MEMBER_NAME(useDefaultSound,"useDefaultSound");
	HX_VISIT_MEMBER_NAME(sound,"sound");
	HX_VISIT_MEMBER_NAME(skipKeys,"skipKeys");
	HX_VISIT_MEMBER_NAME(_finalText,"_finalText");
	HX_VISIT_MEMBER_NAME(_onComplete,"_onComplete");
	HX_VISIT_MEMBER_NAME(_onCompleteParams,"_onCompleteParams");
	HX_VISIT_MEMBER_NAME(_onErase,"_onErase");
	HX_VISIT_MEMBER_NAME(_onEraseParams,"_onEraseParams");
	HX_VISIT_MEMBER_NAME(_timer,"_timer");
	HX_VISIT_MEMBER_NAME(_waitTimer,"_waitTimer");
	HX_VISIT_MEMBER_NAME(_length,"_length");
	HX_VISIT_MEMBER_NAME(_typing,"_typing");
	HX_VISIT_MEMBER_NAME(_erasing,"_erasing");
	HX_VISIT_MEMBER_NAME(_waiting,"_waiting");
	HX_VISIT_MEMBER_NAME(_cursorTimer,"_cursorTimer");
	HX_VISIT_MEMBER_NAME(_typingVariation,"_typingVariation");
	HX_VISIT_MEMBER_NAME(_typeVarPercent,"_typeVarPercent");
	::flixel::text::FlxText_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTypeText_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"skip") ) { return skip_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { return delay; }
		if (HX_FIELD_EQ(inName,"sound") ) { return sound; }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"erase") ) { return erase_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"prefix") ) { return prefix; }
		if (HX_FIELD_EQ(inName,"paused") ) { return paused; }
		if (HX_FIELD_EQ(inName,"_timer") ) { return _timer; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_length") ) { return _length; }
		if (HX_FIELD_EQ(inName,"_typing") ) { return _typing; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"waitTime") ) { return waitTime; }
		if (HX_FIELD_EQ(inName,"skipKeys") ) { return skipKeys; }
		if (HX_FIELD_EQ(inName,"_onErase") ) { return _onErase; }
		if (HX_FIELD_EQ(inName,"_erasing") ) { return _erasing; }
		if (HX_FIELD_EQ(inName,"_waiting") ) { return _waiting; }
		if (HX_FIELD_EQ(inName,"setSound") ) { return setSound_dyn(); }
		if (HX_FIELD_EQ(inName,"onErased") ) { return onErased_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoErase") ) { return autoErase; }
		if (HX_FIELD_EQ(inName,"resetText") ) { return resetText_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"eraseDelay") ) { return eraseDelay; }
		if (HX_FIELD_EQ(inName,"showCursor") ) { return showCursor; }
		if (HX_FIELD_EQ(inName,"_finalText") ) { return _finalText; }
		if (HX_FIELD_EQ(inName,"_waitTimer") ) { return _waitTimer; }
		if (HX_FIELD_EQ(inName,"onComplete") ) { return onComplete_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onComplete") ) { return _onComplete; }
		if (HX_FIELD_EQ(inName,"setSkipKeys") ) { return setSkipKeys_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"helperString") ) { return helperString; }
		if (HX_FIELD_EQ(inName,"_cursorTimer") ) { return _cursorTimer; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_onEraseParams") ) { return _onEraseParams; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cursorCharacter") ) { return cursorCharacter; }
		if (HX_FIELD_EQ(inName,"useDefaultSound") ) { return useDefaultSound; }
		if (HX_FIELD_EQ(inName,"_typeVarPercent") ) { return _typeVarPercent; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"cursorBlinkSpeed") ) { return cursorBlinkSpeed; }
		if (HX_FIELD_EQ(inName,"_typingVariation") ) { return _typingVariation; }
		if (HX_FIELD_EQ(inName,"setEraseCallback") ) { return setEraseCallback_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_onCompleteParams") ) { return _onCompleteParams; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"setTypingVariation") ) { return setTypingVariation_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"setCompleteCallback") ) { return setCompleteCallback_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTypeText_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { delay=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sound") ) { sound=inValue.Cast< ::flixel::system::FlxSound >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"prefix") ) { prefix=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_timer") ) { _timer=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_length") ) { _length=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_typing") ) { _typing=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"waitTime") ) { waitTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skipKeys") ) { skipKeys=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onErase") ) { _onErase=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_erasing") ) { _erasing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_waiting") ) { _waiting=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoErase") ) { autoErase=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"eraseDelay") ) { eraseDelay=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"showCursor") ) { showCursor=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_finalText") ) { _finalText=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_waitTimer") ) { _waitTimer=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onComplete") ) { _onComplete=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"helperString") ) { helperString=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cursorTimer") ) { _cursorTimer=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_onEraseParams") ) { _onEraseParams=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cursorCharacter") ) { cursorCharacter=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"useDefaultSound") ) { useDefaultSound=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_typeVarPercent") ) { _typeVarPercent=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"cursorBlinkSpeed") ) { cursorBlinkSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_typingVariation") ) { _typingVariation=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_onCompleteParams") ) { _onCompleteParams=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTypeText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("delay"));
	outFields->push(HX_CSTRING("eraseDelay"));
	outFields->push(HX_CSTRING("showCursor"));
	outFields->push(HX_CSTRING("cursorCharacter"));
	outFields->push(HX_CSTRING("cursorBlinkSpeed"));
	outFields->push(HX_CSTRING("prefix"));
	outFields->push(HX_CSTRING("autoErase"));
	outFields->push(HX_CSTRING("waitTime"));
	outFields->push(HX_CSTRING("paused"));
	outFields->push(HX_CSTRING("useDefaultSound"));
	outFields->push(HX_CSTRING("sound"));
	outFields->push(HX_CSTRING("skipKeys"));
	outFields->push(HX_CSTRING("_finalText"));
	outFields->push(HX_CSTRING("_onComplete"));
	outFields->push(HX_CSTRING("_onCompleteParams"));
	outFields->push(HX_CSTRING("_onErase"));
	outFields->push(HX_CSTRING("_onEraseParams"));
	outFields->push(HX_CSTRING("_timer"));
	outFields->push(HX_CSTRING("_waitTimer"));
	outFields->push(HX_CSTRING("_length"));
	outFields->push(HX_CSTRING("_typing"));
	outFields->push(HX_CSTRING("_erasing"));
	outFields->push(HX_CSTRING("_waiting"));
	outFields->push(HX_CSTRING("_cursorTimer"));
	outFields->push(HX_CSTRING("_typingVariation"));
	outFields->push(HX_CSTRING("_typeVarPercent"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("helperString"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(FlxTypeText_obj,delay),HX_CSTRING("delay")},
	{hx::fsFloat,(int)offsetof(FlxTypeText_obj,eraseDelay),HX_CSTRING("eraseDelay")},
	{hx::fsBool,(int)offsetof(FlxTypeText_obj,showCursor),HX_CSTRING("showCursor")},
	{hx::fsString,(int)offsetof(FlxTypeText_obj,cursorCharacter),HX_CSTRING("cursorCharacter")},
	{hx::fsFloat,(int)offsetof(FlxTypeText_obj,cursorBlinkSpeed),HX_CSTRING("cursorBlinkSpeed")},
	{hx::fsString,(int)offsetof(FlxTypeText_obj,prefix),HX_CSTRING("prefix")},
	{hx::fsBool,(int)offsetof(FlxTypeText_obj,autoErase),HX_CSTRING("autoErase")},
	{hx::fsFloat,(int)offsetof(FlxTypeText_obj,waitTime),HX_CSTRING("waitTime")},
	{hx::fsBool,(int)offsetof(FlxTypeText_obj,paused),HX_CSTRING("paused")},
	{hx::fsBool,(int)offsetof(FlxTypeText_obj,useDefaultSound),HX_CSTRING("useDefaultSound")},
	{hx::fsObject /*::flixel::system::FlxSound*/ ,(int)offsetof(FlxTypeText_obj,sound),HX_CSTRING("sound")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(FlxTypeText_obj,skipKeys),HX_CSTRING("skipKeys")},
	{hx::fsString,(int)offsetof(FlxTypeText_obj,_finalText),HX_CSTRING("_finalText")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxTypeText_obj,_onComplete),HX_CSTRING("_onComplete")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxTypeText_obj,_onCompleteParams),HX_CSTRING("_onCompleteParams")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxTypeText_obj,_onErase),HX_CSTRING("_onErase")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxTypeText_obj,_onEraseParams),HX_CSTRING("_onEraseParams")},
	{hx::fsFloat,(int)offsetof(FlxTypeText_obj,_timer),HX_CSTRING("_timer")},
	{hx::fsFloat,(int)offsetof(FlxTypeText_obj,_waitTimer),HX_CSTRING("_waitTimer")},
	{hx::fsInt,(int)offsetof(FlxTypeText_obj,_length),HX_CSTRING("_length")},
	{hx::fsBool,(int)offsetof(FlxTypeText_obj,_typing),HX_CSTRING("_typing")},
	{hx::fsBool,(int)offsetof(FlxTypeText_obj,_erasing),HX_CSTRING("_erasing")},
	{hx::fsBool,(int)offsetof(FlxTypeText_obj,_waiting),HX_CSTRING("_waiting")},
	{hx::fsFloat,(int)offsetof(FlxTypeText_obj,_cursorTimer),HX_CSTRING("_cursorTimer")},
	{hx::fsBool,(int)offsetof(FlxTypeText_obj,_typingVariation),HX_CSTRING("_typingVariation")},
	{hx::fsFloat,(int)offsetof(FlxTypeText_obj,_typeVarPercent),HX_CSTRING("_typeVarPercent")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("delay"),
	HX_CSTRING("eraseDelay"),
	HX_CSTRING("showCursor"),
	HX_CSTRING("cursorCharacter"),
	HX_CSTRING("cursorBlinkSpeed"),
	HX_CSTRING("prefix"),
	HX_CSTRING("autoErase"),
	HX_CSTRING("waitTime"),
	HX_CSTRING("paused"),
	HX_CSTRING("useDefaultSound"),
	HX_CSTRING("sound"),
	HX_CSTRING("skipKeys"),
	HX_CSTRING("_finalText"),
	HX_CSTRING("_onComplete"),
	HX_CSTRING("_onCompleteParams"),
	HX_CSTRING("_onErase"),
	HX_CSTRING("_onEraseParams"),
	HX_CSTRING("_timer"),
	HX_CSTRING("_waitTimer"),
	HX_CSTRING("_length"),
	HX_CSTRING("_typing"),
	HX_CSTRING("_erasing"),
	HX_CSTRING("_waiting"),
	HX_CSTRING("_cursorTimer"),
	HX_CSTRING("_typingVariation"),
	HX_CSTRING("_typeVarPercent"),
	HX_CSTRING("setCompleteCallback"),
	HX_CSTRING("setEraseCallback"),
	HX_CSTRING("start"),
	HX_CSTRING("erase"),
	HX_CSTRING("resetText"),
	HX_CSTRING("setSkipKeys"),
	HX_CSTRING("setSound"),
	HX_CSTRING("setTypingVariation"),
	HX_CSTRING("onComplete"),
	HX_CSTRING("onErased"),
	HX_CSTRING("update"),
	HX_CSTRING("skip"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTypeText_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxTypeText_obj::helperString,"helperString");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTypeText_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxTypeText_obj::helperString,"helperString");
};

#endif

Class FlxTypeText_obj::__mClass;

void FlxTypeText_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.text.FlxTypeText"), hx::TCanCast< FlxTypeText_obj> ,sStaticFields,sMemberFields,
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

void FlxTypeText_obj::__boot()
{
	helperString= HX_CSTRING("");
}

} // end namespace flixel
} // end namespace addons
} // end namespace text
