#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GL
#include <openfl/_legacy/gl/GL.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLObject
#include <openfl/_legacy/gl/GLObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLTexture
#include <openfl/_legacy/gl/GLTexture.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ArrayBufferView
#include <openfl/_legacy/utils/ArrayBufferView.h>
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
#ifndef INCLUDED_openfl__legacy_utils_UInt8Array
#include <openfl/_legacy/utils/UInt8Array.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_CubeTexture
#include <openfl/display3D/textures/CubeTexture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
namespace openfl{
namespace display3D{
namespace textures{

Void CubeTexture_obj::__construct(::openfl::display3D::Context3D context,::openfl::_legacy::gl::GLTexture glTexture,int size)
{
HX_STACK_FRAME("openfl.display3D.textures.CubeTexture","new",0x2100f37b,"openfl.display3D.textures.CubeTexture.new","openfl/display3D/textures/CubeTexture.hx",22,0xffe9b114)
HX_STACK_THIS(this)
HX_STACK_ARG(context,"context")
HX_STACK_ARG(glTexture,"glTexture")
HX_STACK_ARG(size,"size")
{
	HX_STACK_LINE(24)
	super::__construct(context,glTexture,size,size);
	HX_STACK_LINE(25)
	this->size = size;
	HX_STACK_LINE(26)
	this->mipmapsGenerated = false;
	HX_STACK_LINE(28)
	this->_textures = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(30)
	{
		HX_STACK_LINE(30)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(30)
		while((true)){
			HX_STACK_LINE(30)
			if ((!(((_g < (int)6))))){
				HX_STACK_LINE(30)
				break;
			}
			HX_STACK_LINE(30)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(32)
			int _g1 = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(32)
			Dynamic _g11 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_texture();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(32)
			this->_textures[i] = ::openfl::_legacy::gl::GLTexture_obj::__new(_g1,_g11);
		}
	}
}
;
	return null();
}

//CubeTexture_obj::~CubeTexture_obj() { }

Dynamic CubeTexture_obj::__CreateEmpty() { return  new CubeTexture_obj; }
hx::ObjectPtr< CubeTexture_obj > CubeTexture_obj::__new(::openfl::display3D::Context3D context,::openfl::_legacy::gl::GLTexture glTexture,int size)
{  hx::ObjectPtr< CubeTexture_obj > result = new CubeTexture_obj();
	result->__construct(context,glTexture,size);
	return result;}

Dynamic CubeTexture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CubeTexture_obj > result = new CubeTexture_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::openfl::_legacy::gl::GLTexture CubeTexture_obj::glTextureAt( int index){
	HX_STACK_FRAME("openfl.display3D.textures.CubeTexture","glTextureAt",0xa081fde4,"openfl.display3D.textures.CubeTexture.glTextureAt","openfl/display3D/textures/CubeTexture.hx",41,0xffe9b114)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(41)
	return this->_textures->__get(index).StaticCast< ::openfl::_legacy::gl::GLTexture >();
}


HX_DEFINE_DYNAMIC_FUNC1(CubeTexture_obj,glTextureAt,return )

Void CubeTexture_obj::uploadCompressedTextureFromByteArray( ::openfl::_legacy::utils::ByteArray data,int byteArrayOffset,hx::Null< bool >  __o_async){
bool async = __o_async.Default(false);
	HX_STACK_FRAME("openfl.display3D.textures.CubeTexture","uploadCompressedTextureFromByteArray",0x47d49053,"openfl.display3D.textures.CubeTexture.uploadCompressedTextureFromByteArray","openfl/display3D/textures/CubeTexture.hx",46,0xffe9b114)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
	HX_STACK_ARG(async,"async")
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(CubeTexture_obj,uploadCompressedTextureFromByteArray,(void))

Void CubeTexture_obj::uploadFromBitmapData( ::openfl::_legacy::display::BitmapData bitmapData,int side,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
	HX_STACK_FRAME("openfl.display3D.textures.CubeTexture","uploadFromBitmapData",0xf44b3429,"openfl.display3D.textures.CubeTexture.uploadFromBitmapData","openfl/display3D/textures/CubeTexture.hx",53,0xffe9b114)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_ARG(side,"side")
	HX_STACK_ARG(miplevel,"miplevel")
{
		HX_STACK_LINE(58)
		::openfl::_legacy::utils::ByteArray _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(58)
		{
			HX_STACK_LINE(58)
			int _g = bitmapData->get_width();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(58)
			int _g1 = bitmapData->get_height();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(58)
			bool _g2 = bitmapData->get_transparent();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(58)
			::openfl::_legacy::display::BitmapData rgbaData = ::openfl::_legacy::display::BitmapData_obj::__new(_g,_g1,_g2,null(),null());		HX_STACK_VAR(rgbaData,"rgbaData");
			HX_STACK_LINE(58)
			::openfl::_legacy::geom::Rectangle rect = bitmapData->get_rect();		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(58)
			::openfl::_legacy::geom::Point point = ::openfl::_legacy::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(58)
			rgbaData->copyChannel(bitmapData,rect,point,(int)2,(int)1);
			HX_STACK_LINE(58)
			rgbaData->copyChannel(bitmapData,rect,point,(int)4,(int)2);
			HX_STACK_LINE(58)
			rgbaData->copyChannel(bitmapData,rect,point,(int)8,(int)4);
			HX_STACK_LINE(58)
			rgbaData->copyChannel(bitmapData,rect,point,(int)1,(int)8);
			HX_STACK_LINE(58)
			_g3 = rgbaData->getPixels(rect);
		}
		HX_STACK_LINE(58)
		::openfl::_legacy::utils::UInt8Array source = ::openfl::_legacy::utils::UInt8Array_obj::__new(_g3,null(),null());		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(63)
		{
			HX_STACK_LINE(63)
			::openfl::_legacy::gl::GLTexture texture = this->glTexture;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(63)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_texture((int)34067,(  (((texture == null()))) ? Dynamic(null()) : Dynamic(texture->id) ));
		}
		HX_STACK_LINE(65)
		switch( (int)(side)){
			case (int)0: {
				HX_STACK_LINE(69)
				int width = bitmapData->get_width();		HX_STACK_VAR(width,"width");
				HX_STACK_LINE(69)
				int height = bitmapData->get_height();		HX_STACK_VAR(height,"height");
				HX_STACK_LINE(69)
				::openfl::_legacy::utils::ByteArray _g4;		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(69)
				if (((source == null()))){
					HX_STACK_LINE(69)
					_g4 = null();
				}
				else{
					HX_STACK_LINE(69)
					_g4 = source->getByteBuffer();
				}
				HX_STACK_LINE(69)
				Dynamic _g5;		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(69)
				if (((source == null()))){
					HX_STACK_LINE(69)
					_g5 = null();
				}
				else{
					HX_STACK_LINE(69)
					_g5 = source->getStart();
				}
				HX_STACK_LINE(69)
				::openfl::_legacy::gl::GL_obj::lime_gl_tex_image_2d((int)34069,miplevel,(int)6408,width,height,(int)0,(int)6408,(int)5121,_g4,_g5);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(73)
				int width = bitmapData->get_width();		HX_STACK_VAR(width,"width");
				HX_STACK_LINE(73)
				int height = bitmapData->get_height();		HX_STACK_VAR(height,"height");
				HX_STACK_LINE(73)
				::openfl::_legacy::utils::ByteArray _g6;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(73)
				if (((source == null()))){
					HX_STACK_LINE(73)
					_g6 = null();
				}
				else{
					HX_STACK_LINE(73)
					_g6 = source->getByteBuffer();
				}
				HX_STACK_LINE(73)
				Dynamic _g7;		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(73)
				if (((source == null()))){
					HX_STACK_LINE(73)
					_g7 = null();
				}
				else{
					HX_STACK_LINE(73)
					_g7 = source->getStart();
				}
				HX_STACK_LINE(73)
				::openfl::_legacy::gl::GL_obj::lime_gl_tex_image_2d((int)34070,miplevel,(int)6408,width,height,(int)0,(int)6408,(int)5121,_g6,_g7);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(77)
				int width = bitmapData->get_width();		HX_STACK_VAR(width,"width");
				HX_STACK_LINE(77)
				int height = bitmapData->get_height();		HX_STACK_VAR(height,"height");
				HX_STACK_LINE(77)
				::openfl::_legacy::utils::ByteArray _g8;		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(77)
				if (((source == null()))){
					HX_STACK_LINE(77)
					_g8 = null();
				}
				else{
					HX_STACK_LINE(77)
					_g8 = source->getByteBuffer();
				}
				HX_STACK_LINE(77)
				Dynamic _g9;		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(77)
				if (((source == null()))){
					HX_STACK_LINE(77)
					_g9 = null();
				}
				else{
					HX_STACK_LINE(77)
					_g9 = source->getStart();
				}
				HX_STACK_LINE(77)
				::openfl::_legacy::gl::GL_obj::lime_gl_tex_image_2d((int)34071,miplevel,(int)6408,width,height,(int)0,(int)6408,(int)5121,_g8,_g9);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(81)
				int width = bitmapData->get_width();		HX_STACK_VAR(width,"width");
				HX_STACK_LINE(81)
				int height = bitmapData->get_height();		HX_STACK_VAR(height,"height");
				HX_STACK_LINE(81)
				::openfl::_legacy::utils::ByteArray _g10;		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(81)
				if (((source == null()))){
					HX_STACK_LINE(81)
					_g10 = null();
				}
				else{
					HX_STACK_LINE(81)
					_g10 = source->getByteBuffer();
				}
				HX_STACK_LINE(81)
				Dynamic _g11;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(81)
				if (((source == null()))){
					HX_STACK_LINE(81)
					_g11 = null();
				}
				else{
					HX_STACK_LINE(81)
					_g11 = source->getStart();
				}
				HX_STACK_LINE(81)
				::openfl::_legacy::gl::GL_obj::lime_gl_tex_image_2d((int)34072,miplevel,(int)6408,width,height,(int)0,(int)6408,(int)5121,_g10,_g11);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(85)
				int width = bitmapData->get_width();		HX_STACK_VAR(width,"width");
				HX_STACK_LINE(85)
				int height = bitmapData->get_height();		HX_STACK_VAR(height,"height");
				HX_STACK_LINE(85)
				::openfl::_legacy::utils::ByteArray _g12;		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(85)
				if (((source == null()))){
					HX_STACK_LINE(85)
					_g12 = null();
				}
				else{
					HX_STACK_LINE(85)
					_g12 = source->getByteBuffer();
				}
				HX_STACK_LINE(85)
				Dynamic _g13;		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(85)
				if (((source == null()))){
					HX_STACK_LINE(85)
					_g13 = null();
				}
				else{
					HX_STACK_LINE(85)
					_g13 = source->getStart();
				}
				HX_STACK_LINE(85)
				::openfl::_legacy::gl::GL_obj::lime_gl_tex_image_2d((int)34073,miplevel,(int)6408,width,height,(int)0,(int)6408,(int)5121,_g12,_g13);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(89)
				int width = bitmapData->get_width();		HX_STACK_VAR(width,"width");
				HX_STACK_LINE(89)
				int height = bitmapData->get_height();		HX_STACK_VAR(height,"height");
				HX_STACK_LINE(89)
				::openfl::_legacy::utils::ByteArray _g14;		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(89)
				if (((source == null()))){
					HX_STACK_LINE(89)
					_g14 = null();
				}
				else{
					HX_STACK_LINE(89)
					_g14 = source->getByteBuffer();
				}
				HX_STACK_LINE(89)
				Dynamic _g15;		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(89)
				if (((source == null()))){
					HX_STACK_LINE(89)
					_g15 = null();
				}
				else{
					HX_STACK_LINE(89)
					_g15 = source->getStart();
				}
				HX_STACK_LINE(89)
				::openfl::_legacy::gl::GL_obj::lime_gl_tex_image_2d((int)34074,miplevel,(int)6408,width,height,(int)0,(int)6408,(int)5121,_g14,_g15);
			}
			;break;
			default: {
				HX_STACK_LINE(93)
				HX_STACK_DO_THROW(HX_CSTRING("unknown side type"));
			}
		}
		HX_STACK_LINE(97)
		::openfl::_legacy::gl::GL_obj::lime_gl_bind_texture((int)34067,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(CubeTexture_obj,uploadFromBitmapData,(void))

Void CubeTexture_obj::uploadFromByteArray( ::openfl::_legacy::utils::ByteArray data,int byteArrayOffset,int side,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
	HX_STACK_FRAME("openfl.display3D.textures.CubeTexture","uploadFromByteArray",0x1e356101,"openfl.display3D.textures.CubeTexture.uploadFromByteArray","openfl/display3D/textures/CubeTexture.hx",102,0xffe9b114)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
	HX_STACK_ARG(side,"side")
	HX_STACK_ARG(miplevel,"miplevel")
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(CubeTexture_obj,uploadFromByteArray,(void))


CubeTexture_obj::CubeTexture_obj()
{
}

void CubeTexture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CubeTexture);
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(_textures,"_textures");
	HX_MARK_MEMBER_NAME(mipmapsGenerated,"mipmapsGenerated");
	::openfl::display3D::textures::TextureBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CubeTexture_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(_textures,"_textures");
	HX_VISIT_MEMBER_NAME(mipmapsGenerated,"mipmapsGenerated");
	::openfl::display3D::textures::TextureBase_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CubeTexture_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_textures") ) { return _textures; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"glTextureAt") ) { return glTextureAt_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"mipmapsGenerated") ) { return mipmapsGenerated; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return uploadFromByteArray_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uploadFromBitmapData") ) { return uploadFromBitmapData_dyn(); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"uploadCompressedTextureFromByteArray") ) { return uploadCompressedTextureFromByteArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CubeTexture_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_textures") ) { _textures=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"mipmapsGenerated") ) { mipmapsGenerated=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CubeTexture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("size"));
	outFields->push(HX_CSTRING("_textures"));
	outFields->push(HX_CSTRING("mipmapsGenerated"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(CubeTexture_obj,size),HX_CSTRING("size")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(CubeTexture_obj,_textures),HX_CSTRING("_textures")},
	{hx::fsBool,(int)offsetof(CubeTexture_obj,mipmapsGenerated),HX_CSTRING("mipmapsGenerated")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("size"),
	HX_CSTRING("_textures"),
	HX_CSTRING("mipmapsGenerated"),
	HX_CSTRING("glTextureAt"),
	HX_CSTRING("uploadCompressedTextureFromByteArray"),
	HX_CSTRING("uploadFromBitmapData"),
	HX_CSTRING("uploadFromByteArray"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CubeTexture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CubeTexture_obj::__mClass,"__mClass");
};

#endif

Class CubeTexture_obj::__mClass;

void CubeTexture_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.display3D.textures.CubeTexture"), hx::TCanCast< CubeTexture_obj> ,sStaticFields,sMemberFields,
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

void CubeTexture_obj::__boot()
{
}

} // end namespace openfl
} // end namespace display3D
} // end namespace textures
