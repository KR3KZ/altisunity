/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        3: STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class civil {
        title = "STR_Shops_C_Bruce";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
			{ "LOP_U_CHR_Citizen_03", "", 0, "" },
			{ "LOP_U_CHR_Citizen_04", "", 0, "" },
			{ "LOP_U_CHR_Citizen_01", "", 0, "" },
			{ "LOP_U_CHR_Citizen_07", "", 0, "" },
			{ "LOP_U_CHR_Citizen_02", "", 0, "" },
			{ "LOP_U_CHR_Citizen_05", "", 0, "" },
			{ "LOP_U_CHR_Citizen_06", "", 0, "" },
			{ "LOP_U_TAK_Civ_Fatigue_06", "", 0, "" },
			{ "LOP_U_TAK_Civ_Fatigue_08", "", 0, "" },
			{ "LOP_U_TAK_Civ_Fatigue_07", "", 0, "" },
			{ "LOP_U_TAK_Civ_Fatigue_05", "", 0, "" },
			{ "LOP_U_TAK_Civ_Fatigue_01", "", 0, "" },
			{ "LOP_U_TAK_Civ_Fatigue_10", "", 0, "" },
			{ "LOP_U_TAK_Civ_Fatigue_02", "", 0, "" },
			{ "LOP_U_TAK_Civ_Fatigue_09", "", 0, "" },
			{ "LOP_U_TAK_Civ_Fatigue_11", "", 0, "" },
			{ "LOP_U_TAK_Civ_Fatigue_12", "", 0, "" },
			{ "LOP_U_TAK_Civ_Fatigue_04", "", 0, "" },
			{ "LOP_U_TAK_Civ_Fatigue_02", "", 0, "" },
			{ "LOP_U_CHR_Villager_01", "", 0, "" },
			{ "LOP_U_CHR_Villager_04", "", 0, "" },
			{ "LOP_U_CHR_Villager_03", "", 0, "" },
			{ "LOP_U_CHR_Villager_02", "", 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "LOP_H_Pakol", "", 0, "" },
            { "LOP_H_Turban", "", 0, "" },
            { "LOP_H_Worker_cap", "", 0, "" },
            { "H_Bandanna_sand", "", 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "rhsusf_shemagh_grn", "", 0, "" },
            { "rhsusf_shemagh_od", "", 0, "" },
            { "rhsusf_shemagh_tan", "", 0, "" },
            { "rhsusf_shemagh_white", "", 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "rhs_vest_commander", "", 0, "" },
            { "rhs_vest_pistol_holster", "", 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_Messenger_Coyote_F", "", 0, "" },
            { "B_Messenger_Gray_F", "", 0, "" },
            { "B_Messenger_Black_F", "", 0, "" },
            { "B_Messenger_Olive_F", "", 0, "" },
            { "rhs_sidor", "", 0, "" }
        };
    };

    class milice {
        title = "STR_Shops_C_Police";
        conditions = "call life_coplevel >= 1";
        side = "cop";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "LOP_U_AA_Fatigue_03", "", 0, "call life_coplevel >= 1" },
            { "LOP_U_AA_Fatigue_03_slv", "", 0, "call life_coplevel >= 1" }

        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "LOP_H_chDKZ_Beret", "", 0, "call life_coplevel >= 4" },
            { "H_PASGT_basic_black_F", "", 0, "call life_coplevel >= 3" },
			{ "H_Watchcap_blk", "", 0, "call life_coplevel >= 1" },
			{ "LOP_H_SLA_Beret", "", 0, "call life_coplevel >= 7" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Aviator", "", 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "LOP_V_CarrierLite_BLK", "", 0, "call life_coplevel >= 2" },
            { "LOP_V_CarrierRig_BLK", "", 0, "call life_coplevel >= 3" },
            { "V_PlateCarrier1_blk", "", 0, "call life_coplevel >= 4" },
            { "LOP_V_Chestrig_Black", "", 0, "call life_coplevel >= 1" },
			{ "LOP_V_Carrier_BLK", "", 0, "call life_coplevel >= 3" },
			{ "V_PlateCarrier2_blk", "", 0, "call life_coplevel >= 5" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_Carryall_oucamo", "", 0, "" }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        conditions = "license_civ_dive";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_B_Wetsuit", "", 2000, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Diving", "", 500, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_RebreatherB", "", 5000, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        conditions = "license_civ_gun";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 4900, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 1900, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        conditions = "";
        side = "med";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_Rangemaster", "", 50, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Cap_blu", "", 10, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Blue", "", 10, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_FieldPack_oli", "", 3000, "" }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        conditions = "license_civ_rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_IG_Guerilla1_1", "", 5000, "" },
            { "U_I_G_Story_Protagonist_F", "", 7500, "" },
            { "U_I_G_resistanceLeader_F", "", 11500, "" },
            { "U_IG_leader", "", 15340, "" },
            { "U_O_PilotCoveralls", "", 15610, "" },
            { "U_O_SpecopsUniform_ocamo", "", 17500, "" },
            { "U_O_GhillieSuit", "", 50000, "" },
            { "U_B_T_Soldier_F", "", 50000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_1_F", "", 50000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_2_F", "", 51000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_3_F", "", 50032, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_4_F", "", 50020, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_5_F", "", 50020, "" }, //Apex DLC
            { "U_I_C_Soldier_Camo_F", "", 52000, "" } //Apex DLC
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Bandanna_camo", "", 650, "" },
            { "H_ShemagOpen_khk", "", 800, "" },
            { "H_ShemagOpen_tan", "", 850, "" },
            { "H_Shemag_olive", "", 850, "" },
            { "H_HelmetO_ocamo", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Combat", "", 125, "" },
            { "G_Balaclava_blk", "", 150, "" },
            { "G_Balaclava_combat", "", 150, "" },
            { "G_Balaclava_lowprofile", "", 150, "" },
            { "G_Balaclava_oli", "", 150, "" },
            { "G_Bandanna_aviator", "", 150, "" },
            { "G_Bandanna_beast", "", 150, "" },
            { "G_Bandanna_blk", "", 150, "" },
            { "G_Bandanna_khk", "", 150, "" },
            { "G_Bandanna_oli", "", 150, "" },
            { "G_Bandanna_shades", "", 150, "" },
            { "G_Bandanna_sport", "", 150, "" },
            { "G_Bandanna_tan", "", 150, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_BandollierB_cbr", "", 4500, "" },
            { "V_HarnessO_brn", "", 7500, "" },
            { "V_TacVest_khk", "", 12500, "" },
            { "V_TacChestrig_grn_F", "", 17500, "" } //Apex DLC
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_Driver_1_black", "", 1500, "" },
            { "U_C_Driver_1_blue", "", 1500, "" },
            { "U_C_Driver_1_red", "", 1500, "" },
            { "U_C_Driver_1_orange", "", 1500, "" },
            { "U_C_Driver_1_green", "", 1500, "" },
            { "U_C_Driver_1_white", "", 1500, "" },
            { "U_C_Driver_1_yellow", "", 1500, "" },
            { "U_C_Driver_2", "", 3500, "" },
            { "U_C_Driver_1", "", 3600, "" },
            { "U_C_Driver_3", "", 3700, "" },
            { "U_C_Driver_4", "", 3700, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_RacingHelmet_1_black_F", "", 1000, "" },
            { "H_RacingHelmet_1_red_F", "", 1000, "" },
            { "H_RacingHelmet_1_white_F", "", 1000, "" },
            { "H_RacingHelmet_1_blue_F", "", 1000, "" },
            { "H_RacingHelmet_1_yellow_F", "", 1000, "" },
            { "H_RacingHelmet_1_green_F", "", 1000, "" },
            { "H_RacingHelmet_1_F", "", 2500, "" },
            { "H_RacingHelmet_2_F", "", 2500, "" },
            { "H_RacingHelmet_3_F", "", 2500, "" },
            { "H_RacingHelmet_4_F", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };
};
