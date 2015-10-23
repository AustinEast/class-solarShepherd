#ifndef INCLUDED_flixel_util_FlxPool
#define INCLUDED_flixel_util_FlxPool

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,util,FlxPool)
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxPool_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxPool_obj OBJ_;
		FlxPool_obj();
		Void __construct(::Class classObj);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxPool_obj > __new(::Class classObj);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxPool_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxPool"); }

		Dynamic _pool;
		::Class _class;
		virtual Dynamic get( );
		Dynamic get_dyn();

		virtual Void put( Dynamic obj);
		Dynamic put_dyn();

		virtual Void putUnsafe( Dynamic obj);
		Dynamic putUnsafe_dyn();

		virtual Void preAllocate( int numObjects);
		Dynamic preAllocate_dyn();

		virtual Dynamic clear( );
		Dynamic clear_dyn();

		virtual int get_length( );
		Dynamic get_length_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxPool */ 
