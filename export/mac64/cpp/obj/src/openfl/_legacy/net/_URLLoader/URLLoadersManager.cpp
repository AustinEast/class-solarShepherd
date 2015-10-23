#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_cpp_vm_Mutex
#include <cpp/vm/Mutex.h>
#endif
#ifndef INCLUDED_cpp_vm_Thread
#include <cpp/vm/Thread.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
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
#ifndef INCLUDED_openfl__legacy_net__URLLoader_ManagersThreadMessage
#include <openfl/_legacy/net/_URLLoader/ManagersThreadMessage.h>
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
namespace openfl{
namespace _legacy{
namespace net{
namespace _URLLoader{

Void URLLoadersManager_obj::__construct()
{
HX_STACK_FRAME("openfl._legacy.net._URLLoader.URLLoadersManager","new",0xbbd4e2d8,"openfl._legacy.net._URLLoader.URLLoadersManager.new","openfl/_legacy/net/URLLoader.hx",46,0xef414054)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(47)
	::List _g = ::List_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(47)
	this->activeLoaders = _g;
	HX_STACK_LINE(48)
	this->loadsQueue = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(49)
	::cpp::vm::Mutex _g1 = ::cpp::vm::Mutex_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(49)
	this->loadsQueueMutex = _g1;
	HX_STACK_LINE(50)
	::cpp::vm::Thread _g2 = ::cpp::vm::Thread_obj::create(this->mainLoop_dyn());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(50)
	this->managersThread = _g2;
}
;
	return null();
}

//URLLoadersManager_obj::~URLLoadersManager_obj() { }

Dynamic URLLoadersManager_obj::__CreateEmpty() { return  new URLLoadersManager_obj; }
hx::ObjectPtr< URLLoadersManager_obj > URLLoadersManager_obj::__new()
{  hx::ObjectPtr< URLLoadersManager_obj > result = new URLLoadersManager_obj();
	result->__construct();
	return result;}

Dynamic URLLoadersManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< URLLoadersManager_obj > result = new URLLoadersManager_obj();
	result->__construct();
	return result;}

Void URLLoadersManager_obj::mainLoop( ){
{
		HX_STACK_FRAME("openfl._legacy.net._URLLoader.URLLoadersManager","mainLoop",0xf86b15c5,"openfl._legacy.net._URLLoader.URLLoadersManager.mainLoop","openfl/_legacy/net/URLLoader.hx",55,0xef414054)
		HX_STACK_THIS(this)
		HX_STACK_LINE(55)
		while((true)){
			HX_STACK_LINE(57)
			this->loadsQueueMutex->acquire();
			HX_STACK_LINE(58)
			Dynamic loadCall = this->loadsQueue->__Field(HX_CSTRING("shift"),true)();		HX_STACK_VAR(loadCall,"loadCall");
			HX_STACK_LINE(59)
			this->loadsQueueMutex->release();
			HX_STACK_LINE(60)
			if (((loadCall != null()))){
				HX_STACK_LINE(61)
				loadCall->__Field(HX_CSTRING("loader"),true)->__Field(HX_CSTRING("loadInCURLThread"),true)(loadCall->__Field(HX_CSTRING("request"),true));
			}
			HX_STACK_LINE(64)
			if ((!(this->activeLoaders->isEmpty()))){
				HX_STACK_LINE(65)
				::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::lime_curl_process_loaders();
				HX_STACK_LINE(66)
				::List oldLoaders = this->activeLoaders;		HX_STACK_VAR(oldLoaders,"oldLoaders");
				HX_STACK_LINE(67)
				::List _g = ::List_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(67)
				this->activeLoaders = _g;
				HX_STACK_LINE(68)
				for(::cpp::FastIterator_obj< ::openfl::_legacy::net::URLLoader > *__it = ::cpp::CreateFastIterator< ::openfl::_legacy::net::URLLoader >(oldLoaders->iterator());  __it->hasNext(); ){
					::openfl::_legacy::net::URLLoader loader = __it->next();
					{
						HX_STACK_LINE(69)
						loader->update();
						HX_STACK_LINE(70)
						if (((loader->state == (int)2))){
							HX_STACK_LINE(71)
							this->activeLoaders->push(loader);
						}
					}
;
				}
			}
			HX_STACK_LINE(76)
			::openfl::_legacy::net::_URLLoader::ManagersThreadMessage msg = ::cpp::vm::Thread_obj::readMessage(false);		HX_STACK_VAR(msg,"msg");
			HX_STACK_LINE(77)
			if (((msg != null()))){
				HX_STACK_LINE(78)
				::openfl::_legacy::net::_URLLoader::ManagersThreadMessage _g1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(78)
				_g1 = hx::TCast< openfl::_legacy::net::_URLLoader::ManagersThreadMessage >::cast(msg);
				HX_STACK_LINE(78)
				msg = _g1;
				HX_STACK_LINE(79)
				switch( (int)(msg->__Index())){
					case (int)0: {
						HX_STACK_LINE(79)
						Dynamic handle = (::openfl::_legacy::net::_URLLoader::ManagersThreadMessage(msg))->__Param(1);		HX_STACK_VAR(handle,"handle");
						HX_STACK_LINE(79)
						::cpp::vm::Thread callerThread = (::openfl::_legacy::net::_URLLoader::ManagersThreadMessage(msg))->__Param(0);		HX_STACK_VAR(callerThread,"callerThread");
						HX_STACK_LINE(80)
						{
							HX_STACK_LINE(81)
							Array< ::String > cookies = ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::lime_curl_get_cookies(handle);		HX_STACK_VAR(cookies,"cookies");
							HX_STACK_LINE(82)
							::openfl::_legacy::net::_URLLoader::ManagersThreadMessage _g2 = ::openfl::_legacy::net::_URLLoader::ManagersThreadMessage_obj::GetCookiesResponse(cookies);		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(82)
							callerThread->sendMessage(_g2);
						}
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(79)
						::String caCertFilePath = (::openfl::_legacy::net::_URLLoader::ManagersThreadMessage(msg))->__Param(0);		HX_STACK_VAR(caCertFilePath,"caCertFilePath");
						HX_STACK_LINE(85)
						::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::lime_curl_initialize(caCertFilePath);
					}
					;break;
					default: {
					}
				}
			}
			HX_STACK_LINE(91)
			::Sys_obj::sleep(0.1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(URLLoadersManager_obj,mainLoop,(void))

Void URLLoadersManager_obj::enqueueLoad( ::openfl::_legacy::net::URLLoader loader,::openfl::_legacy::net::URLRequest request){
{
		HX_STACK_FRAME("openfl._legacy.net._URLLoader.URLLoadersManager","enqueueLoad",0xc12c0d46,"openfl._legacy.net._URLLoader.URLLoadersManager.enqueueLoad","openfl/_legacy/net/URLLoader.hx",97,0xef414054)
		HX_STACK_THIS(this)
		HX_STACK_ARG(loader,"loader")
		HX_STACK_ARG(request,"request")
		HX_STACK_LINE(98)
		this->loadsQueueMutex->acquire();
		struct _Function_1_1{
			inline static Dynamic Block( ::openfl::_legacy::net::URLRequest &request,::openfl::_legacy::net::URLLoader &loader){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_legacy/net/URLLoader.hx",99,0xef414054)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("loader") , loader,false);
					__result->Add(HX_CSTRING("request") , request,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(99)
		this->loadsQueue->__Field(HX_CSTRING("push"),true)(_Function_1_1::Block(request,loader));
		HX_STACK_LINE(100)
		this->loadsQueueMutex->release();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(URLLoadersManager_obj,enqueueLoad,(void))

bool URLLoadersManager_obj::activeLoadersIsEmpty( ){
	HX_STACK_FRAME("openfl._legacy.net._URLLoader.URLLoadersManager","activeLoadersIsEmpty",0xee882811,"openfl._legacy.net._URLLoader.URLLoadersManager.activeLoadersIsEmpty","openfl/_legacy/net/URLLoader.hx",104,0xef414054)
	HX_STACK_THIS(this)
	HX_STACK_LINE(104)
	return this->activeLoaders->isEmpty();
}


HX_DEFINE_DYNAMIC_FUNC0(URLLoadersManager_obj,activeLoadersIsEmpty,return )

::List URLLoadersManager_obj::getActiveLoaders( ){
	HX_STACK_FRAME("openfl._legacy.net._URLLoader.URLLoadersManager","getActiveLoaders",0x03d47fec,"openfl._legacy.net._URLLoader.URLLoadersManager.getActiveLoaders","openfl/_legacy/net/URLLoader.hx",108,0xef414054)
	HX_STACK_THIS(this)
	HX_STACK_LINE(108)
	return this->activeLoaders;
}


HX_DEFINE_DYNAMIC_FUNC0(URLLoadersManager_obj,getActiveLoaders,return )

Dynamic URLLoadersManager_obj::create( ::openfl::_legacy::net::URLRequest request){
	HX_STACK_FRAME("openfl._legacy.net._URLLoader.URLLoadersManager","create",0x5c572f84,"openfl._legacy.net._URLLoader.URLLoadersManager.create","openfl/_legacy/net/URLLoader.hx",112,0xef414054)
	HX_STACK_THIS(this)
	HX_STACK_ARG(request,"request")
	HX_STACK_LINE(112)
	return ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::lime_curl_create(request);
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoadersManager_obj,create,return )

Void URLLoadersManager_obj::updateLoader( Dynamic handle,::openfl::_legacy::net::URLLoader loader){
{
		HX_STACK_FRAME("openfl._legacy.net._URLLoader.URLLoadersManager","updateLoader",0x03e7cd84,"openfl._legacy.net._URLLoader.URLLoadersManager.updateLoader","openfl/_legacy/net/URLLoader.hx",116,0xef414054)
		HX_STACK_THIS(this)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(loader,"loader")
		HX_STACK_LINE(116)
		::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::lime_curl_update_loader(handle,loader);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(URLLoadersManager_obj,updateLoader,(void))

int URLLoadersManager_obj::getCode( Dynamic handle){
	HX_STACK_FRAME("openfl._legacy.net._URLLoader.URLLoadersManager","getCode",0x72cf0f5b,"openfl._legacy.net._URLLoader.URLLoadersManager.getCode","openfl/_legacy/net/URLLoader.hx",120,0xef414054)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(120)
	return ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::lime_curl_get_code(handle);
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoadersManager_obj,getCode,return )

::String URLLoadersManager_obj::getErrorMessage( Dynamic handle){
	HX_STACK_FRAME("openfl._legacy.net._URLLoader.URLLoadersManager","getErrorMessage",0x223a570d,"openfl._legacy.net._URLLoader.URLLoadersManager.getErrorMessage","openfl/_legacy/net/URLLoader.hx",124,0xef414054)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(124)
	return ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::lime_curl_get_error_message(handle);
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoadersManager_obj,getErrorMessage,return )

::openfl::_legacy::utils::ByteArray URLLoadersManager_obj::getData( Dynamic handle){
	HX_STACK_FRAME("openfl._legacy.net._URLLoader.URLLoadersManager","getData",0x736db458,"openfl._legacy.net._URLLoader.URLLoadersManager.getData","openfl/_legacy/net/URLLoader.hx",128,0xef414054)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(128)
	return ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::lime_curl_get_data(handle);
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoadersManager_obj,getData,return )

Array< ::String > URLLoadersManager_obj::getHeaders( Dynamic handle){
	HX_STACK_FRAME("openfl._legacy.net._URLLoader.URLLoadersManager","getHeaders",0x34b484d8,"openfl._legacy.net._URLLoader.URLLoadersManager.getHeaders","openfl/_legacy/net/URLLoader.hx",132,0xef414054)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(132)
	return ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::lime_curl_get_headers(handle);
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoadersManager_obj,getHeaders,return )

Void URLLoadersManager_obj::initialize( ::String caCertFilePath){
{
		HX_STACK_FRAME("openfl._legacy.net._URLLoader.URLLoadersManager","initialize",0x6f05ddd8,"openfl._legacy.net._URLLoader.URLLoadersManager.initialize","openfl/_legacy/net/URLLoader.hx",135,0xef414054)
		HX_STACK_THIS(this)
		HX_STACK_ARG(caCertFilePath,"caCertFilePath")
		HX_STACK_LINE(136)
		::openfl::_legacy::net::_URLLoader::ManagersThreadMessage _g = ::openfl::_legacy::net::_URLLoader::ManagersThreadMessage_obj::InitializeCall(caCertFilePath);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(136)
		this->managersThread->sendMessage(_g);
		HX_STACK_LINE(137)
		return null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoadersManager_obj,initialize,(void))

Array< ::String > URLLoadersManager_obj::getCookies( Dynamic handle){
	HX_STACK_FRAME("openfl._legacy.net._URLLoader.URLLoadersManager","getCookies",0x789a69e1,"openfl._legacy.net._URLLoader.URLLoadersManager.getCookies","openfl/_legacy/net/URLLoader.hx",140,0xef414054)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(141)
	::cpp::vm::Thread _g = ::cpp::vm::Thread_obj::current();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(141)
	::openfl::_legacy::net::_URLLoader::ManagersThreadMessage _g1 = ::openfl::_legacy::net::_URLLoader::ManagersThreadMessage_obj::GetCookiesCall(_g,handle);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(141)
	this->managersThread->sendMessage(_g1);
	HX_STACK_LINE(142)
	::openfl::_legacy::net::_URLLoader::ManagersThreadMessage msg = ::cpp::vm::Thread_obj::readMessage(true);		HX_STACK_VAR(msg,"msg");
	HX_STACK_LINE(143)
	switch( (int)(msg->__Index())){
		case (int)1: {
			HX_STACK_LINE(143)
			Array< ::String > result = (::openfl::_legacy::net::_URLLoader::ManagersThreadMessage(msg))->__Param(0);		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(145)
			return result;
		}
		;break;
		default: {
			HX_STACK_LINE(148)
			return Array_obj< ::String >::__new();
		}
	}
	HX_STACK_LINE(143)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoadersManager_obj,getCookies,return )

::openfl::_legacy::net::_URLLoader::URLLoadersManager URLLoadersManager_obj::instance;

::openfl::_legacy::net::_URLLoader::URLLoadersManager URLLoadersManager_obj::getInstance( ){
	HX_STACK_FRAME("openfl._legacy.net._URLLoader.URLLoadersManager","getInstance",0xfee12cc3,"openfl._legacy.net._URLLoader.URLLoadersManager.getInstance","openfl/_legacy/net/URLLoader.hx",39,0xef414054)
	HX_STACK_LINE(40)
	if (((::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::instance == null()))){
		HX_STACK_LINE(41)
		::openfl::_legacy::net::_URLLoader::URLLoadersManager _g = ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(41)
		::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::instance = _g;
	}
	HX_STACK_LINE(43)
	return ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::instance;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(URLLoadersManager_obj,getInstance,return )

Dynamic URLLoadersManager_obj::lime_curl_create;

Dynamic URLLoadersManager_obj::lime_curl_process_loaders;

Dynamic URLLoadersManager_obj::lime_curl_update_loader;

Dynamic URLLoadersManager_obj::lime_curl_get_code;

Dynamic URLLoadersManager_obj::lime_curl_get_error_message;

Dynamic URLLoadersManager_obj::lime_curl_get_data;

Dynamic URLLoadersManager_obj::lime_curl_get_cookies;

Dynamic URLLoadersManager_obj::lime_curl_get_headers;

Dynamic URLLoadersManager_obj::lime_curl_initialize;


URLLoadersManager_obj::URLLoadersManager_obj()
{
}

void URLLoadersManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(URLLoadersManager);
	HX_MARK_MEMBER_NAME(managersThread,"managersThread");
	HX_MARK_MEMBER_NAME(activeLoaders,"activeLoaders");
	HX_MARK_MEMBER_NAME(loadsQueue,"loadsQueue");
	HX_MARK_MEMBER_NAME(loadsQueueMutex,"loadsQueueMutex");
	HX_MARK_END_CLASS();
}

void URLLoadersManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(managersThread,"managersThread");
	HX_VISIT_MEMBER_NAME(activeLoaders,"activeLoaders");
	HX_VISIT_MEMBER_NAME(loadsQueue,"loadsQueue");
	HX_VISIT_MEMBER_NAME(loadsQueueMutex,"loadsQueueMutex");
}

Dynamic URLLoadersManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getCode") ) { return getCode_dyn(); }
		if (HX_FIELD_EQ(inName,"getData") ) { return getData_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { return instance; }
		if (HX_FIELD_EQ(inName,"mainLoop") ) { return mainLoop_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loadsQueue") ) { return loadsQueue; }
		if (HX_FIELD_EQ(inName,"getHeaders") ) { return getHeaders_dyn(); }
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"getCookies") ) { return getCookies_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getInstance") ) { return getInstance_dyn(); }
		if (HX_FIELD_EQ(inName,"enqueueLoad") ) { return enqueueLoad_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateLoader") ) { return updateLoader_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"activeLoaders") ) { return activeLoaders; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"managersThread") ) { return managersThread; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"loadsQueueMutex") ) { return loadsQueueMutex; }
		if (HX_FIELD_EQ(inName,"getErrorMessage") ) { return getErrorMessage_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lime_curl_create") ) { return lime_curl_create; }
		if (HX_FIELD_EQ(inName,"getActiveLoaders") ) { return getActiveLoaders_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lime_curl_get_code") ) { return lime_curl_get_code; }
		if (HX_FIELD_EQ(inName,"lime_curl_get_data") ) { return lime_curl_get_data; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_curl_initialize") ) { return lime_curl_initialize; }
		if (HX_FIELD_EQ(inName,"activeLoadersIsEmpty") ) { return activeLoadersIsEmpty_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_curl_get_cookies") ) { return lime_curl_get_cookies; }
		if (HX_FIELD_EQ(inName,"lime_curl_get_headers") ) { return lime_curl_get_headers; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_curl_update_loader") ) { return lime_curl_update_loader; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_curl_process_loaders") ) { return lime_curl_process_loaders; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_curl_get_error_message") ) { return lime_curl_get_error_message; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic URLLoadersManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=inValue.Cast< ::openfl::_legacy::net::_URLLoader::URLLoadersManager >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loadsQueue") ) { loadsQueue=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"activeLoaders") ) { activeLoaders=inValue.Cast< ::List >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"managersThread") ) { managersThread=inValue.Cast< ::cpp::vm::Thread >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"loadsQueueMutex") ) { loadsQueueMutex=inValue.Cast< ::cpp::vm::Mutex >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lime_curl_create") ) { lime_curl_create=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lime_curl_get_code") ) { lime_curl_get_code=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_curl_get_data") ) { lime_curl_get_data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_curl_initialize") ) { lime_curl_initialize=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_curl_get_cookies") ) { lime_curl_get_cookies=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_curl_get_headers") ) { lime_curl_get_headers=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_curl_update_loader") ) { lime_curl_update_loader=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_curl_process_loaders") ) { lime_curl_process_loaders=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_curl_get_error_message") ) { lime_curl_get_error_message=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void URLLoadersManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("managersThread"));
	outFields->push(HX_CSTRING("activeLoaders"));
	outFields->push(HX_CSTRING("loadsQueue"));
	outFields->push(HX_CSTRING("loadsQueueMutex"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("instance"),
	HX_CSTRING("getInstance"),
	HX_CSTRING("lime_curl_create"),
	HX_CSTRING("lime_curl_process_loaders"),
	HX_CSTRING("lime_curl_update_loader"),
	HX_CSTRING("lime_curl_get_code"),
	HX_CSTRING("lime_curl_get_error_message"),
	HX_CSTRING("lime_curl_get_data"),
	HX_CSTRING("lime_curl_get_cookies"),
	HX_CSTRING("lime_curl_get_headers"),
	HX_CSTRING("lime_curl_initialize"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::cpp::vm::Thread*/ ,(int)offsetof(URLLoadersManager_obj,managersThread),HX_CSTRING("managersThread")},
	{hx::fsObject /*::List*/ ,(int)offsetof(URLLoadersManager_obj,activeLoaders),HX_CSTRING("activeLoaders")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(URLLoadersManager_obj,loadsQueue),HX_CSTRING("loadsQueue")},
	{hx::fsObject /*::cpp::vm::Mutex*/ ,(int)offsetof(URLLoadersManager_obj,loadsQueueMutex),HX_CSTRING("loadsQueueMutex")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("managersThread"),
	HX_CSTRING("activeLoaders"),
	HX_CSTRING("loadsQueue"),
	HX_CSTRING("loadsQueueMutex"),
	HX_CSTRING("mainLoop"),
	HX_CSTRING("enqueueLoad"),
	HX_CSTRING("activeLoadersIsEmpty"),
	HX_CSTRING("getActiveLoaders"),
	HX_CSTRING("create"),
	HX_CSTRING("updateLoader"),
	HX_CSTRING("getCode"),
	HX_CSTRING("getErrorMessage"),
	HX_CSTRING("getData"),
	HX_CSTRING("getHeaders"),
	HX_CSTRING("initialize"),
	HX_CSTRING("getCookies"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(URLLoadersManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(URLLoadersManager_obj::instance,"instance");
	HX_MARK_MEMBER_NAME(URLLoadersManager_obj::lime_curl_create,"lime_curl_create");
	HX_MARK_MEMBER_NAME(URLLoadersManager_obj::lime_curl_process_loaders,"lime_curl_process_loaders");
	HX_MARK_MEMBER_NAME(URLLoadersManager_obj::lime_curl_update_loader,"lime_curl_update_loader");
	HX_MARK_MEMBER_NAME(URLLoadersManager_obj::lime_curl_get_code,"lime_curl_get_code");
	HX_MARK_MEMBER_NAME(URLLoadersManager_obj::lime_curl_get_error_message,"lime_curl_get_error_message");
	HX_MARK_MEMBER_NAME(URLLoadersManager_obj::lime_curl_get_data,"lime_curl_get_data");
	HX_MARK_MEMBER_NAME(URLLoadersManager_obj::lime_curl_get_cookies,"lime_curl_get_cookies");
	HX_MARK_MEMBER_NAME(URLLoadersManager_obj::lime_curl_get_headers,"lime_curl_get_headers");
	HX_MARK_MEMBER_NAME(URLLoadersManager_obj::lime_curl_initialize,"lime_curl_initialize");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(URLLoadersManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(URLLoadersManager_obj::instance,"instance");
	HX_VISIT_MEMBER_NAME(URLLoadersManager_obj::lime_curl_create,"lime_curl_create");
	HX_VISIT_MEMBER_NAME(URLLoadersManager_obj::lime_curl_process_loaders,"lime_curl_process_loaders");
	HX_VISIT_MEMBER_NAME(URLLoadersManager_obj::lime_curl_update_loader,"lime_curl_update_loader");
	HX_VISIT_MEMBER_NAME(URLLoadersManager_obj::lime_curl_get_code,"lime_curl_get_code");
	HX_VISIT_MEMBER_NAME(URLLoadersManager_obj::lime_curl_get_error_message,"lime_curl_get_error_message");
	HX_VISIT_MEMBER_NAME(URLLoadersManager_obj::lime_curl_get_data,"lime_curl_get_data");
	HX_VISIT_MEMBER_NAME(URLLoadersManager_obj::lime_curl_get_cookies,"lime_curl_get_cookies");
	HX_VISIT_MEMBER_NAME(URLLoadersManager_obj::lime_curl_get_headers,"lime_curl_get_headers");
	HX_VISIT_MEMBER_NAME(URLLoadersManager_obj::lime_curl_initialize,"lime_curl_initialize");
};

#endif

Class URLLoadersManager_obj::__mClass;

void URLLoadersManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._legacy.net._URLLoader.URLLoadersManager"), hx::TCanCast< URLLoadersManager_obj> ,sStaticFields,sMemberFields,
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

void URLLoadersManager_obj::__boot()
{
	lime_curl_create= ::openfl::_legacy::Lib_obj::load(HX_CSTRING("lime-legacy"),HX_CSTRING("lime_legacy_curl_create"),(int)1);
	lime_curl_process_loaders= ::openfl::_legacy::Lib_obj::load(HX_CSTRING("lime-legacy"),HX_CSTRING("lime_legacy_curl_process_loaders"),(int)0);
	lime_curl_update_loader= ::openfl::_legacy::Lib_obj::load(HX_CSTRING("lime-legacy"),HX_CSTRING("lime_legacy_curl_update_loader"),(int)2);
	lime_curl_get_code= ::openfl::_legacy::Lib_obj::load(HX_CSTRING("lime-legacy"),HX_CSTRING("lime_legacy_curl_get_code"),(int)1);
	lime_curl_get_error_message= ::openfl::_legacy::Lib_obj::load(HX_CSTRING("lime-legacy"),HX_CSTRING("lime_legacy_curl_get_error_message"),(int)1);
	lime_curl_get_data= ::openfl::_legacy::Lib_obj::load(HX_CSTRING("lime-legacy"),HX_CSTRING("lime_legacy_curl_get_data"),(int)1);
	lime_curl_get_cookies= ::openfl::_legacy::Lib_obj::load(HX_CSTRING("lime-legacy"),HX_CSTRING("lime_legacy_curl_get_cookies"),(int)1);
	lime_curl_get_headers= ::openfl::_legacy::Lib_obj::load(HX_CSTRING("lime-legacy"),HX_CSTRING("lime_legacy_curl_get_headers"),(int)1);
	lime_curl_initialize= ::openfl::_legacy::Lib_obj::load(HX_CSTRING("lime-legacy"),HX_CSTRING("lime_legacy_curl_initialize"),(int)1);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace net
} // end namespace _URLLoader
