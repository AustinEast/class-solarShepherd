#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_CallStack
#include <haxe/CallStack.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
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
#ifndef INCLUDED_openfl__legacy_display_LoaderInfo
#include <openfl/_legacy/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_ManagedStage
#include <openfl/_legacy/display/ManagedStage.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_MovieClip
#include <openfl/_legacy/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_net_URLLoader
#include <openfl/_legacy/net/URLLoader.h>
#endif
#ifndef INCLUDED_openfl__legacy_net_URLRequest
#include <openfl/_legacy/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_events_UncaughtErrorEvent
#include <openfl/events/UncaughtErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_UncaughtErrorEvents
#include <openfl/events/UncaughtErrorEvents.h>
#endif
#ifndef INCLUDED_sys_io_Process
#include <sys/io/Process.h>
#endif
namespace openfl{
namespace _legacy{

Void Lib_obj::__construct()
{
	return null();
}

//Lib_obj::~Lib_obj() { }

Dynamic Lib_obj::__CreateEmpty() { return  new Lib_obj; }
hx::ObjectPtr< Lib_obj > Lib_obj::__new()
{  hx::ObjectPtr< Lib_obj > result = new Lib_obj();
	result->__construct();
	return result;}

Dynamic Lib_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Lib_obj > result = new Lib_obj();
	result->__construct();
	return result;}

int Lib_obj::FULLSCREEN;

int Lib_obj::BORDERLESS;

int Lib_obj::RESIZABLE;

int Lib_obj::HARDWARE;

int Lib_obj::VSYNC;

int Lib_obj::HW_AA;

int Lib_obj::HW_AA_HIRES;

int Lib_obj::ALLOW_SHADERS;

int Lib_obj::REQUIRE_SHADERS;

int Lib_obj::DEPTH_BUFFER;

int Lib_obj::STENCIL_BUFFER;

::String Lib_obj::company;

::openfl::_legacy::display::MovieClip Lib_obj::current;

::String Lib_obj::file;

int Lib_obj::initHeight;

int Lib_obj::initWidth;

::String Lib_obj::packageName;

bool Lib_obj::silentRecreate;

::openfl::_legacy::display::Stage Lib_obj::stage;

::String Lib_obj::version;

::openfl::_legacy::display::MovieClip Lib_obj::__current;

bool Lib_obj::__isInit;

bool Lib_obj::__loadedNekoAPI;

Dynamic Lib_obj::__mainFrame;

::haxe::ds::StringMap Lib_obj::__moduleNames;

::haxe::ds::StringMap Lib_obj::__sentWarnings;

::openfl::_legacy::display::Stage Lib_obj::__stage;

Dynamic Lib_obj::__uncaughtExceptionHandler;

Dynamic Lib_obj::as( Dynamic v,::Class c){
	HX_STACK_FRAME("openfl._legacy.Lib","as",0xb50de57f,"openfl._legacy.Lib.as","openfl/_legacy/Lib.hx",62,0x739f021f)
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(62)
	return v;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lib_obj,as,return )

::openfl::_legacy::display::MovieClip Lib_obj::attach( ::String name){
	HX_STACK_FRAME("openfl._legacy.Lib","attach",0x82a556d2,"openfl._legacy.Lib.attach","openfl/_legacy/Lib.hx",69,0x739f021f)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(69)
	return ::openfl::_legacy::display::MovieClip_obj::__new();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,attach,return )

Void Lib_obj::close( ){
{
		HX_STACK_FRAME("openfl._legacy.Lib","close",0x05629d4b,"openfl._legacy.Lib.close","openfl/_legacy/Lib.hx",74,0x739f021f)
		HX_STACK_LINE(76)
		::openfl::_legacy::display::Stage_obj::__exiting = true;
		HX_STACK_LINE(77)
		Dynamic close = ::openfl::_legacy::Lib_obj::load(HX_CSTRING("lime-legacy"),HX_CSTRING("lime_legacy_close"),(int)0);		HX_STACK_VAR(close,"close");
		HX_STACK_LINE(78)
		close();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,close,(void))

Void Lib_obj::create( Dynamic onLoaded,int width,int height,hx::Null< Float >  __o_frameRate,hx::Null< int >  __o_color,hx::Null< int >  __o_flags,::String __o_title,::openfl::_legacy::display::BitmapData icon,::Class stageClass){
Float frameRate = __o_frameRate.Default(60.0);
int color = __o_color.Default(16777215);
int flags = __o_flags.Default(15);
::String title = __o_title.Default(HX_CSTRING("OpenFL"));
	HX_STACK_FRAME("openfl._legacy.Lib","create",0x1ea4c209,"openfl._legacy.Lib.create","openfl/_legacy/Lib.hx",83,0x739f021f)
	HX_STACK_ARG(onLoaded,"onLoaded")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(frameRate,"frameRate")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(flags,"flags")
	HX_STACK_ARG(title,"title")
	HX_STACK_ARG(icon,"icon")
	HX_STACK_ARG(stageClass,"stageClass")
{
		HX_STACK_LINE(83)
		Array< ::Dynamic > stageClass1 = Array_obj< ::Dynamic >::__new().Add(stageClass);		HX_STACK_VAR(stageClass1,"stageClass1");
		HX_STACK_LINE(83)
		Array< int > color1 = Array_obj< int >::__new().Add(color);		HX_STACK_VAR(color1,"color1");
		HX_STACK_LINE(83)
		Array< Float > frameRate1 = Array_obj< Float >::__new().Add(frameRate);		HX_STACK_VAR(frameRate1,"frameRate1");
		HX_STACK_LINE(83)
		Array< int > height1 = Array_obj< int >::__new().Add(height);		HX_STACK_VAR(height1,"height1");
		HX_STACK_LINE(83)
		Array< int > width1 = Array_obj< int >::__new().Add(width);		HX_STACK_VAR(width1,"width1");
		HX_STACK_LINE(83)
		Dynamic onLoaded1 = Dynamic( Array_obj<Dynamic>::__new().Add(onLoaded));		HX_STACK_VAR(onLoaded1,"onLoaded1");
		HX_STACK_LINE(85)
		if ((::openfl::_legacy::Lib_obj::__isInit)){
			HX_STACK_LINE(87)
			if ((::openfl::_legacy::Lib_obj::silentRecreate)){
				HX_STACK_LINE(89)
				onLoaded1->__GetItem((int)0)().Cast< Void >();
				HX_STACK_LINE(90)
				return null();
			}
			HX_STACK_LINE(94)
			HX_STACK_DO_THROW(HX_CSTRING("flash.Lib.create called multiple times. This function is automatically called by the project code."));
		}
		HX_STACK_LINE(98)
		::openfl::_legacy::Lib_obj::__isInit = true;
		HX_STACK_LINE(99)
		::openfl::_legacy::Lib_obj::initWidth = width1->__get((int)0);
		HX_STACK_LINE(100)
		::openfl::_legacy::Lib_obj::initHeight = height1->__get((int)0);
		HX_STACK_LINE(102)
		Dynamic create_main_frame = ::openfl::_legacy::Lib_obj::load(HX_CSTRING("lime-legacy"),HX_CSTRING("lime_legacy_create_main_frame"),(int)-1);		HX_STACK_VAR(create_main_frame,"create_main_frame");

		HX_BEGIN_LOCAL_FUNC_S6(hx::LocalFunc,_Function_1_1,Array< Float >,frameRate1,Array< int >,width1,Array< ::Dynamic >,stageClass1,Array< int >,color1,Array< int >,height1,Dynamic,onLoaded1)
		Void run(Dynamic frameHandle){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/_legacy/Lib.hx",106,0x739f021f)
			HX_STACK_ARG(frameHandle,"frameHandle")
			{
				HX_STACK_LINE(106)
				try
				{
				HX_STACK_CATCHABLE(Dynamic, 0);
				{
					HX_STACK_LINE(108)
					::openfl::_legacy::Lib_obj::__mainFrame = frameHandle;
					HX_STACK_LINE(109)
					Dynamic stage_handle = ::openfl::_legacy::Lib_obj::lime_get_frame_stage(::openfl::_legacy::Lib_obj::__mainFrame);		HX_STACK_VAR(stage_handle,"stage_handle");
					HX_STACK_LINE(111)
					if (((stageClass1->__get((int)0).StaticCast< ::Class >() == null()))){
						HX_STACK_LINE(111)
						::openfl::_legacy::Lib_obj::__stage = ::openfl::_legacy::display::Stage_obj::__new(stage_handle,width1->__get((int)0),height1->__get((int)0));
					}
					else{
						HX_STACK_LINE(111)
						::openfl::_legacy::Lib_obj::__stage = ::Type_obj::createInstance(stageClass1->__get((int)0).StaticCast< ::Class >(),Dynamic( Array_obj<Dynamic>::__new().Add(stage_handle).Add(width1->__get((int)0)).Add(height1->__get((int)0))));
					}
					HX_STACK_LINE(112)
					::openfl::_legacy::Lib_obj::__stage->set_frameRate(frameRate1->__get((int)0));
					HX_STACK_LINE(113)
					::openfl::_legacy::Lib_obj::__stage->set_opaqueBackground(color1->__get((int)0));
					HX_STACK_LINE(114)
					::openfl::_legacy::Lib_obj::__stage->onQuit = ::openfl::_legacy::Lib_obj::close_dyn();
					HX_STACK_LINE(116)
					if (((::openfl::_legacy::Lib_obj::__current != null()))){
						HX_STACK_LINE(118)
						::openfl::_legacy::Lib_obj::__stage->addChild(::openfl::_legacy::Lib_obj::__current);
					}
					HX_STACK_LINE(122)
					onLoaded1->__GetItem((int)0)().Cast< Void >();
				}
				}
				catch(Dynamic __e){
					{
						HX_STACK_BEGIN_CATCH
						Dynamic error = __e;{
							HX_STACK_LINE(126)
							::openfl::_legacy::Lib_obj::rethrow(error);
						}
					}
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(104)
		create_main_frame( Dynamic(new _Function_1_1(frameRate1,width1,stageClass1,color1,height1,onLoaded1)),width1->__get((int)0),height1->__get((int)0),flags,title,(  (((icon == null()))) ? Dynamic(null()) : Dynamic(icon->__handle) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(Lib_obj,create,(void))

::openfl::_legacy::display::ManagedStage Lib_obj::createManagedStage( int width,int height,hx::Null< int >  __o_flags){
int flags = __o_flags.Default(0);
	HX_STACK_FRAME("openfl._legacy.Lib","createManagedStage",0x7e03c788,"openfl._legacy.Lib.createManagedStage","openfl/_legacy/Lib.hx",135,0x739f021f)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(flags,"flags")
{
		HX_STACK_LINE(137)
		::openfl::_legacy::Lib_obj::initWidth = width;
		HX_STACK_LINE(138)
		::openfl::_legacy::Lib_obj::initHeight = height;
		HX_STACK_LINE(140)
		::openfl::_legacy::display::ManagedStage result = ::openfl::_legacy::display::ManagedStage_obj::__new(width,height,flags);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(141)
		::openfl::_legacy::Lib_obj::__stage = result;
		HX_STACK_LINE(143)
		return result;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Lib_obj,createManagedStage,return )

::String Lib_obj::findHaxeLib( ::String library){
	HX_STACK_FRAME("openfl._legacy.Lib","findHaxeLib",0x9617a559,"openfl._legacy.Lib.findHaxeLib","openfl/_legacy/Lib.hx",162,0x739f021f)
	HX_STACK_ARG(library,"library")
	HX_STACK_LINE(164)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(166)
		::sys::io::Process proc = ::sys::io::Process_obj::__new(HX_CSTRING("haxelib"),Array_obj< ::String >::__new().Add(HX_CSTRING("path")).Add(library));		HX_STACK_VAR(proc,"proc");
		HX_STACK_LINE(168)
		if (((proc != null()))){
			HX_STACK_LINE(170)
			::haxe::io::Input stream = proc->_stdout;		HX_STACK_VAR(stream,"stream");
			HX_STACK_LINE(172)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(174)
				while((true)){
					HX_STACK_LINE(176)
					::String s = stream->readLine();		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(178)
					::String _g = s.substr((int)0,(int)1);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(178)
					if (((_g != HX_CSTRING("-")))){
						HX_STACK_LINE(180)
						stream->close();
						HX_STACK_LINE(181)
						proc->close();
						HX_STACK_LINE(182)
						::openfl::_legacy::Lib_obj::loaderTrace((HX_CSTRING("Found haxelib ") + s));
						HX_STACK_LINE(183)
						return s;
					}
				}
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
					}
				}
			}
			HX_STACK_LINE(191)
			stream->close();
			HX_STACK_LINE(192)
			proc->close();
		}
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
			}
		}
	}
	HX_STACK_LINE(198)
	return HX_CSTRING("");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,findHaxeLib,return )

Dynamic Lib_obj::load( ::String library,::String method,hx::Null< int >  __o_args){
int args = __o_args.Default(0);
	HX_STACK_FRAME("openfl._legacy.Lib","load",0x87b427f3,"openfl._legacy.Lib.load","openfl/_legacy/Lib.hx",203,0x739f021f)
	HX_STACK_ARG(library,"library")
	HX_STACK_ARG(method,"method")
	HX_STACK_ARG(args,"args")
{
		HX_STACK_LINE(206)
		if (((library == HX_CSTRING("lime")))){
			HX_STACK_LINE(206)
			library = HX_CSTRING("lime-legacy");
		}
		HX_STACK_LINE(213)
		if (((::openfl::_legacy::Lib_obj::__moduleNames == null()))){
			HX_STACK_LINE(213)
			::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(213)
			::openfl::_legacy::Lib_obj::__moduleNames = _g;
		}
		HX_STACK_LINE(214)
		if ((::openfl::_legacy::Lib_obj::__moduleNames->exists(library))){
			HX_STACK_LINE(217)
			::String _g1 = ::openfl::_legacy::Lib_obj::__moduleNames->get(library);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(217)
			return ::cpp::Lib_obj::load(_g1,method,args);
		}
		HX_STACK_LINE(234)
		::openfl::_legacy::Lib_obj::__moduleNames->set(library,library);
		HX_STACK_LINE(245)
		Dynamic result = ::openfl::_legacy::Lib_obj::tryLoad((HX_CSTRING("./") + library),library,method,args);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(248)
		if (((result == null()))){
			HX_STACK_LINE(250)
			Dynamic _g2 = ::openfl::_legacy::Lib_obj::tryLoad((HX_CSTRING(".\\") + library),library,method,args);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(250)
			result = _g2;
		}
		HX_STACK_LINE(254)
		if (((result == null()))){
			HX_STACK_LINE(256)
			Dynamic _g3 = ::openfl::_legacy::Lib_obj::tryLoad(library,library,method,args);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(256)
			result = _g3;
		}
		HX_STACK_LINE(260)
		if (((result == null()))){
			HX_STACK_LINE(262)
			::String _g4 = ::openfl::_legacy::Lib_obj::sysName().substr((int)7,null()).toLowerCase();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(262)
			::String slash;		HX_STACK_VAR(slash,"slash");
			HX_STACK_LINE(262)
			if (((_g4 == HX_CSTRING("windows")))){
				HX_STACK_LINE(262)
				slash = HX_CSTRING("\\");
			}
			else{
				HX_STACK_LINE(262)
				slash = HX_CSTRING("/");
			}
			HX_STACK_LINE(263)
			::String haxelib = ::openfl::_legacy::Lib_obj::findHaxeLib(HX_CSTRING("lime"));		HX_STACK_VAR(haxelib,"haxelib");
			HX_STACK_LINE(265)
			if (((haxelib != HX_CSTRING("")))){
				HX_STACK_LINE(267)
				::String _g5 = ::openfl::_legacy::Lib_obj::sysName();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(267)
				::String _g6 = ((((((haxelib + slash) + HX_CSTRING("legacy")) + slash) + HX_CSTRING("ndll")) + slash) + _g5);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(267)
				::String _g7 = (_g6 + slash);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(267)
				::String _g8 = (_g7 + library);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(267)
				Dynamic _g9 = ::openfl::_legacy::Lib_obj::tryLoad(_g8,library,method,args);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(267)
				result = _g9;
				HX_STACK_LINE(269)
				if (((result == null()))){
					HX_STACK_LINE(271)
					::String _g10 = ::openfl::_legacy::Lib_obj::sysName();		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(271)
					::String _g11 = ((((((haxelib + slash) + HX_CSTRING("legacy")) + slash) + HX_CSTRING("ndll")) + slash) + _g10);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(271)
					::String _g12 = (_g11 + HX_CSTRING("64"));		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(271)
					::String _g13 = (_g12 + slash);		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(271)
					::String _g14 = (_g13 + library);		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(271)
					Dynamic _g15 = ::openfl::_legacy::Lib_obj::tryLoad(_g14,library,method,args);		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(271)
					result = _g15;
				}
			}
		}
		HX_STACK_LINE(279)
		::String _g16 = ::Std_obj::string(result);		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(279)
		::String _g17 = (HX_CSTRING("Result : ") + _g16);		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(279)
		::openfl::_legacy::Lib_obj::loaderTrace(_g17);
		HX_STACK_LINE(289)
		return result;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Lib_obj,load,return )

Void Lib_obj::loaderTrace( ::String message){
{
		HX_STACK_FRAME("openfl._legacy.Lib","loaderTrace",0x37050745,"openfl._legacy.Lib.loaderTrace","openfl/_legacy/Lib.hx",294,0x739f021f)
		HX_STACK_ARG(message,"message")
		HX_STACK_LINE(297)
		Dynamic get_env = ::cpp::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("get_env"),(int)1);		HX_STACK_VAR(get_env,"get_env");
		HX_STACK_LINE(298)
		Dynamic _g = get_env(HX_CSTRING("OPENFL_LOAD_DEBUG"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(298)
		bool debug = (_g != null());		HX_STACK_VAR(debug,"debug");
		HX_STACK_LINE(303)
		if ((debug)){
			HX_STACK_LINE(305)
			::Sys_obj::println(message);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,loaderTrace,(void))

Void Lib_obj::notImplemented( ::String api){
{
		HX_STACK_FRAME("openfl._legacy.Lib","notImplemented",0x6d44ea7c,"openfl._legacy.Lib.notImplemented","openfl/_legacy/Lib.hx",314,0x739f021f)
		HX_STACK_ARG(api,"api")
		HX_STACK_LINE(314)
		if ((!(::openfl::_legacy::Lib_obj::__sentWarnings->exists(api)))){
			HX_STACK_LINE(316)
			::openfl::_legacy::Lib_obj::__sentWarnings->set(api,true);
			HX_STACK_LINE(318)
			::haxe::Log_obj::trace(((HX_CSTRING("Warning: ") + api) + HX_CSTRING(" is not implemented")),hx::SourceInfo(HX_CSTRING("Lib.hx"),318,HX_CSTRING("openfl._legacy.Lib"),HX_CSTRING("notImplemented")));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,notImplemented,(void))

Void Lib_obj::rethrow( Dynamic error){
{
		HX_STACK_FRAME("openfl._legacy.Lib","rethrow",0x964500e6,"openfl._legacy.Lib.rethrow","openfl/_legacy/Lib.hx",325,0x739f021f)
		HX_STACK_ARG(error,"error")
		HX_STACK_LINE(327)
		::openfl::events::UncaughtErrorEvent event = ::openfl::events::UncaughtErrorEvent_obj::__new(::openfl::events::UncaughtErrorEvent_obj::UNCAUGHT_ERROR,true,true,error);		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(329)
		if (((  (((::openfl::_legacy::Lib_obj::__uncaughtExceptionHandler_dyn() != null()))) ? bool(::openfl::_legacy::Lib_obj::__uncaughtExceptionHandler(event)) : bool(false) ))){
			HX_STACK_LINE(331)
			return null();
		}
		HX_STACK_LINE(335)
		::openfl::_legacy::Lib_obj::get_current()->loaderInfo->uncaughtErrorEvents->dispatchEvent(event);
		HX_STACK_LINE(337)
		if ((!(event->__getIsCancelled()))){
			HX_STACK_LINE(339)
			::String message = HX_CSTRING("");		HX_STACK_VAR(message,"message");
			HX_STACK_LINE(341)
			if (((bool((error != null())) && bool((error != HX_CSTRING("")))))){
				HX_STACK_LINE(343)
				::String _g = ::Std_obj::string(error);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(343)
				::String _g1 = (_g + HX_CSTRING(""));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(343)
				message = _g1;
			}
			HX_STACK_LINE(347)
			Array< ::Dynamic > stack = ::haxe::CallStack_obj::exceptionStack();		HX_STACK_VAR(stack,"stack");
			HX_STACK_LINE(349)
			if (((stack->length > (int)0))){
				HX_STACK_LINE(351)
				::String _g2 = ::haxe::CallStack_obj::toString(stack);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(351)
				::String _g3 = (_g2 + HX_CSTRING("\n"));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(351)
				hx::AddEq(message,_g3);
			}
			else{
				HX_STACK_LINE(355)
				hx::AddEq(message,HX_CSTRING("\n"));
			}
			HX_STACK_LINE(362)
			::haxe::io::Bytes _g4 = ::haxe::io::Bytes_obj::ofString(message);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(362)
			::Sys_obj::_stderr()->write(_g4);
			HX_STACK_LINE(364)
			::Sys_obj::exit((int)1);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,rethrow,(void))

Void Lib_obj::setUncaughtExceptionHandler( Dynamic f){
{
		HX_STACK_FRAME("openfl._legacy.Lib","setUncaughtExceptionHandler",0x766b3585,"openfl._legacy.Lib.setUncaughtExceptionHandler","openfl/_legacy/Lib.hx",373,0x739f021f)
		HX_STACK_ARG(f,"f")
		HX_STACK_LINE(373)
		::openfl::_legacy::Lib_obj::__uncaughtExceptionHandler = f;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,setUncaughtExceptionHandler,(void))

::String Lib_obj::sysName( ){
	HX_STACK_FRAME("openfl._legacy.Lib","sysName",0x1a5aa64b,"openfl._legacy.Lib.sysName","openfl/_legacy/Lib.hx",378,0x739f021f)
	HX_STACK_LINE(381)
	Dynamic sys_string = ::cpp::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("sys_string"),(int)0);		HX_STACK_VAR(sys_string,"sys_string");
	HX_STACK_LINE(382)
	return sys_string().Cast< ::String >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,sysName,return )

Dynamic Lib_obj::tryLoad( ::String name,::String library,::String func,int args){
	HX_STACK_FRAME("openfl._legacy.Lib","tryLoad",0xea903954,"openfl._legacy.Lib.tryLoad","openfl/_legacy/Lib.hx",390,0x739f021f)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(library,"library")
	HX_STACK_ARG(func,"func")
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(392)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(395)
		Dynamic result = ::cpp::Lib_obj::load(name,func,args);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(402)
		if (((result != null()))){
			HX_STACK_LINE(404)
			::openfl::_legacy::Lib_obj::loaderTrace((HX_CSTRING("Got result ") + name));
			HX_STACK_LINE(405)
			::openfl::_legacy::Lib_obj::__moduleNames->set(library,name);
			HX_STACK_LINE(406)
			return result;
		}
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(412)
				::openfl::_legacy::Lib_obj::loaderTrace((HX_CSTRING("Failed to load : ") + name));
			}
		}
	}
	HX_STACK_LINE(416)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Lib_obj,tryLoad,return )

Void Lib_obj::exit( ){
{
		HX_STACK_FRAME("openfl._legacy.Lib","exit",0x831a84eb,"openfl._legacy.Lib.exit","openfl/_legacy/Lib.hx",449,0x739f021f)
		HX_STACK_LINE(451)
		Dynamic quit = ::openfl::_legacy::Lib_obj::get_stage()->onQuit;		HX_STACK_VAR(quit,"quit");
		HX_STACK_LINE(453)
		if (((quit != null()))){
			HX_STACK_LINE(463)
			quit().Cast< Void >();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,exit,(void))

Void Lib_obj::forceClose( ){
{
		HX_STACK_FRAME("openfl._legacy.Lib","forceClose",0xe34c675a,"openfl._legacy.Lib.forceClose","openfl/_legacy/Lib.hx",470,0x739f021f)
		HX_STACK_LINE(472)
		Dynamic terminate = ::openfl::_legacy::Lib_obj::load(HX_CSTRING("lime-legacy"),HX_CSTRING("lime_legacy_terminate"),(int)0);		HX_STACK_VAR(terminate,"terminate");
		HX_STACK_LINE(473)
		terminate();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,forceClose,(void))

int Lib_obj::getTimer( ){
	HX_STACK_FRAME("openfl._legacy.Lib","getTimer",0xe6f8c79c,"openfl._legacy.Lib.getTimer","openfl/_legacy/Lib.hx",478,0x739f021f)
	HX_STACK_LINE(482)
	Float _g = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(482)
	Float _g1 = (_g * 1000.0);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(482)
	return ::Std_obj::_int(_g1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,getTimer,return )

Void Lib_obj::getURL( ::openfl::_legacy::net::URLRequest url,::String target){
{
		HX_STACK_FRAME("openfl._legacy.Lib","getURL",0x45bda386,"openfl._legacy.Lib.getURL","openfl/_legacy/Lib.hx",489,0x739f021f)
		HX_STACK_ARG(url,"url")
		HX_STACK_ARG(target,"target")
		HX_STACK_LINE(489)
		::openfl::_legacy::Lib_obj::lime_get_url(url->url);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lib_obj,getURL,(void))

Void Lib_obj::pause( ){
{
		HX_STACK_FRAME("openfl._legacy.Lib","pause",0x7a575c89,"openfl._legacy.Lib.pause","openfl/_legacy/Lib.hx",496,0x739f021f)
		HX_STACK_LINE(496)
		::openfl::_legacy::Lib_obj::lime_pause_animation();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,pause,(void))

Void Lib_obj::postUICallback( Dynamic inCallback){
{
		HX_STACK_FRAME("openfl._legacy.Lib","postUICallback",0xf68580a6,"openfl._legacy.Lib.postUICallback","openfl/_legacy/Lib.hx",506,0x739f021f)
		HX_STACK_ARG(inCallback,"inCallback")
		HX_STACK_LINE(506)
		inCallback().Cast< Void >();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,postUICallback,(void))

Void Lib_obj::resume( ){
{
		HX_STACK_FRAME("openfl._legacy.Lib","resume",0xab19c4ba,"openfl._legacy.Lib.resume","openfl/_legacy/Lib.hx",514,0x739f021f)
		HX_STACK_LINE(514)
		::openfl::_legacy::Lib_obj::lime_resume_animation();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,resume,(void))

Void Lib_obj::setIcon( ::String path){
{
		HX_STACK_FRAME("openfl._legacy.Lib","setIcon",0xab51788e,"openfl._legacy.Lib.setIcon","openfl/_legacy/Lib.hx",519,0x739f021f)
		HX_STACK_ARG(path,"path")
		HX_STACK_LINE(521)
		Dynamic set_icon = ::openfl::_legacy::Lib_obj::load(HX_CSTRING("lime-legacy"),HX_CSTRING("lime_legacy_set_icon"),(int)1);		HX_STACK_VAR(set_icon,"set_icon");
		HX_STACK_LINE(522)
		set_icon(path);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,setIcon,(void))

Void Lib_obj::setPackage( ::String company,::String file,::String packageName,::String version){
{
		HX_STACK_FRAME("openfl._legacy.Lib","setPackage",0x98a4b591,"openfl._legacy.Lib.setPackage","openfl/_legacy/Lib.hx",527,0x739f021f)
		HX_STACK_ARG(company,"company")
		HX_STACK_ARG(file,"file")
		HX_STACK_ARG(packageName,"packageName")
		HX_STACK_ARG(version,"version")
		HX_STACK_LINE(529)
		::openfl::_legacy::Lib_obj::company = company;
		HX_STACK_LINE(530)
		::openfl::_legacy::Lib_obj::file = file;
		HX_STACK_LINE(531)
		::openfl::_legacy::Lib_obj::packageName = packageName;
		HX_STACK_LINE(532)
		::openfl::_legacy::Lib_obj::version = version;
		HX_STACK_LINE(534)
		::openfl::_legacy::Lib_obj::lime_set_package(company,file,packageName,version);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Lib_obj,setPackage,(void))

Void Lib_obj::__setCurrentStage( ::openfl::_legacy::display::Stage stage){
{
		HX_STACK_FRAME("openfl._legacy.Lib","__setCurrentStage",0x3b62697a,"openfl._legacy.Lib.__setCurrentStage","openfl/_legacy/Lib.hx",541,0x739f021f)
		HX_STACK_ARG(stage,"stage")
		HX_STACK_LINE(541)
		::openfl::_legacy::Lib_obj::__stage = stage;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,__setCurrentStage,(void))

Void Lib_obj::trace( Dynamic arg){
{
		HX_STACK_FRAME("openfl._legacy.Lib","trace",0xd31f1418,"openfl._legacy.Lib.trace","openfl/_legacy/Lib.hx",548,0x739f021f)
		HX_STACK_ARG(arg,"arg")
		HX_STACK_LINE(548)
		::haxe::Log_obj::trace(arg,hx::SourceInfo(HX_CSTRING("Lib.hx"),548,HX_CSTRING("openfl._legacy.Lib"),HX_CSTRING("trace")));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,trace,(void))

::openfl::_legacy::display::MovieClip Lib_obj::get_current( ){
	HX_STACK_FRAME("openfl._legacy.Lib","get_current",0xdfa27223,"openfl._legacy.Lib.get_current","openfl/_legacy/Lib.hx",560,0x739f021f)
	HX_STACK_LINE(562)
	if (((::openfl::_legacy::Lib_obj::__current == null()))){
		HX_STACK_LINE(564)
		::openfl::_legacy::display::MovieClip _g = ::openfl::_legacy::display::MovieClip_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(564)
		::openfl::_legacy::Lib_obj::__current = _g;
		HX_STACK_LINE(566)
		if (((::openfl::_legacy::Lib_obj::__stage != null()))){
			HX_STACK_LINE(568)
			::openfl::_legacy::Lib_obj::__stage->addChild(::openfl::_legacy::Lib_obj::__current);
		}
	}
	HX_STACK_LINE(574)
	return ::openfl::_legacy::Lib_obj::__current;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,get_current,return )

::openfl::_legacy::display::Stage Lib_obj::get_stage( ){
	HX_STACK_FRAME("openfl._legacy.Lib","get_stage",0x5f421228,"openfl._legacy.Lib.get_stage","openfl/_legacy/Lib.hx",579,0x739f021f)
	HX_STACK_LINE(581)
	if (((::openfl::_legacy::Lib_obj::__stage == null()))){
		HX_STACK_LINE(583)
		HX_STACK_DO_THROW(HX_CSTRING("Error : stage can't be accessed until init is called"));
	}
	HX_STACK_LINE(587)
	return ::openfl::_legacy::Lib_obj::__stage;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,get_stage,return )

Dynamic Lib_obj::lime_set_package;

Dynamic Lib_obj::lime_get_frame_stage;

Dynamic Lib_obj::lime_get_url;

Dynamic Lib_obj::lime_pause_animation;

Dynamic Lib_obj::lime_resume_animation;


Lib_obj::Lib_obj()
{
}

Dynamic Lib_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"as") ) { return as_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { return file; }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"exit") ) { return exit_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"VSYNC") ) { return VSYNC; }
		if (HX_FIELD_EQ(inName,"HW_AA") ) { return HW_AA; }
		if (HX_FIELD_EQ(inName,"stage") ) { return inCallProp ? get_stage() : stage; }
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		if (HX_FIELD_EQ(inName,"trace") ) { return trace_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"attach") ) { return attach_dyn(); }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"getURL") ) { return getURL_dyn(); }
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"company") ) { return company; }
		if (HX_FIELD_EQ(inName,"current") ) { return inCallProp ? get_current() : current; }
		if (HX_FIELD_EQ(inName,"version") ) { return version; }
		if (HX_FIELD_EQ(inName,"__stage") ) { return __stage; }
		if (HX_FIELD_EQ(inName,"rethrow") ) { return rethrow_dyn(); }
		if (HX_FIELD_EQ(inName,"sysName") ) { return sysName_dyn(); }
		if (HX_FIELD_EQ(inName,"tryLoad") ) { return tryLoad_dyn(); }
		if (HX_FIELD_EQ(inName,"setIcon") ) { return setIcon_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"HARDWARE") ) { return HARDWARE; }
		if (HX_FIELD_EQ(inName,"__isInit") ) { return __isInit; }
		if (HX_FIELD_EQ(inName,"getTimer") ) { return getTimer_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"RESIZABLE") ) { return RESIZABLE; }
		if (HX_FIELD_EQ(inName,"initWidth") ) { return initWidth; }
		if (HX_FIELD_EQ(inName,"__current") ) { return __current; }
		if (HX_FIELD_EQ(inName,"get_stage") ) { return get_stage_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"FULLSCREEN") ) { return FULLSCREEN; }
		if (HX_FIELD_EQ(inName,"BORDERLESS") ) { return BORDERLESS; }
		if (HX_FIELD_EQ(inName,"initHeight") ) { return initHeight; }
		if (HX_FIELD_EQ(inName,"forceClose") ) { return forceClose_dyn(); }
		if (HX_FIELD_EQ(inName,"setPackage") ) { return setPackage_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"HW_AA_HIRES") ) { return HW_AA_HIRES; }
		if (HX_FIELD_EQ(inName,"packageName") ) { return packageName; }
		if (HX_FIELD_EQ(inName,"__mainFrame") ) { return __mainFrame; }
		if (HX_FIELD_EQ(inName,"findHaxeLib") ) { return findHaxeLib_dyn(); }
		if (HX_FIELD_EQ(inName,"loaderTrace") ) { return loaderTrace_dyn(); }
		if (HX_FIELD_EQ(inName,"get_current") ) { return get_current_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER") ) { return DEPTH_BUFFER; }
		if (HX_FIELD_EQ(inName,"lime_get_url") ) { return lime_get_url; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ALLOW_SHADERS") ) { return ALLOW_SHADERS; }
		if (HX_FIELD_EQ(inName,"__moduleNames") ) { return __moduleNames; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER") ) { return STENCIL_BUFFER; }
		if (HX_FIELD_EQ(inName,"silentRecreate") ) { return silentRecreate; }
		if (HX_FIELD_EQ(inName,"__sentWarnings") ) { return __sentWarnings; }
		if (HX_FIELD_EQ(inName,"notImplemented") ) { return notImplemented_dyn(); }
		if (HX_FIELD_EQ(inName,"postUICallback") ) { return postUICallback_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"REQUIRE_SHADERS") ) { return REQUIRE_SHADERS; }
		if (HX_FIELD_EQ(inName,"__loadedNekoAPI") ) { return __loadedNekoAPI; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lime_set_package") ) { return lime_set_package; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__setCurrentStage") ) { return __setCurrentStage_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createManagedStage") ) { return createManagedStage_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_get_frame_stage") ) { return lime_get_frame_stage; }
		if (HX_FIELD_EQ(inName,"lime_pause_animation") ) { return lime_pause_animation; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_resume_animation") ) { return lime_resume_animation; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__uncaughtExceptionHandler") ) { return __uncaughtExceptionHandler; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"setUncaughtExceptionHandler") ) { return setUncaughtExceptionHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Lib_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { file=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"VSYNC") ) { VSYNC=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"HW_AA") ) { HW_AA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stage") ) { stage=inValue.Cast< ::openfl::_legacy::display::Stage >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"company") ) { company=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast< ::openfl::_legacy::display::MovieClip >(); return inValue; }
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__stage") ) { __stage=inValue.Cast< ::openfl::_legacy::display::Stage >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"HARDWARE") ) { HARDWARE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__isInit") ) { __isInit=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"RESIZABLE") ) { RESIZABLE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"initWidth") ) { initWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__current") ) { __current=inValue.Cast< ::openfl::_legacy::display::MovieClip >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"FULLSCREEN") ) { FULLSCREEN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BORDERLESS") ) { BORDERLESS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"initHeight") ) { initHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"HW_AA_HIRES") ) { HW_AA_HIRES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"packageName") ) { packageName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__mainFrame") ) { __mainFrame=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER") ) { DEPTH_BUFFER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_get_url") ) { lime_get_url=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ALLOW_SHADERS") ) { ALLOW_SHADERS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__moduleNames") ) { __moduleNames=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER") ) { STENCIL_BUFFER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"silentRecreate") ) { silentRecreate=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__sentWarnings") ) { __sentWarnings=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"REQUIRE_SHADERS") ) { REQUIRE_SHADERS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__loadedNekoAPI") ) { __loadedNekoAPI=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lime_set_package") ) { lime_set_package=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_get_frame_stage") ) { lime_get_frame_stage=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_pause_animation") ) { lime_pause_animation=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_resume_animation") ) { lime_resume_animation=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__uncaughtExceptionHandler") ) { __uncaughtExceptionHandler=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Lib_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("FULLSCREEN"),
	HX_CSTRING("BORDERLESS"),
	HX_CSTRING("RESIZABLE"),
	HX_CSTRING("HARDWARE"),
	HX_CSTRING("VSYNC"),
	HX_CSTRING("HW_AA"),
	HX_CSTRING("HW_AA_HIRES"),
	HX_CSTRING("ALLOW_SHADERS"),
	HX_CSTRING("REQUIRE_SHADERS"),
	HX_CSTRING("DEPTH_BUFFER"),
	HX_CSTRING("STENCIL_BUFFER"),
	HX_CSTRING("company"),
	HX_CSTRING("current"),
	HX_CSTRING("file"),
	HX_CSTRING("initHeight"),
	HX_CSTRING("initWidth"),
	HX_CSTRING("packageName"),
	HX_CSTRING("silentRecreate"),
	HX_CSTRING("stage"),
	HX_CSTRING("version"),
	HX_CSTRING("__current"),
	HX_CSTRING("__isInit"),
	HX_CSTRING("__loadedNekoAPI"),
	HX_CSTRING("__mainFrame"),
	HX_CSTRING("__moduleNames"),
	HX_CSTRING("__sentWarnings"),
	HX_CSTRING("__stage"),
	HX_CSTRING("__uncaughtExceptionHandler"),
	HX_CSTRING("as"),
	HX_CSTRING("attach"),
	HX_CSTRING("close"),
	HX_CSTRING("create"),
	HX_CSTRING("createManagedStage"),
	HX_CSTRING("findHaxeLib"),
	HX_CSTRING("load"),
	HX_CSTRING("loaderTrace"),
	HX_CSTRING("notImplemented"),
	HX_CSTRING("rethrow"),
	HX_CSTRING("setUncaughtExceptionHandler"),
	HX_CSTRING("sysName"),
	HX_CSTRING("tryLoad"),
	HX_CSTRING("exit"),
	HX_CSTRING("forceClose"),
	HX_CSTRING("getTimer"),
	HX_CSTRING("getURL"),
	HX_CSTRING("pause"),
	HX_CSTRING("postUICallback"),
	HX_CSTRING("resume"),
	HX_CSTRING("setIcon"),
	HX_CSTRING("setPackage"),
	HX_CSTRING("__setCurrentStage"),
	HX_CSTRING("trace"),
	HX_CSTRING("get_current"),
	HX_CSTRING("get_stage"),
	HX_CSTRING("lime_set_package"),
	HX_CSTRING("lime_get_frame_stage"),
	HX_CSTRING("lime_get_url"),
	HX_CSTRING("lime_pause_animation"),
	HX_CSTRING("lime_resume_animation"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Lib_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Lib_obj::FULLSCREEN,"FULLSCREEN");
	HX_MARK_MEMBER_NAME(Lib_obj::BORDERLESS,"BORDERLESS");
	HX_MARK_MEMBER_NAME(Lib_obj::RESIZABLE,"RESIZABLE");
	HX_MARK_MEMBER_NAME(Lib_obj::HARDWARE,"HARDWARE");
	HX_MARK_MEMBER_NAME(Lib_obj::VSYNC,"VSYNC");
	HX_MARK_MEMBER_NAME(Lib_obj::HW_AA,"HW_AA");
	HX_MARK_MEMBER_NAME(Lib_obj::HW_AA_HIRES,"HW_AA_HIRES");
	HX_MARK_MEMBER_NAME(Lib_obj::ALLOW_SHADERS,"ALLOW_SHADERS");
	HX_MARK_MEMBER_NAME(Lib_obj::REQUIRE_SHADERS,"REQUIRE_SHADERS");
	HX_MARK_MEMBER_NAME(Lib_obj::DEPTH_BUFFER,"DEPTH_BUFFER");
	HX_MARK_MEMBER_NAME(Lib_obj::STENCIL_BUFFER,"STENCIL_BUFFER");
	HX_MARK_MEMBER_NAME(Lib_obj::company,"company");
	HX_MARK_MEMBER_NAME(Lib_obj::current,"current");
	HX_MARK_MEMBER_NAME(Lib_obj::file,"file");
	HX_MARK_MEMBER_NAME(Lib_obj::initHeight,"initHeight");
	HX_MARK_MEMBER_NAME(Lib_obj::initWidth,"initWidth");
	HX_MARK_MEMBER_NAME(Lib_obj::packageName,"packageName");
	HX_MARK_MEMBER_NAME(Lib_obj::silentRecreate,"silentRecreate");
	HX_MARK_MEMBER_NAME(Lib_obj::stage,"stage");
	HX_MARK_MEMBER_NAME(Lib_obj::version,"version");
	HX_MARK_MEMBER_NAME(Lib_obj::__current,"__current");
	HX_MARK_MEMBER_NAME(Lib_obj::__isInit,"__isInit");
	HX_MARK_MEMBER_NAME(Lib_obj::__loadedNekoAPI,"__loadedNekoAPI");
	HX_MARK_MEMBER_NAME(Lib_obj::__mainFrame,"__mainFrame");
	HX_MARK_MEMBER_NAME(Lib_obj::__moduleNames,"__moduleNames");
	HX_MARK_MEMBER_NAME(Lib_obj::__sentWarnings,"__sentWarnings");
	HX_MARK_MEMBER_NAME(Lib_obj::__stage,"__stage");
	HX_MARK_MEMBER_NAME(Lib_obj::__uncaughtExceptionHandler,"__uncaughtExceptionHandler");
	HX_MARK_MEMBER_NAME(Lib_obj::lime_set_package,"lime_set_package");
	HX_MARK_MEMBER_NAME(Lib_obj::lime_get_frame_stage,"lime_get_frame_stage");
	HX_MARK_MEMBER_NAME(Lib_obj::lime_get_url,"lime_get_url");
	HX_MARK_MEMBER_NAME(Lib_obj::lime_pause_animation,"lime_pause_animation");
	HX_MARK_MEMBER_NAME(Lib_obj::lime_resume_animation,"lime_resume_animation");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Lib_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Lib_obj::FULLSCREEN,"FULLSCREEN");
	HX_VISIT_MEMBER_NAME(Lib_obj::BORDERLESS,"BORDERLESS");
	HX_VISIT_MEMBER_NAME(Lib_obj::RESIZABLE,"RESIZABLE");
	HX_VISIT_MEMBER_NAME(Lib_obj::HARDWARE,"HARDWARE");
	HX_VISIT_MEMBER_NAME(Lib_obj::VSYNC,"VSYNC");
	HX_VISIT_MEMBER_NAME(Lib_obj::HW_AA,"HW_AA");
	HX_VISIT_MEMBER_NAME(Lib_obj::HW_AA_HIRES,"HW_AA_HIRES");
	HX_VISIT_MEMBER_NAME(Lib_obj::ALLOW_SHADERS,"ALLOW_SHADERS");
	HX_VISIT_MEMBER_NAME(Lib_obj::REQUIRE_SHADERS,"REQUIRE_SHADERS");
	HX_VISIT_MEMBER_NAME(Lib_obj::DEPTH_BUFFER,"DEPTH_BUFFER");
	HX_VISIT_MEMBER_NAME(Lib_obj::STENCIL_BUFFER,"STENCIL_BUFFER");
	HX_VISIT_MEMBER_NAME(Lib_obj::company,"company");
	HX_VISIT_MEMBER_NAME(Lib_obj::current,"current");
	HX_VISIT_MEMBER_NAME(Lib_obj::file,"file");
	HX_VISIT_MEMBER_NAME(Lib_obj::initHeight,"initHeight");
	HX_VISIT_MEMBER_NAME(Lib_obj::initWidth,"initWidth");
	HX_VISIT_MEMBER_NAME(Lib_obj::packageName,"packageName");
	HX_VISIT_MEMBER_NAME(Lib_obj::silentRecreate,"silentRecreate");
	HX_VISIT_MEMBER_NAME(Lib_obj::stage,"stage");
	HX_VISIT_MEMBER_NAME(Lib_obj::version,"version");
	HX_VISIT_MEMBER_NAME(Lib_obj::__current,"__current");
	HX_VISIT_MEMBER_NAME(Lib_obj::__isInit,"__isInit");
	HX_VISIT_MEMBER_NAME(Lib_obj::__loadedNekoAPI,"__loadedNekoAPI");
	HX_VISIT_MEMBER_NAME(Lib_obj::__mainFrame,"__mainFrame");
	HX_VISIT_MEMBER_NAME(Lib_obj::__moduleNames,"__moduleNames");
	HX_VISIT_MEMBER_NAME(Lib_obj::__sentWarnings,"__sentWarnings");
	HX_VISIT_MEMBER_NAME(Lib_obj::__stage,"__stage");
	HX_VISIT_MEMBER_NAME(Lib_obj::__uncaughtExceptionHandler,"__uncaughtExceptionHandler");
	HX_VISIT_MEMBER_NAME(Lib_obj::lime_set_package,"lime_set_package");
	HX_VISIT_MEMBER_NAME(Lib_obj::lime_get_frame_stage,"lime_get_frame_stage");
	HX_VISIT_MEMBER_NAME(Lib_obj::lime_get_url,"lime_get_url");
	HX_VISIT_MEMBER_NAME(Lib_obj::lime_pause_animation,"lime_pause_animation");
	HX_VISIT_MEMBER_NAME(Lib_obj::lime_resume_animation,"lime_resume_animation");
};

