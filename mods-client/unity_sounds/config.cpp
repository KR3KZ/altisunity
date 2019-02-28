#define _ARMA_
class CfgPatches
{
	class unity_sounds
	{
		units[] = {"cba_xeh"};
		weapons[] = {};
		requiredVersion = 1.0;
		version = 1.0;
		requiredAddons[] = {"A3_Characters_F","A3_Soft_F","A3_Soft_F_Truck","A3_Soft_F_SUV"};
	};
};

class CfgSounds {
    sounds[] = {};
    class sirenLong {
        name = "sirenLong";
        sound[] = {"unity_sounds\siren_long.ogg", 2.0, 1};
        titles[] = {};
    };

    class medicSiren {
        name = "medicSiren";
        sound[] = {"unity_sounds\medic_siren.ogg", 4.0, 1};
        titles[] = {};
    };

    class tazerSound {
        name = "tazerSound";
        sound[] = {"unity_sounds\tazer.ogg", 0.25, 1};
        titles[] = {};
    };

    class flashbang {
        name = "flashbang";
        sound[] = {"unity_sounds\flashbang.ogg", 1.0, 1};
        titles[] = {};
    };

    class mining {
        name = "mining";
        sound[] = {"unity_sounds\mining.ogg", 1.0, 1};
        titles[] = {};
    };


	class scythe {
		name = "scythe";
		sound[] = {"unity_sounds\use_scythe.ogg", 1.0, 1};
		titles[] = {};
	};

	class hammer {
		name = "hammer";
		sound[] = {"unity_sounds\use_hammer.ogg", 1.0, 1};
		titles[] = {};
	};

    class harvest {
        name = "harvest";
        sound[] = {"unity_sounds\harvest.ogg", 1.0, 1};
        titles[] = {};
    };

	class axe {
        name = "axe";
        sound[] = {"unity_sounds\axe.ogg", 1.0, 1};
        titles[] = {};
    };

	class shovel {
        name = "shovel";
        sound[] = {"unity_sounds\shovel.ogg", 1.0, 1};
        titles[] = {};
    };

    class lockCarSound {
        name = "lockCarSound";
        sound[] = {"unity_sounds\car_lock.ogg", 0.25, 1};
        titles[] = {};
    };

    class unlockCarSound {
        name = "unlockCarSound";
        sound[] = {"unity_sounds\car_unlock.ogg", 0.25, 1};
        titles[] = {};
    };

	class smssend {
		name = "smssend";
		sound[] = {"unity_sounds\smssend.ogg", 1, 1};
		titles[] = {};
	};

	class kick1 {
		name = "kick1";
		sound[] = {"unity_sounds\kick1.ogg", 1, 1};
		titles[] = {};
	};

	class kick2	{
		name = "kick2";
		sound[] = {"unity_sounds\kick2.ogg", 1, 1};
		titles[] = {};
	};

	class kick3	{
		name = "kick3";
		sound[] = {"unity_sounds\kick3.ogg", 1, 1};
		titles[] = {};
	};

	class kick4	{
		name = "kick4";
		sound[] = {"unity_sounds\kick4.ogg", 1, 1};
		titles[] = {};
	};

	class kick5	{
		name = "kick5";
		sound[] = {"unity_sounds\kick5.ogg", 1, 1};
		titles[] = {};
	};

	class kick6	{
		name = "kick6";
		sound[] = {"unity_sounds\kick6.ogg", 1, 1};
		titles[] = {};
	};

    class action_repair	{
		name = "action_repair";
		sound[] = {"unity_sounds\action_repair.ogg", 1, 1};
		titles[] = {};
	};

    class open_backpack	{
		name = "open_backpack";
		sound[] = {"unity_sounds\open_backpack.ogg", 1, 1};
		titles[] = {};
	};

    class open_inventory {
		name = "open_inventory";
		sound[] = {"unity_sounds\open_inventory.ogg", 1, 1};
		titles[] = {};
	};

    class truck_reverse	{
		name = "truck_reverse";
		sound[] = {"unity_sounds\truck_reverse.ogg", 1, 1};
		titles[] = {};
	};

    class smsreceive_iphone	{
		name = "smsreceive_iphone";
		sound[] = {"unity_sounds\smsreceive_iphone.ogg", 1, 1};
		titles[] = {};
	};

    class smsreceive_samsung {
		name = "smsreceive_samsung";
		sound[] = {"unity_sounds\smsreceive_samsung.ogg", 1, 1};
		titles[] = {};
	};

	class tabletStartSound {
        name = "tabletStartSound";
        sound[] = {"unity_sounds\tabletStartSound.ogg", 1.0, 1};
        titles[] = {};
    };
	
    class tabletStartSoundM {
        name = "tabletStartSoundM";
        sound[] = {"unity_sounds\tabletStartSoundM.ogg", 1.0, 1};
        titles[] = {};
    };

    class car_alarm {
        name = "car_alarm";
        sound[] = {"unity_sounds\car_alarm.ogg", 0.8, 1};
        titles[] = {};
    };

	class cop_whistle {
		name = "cop_whistle";
		sound[] = {"unity_sounds\cop_whistle.ogg", 1.0, 1};
		titles[] = {};
	};

	class emergency_sound {
		name = "emergency_sound";
		sound[] = {"unity_sounds\emergency_sound.ogg", 1.0, 1};
		titles[] = {};
	};

	class endcall_sound {
		name = "endcall_sound";
		sound[] = {"unity_sounds\endcall_sound.ogg", 1.0, 1};
		titles[] = {};
	};

	class notification_sound {
		name = "notification_sound";
		sound[] = {"unity_sounds\notification_sound.ogg", 1.0, 1};
		titles[] = {};
	};

	class receivecall_sound_1 {
		name = "receivecall_sound_1";
		sound[] = {"unity_sounds\receivecall_sound_1.ogg", 1.0, 1};
		titles[] = {};
	};

	class receivecall_sound_2 {
		name = "receivecall_sound_2";
		sound[] = {"unity_sounds\receivecall_sound_2.ogg", 1.0, 1};
		titles[] = {};
	};

	class receivecall_sound_3 {
		name = "receivecall_sound_3";
		sound[] = {"unity_sounds\receivecall_sound_3.ogg", 1.0, 1};
		titles[] = {};
	};

	class sendcall_sound {
		name = "sendcall_sound";
		sound[] = {"unity_sounds\sendcall_sound.ogg", 1.0, 1};
		titles[] = {};
	};

	class startup_iphone {
		name = "startup_iphone";
		sound[] = {"unity_sounds\startup_iphone.ogg", 1.0, 1};
		titles[] = {};
	};
};