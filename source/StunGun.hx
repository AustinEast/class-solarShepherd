package;

import flixel.FlxG;
import flixel.addons.weapon.FlxWeapon;
import flixel.addons.weapon.FlxBullet;
import flixel.system.FlxSound;
import flixel.FlxSprite;

class StunGun extends FlxWeapon {

	public var _shootSnd:FlxSound;

	public function new(Name:String, ?ParentRef:FlxSprite, ?BulletType:Class<FlxBullet>, ?BulletID:Int = 0)
	{
		super(Name, ParentRef, BulletType, BulletID);
		
		//_shootSnd = FlxG.sound.load(Reg.SHOOT);
		makeImageBullet(2,Reg.STUNGUN,0,0,true,360,1);
        setBulletBounds(new flixel.util.FlxRect(0,0,3000,3000));
        setFireRate(300);
        rndFactorAngle = 20;
        setBulletDirection(360,400);
        setBulletLifeSpan(0.2);
        //setFireCallback(null, _shootSnd);

	}
	
}