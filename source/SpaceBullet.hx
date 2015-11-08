package;
 
import flixel.FlxSprite;
import flixel.FlxG;
import flixel.util.FlxPoint;
import flixel.util.FlxColor;


 /**
 * This class holds all the functions of the Space Bullet shot by enemies.
 **/
class SpaceBullet extends PolarSprite
{
    public var _hitPaddle:PolarSprite;

    /**
    * Function to create and assign attributes to the bullet.
    **/
    public function new()
    {
        super();

        //Creates a graphic. Will probably be replaced with image later.
        loadGraphic("assets/images/pongBullet.png",true,4,4);
        animation.add("polTrue",[0]);
        animation.add("polFalse",[1]);

        //Sets its polarity (Color). True is white, false is black.
        _polarity = true;
    }
    /**
    * Function to keep track of anything that needs to be updated on the bullet.
    **/
    override public function update():Void
    {
        super.update();

        //Kill bullet if off screen.
        if(this.y <= -10 || this.y >= FlxG.height)
        {
            _hitPaddle = null;
            this.exists = false;
        }
        //Bounce bullet off walls.
        if(this.x <= 0 || this.x >= FlxG.width)
        {
            this.velocity.x *= -1;
        }
    }
    /**
    * Function that destroys the instance of the bullet.
    **/
    override public function destroy():Void
    {
        super.destroy();
    }

    /**
    * Function that Checks whether the bullet bounces or hits the player.
    * The basis of the whole game, really.. 
    **/
    public function bounce(_paddle:PolarSprite):Void
    {   
        //Method to keep the bullet from overlapping with whichever enemy.
        if (_hitPaddle != _paddle)
        {   
            //If the bullet is the same polarity as the object, it will "Bounce".
            if(_paddle._polarity == this._polarity)
            {   
                velocity.x += _paddle.velocity.x/2;
                velocity.y *= -1;
                _hitPaddle = _paddle;
                FlxG.sound.play(Reg.MENUSELECT);
            }
            //If the bullet isn't, kill the item, bullet and make a screen shake.
            else if(_paddle._polarity != this._polarity)
            {
                _paddle.kill();
                this.kill();
                FlxG.camera.shake(0.02, 0.25); 
                FlxG.sound.play(Reg.ENEMYSHIPDESTROYED);
                //if the player is hit, fade the camera.
                //This calls doneFadeOut once the fade is done.
                if (_paddle.important == true)
                { 
                    FlxG.camera.flash(0xffFFFFFF, 1);
                    FlxG.camera.fade(FlxColor.BLACK, .33, false, doneFadeOut);
                } 
            }
        }
    }
   
    /**
    * This function is called if the player gets hit and the game fades out.
    * It sends you back to the menu.
    **/
    private function doneFadeOut():Void 
    {
        FlxG.switchState(new MenuState());
    }
     
}