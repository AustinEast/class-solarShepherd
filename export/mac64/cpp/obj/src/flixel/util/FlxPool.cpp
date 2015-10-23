#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
namespace flixel{
namespace util{

Void FlxPool_obj::__construct(::Class classObj)
{
HX_STACK_FRAME("flixel.util.FlxPool","new",0x022eb226,"flixel.util.FlxPool.new","flixel/util/FlxPool.hx",17,0xdd4de86a)
HX_STACK_THIS(this)
HX_STACK_ARG(classObj,"classObj")
{
	HX_STACK_LINE(18)
	this->_pool = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(19)
	this->_class = classObj;
}
;
	return null();
}

//FlxPool_obj::~FlxPool_obj() { }

Dynamic FlxPool_obj::__CreateEmpty() { return  new FlxPool_obj; }
hx::ObjectPtr< FlxPool_obj > FlxPool_obj::__new(::Class classObj)
{  hx::ObjectPtr< FlxPool_obj > result = new FlxPool_obj();
	result->__construct(classObj);
	return result;}

Dynamic FlxPool_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxPool_obj > result = new FlxPool_obj();
	result->__construct(inArgs[0]);
	return result;}

Dynamic FlxPool_obj::get( ){
	HX_STACK_FRAME("flixel.util.FlxPool","get",0x0229625c,"flixel.util.FlxPool.get","flixel/util/FlxPool.hx",23,0xdd4de86a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(24)
	Dynamic obj = this->_pool->__Field(HX_CSTRING("pop"),true)();		HX_STACK_VAR(obj,"obj");
	HX_STACK_LINE(25)
	if (((obj == null()))){
		HX_STACK_LINE(27)
		Dynamic _g = ::Type_obj::createInstance(this->_class,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(27)
		obj = _g;
	}
	HX_STACK_LINE(29)
	return obj;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPool_obj,get,return )

Void FlxPool_obj::put( Dynamic obj){
{
		HX_STACK_FRAME("flixel.util.FlxPool","put",0x02304495,"flixel.util.FlxPool.put","flixel/util/FlxPool.hx",35,0xdd4de86a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::flixel::util::FlxPool_obj > __this,Dynamic &obj){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxPool.hx",35,0xdd4de86a)
				{
					HX_STACK_LINE(35)
					int _g = __this->_pool->__Field(HX_CSTRING("indexOf"),true)(obj,null());		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(35)
					return (_g < (int)0);
				}
				return null();
			}
		};
		HX_STACK_LINE(35)
		if (((  (((obj != null()))) ? bool(_Function_1_1::Block(this,obj)) : bool(false) ))){
			HX_STACK_LINE(37)
			obj->__Field(HX_CSTRING("destroy"),true)();
			HX_STACK_LINE(38)
			this->_pool->__Field(HX_CSTRING("push"),true)(obj);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPool_obj,put,(void))

Void FlxPool_obj::putUnsafe( Dynamic obj){
{
		HX_STACK_FRAME("flixel.util.FlxPool","putUnsafe",0x4c705a9b,"flixel.util.FlxPool.putUnsafe","flixel/util/FlxPool.hx",44,0xdd4de86a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(44)
		if (((obj != null()))){
			HX_STACK_LINE(46)
			obj->__Field(HX_CSTRING("destroy"),true)();
			HX_STACK_LINE(47)
			this->_pool->__Field(HX_CSTRING("push"),true)(obj);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPool_obj,putUnsafe,(void))

Void FlxPool_obj::preAllocate( int numObjects){
{
		HX_STACK_FRAME("flixel.util.FlxPool","preAllocate",0x662e61c6,"flixel.util.FlxPool.preAllocate","flixel/util/FlxPool.hx",53,0xdd4de86a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(numObjects,"numObjects")
		HX_STACK_LINE(53)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(53)
		while((true)){
			HX_STACK_LINE(53)
			if ((!(((_g < numObjects))))){
				HX_STACK_LINE(53)
				break;
			}
			HX_STACK_LINE(53)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(55)
			Dynamic _g1 = ::Type_obj::createInstance(this->_class,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(55)
			this->_pool->__Field(HX_CSTRING("push"),true)(_g1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPool_obj,preAllocate,(void))

Dynamic FlxPool_obj::clear( ){
	HX_STACK_FRAME("flixel.util.FlxPool","clear",0xa006d0d3,"flixel.util.FlxPool.clear","flixel/util/FlxPool.hx",60,0xdd4de86a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(61)
	Dynamic oldPool = this->_pool;		HX_STACK_VAR(oldPool,"oldPool");
	HX_STACK_LINE(62)
	this->_pool = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(63)
	return oldPool;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPool_obj,clear,return )

int FlxPool_obj::get_length( ){
	HX_STACK_FRAME("flixel.util.FlxPool","get_length",0x704687a9,"flixel.util.FlxPool.get_length","flixel/util/FlxPool.hx",68,0xdd4de86a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(68)
	return this->_pool->__Field(HX_CSTRING("length"),true);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPool_obj,get_length,return )


FlxPool_obj::FlxPool_obj()
{
}

void FlxPool_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxPool);
	HX_MARK_MEMBER_NAME(_pool,"_pool");
	HX_MARK_MEMBER_NAME(_class,"_class");
	HX_MARK_END_CLASS();
}

void FlxPool_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_pool,"_pool");
	HX_VISIT_MEMBER_NAME(_class,"_class");
}

Dynamic FlxPool_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"put") ) { return put_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { return _pool; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_class") ) { return _class; }
		if (HX_FIELD_EQ(inName,"length") ) { return get_length(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"putUnsafe") ) { return putUnsafe_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"preAllocate") ) { return preAllocate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxPool_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { _pool=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_class") ) { _class=inValue.Cast< ::Class >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxPool_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_pool"));
	outFields->push(HX_CSTRING("_class"));
	outFields->push(HX_CSTRING("length"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxPool_obj,_pool),HX_CSTRING("_pool")},
	{hx::fsObject /*::Class*/ ,(int)offsetof(FlxPool_obj,_class),HX_CSTRING("_class")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_pool"),
	HX_CSTRING("_class"),
	HX_CSTRING("get"),
	HX_CSTRING("put"),
	HX_CSTRING("putUnsafe"),
	HX_CSTRING("preAllocate"),
	HX_CSTRING("clear"),
	HX_CSTRING("get_length"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxPool_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxPool_obj::__mClass,"__mClass");
};

#endif

Class FlxPool_obj::__mClass;

void FlxPool_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxPool"), hx::TCanCast< FlxPool_obj> ,sStaticFields,sMemberFields,
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

void FlxPool_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
