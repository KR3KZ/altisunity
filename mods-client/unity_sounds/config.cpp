#define _ARMA_
class CfgPatches
{
	class nolosharp
	{
		units[] = {"cba_xeh"};
		weapons[] = {};
		requiredVersion = 1.0;
		version = 1.0;
		requiredAddons[] = {"A3_Characters_F","A3_Soft_F","A3_Soft_F_Truck","A3_Soft_F_SUV","rds_a2port_cman","SP_Craig_JackEllis1"};
	};
};

class CfgSounds {
    sounds[] = {};
    class sirenLong {
        name = "sirenLong";
        sound[] = {"nolosharp_sounds\siren_long.ogg", 2.0, 1};
        titles[] = {};
    };

    class medicSiren {
        name = "medicSiren";
        sound[] = {"nolosharp_sounds\medic_siren.ogg", 4.0, 1};
        titles[] = {};
    };

    class tazerSound {
        name = "tazerSound";
        sound[] = {"nolosharp_sounds\tazer.ogg", 0.25, 1};
        titles[] = {};
    };

    class flashbang {
        name = "flashbang";
        sound[] = {"nolosharp_sounds\flashbang.ogg", 1.0, 1};
        titles[] = {};
    };

    class mining {
        name = "mining";
        sound[] = {"nolosharp_sounds\mining.ogg", 1.0, 1};
        titles[] = {};
    };


		class scythe {
				name = "scythe";
				sound[] = {"nolosharp_sounds\use_scythe.ogg", 1.0, 1};
				titles[] = {};
		};

		class hammer {
				name = "hammer";
				sound[] = {"nolosharp_sounds\use_hammer.ogg", 1.0, 1};
				titles[] = {};
		};

    class harvest {
        name = "harvest";
        sound[] = {"nolosharp_sounds\harvest.ogg", 1.0, 1};
        titles[] = {};
    };

	class axe {
        name = "axe";
        sound[] = {"nolosharp_sounds\axe.ogg", 1.0, 1};
        titles[] = {};
    };

	class shovel {
        name = "shovel";
        sound[] = {"nolosharp_sounds\shovel.ogg", 1.0, 1};
        titles[] = {};
    };

    class lockCarSound {
        name = "lockCarSound";
        sound[] = {"nolosharp_sounds\car_lock.ogg", 0.25, 1};
        titles[] = {};
    };

    class unlockCarSound {
        name = "unlockCarSound";
        sound[] = {"nolosharp_sounds\car_unlock.ogg", 0.25, 1};
        titles[] = {};
    };

	class smssend
	{
		name = "smssend";
		sound[] = {"nolosharp_sounds\smssend.ogg", 1, 1};
		titles[] = {};
	};

	class kick1
	{
		name = "kick1";
		sound[] = {"nolosharp_sounds\kick1.ogg", 1, 1};
		titles[] = {};
	};

	class kick2
	{
		name = "kick2";
		sound[] = {"nolosharp_sounds\kick2.ogg", 1, 1};
		titles[] = {};
	};

	class kick3
	{
		name = "kick3";
		sound[] = {"nolosharp_sounds\kick3.ogg", 1, 1};
		titles[] = {};
	};

	class kick4
	{
		name = "kick4";
		sound[] = {"nolosharp_sounds\kick4.ogg", 1, 1};
		titles[] = {};
	};

	class kick5
	{
		name = "kick5";
		sound[] = {"nolosharp_sounds\kick5.ogg", 1, 1};
		titles[] = {};
	};

	class kick6
	{
		name = "kick6";
		sound[] = {"nolosharp_sounds\kick6.ogg", 1, 1};
		titles[] = {};
	};

    class action_repair
	{
		name = "action_repair";
		sound[] = {"nolosharp_sounds\action_repair.ogg", 1, 1};
		titles[] = {};
	};

    class open_backpack
	{
		name = "open_backpack";
		sound[] = {"nolosharp_sounds\open_backpack.ogg", 1, 1};
		titles[] = {};
	};

    class open_inventory
	{
		name = "open_inventory";
		sound[] = {"nolosharp_sounds\open_inventory.ogg", 1, 1};
		titles[] = {};
	};

    class truck_reverse
	{
		name = "truck_reverse";
		sound[] = {"nolosharp_sounds\truck_reverse.ogg", 1, 1};
		titles[] = {};
	};