#endif

Class Lib_obj::__mClass;

void Lib_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._legacy.Lib"), hx::TCanCast< Lib_obj> ,sStaticFields,sMemberFields,
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

void Lib_obj::__boot()
{
	FULLSCREEN= (int)1;
	BORDERLESS= (int)2;
	RESIZABLE= (int)4;
	HARDWARE= (int)8;
	VSYNC= (int)16;
	HW_AA= (int)32;
	HW_AA_HIRES= (int)96;
	ALLOW_SHADERS= (int)128;
	REQUIRE_SHADERS= (int)256;
	DEPTH_BUFFER= (int)512;
	STENCIL_BUFFER= (int)1024;
	silentRecreate= false;
	__current= null();
	__isInit= false;
	__mainFrame= null();
	__moduleNames= null();
	__sentWarnings= ::haxe::ds::StringMap_obj::__new();
	__stage= null();
	__uncaughtExceptionHandler= null();
	lime_set_package= ::openfl::_legacy::Lib_obj::load(HX_CSTRING("lime-legacy"),HX_CSTRING("lime_legacy_set_package"),(int)4);
	lime_get_frame_stage= ::openfl::_legacy::Lib_obj::load(HX_CSTRING("lime-legacy"),HX_CSTRING("lime_legacy_get_frame_stage"),(int)1);
	lime_get_url= ::openfl::_legacy::Lib_obj::load(HX_CSTRING("lime-legacy"),HX_CSTRING("lime_legacy_get_url"),(int)1);
	lime_pause_animation= ::openfl::_legacy::Lib_obj::load(HX_CSTRING("lime-legacy"),HX_CSTRING("lime_legacy_pause_animation"),(int)0);
	lime_resume_animation= ::openfl::_legacy::Lib_obj::load(HX_CSTRING("lime-legacy"),HX_CSTRING("lime_legacy_resume_animation"),(int)0);
}

} // end namespace openfl
} // end namespace _legacy
