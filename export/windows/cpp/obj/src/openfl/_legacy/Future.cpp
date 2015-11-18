#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_Future
#include <openfl/_legacy/Future.h>
#endif
#ifndef INCLUDED_openfl__legacy_Promise
#include <openfl/_legacy/Promise.h>
#endif
namespace openfl{
namespace _legacy{

Void Future_obj::__construct(Dynamic work)
{
HX_STACK_FRAME("openfl._legacy.Future","new",0x6d0ac7b9,"openfl._legacy.Future.new","openfl/_legacy/Assets.hx",1694,0x9276b055)
HX_STACK_THIS(this)
HX_STACK_ARG(work,"work")
{
	HX_STACK_LINE(1694)
	if (((work != null()))){
		HX_STACK_LINE(1696)
		::openfl::_legacy::Promise promise = ::openfl::_legacy::Promise_obj::__new();		HX_STACK_VAR(promise,"promise");
		HX_STACK_LINE(1697)
		promise->future = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(1699)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(1701)
			Dynamic result = work();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(1702)
			promise->complete(result);
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(1706)
					promise->error(e);
				}
			}
		}
	}
}
;
	return null();
}

//Future_obj::~Future_obj() { }

Dynamic Future_obj::__CreateEmpty() { return  new Future_obj; }
hx::ObjectPtr< Future_obj > Future_obj::__new(Dynamic work)
{  hx::ObjectPtr< Future_obj > result = new Future_obj();
	result->__construct(work);
	return result;}

Dynamic Future_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Future_obj > result = new Future_obj();
	result->__construct(inArgs[0]);
	return result;}

::openfl::_legacy::Future Future_obj::onComplete( Dynamic listener){
	HX_STACK_FRAME("openfl._legacy.Future","onComplete",0x222e6abf,"openfl._legacy.Future.onComplete","openfl/_legacy/Assets.hx",1715,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(listener,"listener")
	HX_STACK_LINE(1717)
	if (((listener != null()))){
		HX_STACK_LINE(1719)
		if ((this->__completed)){
			HX_STACK_LINE(1721)
			listener(this->value).Cast< Void >();
		}
		else{
			HX_STACK_LINE(1723)
			if ((!(this->__errored))){
				HX_STACK_LINE(1725)
				if (((this->__completeListeners == null()))){
					HX_STACK_LINE(1727)
					Dynamic _g = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1727)
					this->__completeListeners = _g;
				}
				HX_STACK_LINE(1731)
				this->__completeListeners->__Field(HX_CSTRING("push"),true)(listener);
			}
		}
	}
	HX_STACK_LINE(1737)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,onComplete,return )

::openfl::_legacy::Future Future_obj::onError( Dynamic listener){
	HX_STACK_FRAME("openfl._legacy.Future","onError",0x410f8202,"openfl._legacy.Future.onError","openfl/_legacy/Assets.hx",1742,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(listener,"listener")
	HX_STACK_LINE(1744)
	if (((listener != null()))){
		HX_STACK_LINE(1746)
		if ((this->__errored)){
			HX_STACK_LINE(1748)
			listener(this->__errorMessage).Cast< Void >();
		}
		else{
			HX_STACK_LINE(1750)
			if ((!(this->__completed))){
				HX_STACK_LINE(1752)
				if (((this->__errorListeners == null()))){
					HX_STACK_LINE(1754)
					Dynamic _g = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1754)
					this->__errorListeners = _g;
				}
				HX_STACK_LINE(1758)
				this->__errorListeners->__Field(HX_CSTRING("push"),true)(listener);
			}
		}
	}
	HX_STACK_LINE(1764)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,onError,return )

::openfl::_legacy::Future Future_obj::onProgress( Dynamic listener){
	HX_STACK_FRAME("openfl._legacy.Future","onProgress",0x289161b3,"openfl._legacy.Future.onProgress","openfl/_legacy/Assets.hx",1769,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(listener,"listener")
	HX_STACK_LINE(1771)
	if (((listener != null()))){
		HX_STACK_LINE(1773)
		if (((this->__progressListeners == null()))){
			HX_STACK_LINE(1775)
			Dynamic _g = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1775)
			this->__progressListeners = _g;
		}
		HX_STACK_LINE(1779)
		this->__progressListeners->__Field(HX_CSTRING("push"),true)(listener);
	}
	HX_STACK_LINE(1783)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,onProgress,return )