    class introsong
	{
		name = "introsong";
		sound[] = {"nolotis\sounds\introsong.ogg", 1, 1};
		titles[] = {};
	};

    class smsreceive_iphone
	{
		name = "smsreceive_iphone";
		sound[] = {"nolosharp_sounds\smsreceive_iphone.ogg", 1, 1};
		titles[] = {};
	};

    class smsreceive_samsung
	{
		name = "smsreceive_samsung";
		sound[] = {"nolosharp_sounds\smsreceive_samsung.ogg", 1, 1};
		titles[] = {};
	};

	class tabletStartSound {
        name = "tabletStartSound";
        sound[] = {"nolosharp_sounds\tabletStartSound.ogg", 1.0, 1};
        titles[] = {};
    };
    class tabletStartSoundM {
        name = "tabletStartSoundM";
        sound[] = {"nolosharp_sounds\tabletStartSoundM.ogg", 1.0, 1};
        titles[] = {};
    };

    class car_alarm {
        name = "car_alarm";
        sound[] = {"nolosharp_sounds\car_alarm.ogg", 0.8, 1};
        titles[] = {};
    };

	class cop_whistle {
		name = "cop_whistle";
		sound[] = {"nolosharp_sounds\cop_whistle.ogg", 1.0, 1};
		titles[] = {};
	};

	class emergency_sound {
		name = "emergency_sound";
		sound[] = {"nolosharp_sounds\emergency_sound.ogg", 1.0, 1};
		titles[] = {};
	};

	class endcall_sound {
		name = "endcall_sound";
		sound[] = {"nolosharp_sounds\endcall_sound.ogg", 1.0, 1};
		titles[] = {};
	};

	class notification_sound {
		name = "notification_sound";
		sound[] = {"nolosharp_sounds\notification_sound.ogg", 1.0, 1};
		titles[] = {};
	};

	class receivecall_sound_1 {
		name = "receivecall_sound_1";
		sound[] = {"nolosharp_sounds\receivecall_sound_1.ogg", 1.0, 1};
		titles[] = {};
	};

	class receivecall_sound_2 {
		name = "receivecall_sound_2";
		sound[] = {"nolosharp_sounds\receivecall_sound_2.ogg", 1.0, 1};
		titles[] = {};
	};

	class receivecall_sound_3 {
		name = "receivecall_sound_3";
		sound[] = {"nolosharp_sounds\receivecall_sound_3.ogg", 1.0, 1};
		titles[] = {};
	};

	class sendcall_sound {
		name = "sendcall_sound";
		sound[] = {"nolosharp_sounds\sendcall_sound.ogg", 1.0, 1};
		titles[] = {};
	};

	class startup_iphone {
		name = "startup_iphone";
		sound[] = {"nolosharp_sounds\startup_iphone.ogg", 1.0, 1};
		titles[] = {};
	};


};

class cfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
	class UniformItem: InventoryItem_Base_F
	{
		type = 801;
	};
	class Uniform_Base: ItemCore
	{
		scope = 0;
		allowedSlots[] = {901};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Soldier_F";
			containerClass = "Supply0";
			mass = 0;
		};
	};
	class U_C_Poloshirt_blue;
	class U_noloshav_b: U_C_Poloshirt_blue
	{
		author = "Sergio Tero";
		displayName = "Polo Nolosha";
		picture = "\A3\characters_f\data\ui\icon_U_C_miller_ca.paa";
		hiddenSelectionsTextures[] = {"nolosharp_textures\tenues\c-noloshav-co.jpg"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_noloshav_F";
			containerClass = "Supply20";
			mass = 40;
		};
	};
	class U_poloshirt_b: U_C_Poloshirt_blue
	{
		author = "Hugo";
		displayName = "Polo Lacoste blanc";
		picture = "\A3\characters_f\data\ui\icon_U_C_miller_ca.paa";
		hiddenSelectionsTextures[] = {"nolosharp_textures\tenues\lacoste\c_poloshirt_blanc_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_poloshirtb_F";
			containerClass = "Supply20";
			mass = 40;
		};
	};
	class U_poloshirt_k: U_C_Poloshirt_blue
	{
		author = "Hugo";
		displayName = "Polo Lacoste kaki";
		picture = "\A3\characters_f\data\ui\icon_U_C_miller_ca.paa";
		hiddenSelectionsTextures[] = {"nolosharp_textures\tenues\lacoste\c_poloshirt_kaki_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_poloshirtk_F";
			containerClass = "Supply20";
			mass = 40;
		};
	};
	class U_poloshirt_n: U_C_Poloshirt_blue
	{
		author = "Hugo";
		displayName = "Polo Lacoste noir";
		picture = "\A3\characters_f\data\ui\icon_U_C_miller_ca.paa";
		hiddenSelectionsTextures[] = {"nolosharp_textures\tenues\lacoste\c_poloshirt_noir_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_poloshirtn_F";
			containerClass = "Supply20";
			mass = 40;
		};
	};
	class U_poloshirt_o: U_C_Poloshirt_blue
	{
		author = "Hugo";
		displayName = "Polo Lacoste orange";
		picture = "\A3\characters_f\data\ui\icon_U_C_miller_ca.paa";
		hiddenSelectionsTextures[] = {"nolosharp_textures\tenues\lacoste\c_poloshirt_orange_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_poloshirto_F";
			containerClass = "Supply20";
			mass = 40;
		};
	};
	class U_poloshirt_r: U_C_Poloshirt_blue
	{
		author = "Hugo";
		displayName = "Polo Lacoste rose";
		picture = "\A3\characters_f\data\ui\icon_U_C_miller_ca.paa";
		hiddenSelectionsTextures[] = {"nolosharp_textures\tenues\lacoste\c_poloshirt_rose_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_poloshirtr_F";
			containerClass = "Supply20";
			mass = 40;
		};
	};
	class U_poloshirt_ro: U_C_Poloshirt_blue
	{
		author = "Hugo";
		displayName = "Polo Lacoste rouge";
		picture = "\A3\characters_f\data\ui\icon_U_C_miller_ca.paa";
		hiddenSelectionsTextures[] = {"nolosharp_textures\tenues\lacoste\c_poloshirt_rouge_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_poloshirtro_F";
			containerClass = "Supply20";
			mass = 40;
		};
	};
	class U_poloshirtr_b: U_C_Poloshirt_blue
	{
		author = "Hugo";
		displayName = "Polo RalphLauren Blanc";
		picture = "\A3\characters_f\data\ui\icon_U_C_miller_ca.paa";
		hiddenSelectionsTextures[] = {"nolosharp_textures\tenues\ralphlauren\c_poloshirt_blanc_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_poloshirtrb_F";
			containerClass = "Supply20";
			mass = 40;
		};
	};
	class U_poloshirtr_bl: U_C_Poloshirt_blue
	{
		author = "Hugo";
		displayName = "Polo RalphLauren Bleu";
		picture = "\A3\characters_f\data\ui\icon_U_C_miller_ca.paa";
		hiddenSelectionsTextures[] = {"nolosharp_textures\tenues\ralphlauren\c_poloshirt_bleu_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_poloshirtrbl_F";
			containerClass = "Supply20";
			mass = 40;
		};
	};
	class U_poloshirtr_j: U_C_Poloshirt_blue
	{
		author = "Hugo";
		displayName = "Polo RalphLauren Jaune";
		picture = "\A3\characters_f\data\ui\icon_U_C_miller_ca.paa";
		hiddenSelectionsTextures[] = {"nolosharp_textures\tenues\ralphlauren\c_poloshirt_jaune_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_poloshirtrj_F";
			containerClass = "Supply20";
			mass = 40;
		};
	};
	class U_poloshirtr_n: U_C_Poloshirt_blue
	{
		author = "Hugo";
		displayName = "Polo RalphLauren Noir";
		picture = "\A3\characters_f\data\ui\icon_U_C_miller_ca.paa";
		hiddenSelectionsTextures[] = {"nolosharp_textures\tenues\ralphlauren\c_poloshirt_noir_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_poloshirtrn_F";
			containerClass = "Supply20";
			mass = 40;
		};
	};
	class U_poloshirtr_ro: U_C_Poloshirt_blue
	{
		author = "Hugo";
		displayName = "Polo RalphLauren Rose";
		picture = "\A3\characters_f\data\ui\icon_U_C_miller_ca.paa";
		hiddenSelectionsTextures[] = {"nolosharp_textures\tenues\ralphlauren\c_poloshirt_rose_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_poloshirtrro_F";
			containerClass = "Supply20";
			mass = 40;
		};
	};
	class U_poloshirtr_v: U_C_Poloshirt_blue
	{
		author = "Hugo";
		displayName = "Polo RalphLauren Vert";
		picture = "\A3\characters_f\data\ui\icon_U_C_miller_ca.paa";
		hiddenSelectionsTextures[] = {"nolosharp_textures\tenues\ralphlauren\c_poloshirt_vert_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_poloshirtrv_F";
			containerClass = "Supply20";
			mass = 40;
		};
	};


	//items

	class ACE_ItemCore;

    class yl_Item_iphone: ACE_ItemCore {
        displayName = "iPhone";
        descriptionShort = "Un téléphone";
        model="\A3\weapons_F\ammo\mag_univ.p3d";
        picture="\nolosharp_images\items\tel_iphone_blanc.paa";
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 1;
        };
	};
	class yl_Item_sgs7: ACE_ItemCore {
        displayName = "Galaxy S7";
        descriptionShort = "Un téléphone";
        model="\A3\weapons_F\ammo\mag_univ.p3d";
        picture="\nolosharp_images\items\tel_samsungS7.paa";
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 1;
        };
	};
	class hc_Item_petrov: ACE_ItemCore {
        displayName = "Petrov Phone";
        descriptionShort = "Un téléphone";
        model="\A3\weapons_F\ammo\mag_univ.p3d";
        picture="\nolosharp_images\items\tel_petrov.paa";
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 1;
        };
	};
	class yl_Item_civcard_eii: ACE_ItemCore {
        displayName = "Carte d'identité Israelienne";
        model="\A3\weapons_F\ammo\mag_univ.p3d";
        picture="\nolosharp_images\card\civ_eii.paa";
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 1;
        };
	};
	class yl_Item_civcard_eam: ACE_ItemCore {
		displayName = "Carte d'identité - Nouvelle République d'Altis";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		picture="\nolosharp_images\card\civ_eam.paa";
		scope = 2;
		class ItemInfo: InventoryItem_Base_F {
			mass = 1;
		};
	};
	class yl_Item_civcard_zions: ACE_ItemCore {
		displayName = "Carte d'identité Zions";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		picture="\nolosharp_images\card\civ_zions.paa";
		scope = 2;
		class ItemInfo: InventoryItem_Base_F {
			mass = 1;
		};
	};
	class yl_Item_copcard: ACE_ItemCore {
        displayName = "Carte Korax";
        model="\A3\weapons_F\ammo\mag_univ.p3d";
        picture="\nolosharp_images\card\cop.paa";
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 1;
        };
	};
	class yl_Item_medcard: ACE_ItemCore {
        displayName = "Carte IDAP";
        model="\A3\weapons_F\ammo\mag_univ.p3d";
        picture="\nolosharp_images\card\med.paa";
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 1;
        };
	};
	class yl_Item_gouvcard_eii: ACE_ItemCore {
        displayName = "Carte gouvernementale Israelienne";
        model="\A3\weapons_F\ammo\mag_univ.p3d";
        picture="\nolosharp_images\card\gouv_eii.paa";
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 1;
        };
	};
	class yl_Item_gouvcard_eam: ACE_ItemCore {
		displayName = "Carte gouvernementale - Nouvelle République d'Altis";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		picture="\nolosharp_images\card\gouv_eam.paa";
		scope = 2;
		class ItemInfo: InventoryItem_Base_F {
			mass = 1;
		};
	};
	class yl_Item_gouvcard_zions: ACE_ItemCore {
		displayName = "Carte gouvernementale Zions";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		picture="\nolosharp_images\card\gouv_zions.paa";
		scope = 2;
		class ItemInfo: InventoryItem_Base_F {
			mass = 1;
		};
	};
	class yl_Item_nounours: ACE_ItemCore {
        displayName = "Nounours d'Hugo";
        descriptionShort = "Un nounours qu'il est beau qu'il est doux !";
        model="\A3\weapons_F\ammo\mag_univ.p3d";
        picture="\nolosharp_images\items\nounours.paa";
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 1;
        };
	};
	class yl_Item_knife: ACE_ItemCore {
        displayName = "Couteau";
        descriptionShort = "Un couteau tranchant pour... couper la viande ?!";
        model="\A3\weapons_F\ammo\mag_univ.p3d";
        picture="\nolosharp_images\items\knife.paa";
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 1;
        };
	};
	class hc_Item_Renard: ACE_ItemCore {
        displayName = "Préservatifs Renard";
        descriptionShort = "Boite de préservatifs Renard";
        model="\A3\weapons_F\ammo\mag_univ.p3d";
        picture="\nolosharp_images\items\renard.paa";
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 1;
        };
	};

	class V_PlateCarrier1_rgr;
	class SP_JackEllis1_UNBlue1;
	class SP_JackEllis1_White;
	class VestItem;

	class NS_V_JackEllis1_UNBlue1: SP_JackEllis1_UNBlue1 {
		displayName = "Nolosha Jack Ellis 1 (UN)";
		class ItemInfo: VestItem
		{
			uniformModel = "\SP_Pack\Models\JackEllis1";
			containerClass = "Supply60";
			hiddenSelections[] = {"camo"};
			mass = 120;

			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 16;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 16;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
                };
			};

		};
	}

	class NS_V_JackEllis1_White: SP_JackEllis1_White {
		displayName = "Nolosha Jack Ellis 1 (White)";
		class ItemInfo: VestItem
		{
			uniformModel = "\SP_Pack\Models\JackEllis1";
			containerClass = "Supply60";
			hiddenSelections[] = {"camo"};
			mass = 120;

			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 16;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 16;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
                };
			};

		};
	}
}

