/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*
*    ARRAY FORMAT:
*        0: STRING (Classname): Item Classname
*        1: STRING (Nickname): Nickname that will appear purely in the shop dialog
*        2: SCALAR (Buy price)
*        3: SCALAR (Sell price): To disable selling, this should be -1
*        4: STRING (Conditions): Same as above conditions string
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        conditions = "license_civ_gun";
        items[] = {
            { "rhs_weap_6p53", "", 0, 0, "" },
            { "hgun_Pistol_01_F", "", 0, 0, "" }, //Apex DLC
            { "hgun_Pistol_heavy_02_F", "", 0, 0, "" },
            { "hgun_Rook40_F", "", 0, 0, "" },
            { "rhs_weap_makarov_pm", "", 0, 0, "" }
        };
        mags[] = {
            { "rhs_18rnd_9x21mm_7N28", "", 0, 0, "" },
            { "6Rnd_45ACP_Cylinder", "", 0, 0, "" },
            { "16Rnd_9x21_Mag", "", 0, 0, "" },
            { "10Rnd_9x21_Mag", "", 0, 0, "" },
            { "rhs_mag_9x18_8_57N181S", "", 0, 0, "" }
        };
        accs[] = {};
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
            { "ACE_CableTie", "", 0, 0, "" },
            { "SmokeShellBlue", "", 0, 0, "" },
            { "SmokeShellYellow", "", 0, 0, "" },
            { "SmokeShellOrange", "", 0, 0, "" },
            { "SmokeShellPurple", "", 0, 0, "" },
            { "SmokeShellRed", "", 0, 0, "" },
            { "SmokeShellGreen", "", 0, 0, "" },
            { "NVGoggles", "", 1200, 600, "" },
            { "SMG_02_F", "", 25000, 12500, "" },
            { "rhsusf_weap_MP7A2_grip1", "", 25000, 12500, "" },
            { "rhs_weap_aks74un", "", 50000, 12500, "" },
            { "rhs_weap_ak74m_desert_npz", "", 50000, 12500, "" },
            { "rhs_weap_ak74m_fullplum_npz", "", 50000, 12500, "" }
            { "optic_Yorris", "", 3500, 1750, "" },
            { "rhs_acc_ekp8_02", "", 3500, 1750, "" },
            { "optic_ACO_grn", "", 3500, 1750, "" },
            { "optic_Aco", "", 3500, 1750, "" },
            { "optic_Holosight_blk_F", "", 4500, 1750, "" }
        };
        mags[] = {
            { "30Rnd_9x21_Mag_SMG_02", "", 800, 150, "" },
            { "rhsusf_mag_40Rnd_46x30_FMJ", "", 1200, 150, "" },
            { "rhs_30Rnd_545x39_7N10_AK", "", 1800, 150, "" }
        };
        accs[] = {
            { "Item_optic_Yorris", "", 3500, 1750, "" },
            { "Item_rhs_acc_ekp8_02", "", 3500, 1750, "" },
            { "Item_optic_ACO_grn", "", 3500, 1750, "" },
            { "Item_optic_Aco", "", 3500, 1750, "" },
            { "Item_optic_Holosight_blk_F", "", 4500, 1750, "" }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        conditions = "";
        items[] = {
            { "hgun_Rook40_F", "", 1500, 750, "" },
            { "hgun_Pistol_heavy_02_F", "", 2500, 1250, "" },
            { "hgun_ACPC2_F", "", 4500, 2250, "" },
            { "hgun_PDW2000_F", "", 9500, 4750, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "6Rnd_45ACP_Cylinder", "", 150, 75, "" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "" },
            { "30Rnd_9x21_Mag", "", 250, 125, "" }
        };
        accs[] = {
            { "Item_acc_flashlight_pistol", "", 500, 250, "" },//Pistol Flashlight
            { "Item_optic_ACO_grn_smg", "", 950, 475, "" }
        };
    };

    //Basic Shops
    class genstore {
        name = "Magasin";
        side = "civ";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, 75, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "ItemMap", "", 50, 25, "" },
            { "ACE_Flashlight_XL50", "", 50, 25, "" },
            { "ItemCompass", "", 50, 25, "" },
            { "ItemWatch", "", 50, 25, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "ACE_FieldDressing", "", 0, 0, "" },
            { "ACE_morphine", "", 0, 0, "" },
            { "ACE_EarPlugs", "", 0, 0, "" },
            { "murshun_cigs_cigpack", "", 0, 0, "" },
            { "murshun_cigs_matches", "", 0, 0, "" },
            { "Chemlight_red", "", 300, 150, "" },
            { "Chemlight_yellow", "", 300, 150, "" },
            { "Chemlight_green", "", 300, 150, "" },
            { "Chemlight_blue", "", 300, 150, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class gouv {
        name = "Magasin";
        side = "civ";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, 75, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "ItemMap", "", 50, 25, "" },
            { "ACE_Flashlight_XL50", "", 50, 25, "" },
            { "ItemCompass", "", 50, 25, "" },
            { "ItemWatch", "", 50, 25, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "ACE_FieldDressing", "", 0, 0, "" },
            { "ACE_morphine", "", 0, 0, "" },
            { "ACE_EarPlugs", "", 0, 0, "" },
            { "murshun_cigs_cigpack", "", 0, 0, "" },
            { "murshun_cigs_lighter", "", 0, 0, "" },
            { "murshun_cigs_matches", "", 0, 0, "" },
            { "Chemlight_red", "", 300, 150, "" },
            { "Chemlight_yellow", "", 300, 150, "" },
            { "Chemlight_green", "", 300, 150, "" },
            { "Chemlight_blue", "", 300, 150, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        conditions = "";
        items[] = {
            { "Binocular", "", 750, 75, "" },
            { "ItemGPS", "", 500, 50, "" },
            { "ItemMap", "", 250, 25, "" },
            { "ACE_Flashlight_XL50", "", 50, 25, "" },
            { "ItemCompass", "", 250, 25, "" },
            { "ItemWatch", "", 250, 25, "" },
            { "FirstAidKit", "", 750, 75, "" },
            { "ACE_FieldDressing", "", 0, 0, "" },
            { "ACE_morphine", "", 0, 0, "" },
            { "ACE_EarPlugs", "", 0, 0, "" },
            { "Chemlight_red", "", 1500, 150, "" },
            { "Chemlight_yellow", "", 1500, 150, "" },
            { "Chemlight_green", "", 1500, 150, "" },
            { "Chemlight_blue", "", 1500, 150, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        conditions = "";
        items[] = {
            { "Binocular", "", 0, 0, "" },
            { "ItemGPS", "", 0, 0, "" },
            { "ACE_FieldDressing", "", 0, 0, "" },
            { "ACE_morphine", "", 0, 0, "" },
			{ "ACE_CableTie", "", 0, 0, "" },
            { "ACE_EarPlugs", "", 0, 0, "" },
            { "murshun_cigs_cigpack", "", 0, 0, "" },
            { "murshun_cigs_matches", "", 0, 0, "" },
			{ "NVGoggles", "", 0, 0, "" },
			{ "rhs_weap_6p53", "", 0, 0, "call life_coplevel >= 1" },
            { "rhs_weap_ak105", "", 0, 0, "call life_coplevel >= 2" },
			{ "rhs_weap_ak74m", "", 0, 0, "call life_coplevel >= 3" },
			{ "rhs_weap_ak103", "", 0, 0, "call life_coplevel >= 4" },
			{ "srifle_DMR_06_olive_F", "", 0, 0, "call life_coplevel >= 5" },
			{ "rhs_weap_M320", "", 0, 0, "call life_coplevel >= 5" },
			{ "rhs_weap_ak103_zenitco01_b33", "", 0, 0, "call life_coplevel >= 6" },
			{ "rhs_weap_pkp", "", 0, 0, "call life_coplevel >= 7" }
        };
        mags[] = {
			//6P53
			{ "rhs_18rnd_9x21mm_7N28", "", 0, 0, "" },
			//Ak
			{ "rhs_30Rnd_545x39_7N10_AK", "", 0, 0, "" },
			//Ak-103
			{ "rhs_magazine_rhs_30Rnd_762x39mm_polymer", "", 0, 0, "" },
			//M14
			{ "20Rnd_762x51_Mag", "", 0, 0, "" },
			//Lance Grenade
			{ "rhs_mag_m4009", "", 0, 0, "" },
			{ "1Rnd_Smoke_Grenade_shell", "", 0, 0, "" },
			//PKP
			{ "rhs_100Rnd_762x54mmR", "", 0, 0, "" }
        };
        accs[] = {
			//Ak-103
            { "Item_optic_MRCO", "", 0, 0, "call life_coplevel >= 6" },
			{ "Item_rhs_acc_dtk1", "", 0, 0, "call life_coplevel >= 6" },
			{ "Item_rhs_acc_grip_rk2", "", 0, 0, "call life_coplevel >= 6" },
			//M14
			{ "Item_Ace_optic_MRCO_2D", "", 0, 0, "call life_coplevel >= 5" },
			{ "Item_optic_MRCO", "", 0, 0, "call life_coplevel >= 5" }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        conditions = "";
        items[] = {
            { "ItemGPS", "", 100, 50, "" },
            { "Binocular", "", 150, 75, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "ACE_FieldDressing", "", 0, 0, "" },
            { "ACE_morphine", "", 0, 0, "" },
            { "ACE_epinephrine", "", 0, 0, "" },
            { "ACE_bloodIV_500", "", 0, 0, "" },
            { "ACE_CableTie", "", 0, 0, "" },
            { "ACE_EarPlugs", "", 0, 0, "" },
            { "murshun_cigs_cigpack", "", 0, 0, "" },
            { "murshun_cigs_matches", "", 0, 0, "" },
            { "SmokeShellBlue", "", 0, 0, "" },
            { "SmokeShellYellow", "", 0, 0, "" },
            { "SmokeShellOrange", "", 0, 0, "" },
            { "SmokeShellPurple", "", 0, 0, "" },
            { "SmokeShellRed", "", 0, 0, "" },
            { "SmokeShellGreen", "", 0, 0, "" },
            { "NVGoggles", "", 1200, 600, "" }
        };
        mags[] = {};
        accs[] = {};
    };
};
