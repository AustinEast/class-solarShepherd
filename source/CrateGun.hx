package;

import flixel.FlxG;
import flixel.addons.weapon.FlxWeapon;
import flixel.addons.weapon.FlxBullet;
import flixel.system.FlxSound;
import flixel.FlxSprite;

class CrateGun extends FlxWeapon {

	public var _shootSnd:FlxSound;

	public function new(Name:String, ?ParentRef:FlxSprite, ?BulletType:Class<FlxBullet>, ?BulletID:Int = 0)
	{
		super(Name, ParentRef, BulletType, BulletID);
		
		//_shootSnd = FlxG.sound.load(Reg.THUD);
		makeImageBullet(5,Reg.CRATE,0,0,true,360);
        setBulletBounds(new flixel.util.FlxRect(0,0,3000,3000));
        setFireRate(500);
        rndFactorAngle = 20;
        setBulletDirection(345,200);
        setBulletLifeSpan(6);
        setBulletGravity(0,500);
        //setFireCallback(null, _shootSnd);

	}
	
}