class CfgVehicles
{
	class Car;
	class Car_F;
	/*class Truck_F: Car_F
	{
		class EventHandlers;
	};
	class Van_01_base_F: Truck_F
	{
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};
	class Van_01_fuel_base_F: Van_01_base_F {};
	class C_Van_01_fuel_F: Van_01_fuel_base_F
	{
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};

	class SUV_01_base_F;
	class C_SUV_01_F: SUV_01_base_F
	{
		class EventHandlers: DefaultEventhandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	}*/

	class B_Truck_01_mover_F;
	class B_Truck_01_mover_F_RP: B_Truck_01_mover_F
	{
		displayName = "Dépanneur - HEMTT";
		enginePower = 1500;
		hiddenSelectionsTextures[] = {"\nolosharp_textures\vehicules\hemttdep.paa","\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa","\A3\Soft_F_Gamma\Truck_01\Data\truck_01_mprimer_CO.paa"};
	};

	class Land;
	class Man;
	class CAManBase;
	class Civilian;
	/*class Civilian_F : Civilian
	{
		class EventHandlers;
	};

	class C_man_1 : Civilian_F
	{
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) execVM ""\nolosharp\fix_headgear.sqf""";
		};
	};*/
	class C_man_polo_1_F;
	class B_noloshav_F: C_man_polo_1_F
	{
		author = "Sergio Tero";
		_generalMacro = "B_noloshav_F";
		uniformClass = "U_noloshav_b";
		Items[] = {};
		respawnItems[] = {};
		hiddenSelectionsTextures[] = {"nolosharp_textures\tenues\c-noloshav-co.jpg"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {};
		respawnlinkedItems[] = {};
	};

