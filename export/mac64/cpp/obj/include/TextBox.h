#ifndef INCLUDED_TextBox
#define INCLUDED_TextBox

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/group/FlxGroup.h>
HX_DECLARE_CLASS0(TextBox)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,text,FlxTypeText)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)


class HXCPP_CLASS_ATTRIBUTES  TextBox_obj : public ::flixel::group::FlxGroup_obj{
	public:
		typedef ::flixel::group::FlxGroup_obj super;
		typedef TextBox_obj OBJ_;
		TextBox_obj();
		Void __construct(::String NAME);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TextBox_obj > __new(::String NAME);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextBox_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TextBox"); }

		::flixel::FlxSprite _background;
		bool _isVisible;
		::flixel::text::FlxText _name;
		::flixel::addons::text::FlxTypeText _typetext;
		bool _isTalking;
		::flixel::text::FlxText _skip;
		bool _doublePress;
		virtual Void show( );
		Dynamic show_dyn();

		virtual Void hide( );
		Dynamic hide_dyn();

		virtual Void talk( ::String TEXT);
		Dynamic talk_dyn();

		virtual Void quitTalk( ::flixel::util::FlxTimer TIMER);
		Dynamic quitTalk_dyn();

		virtual Void destroy( );

		virtual Void update( );

};


#endif /* INCLUDED_TextBox */ 
