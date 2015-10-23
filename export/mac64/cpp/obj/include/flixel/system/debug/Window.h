#ifndef INCLUDED_flixel_system_debug_Window
#define INCLUDED_flixel_system_debug_Window

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_legacy/display/Sprite.h>
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS3(flixel,system,debug,Window)
HX_DECLARE_CLASS3(flixel,system,ui,FlxSystemButton)
HX_DECLARE_CLASS3(openfl,_legacy,display,Bitmap)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,MouseEvent)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextField)
namespace flixel{
namespace system{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  Window_obj : public ::openfl::_legacy::display::Sprite_obj{
	public:
		typedef ::openfl::_legacy::display::Sprite_obj super;
		typedef Window_obj OBJ_;
		Window_obj();
		Void __construct(::String Title,::openfl::_legacy::display::BitmapData Icon,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height,hx::Null< bool >  __o_Resizable,::openfl::_legacy::geom::Rectangle Bounds,hx::Null< bool >  __o_Closable);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Window_obj > __new(::String Title,::openfl::_legacy::display::BitmapData Icon,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height,hx::Null< bool >  __o_Resizable,::openfl::_legacy::geom::Rectangle Bounds,hx::Null< bool >  __o_Closable);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Window_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Window"); }

		::openfl::_legacy::geom::Point minSize;
		::openfl::_legacy::geom::Point maxSize;
		::flixel::system::ui::FlxSystemButton toggleButton;
		int _width;
		int _height;
		::openfl::_legacy::geom::Rectangle _bounds;
		::openfl::_legacy::display::Bitmap _background;
		::openfl::_legacy::display::Bitmap _header;
		::openfl::_legacy::display::Bitmap _shadow;
		::openfl::_legacy::text::TextField _title;
		::openfl::_legacy::display::Bitmap _handle;
		::flixel::system::ui::FlxSystemButton _closeButton;
		bool _overHeader;
		bool _overHandle;
		::openfl::_legacy::geom::Point _drag;
		bool _dragging;
		bool _resizing;
		bool _resizable;
		int _id;
		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void resize( Float Width,Float Height);
		Dynamic resize_dyn();

		virtual Void reposition( Float X,Float Y);
		Dynamic reposition_dyn();

		virtual Void updateBounds( ::openfl::_legacy::geom::Rectangle Bounds);
		Dynamic updateBounds_dyn();

		virtual Void setVisible( bool Value);
		Dynamic setVisible_dyn();

		virtual Void toggleVisible( );
		Dynamic toggleVisible_dyn();

		virtual Void putOnTop( );
		Dynamic putOnTop_dyn();

		virtual Void loadSaveData( );
		Dynamic loadSaveData_dyn();

		virtual Void initSaveData( );
		Dynamic initSaveData_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void init( ::openfl::_legacy::events::Event E);
		Dynamic init_dyn();

		virtual Void onMouseMove( ::openfl::_legacy::events::MouseEvent E);
		Dynamic onMouseMove_dyn();

		virtual Void onMouseDown( ::openfl::_legacy::events::MouseEvent E);
		Dynamic onMouseDown_dyn();

		virtual Void onMouseUp( ::openfl::_legacy::events::MouseEvent E);
		Dynamic onMouseUp_dyn();

		virtual Void bound( );
		Dynamic bound_dyn();

		virtual Void updateSize( );
		Dynamic updateSize_dyn();

		virtual Void close( );
		Dynamic close_dyn();

		static int BG_COLOR;
		static int HEADER_COLOR;
		static Float HEADER_ALPHA;
		static int HEADER_HEIGHT;
		static int WINDOW_AMOUNT;
};

} // end namespace flixel
} // end namespace system
} // end namespace debug

#endif /* INCLUDED_flixel_system_debug_Window */ 
