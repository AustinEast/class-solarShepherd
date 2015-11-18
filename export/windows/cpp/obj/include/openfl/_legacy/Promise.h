#ifndef INCLUDED_openfl__legacy_Promise
#define INCLUDED_openfl__legacy_Promise

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,_legacy,Future)
HX_DECLARE_CLASS2(openfl,_legacy,Promise)
namespace openfl{
namespace _legacy{


class HXCPP_CLASS_ATTRIBUTES  Promise_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Promise_obj OBJ_;
		Promise_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Promise_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Promise_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Promise"); }

		::openfl::_legacy::Future future;
		bool isCompleted;
		virtual ::openfl::_legacy::Promise complete( Dynamic data);
		Dynamic complete_dyn();

		virtual ::openfl::_legacy::Promise completeWith( ::openfl::_legacy::Future future);
		Dynamic completeWith_dyn();

		virtual ::openfl::_legacy::Promise error( Dynamic msg);
		Dynamic error_dyn();

		virtual ::openfl::_legacy::Promise progress( Float progress);
		Dynamic progress_dyn();

		virtual bool get_isCompleted( );
		Dynamic get_isCompleted_dyn();

};

} // end namespace openfl
} // end namespace _legacy

#endif /* INCLUDED_openfl__legacy_Promise */ 
