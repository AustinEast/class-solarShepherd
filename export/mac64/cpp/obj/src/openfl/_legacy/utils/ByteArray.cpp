#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_zip_Compress
#include <haxe/zip/Compress.h>
#endif
#ifndef INCLUDED_haxe_zip_Uncompress
#include <haxe/zip/Uncompress.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_CompressionAlgorithm
#include <openfl/_legacy/utils/CompressionAlgorithm.h>
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
#ifndef INCLUDED_openfl_errors_EOFError
#include <openfl/errors/EOFError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
namespace openfl{
namespace _legacy{
namespace utils{

Void ByteArray_obj::__construct(hx::Null< int >  __o_size)
{
HX_STACK_FRAME("openfl._legacy.utils.ByteArray","new",0xe3818e62,"openfl._legacy.utils.ByteArray.new","openfl/_legacy/utils/ByteArray.hx",41,0x6d362251)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_size,"size")
int size = __o_size.Default(0);
{
	HX_STACK_LINE(43)
	this->bigEndian = true;
	HX_STACK_LINE(44)
	this->position = (int)0;
	HX_STACK_LINE(46)
	if (((size >= (int)0))){
		HX_STACK_LINE(60)
		Array< unsigned char > data = Array_obj< unsigned char >::__new();		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(62)
		if (((size > (int)0))){
			HX_STACK_LINE(64)
			data[(size - (int)1)] = (int)0;
		}
		HX_STACK_LINE(68)
		super::__construct(size,data);
	}
}
;
	return null();
}

//ByteArray_obj::~ByteArray_obj() { }

Dynamic ByteArray_obj::__CreateEmpty() { return  new ByteArray_obj; }
hx::ObjectPtr< ByteArray_obj > ByteArray_obj::__new(hx::Null< int >  __o_size)
{  hx::ObjectPtr< ByteArray_obj > result = new ByteArray_obj();
	result->__construct(__o_size);
	return result;}

Dynamic ByteArray_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ByteArray_obj > result = new ByteArray_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *ByteArray_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::_legacy::utils::IDataOutput_obj)) return operator ::openfl::_legacy::utils::IDataOutput_obj *();
	if (inType==typeid( ::openfl::_legacy::utils::IMemoryRange_obj)) return operator ::openfl::_legacy::utils::IMemoryRange_obj *();
	if (inType==typeid( ::openfl::_legacy::utils::IDataInput_obj)) return operator ::openfl::_legacy::utils::IDataInput_obj *();
	return super::__ToInterface(inType);
}

