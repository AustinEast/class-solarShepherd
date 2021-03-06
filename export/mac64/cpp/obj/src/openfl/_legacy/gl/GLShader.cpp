#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_gl_GL
#include <openfl/_legacy/gl/GL.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLObject
#include <openfl/_legacy/gl/GLObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLShader
#include <openfl/_legacy/gl/GLShader.h>
#endif
namespace openfl{
namespace _legacy{
namespace gl{

Void GLShader_obj::__construct(int version,Dynamic id)
{
HX_STACK_FRAME("openfl._legacy.gl.GLShader","new",0x2822b1a1,"openfl._legacy.gl.GLShader.new","openfl/_legacy/gl/GLShader.hx",9,0xd688f310)
HX_STACK_THIS(this)
HX_STACK_ARG(version,"version")
HX_STACK_ARG(id,"id")
{
	HX_STACK_LINE(9)
	super::__construct(version,id);
}
;
	return null();
}

//GLShader_obj::~GLShader_obj() { }

Dynamic GLShader_obj::__CreateEmpty() { return  new GLShader_obj; }
hx::ObjectPtr< GLShader_obj > GLShader_obj::__new(int version,Dynamic id)
{  hx::ObjectPtr< GLShader_obj > result = new GLShader_obj();
	result->__construct(version,id);
	return result;}

Dynamic GLShader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLShader_obj > result = new GLShader_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::String GLShader_obj::getType( ){
	HX_STACK_FRAME("openfl._legacy.gl.GLShader","getType",0xdbeab831,"openfl._legacy.gl.GLShader.getType","openfl/_legacy/gl/GLShader.hx",16,0xd688f310)
	HX_STACK_THIS(this)
	HX_STACK_LINE(16)
	return HX_CSTRING("Shader");
}


bool GLShader_obj::isValid( ){
	HX_STACK_FRAME("openfl._legacy.gl.GLShader","isValid",0x8a9d2e73,"openfl._legacy.gl.GLShader.isValid","openfl/_legacy/gl/GLShader.hx",23,0xd688f310)
	HX_STACK_THIS(this)
	HX_STACK_LINE(23)
	if (((bool((this->id != (int)0)) && bool((this->id != null()))))){
		HX_STACK_LINE(23)
		int _g = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(23)
		return (this->version == _g);
	}
	else{
		HX_STACK_LINE(23)
		return false;
	}
	HX_STACK_LINE(23)
	return false;
}



GLShader_obj::GLShader_obj()
{
}

Dynamic GLShader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		if (HX_FIELD_EQ(inName,"isValid") ) { return isValid_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLShader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void GLShader_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("getType"),
	HX_CSTRING("isValid"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLShader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLShader_obj::__mClass,"__mClass");
};

#endif

Class GLShader_obj::__mClass;

void GLShader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._legacy.gl.GLShader"), hx::TCanCast< GLShader_obj> ,sStaticFields,sMemberFields,
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

void GLShader_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace gl
