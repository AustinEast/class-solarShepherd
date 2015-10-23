#include <hxcpp.h>

#ifndef INCLUDED_cpp_vm_Deque
#include <cpp/vm/Deque.h>
#endif
namespace cpp{
namespace vm{

Void Deque_obj::__construct()
{
HX_STACK_FRAME("cpp.vm.Deque","new",0xa6685326,"cpp.vm.Deque.new","/usr/lib/haxe/std/cpp/vm/Deque.hx",27,0x7f3dd0a9)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(28)
	Dynamic _g = ::__hxcpp_deque_create();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(28)
	this->q = _g;
}
;
	return null();
}

//Deque_obj::~Deque_obj() { }

Dynamic Deque_obj::__CreateEmpty() { return  new Deque_obj; }
hx::ObjectPtr< Deque_obj > Deque_obj::__new()
{  hx::ObjectPtr< Deque_obj > result = new Deque_obj();
	result->__construct();
	return result;}

Dynamic Deque_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Deque_obj > result = new Deque_obj();
	result->__construct();
	return result;}

Void Deque_obj::add( Dynamic i){
{
		HX_STACK_FRAME("cpp.vm.Deque","add",0xa65e74e7,"cpp.vm.Deque.add","/usr/lib/haxe/std/cpp/vm/Deque.hx",31,0x7f3dd0a9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(31)
		::__hxcpp_deque_add(this->q,i);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Deque_obj,add,(void))

Dynamic Deque_obj::pop( bool block){
	HX_STACK_FRAME("cpp.vm.Deque","pop",0xa669e057,"cpp.vm.Deque.pop","/usr/lib/haxe/std/cpp/vm/Deque.hx",37,0x7f3dd0a9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(block,"block")
	HX_STACK_LINE(37)
	return ::__hxcpp_deque_pop(this->q,block);
}


HX_DEFINE_DYNAMIC_FUNC1(Deque_obj,pop,return )


Deque_obj::Deque_obj()
{
}

void Deque_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Deque);
	HX_MARK_MEMBER_NAME(q,"q");
	HX_MARK_END_CLASS();
}

void Deque_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(q,"q");
}

Dynamic Deque_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"q") ) { return q; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Deque_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"q") ) { q=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Deque_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("q"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Deque_obj,q),HX_CSTRING("q")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("q"),
	HX_CSTRING("add"),
	HX_CSTRING("pop"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Deque_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Deque_obj::__mClass,"__mClass");
};

#endif

Class Deque_obj::__mClass;

void Deque_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("cpp.vm.Deque"), hx::TCanCast< Deque_obj> ,sStaticFields,sMemberFields,
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

void Deque_obj::__boot()
{
}

} // end namespace cpp
} // end namespace vm