	class B_poloshirtb_F: C_man_polo_1_F
	{
		author = "Hugo";
		_generalMacro = "B_poloshirtb_F";
		uniformClass = "U_poloshirt_b";
		Items[] = {};
		respawnItems[] = {};
		hiddenSelectionsTextures[] = {"nolosharp_textures\tenues\lacoste\c_poloshirt_blanc_co.paa"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {};
		respawnlinkedItems[] = {};
	};

	class B_poloshirtk_F: C_man_polo_1_F
	{
		author = "Hugo";
		_generalMacro = "B_poloshirtk_F";
		uniformClass = "U_poloshirt_k";
		Items[] = {};
		respawnItems[] = {};
		hiddenSelectionsTextures[] = {"nolosharp_textures\tenues\lacoste\c_poloshirt_kaki_co.paa"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {};
		respawnlinkedItems[] = {};
	};

	class B_poloshirtn_F: C_man_polo_1_F
	{
		author = "Hugo";
		_generalMacro = "B_poloshirtn_F";
		uniformClass = "U_poloshirt_n";
		Items[] = {};
		respawnItems[] = {};
		hiddenSelectionsTextures[] = {"nolosharp_textures\tenues\lacoste\c_poloshirt_noir_co.paa"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {};
		respawnlinkedItems[] = {};
	};

