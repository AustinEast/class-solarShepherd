#ifndef INCLUDED_flixel_addons_text_FlxTypeText
#define INCLUDED_flixel_addons_text_FlxTypeText

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/text/FlxText.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,text,FlxTypeText)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,system,FlxSound)
HX_DECLARE_CLASS2(flixel,text,FlxText)
namespace flixel{
namespace addons{
namespace text{


class HXCPP_CLASS_ATTRIBUTES  FlxTypeText_obj : public ::flixel::text::FlxText_obj{
	public:
		typedef ::flixel::text::FlxText_obj super;
		typedef FlxTypeText_obj OBJ_;
		FlxTypeText_obj();
		Void __construct(Float X,Float Y,int Width,::String Text,hx::Null< int >  __o_Size,hx::Null< bool >  __o_EmbeddedFont);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxTypeText_obj > __new(Float X,Float Y,int Width,::String Text,hx::Null< int >  __o_Size,hx::Null< bool >  __o_EmbeddedFont);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxTypeText_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxTypeText"); }

		Float delay;
		Float eraseDelay;
		bool showCursor;
		::String cursorCharacter;
		Float cursorBlinkSpeed;
		::String prefix;
		bool autoErase;
		Float waitTime;
		bool paused;
		bool useDefaultSound;
		::flixel::system::FlxSound sound;
		Array< ::String > skipKeys;
		::String _finalText;
		Dynamic _onComplete;
		Dynamic _onCompleteParams;
		Dynamic _onErase;
		Dynamic _onEraseParams;
		Float _timer;
		Float _waitTimer;
		int _length;
		bool _typing;
		bool _erasing;
		bool _waiting;
		Float _cursorTimer;
		bool _typingVariation;
		Float _typeVarPercent;
		virtual Void setCompleteCallback( Dynamic Callback,Dynamic Params);
		Dynamic setCompleteCallback_dyn();

		virtual Void setEraseCallback( Dynamic Callback,Dynamic Params);
		Dynamic setEraseCallback_dyn();

		virtual Void start( Dynamic Delay,hx::Null< bool >  ForceRestart,hx::Null< bool >  AutoErase,::flixel::system::FlxSound Sound,Array< ::String > SkipKeys,Dynamic Callback,Dynamic Params);
		Dynamic start_dyn();

		virtual Void erase( Dynamic Delay,hx::Null< bool >  ForceRestart,::flixel::system::FlxSound Sound,Array< ::String > SkipKeys,Dynamic Callback,Dynamic Params);
		Dynamic erase_dyn();

		virtual Void resetText( ::String Text);
		Dynamic resetText_dyn();

		virtual Void setSkipKeys( Array< ::String > Keys);
		Dynamic setSkipKeys_dyn();

		virtual Void setSound( ::flixel::system::FlxSound Sound);
		Dynamic setSound_dyn();

		virtual Void setTypingVariation( hx::Null< Float >  Amount,hx::Null< bool >  On);
		Dynamic setTypingVariation_dyn();

		virtual Void onComplete( );
		Dynamic onComplete_dyn();

		virtual Void onErased( );
		Dynamic onErased_dyn();

		virtual Void update( );

		virtual Void skip( );
		Dynamic skip_dyn();

		static ::String helperString;
};

} // end namespace flixel
} // end namespace addons
} // end namespace text

#endif /* INCLUDED_flixel_addons_text_FlxTypeText */ 
