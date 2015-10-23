#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_HTTPStatusEvent
#include <openfl/_legacy/events/HTTPStatusEvent.h>
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
#ifndef INCLUDED_openfl__legacy_net__URLLoader_URLLoadersManager
#include <openfl/_legacy/net/_URLLoader/URLLoadersManager.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IOErrorEvent
#include <openfl/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_ProgressEvent
#include <openfl/events/ProgressEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_net_URLLoaderDataFormat
#include <openfl/net/URLLoaderDataFormat.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequestHeader
#include <openfl/net/URLRequestHeader.h>
#endif
#ifndef INCLUDED_openfl_net_URLVariables
#include <openfl/net/URLVariables.h>
#endif
namespace openfl{
namespace _legacy{
namespace net{

Void URLLoader_obj::__construct(::openfl::_legacy::net::URLRequest request)
{
HX_STACK_FRAME("openfl._legacy.net.URLLoader","new",0xb77dde7f,"openfl._legacy.net.URLLoader.new","openfl/_legacy/net/URLLoader.hx",192,0xef414054)
HX_STACK_THIS(this)
HX_STACK_ARG(request,"request")
{
	HX_STACK_LINE(194)
	super::__construct(null());
	HX_STACK_LINE(196)
	this->__handle = (int)0;
	HX_STACK_LINE(197)
	this->bytesLoaded = (int)0;
	HX_STACK_LINE(198)
	this->bytesTotal = (int)-1;
	HX_STACK_LINE(199)
	this->state = (int)0;
	HX_STACK_LINE(200)
	this->dataFormat = ::openfl::net::URLLoaderDataFormat_obj::TEXT;
	HX_STACK_LINE(202)
	if (((request != null()))){
		HX_STACK_LINE(204)
		this->load(request);
	}
}
;
	return null();
}

//URLLoader_obj::~URLLoader_obj() { }

Dynamic URLLoader_obj::__CreateEmpty() { return  new URLLoader_obj; }
hx::ObjectPtr< URLLoader_obj > URLLoader_obj::__new(::openfl::_legacy::net::URLRequest request)
{  hx::ObjectPtr< URLLoader_obj > result = new URLLoader_obj();
	result->__construct(request);
	return result;}

Dynamic URLLoader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< URLLoader_obj > result = new URLLoader_obj();
	result->__construct(inArgs[0]);
	return result;}

Void URLLoader_obj::close( ){
{
		HX_STACK_FRAME("openfl._legacy.net.URLLoader","close",0xa8c42b97,"openfl._legacy.net.URLLoader.close","openfl/_legacy/net/URLLoader.hx",211,0xef414054)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,close,(void))

Void URLLoader_obj::dispatchHTTPStatus( int code){
{
		HX_STACK_FRAME("openfl._legacy.net.URLLoader","dispatchHTTPStatus",0xa730fcd5,"openfl._legacy.net.URLLoader.dispatchHTTPStatus","openfl/_legacy/net/URLLoader.hx",218,0xef414054)
		HX_STACK_THIS(this)
		HX_STACK_ARG(code,"code")
		HX_STACK_LINE(220)
		::openfl::_legacy::events::HTTPStatusEvent event = ::openfl::_legacy::events::HTTPStatusEvent_obj::__new(::openfl::_legacy::events::HTTPStatusEvent_obj::HTTP_STATUS,false,false,code);		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(221)
		Array< ::String > headers = ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::getInstance()->getHeaders(this->__handle);		HX_STACK_VAR(headers,"headers");
		HX_STACK_LINE(223)
		{
			HX_STACK_LINE(223)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(223)
			while((true)){
				HX_STACK_LINE(223)
				if ((!(((_g < headers->length))))){
					HX_STACK_LINE(223)
					break;
				}
				HX_STACK_LINE(223)
				::String header = headers->__get(_g);		HX_STACK_VAR(header,"header");
				HX_STACK_LINE(223)
				++(_g);
				HX_STACK_LINE(225)
				int index = header.indexOf(HX_CSTRING(": "),null());		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(226)
				if (((index > (int)0))){
					HX_STACK_LINE(228)
					::String _g1 = header.substr((int)0,index);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(228)
					::String _g11 = header.substr((index + (int)2),((header.length - index) - (int)4));		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(228)
					::openfl::net::URLRequestHeader _g2 = ::openfl::net::URLRequestHeader_obj::__new(_g1,_g11);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(228)
					event->responseHeaders->push(_g2);
				}
			}
		}
		HX_STACK_LINE(234)
		::openfl::_legacy::net::URLLoader_obj::enqueueEvent(hx::ObjectPtr<OBJ_>(this),event);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,dispatchHTTPStatus,(void))

Array< ::String > URLLoader_obj::getCookies( ){
	HX_STACK_FRAME("openfl._legacy.net.URLLoader","getCookies",0x87bf411a,"openfl._legacy.net.URLLoader.getCookies","openfl/_legacy/net/URLLoader.hx",240,0xef414054)
	HX_STACK_THIS(this)
	HX_STACK_LINE(240)
	return ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::getInstance()->getCookies(this->__handle);
}


HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,getCookies,return )

Void URLLoader_obj::load( ::openfl::_legacy::net::URLRequest request){
{
		HX_STACK_FRAME("openfl._legacy.net.URLLoader","load",0xd559e727,"openfl._legacy.net.URLLoader.load","openfl/_legacy/net/URLLoader.hx",260,0xef414054)
		HX_STACK_THIS(this)
		HX_STACK_ARG(request,"request")
		HX_STACK_LINE(260)
		::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::getInstance()->enqueueLoad(hx::ObjectPtr<OBJ_>(this),request);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,load,(void))

Void URLLoader_obj::loadInCURLThread( ::openfl::_legacy::net::URLRequest request){
{
		HX_STACK_FRAME("openfl._legacy.net.URLLoader","loadInCURLThread",0x330ed8c2,"openfl._legacy.net.URLLoader.loadInCURLThread","openfl/_legacy/net/URLLoader.hx",265,0xef414054)
		HX_STACK_THIS(this)
		HX_STACK_ARG(request,"request")
		HX_STACK_LINE(267)
		this->state = (int)1;
		HX_STACK_LINE(269)
		::String pref = request->url.substr((int)0,(int)7);		HX_STACK_VAR(pref,"pref");
		HX_STACK_LINE(270)
		if (((bool((pref != HX_CSTRING("http://"))) && bool((pref != HX_CSTRING("https:/")))))){
			HX_STACK_LINE(272)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(274)
				::openfl::_legacy::utils::ByteArray bytes = ::openfl::_legacy::utils::ByteArray_obj::readFile(request->url);		HX_STACK_VAR(bytes,"bytes");
				HX_STACK_LINE(276)
				if (((bytes == null()))){
					HX_STACK_LINE(278)
					HX_STACK_DO_THROW(((HX_CSTRING("Could not open file \"") + request->url) + HX_CSTRING("\"")));
				}
				HX_STACK_LINE(282)
				{
					HX_STACK_LINE(282)
					::openfl::net::URLLoaderDataFormat _g = this->dataFormat;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(282)
					switch( (int)(_g->__Index())){
						case (int)1: {
							HX_STACK_LINE(284)
							::String _g1 = bytes->asString();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(284)
							this->data = _g1;
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(285)
							::String _g1 = bytes->asString();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(285)
							::openfl::net::URLVariables _g2 = ::openfl::net::URLVariables_obj::__new(_g1);		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(285)
							this->data = _g2;
						}
						;break;
						default: {
							HX_STACK_LINE(286)
							this->data = bytes;
						}
					}
				}
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
						HX_STACK_LINE(292)
						this->onError(e);
						HX_STACK_LINE(293)
						return null();
					}
				}
			}
			HX_STACK_LINE(297)
			this->__dataComplete();
		}
		else{
			HX_STACK_LINE(301)
			request->__prepare();
			HX_STACK_LINE(303)
			Dynamic _g3 = ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::getInstance()->create(request);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(303)
			this->__handle = _g3;
			HX_STACK_LINE(305)
			if (((this->__handle == null()))){
				HX_STACK_LINE(307)
				this->onError(HX_CSTRING("Could not open URL"));
			}
			else{
				HX_STACK_LINE(311)
				::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::getInstance()->getActiveLoaders()->push(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,loadInCURLThread,(void))

Void URLLoader_obj::onError( ::String msg){
{
		HX_STACK_FRAME("openfl._legacy.net.URLLoader","onError",0x131c73c8,"openfl._legacy.net.URLLoader.onError","openfl/_legacy/net/URLLoader.hx",320,0xef414054)
		HX_STACK_THIS(this)
		HX_STACK_ARG(msg,"msg")
		HX_STACK_LINE(322)
		::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::getInstance()->getActiveLoaders()->remove(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(323)
		::openfl::events::IOErrorEvent _g = ::openfl::events::IOErrorEvent_obj::__new(::openfl::events::IOErrorEvent_obj::IO_ERROR,true,false,msg,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(323)
		::openfl::_legacy::net::URLLoader_obj::enqueueEvent(hx::ObjectPtr<OBJ_>(this),_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,onError,(void))

Void URLLoader_obj::update( ){
{
		HX_STACK_FRAME("openfl._legacy.net.URLLoader","update",0x7b95d54a,"openfl._legacy.net.URLLoader.update","openfl/_legacy/net/URLLoader.hx",330,0xef414054)
		HX_STACK_THIS(this)
		HX_STACK_LINE(330)
		if (((this->__handle != null()))){
			HX_STACK_LINE(332)
			int old_loaded = this->bytesLoaded;		HX_STACK_VAR(old_loaded,"old_loaded");
			HX_STACK_LINE(333)
			int old_total = this->bytesTotal;		HX_STACK_VAR(old_total,"old_total");
			HX_STACK_LINE(334)
			::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::getInstance()->updateLoader(this->__handle,hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(336)
			if (((bool((old_total < (int)0)) && bool((this->bytesTotal > (int)0))))){
				HX_STACK_LINE(337)
				::openfl::_legacy::events::Event _g = ::openfl::_legacy::events::Event_obj::__new(::openfl::_legacy::events::Event_obj::OPEN,null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(337)
				::openfl::_legacy::net::URLLoader_obj::enqueueEvent(hx::ObjectPtr<OBJ_>(this),_g);
			}
			HX_STACK_LINE(340)
			if (((bool((this->bytesTotal > (int)0)) && bool((this->bytesLoaded != old_loaded))))){
				HX_STACK_LINE(341)
				::openfl::events::ProgressEvent evt = ::openfl::events::ProgressEvent_obj::__new(::openfl::events::ProgressEvent_obj::PROGRESS,false,false,this->bytesLoaded,this->bytesTotal);		HX_STACK_VAR(evt,"evt");
				HX_STACK_LINE(342)
				::openfl::_legacy::net::URLLoader_obj::enqueueEvent(hx::ObjectPtr<OBJ_>(this),evt);
			}
			HX_STACK_LINE(345)
			int code = ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::getInstance()->getCode(this->__handle);		HX_STACK_VAR(code,"code");
			HX_STACK_LINE(347)
			if (((this->state == (int)3))){
				HX_STACK_LINE(349)
				this->dispatchHTTPStatus(code);
				HX_STACK_LINE(350)
				::openfl::_legacy::utils::ByteArray bytes = ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::getInstance()->getData(this->__handle);		HX_STACK_VAR(bytes,"bytes");
				HX_STACK_LINE(351)
				{
					HX_STACK_LINE(351)
					::openfl::net::URLLoaderDataFormat _g = this->dataFormat;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(351)
					switch( (int)(_g->__Index())){
						case (int)1: case (int)2: {
							HX_STACK_LINE(353)
							Dynamic _g1;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(353)
							if (((bytes == null()))){
								HX_STACK_LINE(353)
								_g1 = HX_CSTRING("");
							}
							else{
								HX_STACK_LINE(353)
								_g1 = bytes->asString();
							}
							HX_STACK_LINE(353)
							this->data = _g1;
						}
						;break;
						default: {
							HX_STACK_LINE(355)
							this->data = bytes;
						}
					}
				}
				HX_STACK_LINE(358)
				if (((code < (int)400))){
					HX_STACK_LINE(359)
					this->__dataComplete();
				}
				else{
					HX_STACK_LINE(361)
					::openfl::events::IOErrorEvent event = ::openfl::events::IOErrorEvent_obj::__new(::openfl::events::IOErrorEvent_obj::IO_ERROR,true,false,this->data,code);		HX_STACK_VAR(event,"event");
					HX_STACK_LINE(362)
					this->__handle = null();
					HX_STACK_LINE(363)
					::openfl::_legacy::net::URLLoader_obj::enqueueEvent(hx::ObjectPtr<OBJ_>(this),event);
				}
			}
			else{
				HX_STACK_LINE(366)
				if (((this->state == (int)4))){
					HX_STACK_LINE(367)
					this->dispatchHTTPStatus(code);
					HX_STACK_LINE(368)
					::String errorMessage = ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::getInstance()->getErrorMessage(this->__handle);		HX_STACK_VAR(errorMessage,"errorMessage");
					HX_STACK_LINE(369)
					::openfl::events::IOErrorEvent event = ::openfl::events::IOErrorEvent_obj::__new(::openfl::events::IOErrorEvent_obj::IO_ERROR,true,false,errorMessage,code);		HX_STACK_VAR(event,"event");
					HX_STACK_LINE(370)
					this->__handle = null();
					HX_STACK_LINE(371)
					::openfl::_legacy::net::URLLoader_obj::enqueueEvent(hx::ObjectPtr<OBJ_>(this),event);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,update,(void))

Void URLLoader_obj::__dataComplete( ){
{
		HX_STACK_FRAME("openfl._legacy.net.URLLoader","__dataComplete",0x1fc1c864,"openfl._legacy.net.URLLoader.__dataComplete","openfl/_legacy/net/URLLoader.hx",379,0xef414054)
		HX_STACK_THIS(this)
		HX_STACK_LINE(381)
		::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::getInstance()->getActiveLoaders()->remove(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(383)
		if (((this->__onComplete_dyn() != null()))){
			HX_STACK_LINE(385)
			if ((this->__onComplete(this->data))){
				HX_STACK_LINE(387)
				::openfl::_legacy::events::Event _g = ::openfl::_legacy::events::Event_obj::__new(::openfl::_legacy::events::Event_obj::COMPLETE,null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(387)
				::openfl::_legacy::net::URLLoader_obj::enqueueEvent(hx::ObjectPtr<OBJ_>(this),_g);
			}
			else{
				HX_STACK_LINE(391)
				this->__dispatchIOErrorEvent();
			}
		}
		else{
			HX_STACK_LINE(397)
			::openfl::_legacy::events::Event _g1 = ::openfl::_legacy::events::Event_obj::__new(::openfl::_legacy::events::Event_obj::COMPLETE,null(),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(397)
			::openfl::_legacy::net::URLLoader_obj::enqueueEvent(hx::ObjectPtr<OBJ_>(this),_g1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,__dataComplete,(void))

int URLLoader_obj::urlInvalid;

int URLLoader_obj::urlInit;

int URLLoader_obj::urlLoading;

int URLLoader_obj::urlComplete;

int URLLoader_obj::urlError;

Dynamic URLLoader_obj::eventsQueue;

bool URLLoader_obj::hasActive( ){
	HX_STACK_FRAME("openfl._legacy.net.URLLoader","hasActive",0xff70e41f,"openfl._legacy.net.URLLoader.hasActive","openfl/_legacy/net/URLLoader.hx",246,0xef414054)
	HX_STACK_LINE(246)
	return !(::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::getInstance()->activeLoadersIsEmpty());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,hasActive,return )

Void URLLoader_obj::initialize( ::String caCertFilePath){
{
		HX_STACK_FRAME("openfl._legacy.net.URLLoader","initialize",0x7e2ab511,"openfl._legacy.net.URLLoader.initialize","openfl/_legacy/net/URLLoader.hx",253,0xef414054)
		HX_STACK_ARG(caCertFilePath,"caCertFilePath")
		HX_STACK_LINE(253)
		::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::getInstance()->initialize(caCertFilePath);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,initialize,(void))

bool URLLoader_obj::__loadPending( ){
	HX_STACK_FRAME("openfl._legacy.net.URLLoader","__loadPending",0x19792290,"openfl._legacy.net.URLLoader.__loadPending","openfl/_legacy/net/URLLoader.hx",406,0xef414054)
	HX_STACK_LINE(406)
	return !(::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::getInstance()->activeLoadersIsEmpty());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,__loadPending,return )

Void URLLoader_obj::enqueueEvent( ::openfl::_legacy::net::URLLoader loader,::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("openfl._legacy.net.URLLoader","enqueueEvent",0x05a8e873,"openfl._legacy.net.URLLoader.enqueueEvent","openfl/_legacy/net/URLLoader.hx",411,0xef414054)
		HX_STACK_ARG(loader,"loader")
		HX_STACK_ARG(event,"event")
		struct _Function_1_1{
			inline static Dynamic Block( ::openfl::_legacy::events::Event &event,::openfl::_legacy::net::URLLoader &loader){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_legacy/net/URLLoader.hx",411,0xef414054)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("loader") , loader,false);
					__result->Add(HX_CSTRING("event") , event,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(411)
		::openfl::_legacy::net::URLLoader_obj::eventsQueue->__Field(HX_CSTRING("push"),true)(_Function_1_1::Block(event,loader));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(URLLoader_obj,enqueueEvent,(void))

Void URLLoader_obj::__pollData( ){
{
		HX_STACK_FRAME("openfl._legacy.net.URLLoader","__pollData",0xcd9682ea,"openfl._legacy.net.URLLoader.__pollData","openfl/_legacy/net/URLLoader.hx",414,0xef414054)
		HX_STACK_LINE(415)
		if (((::openfl::_legacy::net::URLLoader_obj::eventsQueue->__Field(HX_CSTRING("length"),true) == (int)0))){
			HX_STACK_LINE(415)
			return null();
		}
		HX_STACK_LINE(416)
		Dynamic evt = ::openfl::_legacy::net::URLLoader_obj::eventsQueue->__Field(HX_CSTRING("shift"),true)();		HX_STACK_VAR(evt,"evt");
		HX_STACK_LINE(417)
		if (((evt != null()))){
			HX_STACK_LINE(418)
			evt->__Field(HX_CSTRING("loader"),true)->__Field(HX_CSTRING("dispatchEvent"),true)(evt->__Field(HX_CSTRING("event"),true));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,__pollData,(void))


URLLoader_obj::URLLoader_obj()
{
}

void URLLoader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(URLLoader);
	HX_MARK_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_MARK_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(dataFormat,"dataFormat");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(__handle,"__handle");
	HX_MARK_MEMBER_NAME(__onComplete,"__onComplete");
	::openfl::_legacy::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void URLLoader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_VISIT_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(dataFormat,"dataFormat");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(__handle,"__handle");
	HX_VISIT_MEMBER_NAME(__onComplete,"__onComplete");
	::openfl::_legacy::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic URLLoader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onError") ) { return onError_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { return __handle; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasActive") ) { return hasActive_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"__pollData") ) { return __pollData_dyn(); }
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { return bytesTotal; }
		if (HX_FIELD_EQ(inName,"dataFormat") ) { return dataFormat; }
		if (HX_FIELD_EQ(inName,"getCookies") ) { return getCookies_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"eventsQueue") ) { return eventsQueue; }
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { return bytesLoaded; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"enqueueEvent") ) { return enqueueEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"__onComplete") ) { return __onComplete; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__loadPending") ) { return __loadPending_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__dataComplete") ) { return __dataComplete_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"loadInCURLThread") ) { return loadInCURLThread_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"dispatchHTTPStatus") ) { return dispatchHTTPStatus_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic URLLoader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { __handle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { bytesTotal=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dataFormat") ) { dataFormat=inValue.Cast< ::openfl::net::URLLoaderDataFormat >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"eventsQueue") ) { eventsQueue=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { bytesLoaded=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__onComplete") ) { __onComplete=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void URLLoader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bytesLoaded"));
	outFields->push(HX_CSTRING("bytesTotal"));
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("dataFormat"));
	outFields->push(HX_CSTRING("state"));
	outFields->push(HX_CSTRING("__handle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("urlInvalid"),
	HX_CSTRING("urlInit"),
	HX_CSTRING("urlLoading"),
	HX_CSTRING("urlComplete"),
	HX_CSTRING("urlError"),
	HX_CSTRING("eventsQueue"),
	HX_CSTRING("hasActive"),
	HX_CSTRING("initialize"),
	HX_CSTRING("__loadPending"),
	HX_CSTRING("enqueueEvent"),
	HX_CSTRING("__pollData"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(URLLoader_obj,bytesLoaded),HX_CSTRING("bytesLoaded")},
	{hx::fsInt,(int)offsetof(URLLoader_obj,bytesTotal),HX_CSTRING("bytesTotal")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(URLLoader_obj,data),HX_CSTRING("data")},
	{hx::fsObject /*::openfl::net::URLLoaderDataFormat*/ ,(int)offsetof(URLLoader_obj,dataFormat),HX_CSTRING("dataFormat")},
	{hx::fsInt,(int)offsetof(URLLoader_obj,state),HX_CSTRING("state")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(URLLoader_obj,__handle),HX_CSTRING("__handle")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(URLLoader_obj,__onComplete),HX_CSTRING("__onComplete")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bytesLoaded"),
	HX_CSTRING("bytesTotal"),
	HX_CSTRING("data"),
	HX_CSTRING("dataFormat"),
	HX_CSTRING("state"),
	HX_CSTRING("__handle"),
	HX_CSTRING("__onComplete"),
	HX_CSTRING("close"),
	HX_CSTRING("dispatchHTTPStatus"),
	HX_CSTRING("getCookies"),
	HX_CSTRING("load"),
	HX_CSTRING("loadInCURLThread"),
	HX_CSTRING("onError"),
	HX_CSTRING("update"),
	HX_CSTRING("__dataComplete"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(URLLoader_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(URLLoader_obj::urlInvalid,"urlInvalid");
	HX_MARK_MEMBER_NAME(URLLoader_obj::urlInit,"urlInit");
	HX_MARK_MEMBER_NAME(URLLoader_obj::urlLoading,"urlLoading");
	HX_MARK_MEMBER_NAME(URLLoader_obj::urlComplete,"urlComplete");
	HX_MARK_MEMBER_NAME(URLLoader_obj::urlError,"urlError");
	HX_MARK_MEMBER_NAME(URLLoader_obj::eventsQueue,"eventsQueue");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(URLLoader_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::urlInvalid,"urlInvalid");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::urlInit,"urlInit");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::urlLoading,"urlLoading");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::urlComplete,"urlComplete");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::urlError,"urlError");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::eventsQueue,"eventsQueue");
};

#endif

Class URLLoader_obj::__mClass;

void URLLoader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._legacy.net.URLLoader"), hx::TCanCast< URLLoader_obj> ,sStaticFields,sMemberFields,
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

void URLLoader_obj::__boot()
{
	urlInvalid= (int)0;
	urlInit= (int)1;
	urlLoading= (int)2;
	urlComplete= (int)3;
	urlError= (int)4;
	eventsQueue= Dynamic( Array_obj<Dynamic>::__new());
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace net
