#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_Future
#include <openfl/_legacy/Future.h>
#endif
#ifndef INCLUDED_openfl__legacy_Promise
#include <openfl/_legacy/Promise.h>
#endif
namespace openfl{
namespace _legacy{

Void Promise_obj::__construct()
{
HX_STACK_FRAME("openfl._legacy.Promise","new",0x7f6b0a89,"openfl._legacy.Promise.new","openfl/_legacy/Assets.hx",1848,0x9276b055)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(1850)
	::openfl::_legacy::Future _g = ::openfl::_legacy::Future_obj::__new(null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1850)
	this->future = _g;
}
;
	return null();
}

//Promise_obj::~Promise_obj() { }

Dynamic Promise_obj::__CreateEmpty() { return  new Promise_obj; }
hx::ObjectPtr< Promise_obj > Promise_obj::__new()
{  hx::ObjectPtr< Promise_obj > result = new Promise_obj();
	result->__construct();
	return result;}

Dynamic Promise_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Promise_obj > result = new Promise_obj();
	result->__construct();
	return result;}

::openfl::_legacy::Promise Promise_obj::complete( Dynamic data){
	HX_STACK_FRAME("openfl._legacy.Promise","complete",0x04e051f0,"openfl._legacy.Promise.complete","openfl/_legacy/Assets.hx",1855,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(1857)
	if ((!(this->future->__errored))){
		HX_STACK_LINE(1859)
		this->future->__completed = true;
		HX_STACK_LINE(1860)
		this->future->value = data;
		HX_STACK_LINE(1862)
		if (((this->future->__completeListeners != null()))){
			HX_STACK_LINE(1864)
			{
				HX_STACK_LINE(1864)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1864)
				Dynamic _g1 = this->future->__completeListeners;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1864)
				while((true)){
					HX_STACK_LINE(1864)
					if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
						HX_STACK_LINE(1864)
						break;
					}
					HX_STACK_LINE(1864)
					Dynamic listener = _g1->__GetItem(_g);		HX_STACK_VAR(listener,"listener");
					HX_STACK_LINE(1864)
					++(_g);
					HX_STACK_LINE(1866)
					listener(data).Cast< Void >();
				}
			}
			HX_STACK_LINE(1870)
			this->future->__completeListeners = null();
		}
	}
	HX_STACK_LINE(1876)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,complete,return )

::openfl::_legacy::Promise Promise_obj::completeWith( ::openfl::_legacy::Future future){
	HX_STACK_FRAME("openfl._legacy.Promise","completeWith",0xd3d9ac16,"openfl._legacy.Promise.completeWith","openfl/_legacy/Assets.hx",1881,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(future,"future")
	HX_STACK_LINE(1883)
	future->onComplete(this->complete_dyn());
	HX_STACK_LINE(1884)
	future->onError(this->error_dyn());
	HX_STACK_LINE(1885)
	future->onProgress(this->progress_dyn());
	HX_STACK_LINE(1887)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,completeWith,return )

::openfl::_legacy::Promise Promise_obj::error( Dynamic msg){
	HX_STACK_FRAME("openfl._legacy.Promise","error",0x5222a231,"openfl._legacy.Promise.error","openfl/_legacy/Assets.hx",1893,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(msg,"msg")
	HX_STACK_LINE(1895)
	if ((!(this->future->__completed))){
		HX_STACK_LINE(1897)
		this->future->__errored = true;
		HX_STACK_LINE(1898)
		this->future->__errorMessage = msg;
		HX_STACK_LINE(1900)
		if (((this->future->__errorListeners != null()))){
			HX_STACK_LINE(1902)
			{
				HX_STACK_LINE(1902)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1902)
				Dynamic _g1 = this->future->__errorListeners;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1902)
				while((true)){
					HX_STACK_LINE(1902)
					if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
						HX_STACK_LINE(1902)
						break;
					}
					HX_STACK_LINE(1902)
					Dynamic listener = _g1->__GetItem(_g);		HX_STACK_VAR(listener,"listener");
					HX_STACK_LINE(1902)
					++(_g);
					HX_STACK_LINE(1904)
					listener(msg).Cast< Void >();
				}
			}
			HX_STACK_LINE(1908)
			this->future->__errorListeners = null();
		}
	}
	HX_STACK_LINE(1914)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,error,return )

::openfl::_legacy::Promise Promise_obj::progress( Float progress){
	HX_STACK_FRAME("openfl._legacy.Promise","progress",0x0b4348e4,"openfl._legacy.Promise.progress","openfl/_legacy/Assets.hx",1919,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(progress,"progress")
	HX_STACK_LINE(1921)
	if (((bool(!(this->future->__errored)) && bool(!(this->future->__completed))))){
		HX_STACK_LINE(1923)
		if (((this->future->__progressListeners != null()))){
			HX_STACK_LINE(1925)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1925)
			Dynamic _g1 = this->future->__progressListeners;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1925)
			while((true)){
				HX_STACK_LINE(1925)
				if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(1925)
					break;
				}
				HX_STACK_LINE(1925)
				Dynamic listener = _g1->__GetItem(_g);		HX_STACK_VAR(listener,"listener");
				HX_STACK_LINE(1925)
				++(_g);
				HX_STACK_LINE(1927)
				listener(progress).Cast< Void >();
			}
		}
	}
	HX_STACK_LINE(1935)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,progress,return )

bool Promise_obj::get_isCompleted( ){
	HX_STACK_FRAME("openfl._legacy.Promise","get_isCompleted",0xfc756381,"openfl._legacy.Promise.get_isCompleted","openfl/_legacy/Assets.hx",1949,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1949)
	return this->future->get_isCompleted();
}


HX_DEFINE_DYNAMIC_FUNC0(Promise_obj,get_isCompleted,return )


Promise_obj::Promise_obj()
{
}

void Promise_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Promise);
	HX_MARK_MEMBER_NAME(future,"future");
	HX_MARK_MEMBER_NAME(isCompleted,"isCompleted");
	HX_MARK_END_CLASS();
}

void Promise_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(future,"future");
	HX_VISIT_MEMBER_NAME(isCompleted,"isCompleted");
}

Dynamic Promise_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { return error_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"future") ) { return future; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"complete") ) { return complete_dyn(); }
		if (HX_FIELD_EQ(inName,"progress") ) { return progress_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isCompleted") ) { return inCallProp ? get_isCompleted() : isCompleted; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"completeWith") ) { return completeWith_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_isCompleted") ) { return get_isCompleted_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Promise_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"future") ) { future=inValue.Cast< ::openfl::_legacy::Future >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isCompleted") ) { isCompleted=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Promise_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("future"));
	outFields->push(HX_CSTRING("isCompleted"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::Future*/ ,(int)offsetof(Promise_obj,future),HX_CSTRING("future")},
	{hx::fsBool,(int)offsetof(Promise_obj,isCompleted),HX_CSTRING("isCompleted")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("future"),
	HX_CSTRING("isCompleted"),
	HX_CSTRING("complete"),
	HX_CSTRING("completeWith"),
	HX_CSTRING("error"),
	HX_CSTRING("progress"),
	HX_CSTRING("get_isCompleted"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Promise_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Promise_obj::__mClass,"__mClass");
};

#endif

Class Promise_obj::__mClass;

void Promise_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._legacy.Promise"), hx::TCanCast< Promise_obj> ,sStaticFields,sMemberFields,
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

void Promise_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _legacy