::openfl::_legacy::Future Future_obj::then( Dynamic next){
	HX_STACK_FRAME("openfl._legacy.Future","then",0x005d7964,"openfl._legacy.Future.then","openfl/_legacy/Assets.hx",1788,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(next,"next")
	HX_STACK_LINE(1788)
	Dynamic next1 = Dynamic( Array_obj<Dynamic>::__new().Add(next));		HX_STACK_VAR(next1,"next1");
	HX_STACK_LINE(1790)
	if ((this->__completed)){
		HX_STACK_LINE(1792)
		return next1->__GetItem((int)0)(this->value).Cast< ::openfl::_legacy::Future >();
	}
	else{
		HX_STACK_LINE(1794)
		if ((this->__errored)){
			HX_STACK_LINE(1796)
			::openfl::_legacy::Future future = ::openfl::_legacy::Future_obj::__new(null());		HX_STACK_VAR(future,"future");
			HX_STACK_LINE(1797)
			future->onError(this->__errorMessage);
			HX_STACK_LINE(1798)
			return future;
		}
		else{
			HX_STACK_LINE(1802)
			Array< ::Dynamic > promise = Array_obj< ::Dynamic >::__new().Add(::openfl::_legacy::Promise_obj::__new());		HX_STACK_VAR(promise,"promise");
			HX_STACK_LINE(1804)
			this->onError(promise->__get((int)0).StaticCast< ::openfl::_legacy::Promise >()->error_dyn());
			HX_STACK_LINE(1805)
			this->onProgress(promise->__get((int)0).StaticCast< ::openfl::_legacy::Promise >()->progress_dyn());

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,promise,Dynamic,next1)
			Void run(Dynamic val){
				HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","openfl/_legacy/Assets.hx",1807,0x9276b055)
				HX_STACK_ARG(val,"val")
				{
					HX_STACK_LINE(1809)
					::openfl::_legacy::Future future = next1->__GetItem((int)0)(val).Cast< ::openfl::_legacy::Future >();		HX_STACK_VAR(future,"future");
					HX_STACK_LINE(1810)
					future->onError(promise->__get((int)0).StaticCast< ::openfl::_legacy::Promise >()->error_dyn());
					HX_STACK_LINE(1811)
					future->onComplete(promise->__get((int)0).StaticCast< ::openfl::_legacy::Promise >()->complete_dyn());
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(1807)
			this->onComplete( Dynamic(new _Function_3_1(promise,next1)));
			HX_STACK_LINE(1815)
			return promise->__get((int)0).StaticCast< ::openfl::_legacy::Promise >()->future;
		}
	}
	HX_STACK_LINE(1790)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,then,return )

bool Future_obj::get_isCompleted( ){
	HX_STACK_FRAME("openfl._legacy.Future","get_isCompleted",0x8d5428b1,"openfl._legacy.Future.get_isCompleted","openfl/_legacy/Assets.hx",1831,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1831)
	return (bool(this->__completed) || bool(this->__errored));
}


HX_DEFINE_DYNAMIC_FUNC0(Future_obj,get_isCompleted,return )


Future_obj::Future_obj()
{
}

void Future_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Future);
	HX_MARK_MEMBER_NAME(isCompleted,"isCompleted");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(__completed,"__completed");
	HX_MARK_MEMBER_NAME(__completeListeners,"__completeListeners");
	HX_MARK_MEMBER_NAME(__errored,"__errored");
	HX_MARK_MEMBER_NAME(__errorListeners,"__errorListeners");
	HX_MARK_MEMBER_NAME(__errorMessage,"__errorMessage");
	HX_MARK_MEMBER_NAME(__progressListeners,"__progressListeners");
	HX_MARK_END_CLASS();
}

void Future_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(isCompleted,"isCompleted");
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(__completed,"__completed");
	HX_VISIT_MEMBER_NAME(__completeListeners,"__completeListeners");
	HX_VISIT_MEMBER_NAME(__errored,"__errored");
	HX_VISIT_MEMBER_NAME(__errorListeners,"__errorListeners");
	HX_VISIT_MEMBER_NAME(__errorMessage,"__errorMessage");
	HX_VISIT_MEMBER_NAME(__progressListeners,"__progressListeners");
}

Dynamic Future_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"then") ) { return then_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onError") ) { return onError_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__errored") ) { return __errored; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { return onComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"onProgress") ) { return onProgress_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isCompleted") ) { return inCallProp ? get_isCompleted() : isCompleted; }
		if (HX_FIELD_EQ(inName,"__completed") ) { return __completed; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__errorMessage") ) { return __errorMessage; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_isCompleted") ) { return get_isCompleted_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__errorListeners") ) { return __errorListeners; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__completeListeners") ) { return __completeListeners; }
		if (HX_FIELD_EQ(inName,"__progressListeners") ) { return __progressListeners; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Future_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__errored") ) { __errored=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isCompleted") ) { isCompleted=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__completed") ) { __completed=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__errorMessage") ) { __errorMessage=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__errorListeners") ) { __errorListeners=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__completeListeners") ) { __completeListeners=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__progressListeners") ) { __progressListeners=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Future_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("isCompleted"));
	outFields->push(HX_CSTRING("value"));
	outFields->push(HX_CSTRING("__completed"));
	outFields->push(HX_CSTRING("__completeListeners"));
	outFields->push(HX_CSTRING("__errored"));
	outFields->push(HX_CSTRING("__errorListeners"));
	outFields->push(HX_CSTRING("__errorMessage"));
	outFields->push(HX_CSTRING("__progressListeners"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Future_obj,isCompleted),HX_CSTRING("isCompleted")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Future_obj,value),HX_CSTRING("value")},
	{hx::fsBool,(int)offsetof(Future_obj,__completed),HX_CSTRING("__completed")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Future_obj,__completeListeners),HX_CSTRING("__completeListeners")},
	{hx::fsBool,(int)offsetof(Future_obj,__errored),HX_CSTRING("__errored")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Future_obj,__errorListeners),HX_CSTRING("__errorListeners")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Future_obj,__errorMessage),HX_CSTRING("__errorMessage")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Future_obj,__progressListeners),HX_CSTRING("__progressListeners")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("isCompleted"),
	HX_CSTRING("value"),
	HX_CSTRING("__completed"),
	HX_CSTRING("__completeListeners"),
	HX_CSTRING("__errored"),
	HX_CSTRING("__errorListeners"),
	HX_CSTRING("__errorMessage"),
	HX_CSTRING("__progressListeners"),
	HX_CSTRING("onComplete"),
	HX_CSTRING("onError"),
	HX_CSTRING("onProgress"),
	HX_CSTRING("then"),
	HX_CSTRING("get_isCompleted"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Future_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Future_obj::__mClass,"__mClass");
};

#endif

Class Future_obj::__mClass;

void Future_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._legacy.Future"), hx::TCanCast< Future_obj> ,sStaticFields,sMemberFields,
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

void Future_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _legacy
