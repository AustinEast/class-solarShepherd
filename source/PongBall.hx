package;
 
import flixel.FlxSprite;
import flixel.FlxG;
import flixel.util.FlxPoint;
import flixel.util.FlxColor;

 
class PongBall extends PongSprite
{
    public var hitPaddle:PongSprite;

    public function new()
    {
        super();

        makeGraphic(4,4);
        _polarity = true;
    }
 
    override public function update():Void
    {
        super.update();

        //Kill bullet if off screen.
        if(this.y <= -10 || this.y >= FlxG.height)
        {
            hitPaddle = null;
            this.exists = false;
        }
        if(this.x <= 0 || this.x >= FlxG.width)
        {
            this.velocity.x *= -1;
        }
    }
 
    override public function destroy():Void
    {
        super.destroy();
    }

     //Function to bounce or hit paddle.
    public function bounce(paddle:PongSprite):Void
    {   
        FlxG.log.add(hitPaddle);
        if (hitPaddle != paddle)
        {   
            if(paddle._polarity == this._polarity)
            {
                velocity.y *= -1;
                hitPaddle = paddle;
            }
            else if(paddle._polarity != this._polarity)
            {
                paddle.kill();
                this.kill();
                FlxG.camera.flash(0xffFFFFFF, 1);
                FlxG.camera.shake(0.02, 0.35); 
                if (hitPaddle == null)
                { 
                    FlxG.camera.fade(FlxColor.BLACK, .33, false, doneFadeOut);
                } 
            }
        }
    }
    private function doneFadeOut():Void 
    {
        FlxG.switchState(new MenuState());
    }
     
}