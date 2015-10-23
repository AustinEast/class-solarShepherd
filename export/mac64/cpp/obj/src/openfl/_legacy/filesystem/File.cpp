#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_filesystem_File
#include <openfl/_legacy/filesystem/File.h>
#endif
namespace openfl{
namespace _legacy{
namespace filesystem{

Void File_obj::__construct(::String path)
{
HX_STACK_FRAME("openfl._legacy.filesystem.File","new",0x623bfe8d,"openfl._legacy.filesystem.File.new","openfl/_legacy/filesystem/File.hx",34,0x0d6c1524)
HX_STACK_THIS(this)
HX_STACK_ARG(path,"path")
{
	HX_STACK_LINE(36)
	this->set_url(path);
	HX_STACK_LINE(37)
	this->set_nativePath(path);
}
;
	return null();
}

//File_obj::~File_obj() { }

Dynamic File_obj::__CreateEmpty() { return  new File_obj; }
hx::ObjectPtr< File_obj > File_obj::__new(::String path)
{  hx::ObjectPtr< File_obj > result = new File_obj();
	result->__construct(path);
	return result;}

Dynamic File_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< File_obj > result = new File_obj();
	result->__construct(inArgs[0]);
	return result;}

::String File_obj::set_nativePath( ::String value){
	HX_STACK_FRAME("openfl._legacy.filesystem.File","set_nativePath",0x32e83a8c,"openfl._legacy.filesystem.File.set_nativePath","openfl/_legacy/filesystem/File.hx",56,0x0d6c1524)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(58)
	this->nativePath = value;
	HX_STACK_LINE(59)
	return this->nativePath;
}


HX_DEFINE_DYNAMIC_FUNC1(File_obj,set_nativePath,return )

::String File_obj::set_url( ::String value){
	HX_STACK_FRAME("openfl._legacy.filesystem.File","set_url",0xe76ecdbf,"openfl._legacy.filesystem.File.set_url","openfl/_legacy/filesystem/File.hx",64,0x0d6c1524)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(66)
	if (((value == null()))){
		HX_STACK_LINE(68)
		this->url = null();
	}
	else{
		HX_STACK_LINE(72)
		::String _g = ::StringTools_obj::replace(value,HX_CSTRING(" "),HX_CSTRING("%20"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(72)
		this->url = _g;
		HX_STACK_LINE(82)
		this->url = (HX_CSTRING("file:") + this->url);
	}
	HX_STACK_LINE(87)
	return this->url;
}


HX_DEFINE_DYNAMIC_FUNC1(File_obj,set_url,return )

::openfl::_legacy::filesystem::File File_obj::applicationDirectory;

::openfl::_legacy::filesystem::File File_obj::applicationStorageDirectory;

::openfl::_legacy::filesystem::File File_obj::desktopDirectory;

::openfl::_legacy::filesystem::File File_obj::documentsDirectory;

::openfl::_legacy::filesystem::File File_obj::userDirectory;

int File_obj::APP;

int File_obj::STORAGE;

int File_obj::DESKTOP;

int File_obj::DOCS;

int File_obj::USER;

::openfl::_legacy::filesystem::File File_obj::get_applicationDirectory( ){
	HX_STACK_FRAME("openfl._legacy.filesystem.File","get_applicationDirectory",0xe0457f39,"openfl._legacy.filesystem.File.get_applicationDirectory","openfl/_legacy/filesystem/File.hx",49,0x0d6c1524)
	HX_STACK_LINE(49)
	::String _g = ::openfl::_legacy::filesystem::File_obj::lime_filesystem_get_special_dir((int)0);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(49)
	return ::openfl::_legacy::filesystem::File_obj::__new(_g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(File_obj,get_applicationDirectory,return )

::openfl::_legacy::filesystem::File File_obj::get_applicationStorageDirectory( ){
	HX_STACK_FRAME("openfl._legacy.filesystem.File","get_applicationStorageDirectory",0x22a09866,"openfl._legacy.filesystem.File.get_applicationStorageDirectory","openfl/_legacy/filesystem/File.hx",50,0x0d6c1524)
	HX_STACK_LINE(50)
	::String _g = ::openfl::_legacy::filesystem::File_obj::lime_filesystem_get_special_dir((int)1);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(50)
	return ::openfl::_legacy::filesystem::File_obj::__new(_g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(File_obj,get_applicationStorageDirectory,return )

::openfl::_legacy::filesystem::File File_obj::get_desktopDirectory( ){
	HX_STACK_FRAME("openfl._legacy.filesystem.File","get_desktopDirectory",0xf740e52d,"openfl._legacy.filesystem.File.get_desktopDirectory","openfl/_legacy/filesystem/File.hx",51,0x0d6c1524)
	HX_STACK_LINE(51)
	::String _g = ::openfl::_legacy::filesystem::File_obj::lime_filesystem_get_special_dir((int)2);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(51)
	return ::openfl::_legacy::filesystem::File_obj::__new(_g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(File_obj,get_desktopDirectory,return )

::openfl::_legacy::filesystem::File File_obj::get_documentsDirectory( ){
	HX_STACK_FRAME("openfl._legacy.filesystem.File","get_documentsDirectory",0x14a6a591,"openfl._legacy.filesystem.File.get_documentsDirectory","openfl/_legacy/filesystem/File.hx",52,0x0d6c1524)
	HX_STACK_LINE(52)
	::String _g = ::openfl::_legacy::filesystem::File_obj::lime_filesystem_get_special_dir((int)3);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(52)
	return ::openfl::_legacy::filesystem::File_obj::__new(_g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(File_obj,get_documentsDirectory,return )

::openfl::_legacy::filesystem::File File_obj::get_userDirectory( ){
	HX_STACK_FRAME("openfl._legacy.filesystem.File","get_userDirectory",0xea40ece6,"openfl._legacy.filesystem.File.get_userDirectory","openfl/_legacy/filesystem/File.hx",53,0x0d6c1524)
	HX_STACK_LINE(53)
	::String _g = ::openfl::_legacy::filesystem::File_obj::lime_filesystem_get_special_dir((int)4);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(53)
	return ::openfl::_legacy::filesystem::File_obj::__new(_g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(File_obj,get_userDirectory,return )

Dynamic File_obj::lime_filesystem_get_special_dir;


File_obj::File_obj()
{
}

void File_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(File);
	HX_MARK_MEMBER_NAME(nativePath,"nativePath");
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_END_CLASS();
}

void File_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(nativePath,"nativePath");
	HX_VISIT_MEMBER_NAME(url,"url");
}

Dynamic File_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { return url; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"set_url") ) { return set_url_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"nativePath") ) { return nativePath; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"userDirectory") ) { return inCallProp ? get_userDirectory() : userDirectory; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_nativePath") ) { return set_nativePath_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"desktopDirectory") ) { return inCallProp ? get_desktopDirectory() : desktopDirectory; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_userDirectory") ) { return get_userDirectory_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"documentsDirectory") ) { return inCallProp ? get_documentsDirectory() : documentsDirectory; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"applicationDirectory") ) { return inCallProp ? get_applicationDirectory() : applicationDirectory; }
		if (HX_FIELD_EQ(inName,"get_desktopDirectory") ) { return get_desktopDirectory_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_documentsDirectory") ) { return get_documentsDirectory_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_applicationDirectory") ) { return get_applicationDirectory_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"applicationStorageDirectory") ) { return inCallProp ? get_applicationStorageDirectory() : applicationStorageDirectory; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"get_applicationStorageDirectory") ) { return get_applicationStorageDirectory_dyn(); }
		if (HX_FIELD_EQ(inName,"lime_filesystem_get_special_dir") ) { return lime_filesystem_get_special_dir; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic File_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { if (inCallProp) return set_url(inValue);url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"nativePath") ) { if (inCallProp) return set_nativePath(inValue);nativePath=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"userDirectory") ) { userDirectory=inValue.Cast< ::openfl::_legacy::filesystem::File >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"desktopDirectory") ) { desktopDirectory=inValue.Cast< ::openfl::_legacy::filesystem::File >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"documentsDirectory") ) { documentsDirectory=inValue.Cast< ::openfl::_legacy::filesystem::File >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"applicationDirectory") ) { applicationDirectory=inValue.Cast< ::openfl::_legacy::filesystem::File >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"applicationStorageDirectory") ) { applicationStorageDirectory=inValue.Cast< ::openfl::_legacy::filesystem::File >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"lime_filesystem_get_special_dir") ) { lime_filesystem_get_special_dir=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void File_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("nativePath"));
	outFields->push(HX_CSTRING("url"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("applicationDirectory"),
	HX_CSTRING("applicationStorageDirectory"),
	HX_CSTRING("desktopDirectory"),
	HX_CSTRING("documentsDirectory"),
	HX_CSTRING("userDirectory"),
	HX_CSTRING("APP"),
	HX_CSTRING("STORAGE"),
	HX_CSTRING("DESKTOP"),
	HX_CSTRING("DOCS"),
	HX_CSTRING("USER"),
	HX_CSTRING("get_applicationDirectory"),
	HX_CSTRING("get_applicationStorageDirectory"),
	HX_CSTRING("get_desktopDirectory"),
	HX_CSTRING("get_documentsDirectory"),
	HX_CSTRING("get_userDirectory"),
	HX_CSTRING("lime_filesystem_get_special_dir"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(File_obj,nativePath),HX_CSTRING("nativePath")},
	{hx::fsString,(int)offsetof(File_obj,url),HX_CSTRING("url")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("nativePath"),
	HX_CSTRING("url"),
	HX_CSTRING("set_nativePath"),
	HX_CSTRING("set_url"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(File_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(File_obj::applicationDirectory,"applicationDirectory");
	HX_MARK_MEMBER_NAME(File_obj::applicationStorageDirectory,"applicationStorageDirectory");
	HX_MARK_MEMBER_NAME(File_obj::desktopDirectory,"desktopDirectory");
	HX_MARK_MEMBER_NAME(File_obj::documentsDirectory,"documentsDirectory");
	HX_MARK_MEMBER_NAME(File_obj::userDirectory,"userDirectory");
	HX_MARK_MEMBER_NAME(File_obj::APP,"APP");
	HX_MARK_MEMBER_NAME(File_obj::STORAGE,"STORAGE");
	HX_MARK_MEMBER_NAME(File_obj::DESKTOP,"DESKTOP");
	HX_MARK_MEMBER_NAME(File_obj::DOCS,"DOCS");
	HX_MARK_MEMBER_NAME(File_obj::USER,"USER");
	HX_MARK_MEMBER_NAME(File_obj::lime_filesystem_get_special_dir,"lime_filesystem_get_special_dir");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(File_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(File_obj::applicationDirectory,"applicationDirectory");
	HX_VISIT_MEMBER_NAME(File_obj::applicationStorageDirectory,"applicationStorageDirectory");
	HX_VISIT_MEMBER_NAME(File_obj::desktopDirectory,"desktopDirectory");
	HX_VISIT_MEMBER_NAME(File_obj::documentsDirectory,"documentsDirectory");
	HX_VISIT_MEMBER_NAME(File_obj::userDirectory,"userDirectory");
	HX_VISIT_MEMBER_NAME(File_obj::APP,"APP");
	HX_VISIT_MEMBER_NAME(File_obj::STORAGE,"STORAGE");
	HX_VISIT_MEMBER_NAME(File_obj::DESKTOP,"DESKTOP");
	HX_VISIT_MEMBER_NAME(File_obj::DOCS,"DOCS");
	HX_VISIT_MEMBER_NAME(File_obj::USER,"USER");
	HX_VISIT_MEMBER_NAME(File_obj::lime_filesystem_get_special_dir,"lime_filesystem_get_special_dir");
};

#endif

Class File_obj::__mClass;

void File_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._legacy.filesystem.File"), hx::TCanCast< File_obj> ,sStaticFields,sMemberFields,
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

void File_obj::__boot()
{
	APP= (int)0;
	STORAGE= (int)1;
	DESKTOP= (int)2;
	DOCS= (int)3;
	USER= (int)4;
	lime_filesystem_get_special_dir= ::openfl::_legacy::Lib_obj::load(HX_CSTRING("lime-legacy"),HX_CSTRING("lime_legacy_filesystem_get_special_dir"),(int)1);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace filesystem