	class B_poloshirto_F: C_man_polo_1_F
	{
		author = "Hugo";
		_generalMacro = "B_poloshirto_F";
		uniformClass = "U_poloshirt_o";
		Items[] = {};
		respawnItems[] = {};
		hiddenSelectionsTextures[] = {"nolosharp_textures\tenues\lacoste\c_poloshirt_orange_co.paa"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {};
		respawnlinkedItems[] = {};
	};

	class B_poloshirtr_F: C_man_polo_1_F
	{
		author = "Hugo";
		_generalMacro = "B_poloshirtr_F";
		uniformClass = "U_poloshirt_r";
		Items[] = {};
		respawnItems[] = {};
		hiddenSelectionsTextures[] = {"nolosharp_textures\tenues\lacoste\c_poloshirt_rose_co.paa"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {};
		respawnlinkedItems[] = {};
	};

	class B_poloshirtro_F: C_man_polo_1_F
	{
		author = "Hugo";
		_generalMacro = "B_poloshirtro_F";
		uniformClass = "U_poloshirt_ro";
		Items[] = {};
		respawnItems[] = {};
		hiddenSelectionsTextures[] = {"nolosharp_textures\tenues\lacoste\c_poloshirt_rouge_co.paa"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {};
		respawnlinkedItems[] = {};
	};

	class B_poloshirtrb_F: C_man_polo_1_F
	{
		author = "Hugo";
		_generalMacro = "B_poloshirtrb_F";
		uniformClass = "U_poloshirtr_b";
		Items[] = {};
		respawnItems[] = {};
		hiddenSelectionsTextures[] = {"nolosharp_textures\tenues\ralphlauren\c_poloshirt_blanc_co.paa"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {};
		respawnlinkedItems[] = {};
	};

	class B_poloshirtrbl_F: C_man_polo_1_F
	{
		author = "Hugo";
		_generalMacro = "B_poloshirtrbl_F";
		uniformClass = "U_poloshirtr_bl";
		Items[] = {};
		respawnItems[] = {};
		hiddenSelectionsTextures[] = {"nolosharp_textures\tenues\ralphlauren\c_poloshirt_bleu_co.paa"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {};
		respawnlinkedItems[] = {};
	};

	class B_poloshirtrj_F: C_man_polo_1_F
	{
		author = "Hugo";
		_generalMacro = "B_poloshirtrj_F";
		uniformClass = "U_poloshirtr_j";
		Items[] = {};
		respawnItems[] = {};
		hiddenSelectionsTextures[] = {"nolosharp_textures\tenues\ralphlauren\c_poloshirt_jaune_co.paa"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {};
		respawnlinkedItems[] = {};
	};

	class B_poloshirtrn_F: C_man_polo_1_F
	{
		author = "Hugo";
		_generalMacro = "B_poloshirtrn_F";
		uniformClass = "U_poloshirtr_n";
		Items[] = {};
		respawnItems[] = {};
		hiddenSelectionsTextures[] = {"nolosharp_textures\tenues\ralphlauren\c_poloshirt_noir_co.paa"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {};
		respawnlinkedItems[] = {};
	};

	class B_poloshirtrro_F: C_man_polo_1_F
	{
		author = "Hugo";
		_generalMacro = "B_poloshirtrro_F";
		uniformClass = "U_poloshirtr_ro";
		Items[] = {};
		respawnItems[] = {};
		hiddenSelectionsTextures[] = {"nolosharp_textures\tenues\ralphlauren\c_poloshirt_rose_co.paa"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {};
		respawnlinkedItems[] = {};
	};

	class B_poloshirtrv_F: C_man_polo_1_F
	{
		author = "Hugo";
		_generalMacro = "B_poloshirtrv_F";
		uniformClass = "U_poloshirtr_v";
		Items[] = {};
		respawnItems[] = {};
		hiddenSelectionsTextures[] = {"nolosharp_textures\tenues\ralphlauren\c_poloshirt_vert_co.paa"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {};
		respawnlinkedItems[] = {};
	};

	class C_Offroad_01_F;
	class C_Offroad_01_DEP_F: C_Offroad_01_F
	{
		displayName = "Dépanneur - Offroad";
	};

}
