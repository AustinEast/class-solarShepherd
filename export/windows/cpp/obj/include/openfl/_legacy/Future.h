#ifndef INCLUDED_openfl__legacy_Future
#define INCLUDED_openfl__legacy_Future

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,_legacy,Future)
namespace openfl{
namespace _legacy{


class HXCPP_CLASS_ATTRIBUTES  Future_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Future_obj OBJ_;
		Future_obj();
		Void __construct(Dynamic work);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Future_obj > __new(Dynamic work);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Future_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Future"); }

		bool isCompleted;
		Dynamic value;
		bool __completed;
		Dynamic __completeListeners;
		bool __errored;
		Dynamic __errorListeners;
		Dynamic __errorMessage;
		Dynamic __progressListeners;
		virtual ::openfl::_legacy::Future onComplete( Dynamic listener);
		Dynamic onComplete_dyn();

		virtual ::openfl::_legacy::Future onError( Dynamic listener);
		Dynamic onError_dyn();

		virtual ::openfl::_legacy::Future onProgress( Dynamic listener);
		Dynamic onProgress_dyn();

		virtual ::openfl::_legacy::Future then( Dynamic next);
		Dynamic then_dyn();

		virtual bool get_isCompleted( );
		Dynamic get_isCompleted_dyn();

};

} // end namespace openfl
} // end namespace _legacy

#endif /* INCLUDED_openfl__legacy_Future */ 
