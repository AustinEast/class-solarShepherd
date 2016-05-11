import flixel.FlxG;
import flixel.FlxSprite;
import flixel.group.FlxGroup;
import flixel.text.FlxText;
import flixel.util.FlxTimer;
import flixel.addons.text.FlxTypeText;

/**
 * @author Simon Zeni (Bl4ckb0ne)
 */

class TextBox extends FlxGroup
{
	public var isVisible:Bool;

	private var _background:FlxSprite;
	private var _name:FlxText;
	private var _typetext:FlxTypeText;
	private var _isTalking:Bool;
	private var _skip:FlxText;
	private var _doublePress:Bool;
	private var _dialogArray:Array<String>;
	private var _pageIndex:Int;

	override public function new(NAME:String):Void
	{
		super();

		// Initialize the background image, you can use a simple FlxSprite fill with one color
		_background = new FlxSprite(0, FlxG.height - 80, "assets/images/textbox.png");
		_background.scrollFactor.set(0, 0);
		
	 	// The name of the person who talk, from the arguments
	 	_name = new FlxText(FlxG.width - 160 , _background.y + 7, 136, NAME, 8);
	 	_name.scrollFactor.set(0,0);
	 	_name.color = 0xffbcbcbc;	

	 	// The skip text, you can change the key
	 	_skip = new FlxText(FlxG.width - 132, FlxG.height - 24, 132, "press DOWN to continue", 8);
	 	_skip.scrollFactor.set(0,0);
	 	_skip.color = 0xffbcbcbc;

	 	// Initialize all the bools for the TextBox system
		isVisible = false;
		_isTalking = false;
	 	_doublePress = false;
	}

	public function show():Void
	{
		add(_background);
		add(_name);
		add(_skip);
		isVisible = true;
	}

	public function hide():Void	
	{
		remove(_background);
		remove(_name);
		remove(_typetext);
		remove(_skip);
		isVisible = false;
	}

	public function talk(pages:Array<String>):Void
	{	
		if(!_isTalking) {
			_isTalking = true;
			show();

			_dialogArray = pages;
			_pageIndex = 0;

			// Set up a new FlxTypeText for each text
			_typetext = new FlxTypeText(_background.x + 16, _background.y + 22, 298, _dialogArray[_pageIndex], 8);
			_typetext.scrollFactor.set(0,0);

			// All the arguments, go see http://api.haxeflixel.com/flixel/addons/text/FlxTypeText.html to more explanations
		 	_typetext.delay = 0.1;
			_typetext.eraseDelay = 0.2;
			_typetext.showCursor = true;
			_typetext.cursorBlinkSpeed = 1.0;
			_typetext.setTypingVariation(0.75, true);
			_typetext.useDefaultSound = true;
			_typetext.color = 0xffbcbcbc; 
			_typetext.setCompleteCallback.bind(doublePressed);
			_typetext.skipKeys = ["DOWN"];

			// Add it to the screen and start it
			add(_typetext);
			_typetext.start(0.02);

			// Backup timer to clear the text after 20 seconds
			new FlxTimer(20, quitTalk);
		}
	}

	public function nextPage():Void
	{
		remove(_typetext);

		_pageIndex++;

		// Set up a new FlxTypeText for each text
		_typetext = new FlxTypeText(_background.x + 16, _background.y + 22, 298, _dialogArray[_pageIndex], 8);

		// All the arguments, go see http://api.haxeflixel.com/flixel/addons/text/FlxTypeText.html to more explanations
	 	_typetext.delay = 0.1;	
	 	_typetext.eraseDelay = 0.2;
		_typetext.showCursor = true;
		_typetext.cursorBlinkSpeed = 1.0;
		_typetext.setTypingVariation(0.75, true);
		_typetext.useDefaultSound = true;
		_typetext.color = 0xffbcbcbc; 
		_typetext.setCompleteCallback.bind(doublePressed);
		_typetext.skipKeys = ["DOWN"];

		// Add it to the screen and start it
		add(_typetext);
		_typetext.start(0.02);

		// Backup timer to clear the text after 20 seconds
		new FlxTimer(20, quitTalk);
	}
 
	public function quitTalk(TIMER:FlxTimer = null):Void 
	{
		// Condition if we use the function as a callback for the timer
		if(TIMER != null)
			TIMER.cancel();

		if(_pageIndex == _dialogArray.length - 1) 
		{
			hide();	
	 		_isTalking = false;
		}
		else
			nextPage();
	}
	public function doublePressed():Void
	{
		_doublePress = true;
	}

	override public function destroy():Void
	{
		super.destroy();
	}

	override public function update():Void
	{
		super.update();	

		/* Double press the Skip key to quit the textbox
		 * First to activate the bool _doublePress and skip the typetext
		 * Second to activate quitTalk and set _doublePress to false
		 */
		if(FlxG.keys.justPressed.DOWN && _doublePress) {
			_doublePress = false;
			quitTalk();
		} else if(FlxG.keys.justPressed.DOWN) {
			_doublePress = true;
		}
	}	
}