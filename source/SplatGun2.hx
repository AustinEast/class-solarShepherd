package;

import flixel.FlxG;
import flixel.addons.weapon.FlxWeapon;
import flixel.addons.weapon.FlxBullet;
import flixel.system.FlxSound;
import flixel.FlxSprite;

class SplatGun2 extends FlxWeapon {

	public var _shootSnd:FlxSound;

	public function new(Name:String, ?ParentRef:FlxSprite, ?BulletType:Class<FlxBullet>, ?BulletID:Int = 0)
	{
		super(Name, ParentRef, BulletType, BulletID);
		
		_shootSnd = FlxG.sound.load(Reg.SHOOT);
		makeImageBullet(50,Reg.P2BULLET,0,0,true,360,0);
        setBulletBounds(new flixel.util.FlxRect(0,0,3000,3000));
        setFireRate(500);
        setBulletElasticity(.5);
        setBulletGravity(0, 400);
        rndFactorAngle = 20;
        setBulletDirection(350,300);
        setBulletLifeSpan(3);
        setFireCallback(null, _shootSnd);

	}
	
}