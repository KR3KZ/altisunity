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
            { "arifle_TRG20_F", "", 25000, 12500, "" },
            { "arifle_Katiba_F", "", 30000, 15000, "" },
            { "srifle_DMR_01_F", "", 50000, 25000, "" },
            { "arifle_SDAR_F", "", 20000, 10000, "" },
            { "arifle_AK12_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_AKS_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_AKM_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_ARX_blk_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_SPAR_01_blk_F", "", 33000, 16500, "" }, //Apex DLC
            { "arifle_CTAR_blk_F", "", 30000, 15000, "" } //Apex DLC
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 300, 150, "" },
            { "30Rnd_762x39_Mag_F", "", 300, 150, "" }, //Apex DLC
            { "30Rnd_545x39_Mag_F", "", 300, 150, "" }, //Apex DLC
            { "30Rnd_65x39_caseless_green", "", 275, 140, "" },
            { "10Rnd_762x54_Mag", "", 500, 250, "" },
            { "20Rnd_556x45_UW_mag", "", 125, 60, "" },
            { "30Rnd_580x42_Mag_F", "", 125, 60, "" } //Apex DLC
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500, 1750, "" },
            { "optic_Holosight", "", 3600, 1800, "" },
            { "optic_Hamr", "", 7500, 3750, "" },
            { "acc_flashlight", "", 1000, 500, "" }
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
            { "acc_flashlight_pistol", "", 500, 250, "" },//Pistol Flashlight
            { "optic_ACO_grn_smg", "", 950, 475, "" }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, 75, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "ItemMap", "", 50, 25, "" },
            { "ItemCompass", "", 50, 25, "" },
            { "ItemWatch", "", 50, 25, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 2000, 1000, "" },
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
            { "ItemCompass", "", 250, 25, "" },
            { "ItemWatch", "", 250, 25, "" },
            { "FirstAidKit", "", 750, 75, "" },
            { "NVGoggles", "", 10000, 1000, "" },
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
			{ "NVGoggles", "", 0, 0, "" },
            { "rhs_wheap_ak105", "", 0, 0, "call life_coplevel >= 2" },
			{ "rhs_wheap_ak74m", "", 0, 0, "call life_coplevel >= 3" },
			{ "rhs_wheap_ak 103", "", 0, 0, "call life_coplevel >= 4" },
			{ "srifle_DMR_06_olive_F", "", 0, 0, "call life_coplevel >= 5" },
			{ "rhs_weap_M320", "", 0, 0, "call life_coplevel >= 5" },
			{ "rhs_weap_6p53", "", 0, 0, "call life_coplevel >= 1" },
			{ "rhs_wheap_pkp", "", 0, 0, "call life_coplevel >= 7" }
        };
        mags[] = {
            { "30Rnd_AK-103_57-N-231P_Mag", "", 0, 0, "call life_coplevel >= 3" },
			{ "30Rnd_AK-74_7N10_Mag", "", 0, 0, "call life_coplevel >= 1" },
			{ "7.62mm_20rnd_mag", "", 0, 0, "call life_coplevel >= 4" },
			{ "GL_Stun_Grenade_Round", "", 0, 0, "call life_coplevel >= 5" },
			{ "18rnd_SR-1_7N28", "", 0, 0, "call life_coplevel >= 1" },
			{ "100_PKM_57-N-323S_Mag", "", 0, 0, "call life_coplevel >= 7" }
        };
        accs[] = {
            { "rhs_acc_pkas", "", 0, 0, "" }
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
            { "NVGoggles", "", 1200, 600, "" }
        };
        mags[] = {};
        accs[] = {};
    };
};