void ByteArray_obj::__init__() {
HX_STACK_FRAME("openfl._legacy.utils.ByteArray","__init__",0x5474180e,"openfl._legacy.utils.ByteArray.__init__","openfl/_legacy/utils/ByteArray.hx",740,0x6d362251)
{

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	::openfl::_legacy::utils::ByteArray run(int length){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/_legacy/utils/ByteArray.hx",742,0x6d362251)
		HX_STACK_ARG(length,"length")
		{
			HX_STACK_LINE(742)
			return ::openfl::_legacy::utils::ByteArray_obj::__new(length);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(742)
	Dynamic factory =  Dynamic(new _Function_1_1());		HX_STACK_VAR(factory,"factory");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_2)
	Void run(::openfl::_legacy::utils::ByteArray bytes,int length){
		HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","openfl/_legacy/utils/ByteArray.hx",743,0x6d362251)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_ARG(length,"length")
		{
			HX_STACK_LINE(745)
			if (((length > (int)0))){
				HX_STACK_LINE(747)
				bytes->__Field(HX_CSTRING("ensureElem"),true)((length - (int)1),true);
			}
			HX_STACK_LINE(751)
			bytes->__FieldRef(HX_CSTRING("length")) = length;
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(743)
	Dynamic resize =  Dynamic(new _Function_1_2());		HX_STACK_VAR(resize,"resize");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_3)
	Array< unsigned char > run(::openfl::_legacy::utils::ByteArray bytes){
		HX_STACK_FRAME("*","_Function_1_3",0x5200ed39,"*._Function_1_3","openfl/_legacy/utils/ByteArray.hx",755,0x6d362251)
		HX_STACK_ARG(bytes,"bytes")
		{
			HX_STACK_LINE(755)
			if (((bytes == null()))){
				HX_STACK_LINE(755)
				return null();
			}
			else{
				HX_STACK_LINE(755)
				return bytes->__Field(HX_CSTRING("b"),true);
			}
			HX_STACK_LINE(755)
			return null();
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(755)
	Dynamic bytes =  Dynamic(new _Function_1_3());		HX_STACK_VAR(bytes,"bytes");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_4)
	int run(::openfl::_legacy::utils::ByteArray bytes1){
		HX_STACK_FRAME("*","_Function_1_4",0x5200ed3a,"*._Function_1_4","openfl/_legacy/utils/ByteArray.hx",756,0x6d362251)
		HX_STACK_ARG(bytes1,"bytes1")
		{
			HX_STACK_LINE(756)
			if (((bytes1 == null()))){
				HX_STACK_LINE(756)
				return (int)0;
			}
			else{
				HX_STACK_LINE(756)
				return bytes1->__Field(HX_CSTRING("length"),true);
			}
			HX_STACK_LINE(756)
			return (int)0;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(756)
	Dynamic slen =  Dynamic(new _Function_1_4());		HX_STACK_VAR(slen,"slen");
	HX_STACK_LINE(758)
	Dynamic init = ::openfl::_legacy::Lib_obj::load(HX_CSTRING("lime-legacy"),HX_CSTRING("lime_legacy_byte_array_init"),(int)4);		HX_STACK_VAR(init,"init");
	HX_STACK_LINE(759)
	init(factory,slen,resize,bytes);
}
}

::String ByteArray_obj::asString( ){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","asString",0xb4fe6e21,"openfl._legacy.utils.ByteArray.asString","openfl/_legacy/utils/ByteArray.hx",79,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_LINE(79)
	return this->readUTFBytes(this->length);
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,asString,return )

Void ByteArray_obj::checkData( int length){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","checkData",0xda7e4a94,"openfl._legacy.utils.ByteArray.checkData","openfl/_legacy/utils/ByteArray.hx",86,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_ARG(length,"length")
		HX_STACK_LINE(86)
		if ((((length + this->position) > this->length))){
			HX_STACK_LINE(88)
			this->__throwEOFi();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,checkData,(void))

Void ByteArray_obj::clear( ){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","clear",0xa0f6340f,"openfl._legacy.utils.ByteArray.clear","openfl/_legacy/utils/ByteArray.hx",95,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_LINE(97)
		this->position = (int)0;
		HX_STACK_LINE(98)
		this->length = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,clear,(void))

Void ByteArray_obj::compress( ::openfl::_legacy::utils::CompressionAlgorithm algorithm){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","compress",0x98b78260,"openfl._legacy.utils.ByteArray.compress","openfl/_legacy/utils/ByteArray.hx",103,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_ARG(algorithm,"algorithm")
		HX_STACK_LINE(108)
		::openfl::_legacy::utils::ByteArray src = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(src,"src");
		HX_STACK_LINE(111)
		if (((algorithm == null()))){
			HX_STACK_LINE(113)
			algorithm = ::openfl::_legacy::utils::CompressionAlgorithm_obj::ZLIB;
		}
		HX_STACK_LINE(117)
		::haxe::io::Bytes result;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(119)
		if (((algorithm == ::openfl::_legacy::utils::CompressionAlgorithm_obj::LZMA))){
			HX_STACK_LINE(121)
			Array< unsigned char > _g = ::openfl::_legacy::utils::ByteArray_obj::lime_lzma_encode(src->b);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(121)
			::haxe::io::Bytes _g1 = ::haxe::io::Bytes_obj::ofData(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(121)
			result = _g1;
		}
		else{
			HX_STACK_LINE(125)
			int windowBits;		HX_STACK_VAR(windowBits,"windowBits");
			HX_STACK_LINE(125)
			switch( (int)(algorithm->__Index())){
				case (int)0: {
					HX_STACK_LINE(127)
					windowBits = (int)-15;
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(128)
					windowBits = (int)31;
				}
				;break;
				default: {
					HX_STACK_LINE(129)
					windowBits = (int)15;
				}
			}
			HX_STACK_LINE(136)
			::haxe::io::Bytes _g2 = ::haxe::zip::Compress_obj::run(src,(int)8);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(136)
			result = _g2;
		}
		HX_STACK_LINE(141)
		this->b = result->b;
		HX_STACK_LINE(142)
		this->length = result->length;
		HX_STACK_LINE(143)
		this->position = this->length;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,compress,(void))

Void ByteArray_obj::deflate( ){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","deflate",0x69abf26d,"openfl._legacy.utils.ByteArray.deflate","openfl/_legacy/utils/ByteArray.hx",153,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_LINE(153)
		this->compress(::openfl::_legacy::utils::CompressionAlgorithm_obj::DEFLATE);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,deflate,(void))

Void ByteArray_obj::ensureElem( int size,bool updateLength){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","ensureElem",0x8db597ab,"openfl._legacy.utils.ByteArray.ensureElem","openfl/_legacy/utils/ByteArray.hx",158,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_ARG(size,"size")
		HX_STACK_ARG(updateLength,"updateLength")
		HX_STACK_LINE(159)
		int len = (size + (int)1);		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(171)
		if (((this->b->length < len))){
			HX_STACK_LINE(173)
			this->b->__SetSize(len);
		}
		HX_STACK_LINE(178)
		if (((bool(updateLength) && bool((this->length < len))))){
			HX_STACK_LINE(180)
			this->length = len;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,ensureElem,(void))

::openfl::_legacy::utils::ByteArray ByteArray_obj::getByteBuffer( ){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","getByteBuffer",0x97cfb6e0,"openfl._legacy.utils.ByteArray.getByteBuffer","openfl/_legacy/utils/ByteArray.hx",198,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_LINE(198)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,getByteBuffer,return )

int ByteArray_obj::getLength( ){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","getLength",0x5f99499e,"openfl._legacy.utils.ByteArray.getLength","openfl/_legacy/utils/ByteArray.hx",205,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_LINE(205)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,getLength,return )

Dynamic ByteArray_obj::getNativePointer( ){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","getNativePointer",0x8841622e,"openfl._legacy.utils.ByteArray.getNativePointer","openfl/_legacy/utils/ByteArray.hx",212,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_LINE(212)
	return ::openfl::_legacy::utils::ByteArray_obj::lime_byte_array_get_native_pointer(hx::ObjectPtr<OBJ_>(this));
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,getNativePointer,return )

int ByteArray_obj::getStart( ){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","getStart",0xf8dabeaa,"openfl._legacy.utils.ByteArray.getStart","openfl/_legacy/utils/ByteArray.hx",219,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_LINE(219)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,getStart,return )

Void ByteArray_obj::inflate( ){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","inflate",0xd2cd8389,"openfl._legacy.utils.ByteArray.inflate","openfl/_legacy/utils/ByteArray.hx",226,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_LINE(226)
		this->uncompress(::openfl::_legacy::utils::CompressionAlgorithm_obj::DEFLATE);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,inflate,(void))

bool ByteArray_obj::readBoolean( ){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","readBoolean",0xfae90df4,"openfl._legacy.utils.ByteArray.readBoolean","openfl/_legacy/utils/ByteArray.hx",233,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_LINE(233)
	if (((this->position < this->length))){
		HX_STACK_LINE(233)
		int _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(233)
		{
			HX_STACK_LINE(233)
			int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(233)
			_g = this->b->__get(pos);
		}
		HX_STACK_LINE(233)
		return (_g != (int)0);
	}
	else{
		HX_STACK_LINE(233)
		int _g1 = this->__throwEOFi();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(233)
		return (_g1 != (int)0);
	}
	HX_STACK_LINE(233)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readBoolean,return )

int ByteArray_obj::readByte( ){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","readByte",0x7e13343c,"openfl._legacy.utils.ByteArray.readByte","openfl/_legacy/utils/ByteArray.hx",238,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_LINE(240)
	int value;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(240)
	if (((this->position < this->length))){
		HX_STACK_LINE(240)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(240)
		value = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(240)
		value = this->__throwEOFi();
	}
	HX_STACK_LINE(241)
	if (((((int(value) & int((int)128))) != (int)0))){
		HX_STACK_LINE(241)
		return (value - (int)256);
	}
	else{
		HX_STACK_LINE(241)
		return value;
	}
	HX_STACK_LINE(241)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readByte,return )

Void ByteArray_obj::readBytes( ::openfl::_legacy::utils::ByteArray data,hx::Null< int >  __o_offset,hx::Null< int >  __o_length){
int offset = __o_offset.Default(0);
int length = __o_length.Default(0);
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","readBytes",0xd2ba80b7,"openfl._legacy.utils.ByteArray.readBytes","openfl/_legacy/utils/ByteArray.hx",246,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(offset,"offset")
	HX_STACK_ARG(length,"length")
{
		HX_STACK_LINE(248)
		if (((length == (int)0))){
			HX_STACK_LINE(250)
			length = (this->length - this->position);
		}
		HX_STACK_LINE(254)
		if ((((this->position + length) > this->length))){
			HX_STACK_LINE(256)
			this->__throwEOFi();
		}
		HX_STACK_LINE(260)
		if (((data->length < (offset + length)))){
			HX_STACK_LINE(262)
			data->ensureElem(((offset + length) - (int)1),true);
		}
		HX_STACK_LINE(269)
		Array< unsigned char > b1 = this->b;		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(270)
		Array< unsigned char > b2 = data->b;		HX_STACK_VAR(b2,"b2");
		HX_STACK_LINE(271)
		int p = this->position;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(272)
		{
			HX_STACK_LINE(272)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(272)
			while((true)){
				HX_STACK_LINE(272)
				if ((!(((_g < length))))){
					HX_STACK_LINE(272)
					break;
				}
				HX_STACK_LINE(272)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(274)
				b2[(offset + i)] = b1->__get((p + i));
			}
		}
		HX_STACK_LINE(279)
		hx::AddEq(this->position,length);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ByteArray_obj,readBytes,(void))

Float ByteArray_obj::readDouble( ){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","readDouble",0x9bd1f545,"openfl._legacy.utils.ByteArray.readDouble","openfl/_legacy/utils/ByteArray.hx",284,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_LINE(286)
	if ((((this->position + (int)8) > this->length))){
		HX_STACK_LINE(288)
		this->__throwEOFi();
	}
	HX_STACK_LINE(295)
	Array< unsigned char > _g = this->b->slice(this->position,(this->position + (int)8));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(295)
	::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::__new((int)8,_g);		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(304)
	hx::AddEq(this->position,(int)8);
	HX_STACK_LINE(305)
	return ::openfl::_legacy::utils::ByteArray_obj::_double_of_bytes(bytes->b,this->bigEndian);
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readDouble,return )

Float ByteArray_obj::readFloat( ){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","readFloat",0x17b93de8,"openfl._legacy.utils.ByteArray.readFloat","openfl/_legacy/utils/ByteArray.hx",321,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_LINE(323)
	if ((((this->position + (int)4) > this->length))){
		HX_STACK_LINE(325)
		this->__throwEOFi();
	}
	HX_STACK_LINE(332)
	Array< unsigned char > _g = this->b->slice(this->position,(this->position + (int)4));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(332)
	::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::__new((int)4,_g);		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(341)
	hx::AddEq(this->position,(int)4);
	HX_STACK_LINE(342)
	return ::openfl::_legacy::utils::ByteArray_obj::_float_of_bytes(bytes->b,this->bigEndian);
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readFloat,return )

int ByteArray_obj::readInt( ){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","readInt",0xc97b9a3b,"openfl._legacy.utils.ByteArray.readInt","openfl/_legacy/utils/ByteArray.hx",347,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_LINE(349)
	int ch1;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(349)
	if (((this->position < this->length))){
		HX_STACK_LINE(349)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(349)
		ch1 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(349)
		ch1 = this->__throwEOFi();
	}
	HX_STACK_LINE(350)
	int ch2;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(350)
	if (((this->position < this->length))){
		HX_STACK_LINE(350)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(350)
		ch2 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(350)
		ch2 = this->__throwEOFi();
	}
	HX_STACK_LINE(351)
	int ch3;		HX_STACK_VAR(ch3,"ch3");
	HX_STACK_LINE(351)
	if (((this->position < this->length))){
		HX_STACK_LINE(351)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(351)
		ch3 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(351)
		ch3 = this->__throwEOFi();
	}
	HX_STACK_LINE(352)
	int ch4;		HX_STACK_VAR(ch4,"ch4");
	HX_STACK_LINE(352)
	if (((this->position < this->length))){
		HX_STACK_LINE(352)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(352)
		ch4 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(352)
		ch4 = this->__throwEOFi();
	}
	HX_STACK_LINE(354)
	if ((this->bigEndian)){
		HX_STACK_LINE(354)
		return (int((int((int((int(ch1) << int((int)24))) | int((int(ch2) << int((int)16))))) | int((int(ch3) << int((int)8))))) | int(ch4));
	}
	else{
		HX_STACK_LINE(354)
		return (int((int((int((int(ch4) << int((int)24))) | int((int(ch3) << int((int)16))))) | int((int(ch2) << int((int)8))))) | int(ch1));
	}
	HX_STACK_LINE(354)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readInt,return )

::String ByteArray_obj::readMultiByte( int length,::String charSet){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","readMultiByte",0xa88d946d,"openfl._legacy.utils.ByteArray.readMultiByte","openfl/_legacy/utils/ByteArray.hx",361,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_ARG(length,"length")
	HX_STACK_ARG(charSet,"charSet")
	HX_STACK_LINE(361)
	return this->readUTFBytes(length);
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,readMultiByte,return )

Void ByteArray_obj::writeMultiByte( ::String value,::String charSet){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","writeMultiByte",0xc4f34280,"openfl._legacy.utils.ByteArray.writeMultiByte","openfl/_legacy/utils/ByteArray.hx",366,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(charSet,"charSet")
		HX_STACK_LINE(366)
		this->writeUTFBytes(value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,writeMultiByte,(void))

int ByteArray_obj::readShort( ){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","readShort",0x9149fcc8,"openfl._legacy.utils.ByteArray.readShort","openfl/_legacy/utils/ByteArray.hx",369,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_LINE(371)
	int ch1;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(371)
	if (((this->position < this->length))){
		HX_STACK_LINE(371)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(371)
		ch1 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(371)
		ch1 = this->__throwEOFi();
	}
	HX_STACK_LINE(372)
	int ch2;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(372)
	if (((this->position < this->length))){
		HX_STACK_LINE(372)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(372)
		ch2 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(372)
		ch2 = this->__throwEOFi();
	}
	HX_STACK_LINE(374)
	int value;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(374)
	if ((this->bigEndian)){
		HX_STACK_LINE(374)
		value = (int((int(ch1) << int((int)8))) | int(ch2));
	}
	else{
		HX_STACK_LINE(374)
		value = (int((int(ch2) << int((int)8))) | int(ch1));
	}
	HX_STACK_LINE(376)
	if (((((int(value) & int((int)32768))) != (int)0))){
		HX_STACK_LINE(376)
		return (value - (int)65536);
	}
	else{
		HX_STACK_LINE(376)
		return value;
	}
	HX_STACK_LINE(376)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readShort,return )

int ByteArray_obj::readUnsignedByte( ){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","readUnsignedByte",0xa9bc33d1,"openfl._legacy.utils.ByteArray.readUnsignedByte","openfl/_legacy/utils/ByteArray.hx",383,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_LINE(383)
	if (((this->position < this->length))){
		HX_STACK_LINE(383)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(383)
		return this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(383)
		return this->__throwEOFi();
	}
	HX_STACK_LINE(383)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUnsignedByte,return )

int ByteArray_obj::readUnsignedInt( ){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","readUnsignedInt",0xe0a36446,"openfl._legacy.utils.ByteArray.readUnsignedInt","openfl/_legacy/utils/ByteArray.hx",388,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_LINE(390)
	int ch1;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(390)
	if (((this->position < this->length))){
		HX_STACK_LINE(390)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(390)
		ch1 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(390)
		ch1 = this->__throwEOFi();
	}
	HX_STACK_LINE(391)
	int ch2;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(391)
	if (((this->position < this->length))){
		HX_STACK_LINE(391)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(391)
		ch2 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(391)
		ch2 = this->__throwEOFi();
	}
	HX_STACK_LINE(392)
	int ch3;		HX_STACK_VAR(ch3,"ch3");
	HX_STACK_LINE(392)
	if (((this->position < this->length))){
		HX_STACK_LINE(392)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(392)
		ch3 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(392)
		ch3 = this->__throwEOFi();
	}
	HX_STACK_LINE(393)
	int ch4;		HX_STACK_VAR(ch4,"ch4");
	HX_STACK_LINE(393)
	if (((this->position < this->length))){
		HX_STACK_LINE(393)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(393)
		ch4 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(393)
		ch4 = this->__throwEOFi();
	}
	HX_STACK_LINE(395)
	if ((this->bigEndian)){
		HX_STACK_LINE(395)
		return (int((int((int((int(ch1) << int((int)24))) | int((int(ch2) << int((int)16))))) | int((int(ch3) << int((int)8))))) | int(ch4));
	}
	else{
		HX_STACK_LINE(395)
		return (int((int((int((int(ch4) << int((int)24))) | int((int(ch3) << int((int)16))))) | int((int(ch2) << int((int)8))))) | int(ch1));
	}
	HX_STACK_LINE(395)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUnsignedInt,return )

int ByteArray_obj::readUnsignedShort( ){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","readUnsignedShort",0x99809f93,"openfl._legacy.utils.ByteArray.readUnsignedShort","openfl/_legacy/utils/ByteArray.hx",400,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_LINE(402)
	int ch1;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(402)
	if (((this->position < this->length))){
		HX_STACK_LINE(402)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(402)
		ch1 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(402)
		ch1 = this->__throwEOFi();
	}
	HX_STACK_LINE(403)
	int ch2;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(403)
	if (((this->position < this->length))){
		HX_STACK_LINE(403)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(403)
		ch2 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(403)
		ch2 = this->__throwEOFi();
	}
	HX_STACK_LINE(405)
	if ((this->bigEndian)){
		HX_STACK_LINE(405)
		return (int((int(ch1) << int((int)8))) | int(ch2));
	}
	else{
		HX_STACK_LINE(405)
		return (((int(ch2) << int((int)8))) + ch1);
	}
	HX_STACK_LINE(405)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUnsignedShort,return )

::String ByteArray_obj::readUTF( ){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","readUTF",0xc9849e73,"openfl._legacy.utils.ByteArray.readUTF","openfl/_legacy/utils/ByteArray.hx",410,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_LINE(412)
	int len = this->readUnsignedShort();		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(413)
	return this->readUTFBytes(len);
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUTF,return )

::String ByteArray_obj::readUTFBytes( int length){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","readUTFBytes",0xe6ce98f8,"openfl._legacy.utils.ByteArray.readUTFBytes","openfl/_legacy/utils/ByteArray.hx",418,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(420)
	if ((((this->position + length) > this->length))){
		HX_STACK_LINE(422)
		this->__throwEOFi();
	}
	HX_STACK_LINE(426)
	int p = this->position;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(427)
	hx::AddEq(this->position,length);
	HX_STACK_LINE(436)
	::String result = HX_CSTRING("");		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(437)
	::__hxcpp_string_of_bytes(this->b,result,p,length);
	HX_STACK_LINE(438)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,readUTFBytes,return )

Void ByteArray_obj::setLength( int length){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","setLength",0x42ea35aa,"openfl._legacy.utils.ByteArray.setLength","openfl/_legacy/utils/ByteArray.hx",448,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_ARG(length,"length")
		HX_STACK_LINE(450)
		if (((length > (int)0))){
			HX_STACK_LINE(452)
			this->ensureElem((length - (int)1),false);
		}
		HX_STACK_LINE(456)
		this->length = length;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,setLength,(void))

::openfl::_legacy::utils::ByteArray ByteArray_obj::slice( int begin,Dynamic end){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","slice",0xd76286d4,"openfl._legacy.utils.ByteArray.slice","openfl/_legacy/utils/ByteArray.hx",461,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(463)
	if (((begin < (int)0))){
		HX_STACK_LINE(465)
		hx::AddEq(begin,this->length);
		HX_STACK_LINE(467)
		if (((begin < (int)0))){
			HX_STACK_LINE(469)
			begin = (int)0;
		}
	}
	HX_STACK_LINE(475)
	if (((end == null()))){
		HX_STACK_LINE(477)
		end = this->length;
	}
	HX_STACK_LINE(481)
	if (((end < (int)0))){
		HX_STACK_LINE(483)
		hx::AddEq(end,this->length);
		HX_STACK_LINE(485)
		if (((end < (int)0))){
			HX_STACK_LINE(487)
			end = (int)0;
		}
	}
	HX_STACK_LINE(493)
	if (((begin >= end))){
		HX_STACK_LINE(495)
		return ::openfl::_legacy::utils::ByteArray_obj::__new(null());
	}
	HX_STACK_LINE(499)
	::openfl::_legacy::utils::ByteArray result = ::openfl::_legacy::utils::ByteArray_obj::__new((end - begin));		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(501)
	int opos = this->position;		HX_STACK_VAR(opos,"opos");
	HX_STACK_LINE(502)
	result->blit((int)0,hx::ObjectPtr<OBJ_>(this),begin,(end - begin));
	HX_STACK_LINE(504)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,slice,return )

Void ByteArray_obj::uncompress( ::openfl::_legacy::utils::CompressionAlgorithm algorithm){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","uncompress",0x790e1539,"openfl._legacy.utils.ByteArray.uncompress","openfl/_legacy/utils/ByteArray.hx",509,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_ARG(algorithm,"algorithm")
		HX_STACK_LINE(511)
		if (((algorithm == null()))){
			HX_STACK_LINE(511)
			algorithm = ::openfl::_legacy::utils::CompressionAlgorithm_obj::ZLIB;
		}
		HX_STACK_LINE(516)
		::openfl::_legacy::utils::ByteArray src = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(src,"src");
		HX_STACK_LINE(519)
		::haxe::io::Bytes result;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(521)
		if (((algorithm == ::openfl::_legacy::utils::CompressionAlgorithm_obj::LZMA))){
			HX_STACK_LINE(523)
			Array< unsigned char > _g = ::openfl::_legacy::utils::ByteArray_obj::lime_lzma_decode(src->b);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(523)
			::haxe::io::Bytes _g1 = ::haxe::io::Bytes_obj::ofData(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(523)
			result = _g1;
		}
		else{
			HX_STACK_LINE(527)
			int windowBits;		HX_STACK_VAR(windowBits,"windowBits");
			HX_STACK_LINE(527)
			switch( (int)(algorithm->__Index())){
				case (int)0: {
					HX_STACK_LINE(529)
					windowBits = (int)-15;
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(530)
					windowBits = (int)31;
				}
				;break;
				default: {
					HX_STACK_LINE(531)
					windowBits = (int)15;
				}
			}
			HX_STACK_LINE(538)
			::haxe::io::Bytes _g2 = ::haxe::zip::Uncompress_obj::run(src,null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(538)
			result = _g2;
		}
		HX_STACK_LINE(543)
		this->b = result->b;
		HX_STACK_LINE(544)
		this->length = result->length;
		HX_STACK_LINE(545)
		this->position = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,uncompress,(void))

Void ByteArray_obj::write_uncheck( int byte){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","write_uncheck",0xf8b3e1b1,"openfl._legacy.utils.ByteArray.write_uncheck","openfl/_legacy/utils/ByteArray.hx",553,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_ARG(byte,"byte")
		HX_STACK_LINE(556)
		int _g = (this->position)++;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(556)
		this->b->__unsafe_set(_g,byte);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,write_uncheck,(void))

Void ByteArray_obj::writeBoolean( bool value){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","writeBoolean",0xd7ed0147,"openfl._legacy.utils.ByteArray.writeBoolean","openfl/_legacy/utils/ByteArray.hx",568,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(568)
		this->ensureElem(this->position,true);
		HX_STACK_LINE(568)
		int _g = (this->position)++;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(568)
		if ((value)){
			HX_STACK_LINE(568)
			this->b[_g] = (int)1;
		}
		else{
			HX_STACK_LINE(568)
			this->b[_g] = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeBoolean,(void))

Void ByteArray_obj::writeObject( Dynamic object){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","writeObject",0xd4376100,"openfl._legacy.utils.ByteArray.writeObject","openfl/_legacy/utils/ByteArray.hx",571,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_ARG(object,"object")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeObject,(void))

Void ByteArray_obj::writeByte( int value){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","writeByte",0x8e123f09,"openfl._legacy.utils.ByteArray.writeByte","openfl/_legacy/utils/ByteArray.hx",576,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(578)
		this->ensureElem(this->position,true);
		HX_STACK_LINE(583)
		int _g = (this->position)++;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(583)
		this->b[_g] = value;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeByte,(void))

Void ByteArray_obj::writeBytes( ::haxe::io::Bytes bytes,hx::Null< int >  __o_offset,hx::Null< int >  __o_length){
int offset = __o_offset.Default(0);
int length = __o_length.Default(0);
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","writeBytes",0xc1e4e94a,"openfl._legacy.utils.ByteArray.writeBytes","openfl/_legacy/utils/ByteArray.hx",591,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(offset,"offset")
	HX_STACK_ARG(length,"length")
{
		HX_STACK_LINE(593)
		if (((length == (int)0))){
			HX_STACK_LINE(593)
			length = (bytes->length - offset);
		}
		HX_STACK_LINE(594)
		this->ensureElem(((this->position + length) - (int)1),true);
		HX_STACK_LINE(595)
		int opos = this->position;		HX_STACK_VAR(opos,"opos");
		HX_STACK_LINE(596)
		hx::AddEq(this->position,length);
		HX_STACK_LINE(597)
		this->blit(opos,bytes,offset,length);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ByteArray_obj,writeBytes,(void))

Void ByteArray_obj::writeDouble( Float x){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","writeDouble",0xf1c30d52,"openfl._legacy.utils.ByteArray.writeDouble","openfl/_legacy/utils/ByteArray.hx",602,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(607)
		Array< unsigned char > _g = ::openfl::_legacy::utils::ByteArray_obj::_double_bytes(x,this->bigEndian);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(607)
		::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::ofData(_g);		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(610)
		this->writeBytes(bytes,(int)0,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeDouble,(void))

Void ByteArray_obj::writeFile( ::String path){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","writeFile",0x90aaee7d,"openfl._legacy.utils.ByteArray.writeFile","openfl/_legacy/utils/ByteArray.hx",619,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_ARG(path,"path")
		HX_STACK_LINE(619)
		::openfl::_legacy::utils::ByteArray_obj::lime_byte_array_overwrite_file(path,hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeFile,(void))

Void ByteArray_obj::writeFloat( Float x){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","writeFloat",0x06e3a67b,"openfl._legacy.utils.ByteArray.writeFloat","openfl/_legacy/utils/ByteArray.hx",626,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(629)
		Array< unsigned char > _g = ::openfl::_legacy::utils::ByteArray_obj::_float_bytes(x,this->bigEndian);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(629)
		::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::ofData(_g);		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(634)
		this->writeBytes(bytes,(int)0,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeFloat,(void))

Void ByteArray_obj::writeInt( int value){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","writeInt",0x38e8a80e,"openfl._legacy.utils.ByteArray.writeInt","openfl/_legacy/utils/ByteArray.hx",639,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(641)
		this->ensureElem((this->position + (int)3),true);
		HX_STACK_LINE(643)
		if ((this->bigEndian)){
			HX_STACK_LINE(645)
			{
				HX_STACK_LINE(645)
				int _g = (this->position)++;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(645)
				this->b->__unsafe_set(_g,(int(value) >> int((int)24)));
			}
			HX_STACK_LINE(646)
			{
				HX_STACK_LINE(646)
				int _g1 = (this->position)++;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(646)
				this->b->__unsafe_set(_g1,(int(value) >> int((int)16)));
			}
			HX_STACK_LINE(647)
			{
				HX_STACK_LINE(647)
				int _g2 = (this->position)++;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(647)
				this->b->__unsafe_set(_g2,(int(value) >> int((int)8)));
			}
			HX_STACK_LINE(648)
			{
				HX_STACK_LINE(648)
				int _g3 = (this->position)++;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(648)
				this->b->__unsafe_set(_g3,value);
			}
		}
		else{
			HX_STACK_LINE(652)
			{
				HX_STACK_LINE(652)
				int _g4 = (this->position)++;		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(652)
				this->b->__unsafe_set(_g4,value);
			}
			HX_STACK_LINE(653)
			{
				HX_STACK_LINE(653)
				int _g5 = (this->position)++;		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(653)
				this->b->__unsafe_set(_g5,(int(value) >> int((int)8)));
			}
			HX_STACK_LINE(654)
			{
				HX_STACK_LINE(654)
				int _g6 = (this->position)++;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(654)
				this->b->__unsafe_set(_g6,(int(value) >> int((int)16)));
			}
			HX_STACK_LINE(655)
			{
				HX_STACK_LINE(655)
				int _g7 = (this->position)++;		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(655)
				this->b->__unsafe_set(_g7,(int(value) >> int((int)24)));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeInt,(void))

Void ByteArray_obj::writeShort( int value){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","writeShort",0x8074655b,"openfl._legacy.utils.ByteArray.writeShort","openfl/_legacy/utils/ByteArray.hx",662,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(664)
		this->ensureElem((this->position + (int)1),true);
		HX_STACK_LINE(666)
		if ((this->bigEndian)){
			HX_STACK_LINE(668)
			{
				HX_STACK_LINE(668)
				int _g = (this->position)++;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(668)
				this->b->__unsafe_set(_g,(int(value) >> int((int)8)));
			}
			HX_STACK_LINE(669)
			{
				HX_STACK_LINE(669)
				int _g1 = (this->position)++;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(669)
				this->b->__unsafe_set(_g1,value);
			}
		}
		else{
			HX_STACK_LINE(673)
			{
				HX_STACK_LINE(673)
				int _g2 = (this->position)++;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(673)
				this->b->__unsafe_set(_g2,value);
			}
			HX_STACK_LINE(674)
			{
				HX_STACK_LINE(674)
				int _g3 = (this->position)++;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(674)
				this->b->__unsafe_set(_g3,(int(value) >> int((int)8)));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeShort,(void))

Void ByteArray_obj::writeUnsignedInt( int value){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","writeUnsignedInt",0x245efd19,"openfl._legacy.utils.ByteArray.writeUnsignedInt","openfl/_legacy/utils/ByteArray.hx",683,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(683)
		this->writeInt(value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeUnsignedInt,(void))

Void ByteArray_obj::writeUTF( ::String s){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","writeUTF",0x38f1ac46,"openfl._legacy.utils.ByteArray.writeUTF","openfl/_legacy/utils/ByteArray.hx",688,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(693)
		::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::ofString(s);		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(696)
		this->writeShort(bytes->length);
		HX_STACK_LINE(697)
		this->writeBytes(bytes,(int)0,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeUTF,(void))

Void ByteArray_obj::writeUTFBytes( ::String s){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","writeUTFBytes",0x6d3f8e45,"openfl._legacy.utils.ByteArray.writeUTFBytes","openfl/_legacy/utils/ByteArray.hx",702,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(707)
		::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::ofString(s);		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(710)
		this->writeBytes(bytes,(int)0,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeUTFBytes,(void))

Void ByteArray_obj::__fromBytes( ::haxe::io::Bytes bytes){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","__fromBytes",0xca4bcb83,"openfl._legacy.utils.ByteArray.__fromBytes","openfl/_legacy/utils/ByteArray.hx",715,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_LINE(717)
		this->b = bytes->b;
		HX_STACK_LINE(718)
		this->length = bytes->length;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,__fromBytes,(void))

int ByteArray_obj::__get( int pos){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","__get",0x4ac5a3f8,"openfl._legacy.utils.ByteArray.__get","openfl/_legacy/utils/ByteArray.hx",730,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(730)
	return this->b->__get(pos);
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,__get,return )

Void ByteArray_obj::__set( int pos,int v){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","__set",0x4acebf04,"openfl._legacy.utils.ByteArray.__set","openfl/_legacy/utils/ByteArray.hx",769,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pos,"pos")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(769)
		this->b[pos] = v;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,__set,(void))

int ByteArray_obj::__throwEOFi( ){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","__throwEOFi",0xc2bfa955,"openfl._legacy.utils.ByteArray.__throwEOFi","openfl/_legacy/utils/ByteArray.hx",777,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_LINE(779)
	HX_STACK_DO_THROW(::openfl::errors::EOFError_obj::__new());
	HX_STACK_LINE(780)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,__throwEOFi,return )

int ByteArray_obj::get_bytesAvailable( ){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","get_bytesAvailable",0x3b8f80e5,"openfl._legacy.utils.ByteArray.get_bytesAvailable","openfl/_legacy/utils/ByteArray.hx",792,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_LINE(792)
	return (this->length - this->position);
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,get_bytesAvailable,return )

int ByteArray_obj::get_byteLength( ){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","get_byteLength",0xc5cf8395,"openfl._legacy.utils.ByteArray.get_byteLength","openfl/_legacy/utils/ByteArray.hx",793,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_LINE(793)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,get_byteLength,return )

::String ByteArray_obj::get_endian( ){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","get_endian",0x5a9aeea2,"openfl._legacy.utils.ByteArray.get_endian","openfl/_legacy/utils/ByteArray.hx",794,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_LINE(794)
	if ((this->bigEndian)){
		HX_STACK_LINE(794)
		return HX_CSTRING("bigEndian");
	}
	else{
		HX_STACK_LINE(794)
		return HX_CSTRING("littleEndian");
	}
	HX_STACK_LINE(794)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,get_endian,return )

::String ByteArray_obj::set_endian( ::String value){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","set_endian",0x5e188d16,"openfl._legacy.utils.ByteArray.set_endian","openfl/_legacy/utils/ByteArray.hx",795,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(795)
	this->bigEndian = (value == HX_CSTRING("bigEndian"));
	HX_STACK_LINE(795)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,set_endian,return )

::openfl::_legacy::utils::ByteArray ByteArray_obj::fromBytes( ::haxe::io::Bytes bytes){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","fromBytes",0xb65c1e23,"openfl._legacy.utils.ByteArray.fromBytes","openfl/_legacy/utils/ByteArray.hx",187,0x6d362251)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(189)
	::openfl::_legacy::utils::ByteArray result = ::openfl::_legacy::utils::ByteArray_obj::__new((int)-1);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(190)
	{
		HX_STACK_LINE(190)
		result->b = bytes->b;
		HX_STACK_LINE(190)
		result->length = bytes->length;
	}
	HX_STACK_LINE(191)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,fromBytes,return )

::openfl::_legacy::utils::ByteArray ByteArray_obj::readFile( ::String path){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","readFile",0x80abe3b0,"openfl._legacy.utils.ByteArray.readFile","openfl/_legacy/utils/ByteArray.hx",314,0x6d362251)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(314)
	return ::openfl::_legacy::utils::ByteArray_obj::lime_byte_array_read_file(path);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,readFile,return )

Dynamic ByteArray_obj::_double_bytes;

Dynamic ByteArray_obj::_double_of_bytes;

Dynamic ByteArray_obj::_float_bytes;

Dynamic ByteArray_obj::_float_of_bytes;

Dynamic ByteArray_obj::lime_byte_array_overwrite_file;

Dynamic ByteArray_obj::lime_byte_array_read_file;

Dynamic ByteArray_obj::lime_byte_array_get_native_pointer;

Dynamic ByteArray_obj::lime_lzma_encode;

Dynamic ByteArray_obj::lime_lzma_decode;


ByteArray_obj::ByteArray_obj()
{
}

Dynamic ByteArray_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"slice") ) { return slice_dyn(); }
		if (HX_FIELD_EQ(inName,"__get") ) { return __get_dyn(); }
		if (HX_FIELD_EQ(inName,"__set") ) { return __set_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"endian") ) { return get_endian(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"deflate") ) { return deflate_dyn(); }
		if (HX_FIELD_EQ(inName,"inflate") ) { return inflate_dyn(); }
		if (HX_FIELD_EQ(inName,"readInt") ) { return readInt_dyn(); }
		if (HX_FIELD_EQ(inName,"readUTF") ) { return readUTF_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readFile") ) { return readFile_dyn(); }
		if (HX_FIELD_EQ(inName,"position") ) { return position; }
		if (HX_FIELD_EQ(inName,"asString") ) { return asString_dyn(); }
		if (HX_FIELD_EQ(inName,"compress") ) { return compress_dyn(); }
		if (HX_FIELD_EQ(inName,"getStart") ) { return getStart_dyn(); }
		if (HX_FIELD_EQ(inName,"readByte") ) { return readByte_dyn(); }
		if (HX_FIELD_EQ(inName,"writeInt") ) { return writeInt_dyn(); }
		if (HX_FIELD_EQ(inName,"writeUTF") ) { return writeUTF_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { return fromBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"bigEndian") ) { return bigEndian; }
		if (HX_FIELD_EQ(inName,"checkData") ) { return checkData_dyn(); }
		if (HX_FIELD_EQ(inName,"getLength") ) { return getLength_dyn(); }
		if (HX_FIELD_EQ(inName,"readBytes") ) { return readBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"readFloat") ) { return readFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"readShort") ) { return readShort_dyn(); }
		if (HX_FIELD_EQ(inName,"setLength") ) { return setLength_dyn(); }
		if (HX_FIELD_EQ(inName,"writeByte") ) { return writeByte_dyn(); }
		if (HX_FIELD_EQ(inName,"writeFile") ) { return writeFile_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteLength") ) { return inCallProp ? get_byteLength() : byteLength; }
		if (HX_FIELD_EQ(inName,"ensureElem") ) { return ensureElem_dyn(); }
		if (HX_FIELD_EQ(inName,"readDouble") ) { return readDouble_dyn(); }
		if (HX_FIELD_EQ(inName,"uncompress") ) { return uncompress_dyn(); }
		if (HX_FIELD_EQ(inName,"writeBytes") ) { return writeBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"writeFloat") ) { return writeFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"writeShort") ) { return writeShort_dyn(); }
		if (HX_FIELD_EQ(inName,"get_endian") ) { return get_endian_dyn(); }
		if (HX_FIELD_EQ(inName,"set_endian") ) { return set_endian_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"readBoolean") ) { return readBoolean_dyn(); }
		if (HX_FIELD_EQ(inName,"writeObject") ) { return writeObject_dyn(); }
		if (HX_FIELD_EQ(inName,"writeDouble") ) { return writeDouble_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromBytes") ) { return __fromBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"__throwEOFi") ) { return __throwEOFi_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_float_bytes") ) { return _float_bytes; }
		if (HX_FIELD_EQ(inName,"readUTFBytes") ) { return readUTFBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"writeBoolean") ) { return writeBoolean_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_double_bytes") ) { return _double_bytes; }
		if (HX_FIELD_EQ(inName,"getByteBuffer") ) { return getByteBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"readMultiByte") ) { return readMultiByte_dyn(); }
		if (HX_FIELD_EQ(inName,"write_uncheck") ) { return write_uncheck_dyn(); }
		if (HX_FIELD_EQ(inName,"writeUTFBytes") ) { return writeUTFBytes_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bytesAvailable") ) { return inCallProp ? get_bytesAvailable() : bytesAvailable; }
		if (HX_FIELD_EQ(inName,"writeMultiByte") ) { return writeMultiByte_dyn(); }
		if (HX_FIELD_EQ(inName,"get_byteLength") ) { return get_byteLength_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_float_of_bytes") ) { return _float_of_bytes; }
		if (HX_FIELD_EQ(inName,"readUnsignedInt") ) { return readUnsignedInt_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_double_of_bytes") ) { return _double_of_bytes; }
		if (HX_FIELD_EQ(inName,"lime_lzma_encode") ) { return lime_lzma_encode; }
		if (HX_FIELD_EQ(inName,"lime_lzma_decode") ) { return lime_lzma_decode; }
		if (HX_FIELD_EQ(inName,"getNativePointer") ) { return getNativePointer_dyn(); }
		if (HX_FIELD_EQ(inName,"readUnsignedByte") ) { return readUnsignedByte_dyn(); }
		if (HX_FIELD_EQ(inName,"writeUnsignedInt") ) { return writeUnsignedInt_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"readUnsignedShort") ) { return readUnsignedShort_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_bytesAvailable") ) { return get_bytesAvailable_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_byte_array_read_file") ) { return lime_byte_array_read_file; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_byte_array_overwrite_file") ) { return lime_byte_array_overwrite_file; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"lime_byte_array_get_native_pointer") ) { return lime_byte_array_get_native_pointer; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ByteArray_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"endian") ) { return set_endian(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bigEndian") ) { bigEndian=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteLength") ) { byteLength=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_float_bytes") ) { _float_bytes=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_double_bytes") ) { _double_bytes=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bytesAvailable") ) { bytesAvailable=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_float_of_bytes") ) { _float_of_bytes=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_double_of_bytes") ) { _double_of_bytes=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_lzma_encode") ) { lime_lzma_encode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_lzma_decode") ) { lime_lzma_decode=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_byte_array_read_file") ) { lime_byte_array_read_file=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_byte_array_overwrite_file") ) { lime_byte_array_overwrite_file=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"lime_byte_array_get_native_pointer") ) { lime_byte_array_get_native_pointer=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ByteArray_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bigEndian"));
	outFields->push(HX_CSTRING("bytesAvailable"));
	outFields->push(HX_CSTRING("endian"));
	outFields->push(HX_CSTRING("position"));
	outFields->push(HX_CSTRING("byteLength"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fromBytes"),
	HX_CSTRING("readFile"),
	HX_CSTRING("_double_bytes"),
	HX_CSTRING("_double_of_bytes"),
	HX_CSTRING("_float_bytes"),
	HX_CSTRING("_float_of_bytes"),
	HX_CSTRING("lime_byte_array_overwrite_file"),
	HX_CSTRING("lime_byte_array_read_file"),
	HX_CSTRING("lime_byte_array_get_native_pointer"),
	HX_CSTRING("lime_lzma_encode"),
	HX_CSTRING("lime_lzma_decode"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(ByteArray_obj,bigEndian),HX_CSTRING("bigEndian")},
	{hx::fsInt,(int)offsetof(ByteArray_obj,bytesAvailable),HX_CSTRING("bytesAvailable")},
	{hx::fsInt,(int)offsetof(ByteArray_obj,position),HX_CSTRING("position")},
	{hx::fsInt,(int)offsetof(ByteArray_obj,byteLength),HX_CSTRING("byteLength")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bigEndian"),
	HX_CSTRING("bytesAvailable"),
	HX_CSTRING("position"),
	HX_CSTRING("byteLength"),
	HX_CSTRING("asString"),
	HX_CSTRING("checkData"),
	HX_CSTRING("clear"),
	HX_CSTRING("compress"),
	HX_CSTRING("deflate"),
	HX_CSTRING("ensureElem"),
	HX_CSTRING("getByteBuffer"),
	HX_CSTRING("getLength"),
	HX_CSTRING("getNativePointer"),
	HX_CSTRING("getStart"),
	HX_CSTRING("inflate"),
	HX_CSTRING("readBoolean"),
	HX_CSTRING("readByte"),
	HX_CSTRING("readBytes"),
	HX_CSTRING("readDouble"),
	HX_CSTRING("readFloat"),
	HX_CSTRING("readInt"),
	HX_CSTRING("readMultiByte"),
	HX_CSTRING("writeMultiByte"),
	HX_CSTRING("readShort"),
	HX_CSTRING("readUnsignedByte"),
	HX_CSTRING("readUnsignedInt"),
	HX_CSTRING("readUnsignedShort"),
	HX_CSTRING("readUTF"),
	HX_CSTRING("readUTFBytes"),
	HX_CSTRING("setLength"),
	HX_CSTRING("slice"),
	HX_CSTRING("uncompress"),
	HX_CSTRING("write_uncheck"),
	HX_CSTRING("writeBoolean"),
	HX_CSTRING("writeObject"),
	HX_CSTRING("writeByte"),
	HX_CSTRING("writeBytes"),
	HX_CSTRING("writeDouble"),
	HX_CSTRING("writeFile"),
	HX_CSTRING("writeFloat"),
	HX_CSTRING("writeInt"),
	HX_CSTRING("writeShort"),
	HX_CSTRING("writeUnsignedInt"),
	HX_CSTRING("writeUTF"),
	HX_CSTRING("writeUTFBytes"),
	HX_CSTRING("__fromBytes"),
	HX_CSTRING("__get"),
	HX_CSTRING("__set"),
	HX_CSTRING("__throwEOFi"),
	HX_CSTRING("get_bytesAvailable"),
	HX_CSTRING("get_byteLength"),
	HX_CSTRING("get_endian"),
	HX_CSTRING("set_endian"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ByteArray_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ByteArray_obj::_double_bytes,"_double_bytes");
	HX_MARK_MEMBER_NAME(ByteArray_obj::_double_of_bytes,"_double_of_bytes");
	HX_MARK_MEMBER_NAME(ByteArray_obj::_float_bytes,"_float_bytes");
	HX_MARK_MEMBER_NAME(ByteArray_obj::_float_of_bytes,"_float_of_bytes");
	HX_MARK_MEMBER_NAME(ByteArray_obj::lime_byte_array_overwrite_file,"lime_byte_array_overwrite_file");
	HX_MARK_MEMBER_NAME(ByteArray_obj::lime_byte_array_read_file,"lime_byte_array_read_file");
	HX_MARK_MEMBER_NAME(ByteArray_obj::lime_byte_array_get_native_pointer,"lime_byte_array_get_native_pointer");
	HX_MARK_MEMBER_NAME(ByteArray_obj::lime_lzma_encode,"lime_lzma_encode");
	HX_MARK_MEMBER_NAME(ByteArray_obj::lime_lzma_decode,"lime_lzma_decode");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ByteArray_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::_double_bytes,"_double_bytes");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::_double_of_bytes,"_double_of_bytes");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::_float_bytes,"_float_bytes");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::_float_of_bytes,"_float_of_bytes");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::lime_byte_array_overwrite_file,"lime_byte_array_overwrite_file");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::lime_byte_array_read_file,"lime_byte_array_read_file");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::lime_byte_array_get_native_pointer,"lime_byte_array_get_native_pointer");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::lime_lzma_encode,"lime_lzma_encode");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::lime_lzma_decode,"lime_lzma_decode");
};

#endif

Class ByteArray_obj::__mClass;

void ByteArray_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._legacy.utils.ByteArray"), hx::TCanCast< ByteArray_obj> ,sStaticFields,sMemberFields,
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

void ByteArray_obj::__boot()
{
	_double_bytes= ::openfl::_legacy::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("double_bytes"),(int)2);
	_double_of_bytes= ::openfl::_legacy::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("double_of_bytes"),(int)2);
	_float_bytes= ::openfl::_legacy::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("float_bytes"),(int)2);
	_float_of_bytes= ::openfl::_legacy::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("float_of_bytes"),(int)2);
	lime_byte_array_overwrite_file= ::openfl::_legacy::Lib_obj::load(HX_CSTRING("lime-legacy"),HX_CSTRING("lime_legacy_byte_array_overwrite_file"),(int)2);
	lime_byte_array_read_file= ::openfl::_legacy::Lib_obj::load(HX_CSTRING("lime-legacy"),HX_CSTRING("lime_legacy_byte_array_read_file"),(int)1);
	lime_byte_array_get_native_pointer= ::openfl::_legacy::Lib_obj::load(HX_CSTRING("lime-legacy"),HX_CSTRING("lime_legacy_byte_array_get_native_pointer"),(int)1);
	lime_lzma_encode= ::openfl::_legacy::Lib_obj::load(HX_CSTRING("lime-legacy"),HX_CSTRING("lime_legacy_lzma_encode"),(int)1);
	lime_lzma_decode= ::openfl::_legacy::Lib_obj::load(HX_CSTRING("lime-legacy"),HX_CSTRING("lime_legacy_lzma_decode"),(int)1);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace utils
