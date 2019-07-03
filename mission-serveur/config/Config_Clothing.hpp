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
			{ "LOP_U_CHR_Citizen_03", "", 500, "" },
			{ "LOP_U_CHR_Citizen_04", "", 500, "" },
			{ "LOP_U_CHR_Citizen_01", "", 500, "" },
			{ "LOP_U_CHR_Citizen_07", "", 500, "" },
			{ "LOP_U_CHR_Citizen_02", "", 500, "" },
			{ "LOP_U_CHR_Citizen_05", "", 500, "" },
			{ "LOP_U_CHR_Citizen_06", "", 500, "" },
			{ "LOP_U_TAK_Civ_Fatigue_06", "", 500, "" },
			{ "LOP_U_TAK_Civ_Fatigue_08", "", 500, "" },
			{ "LOP_U_TAK_Civ_Fatigue_07", "", 500, "" },
			{ "LOP_U_TAK_Civ_Fatigue_05", "", 500, "" },
			{ "LOP_U_TAK_Civ_Fatigue_01", "", 500, "" },
			{ "LOP_U_TAK_Civ_Fatigue_10", "", 500, "" },
			{ "LOP_U_TAK_Civ_Fatigue_02", "", 500, "" },
			{ "LOP_U_TAK_Civ_Fatigue_09", "", 500, "" },
			{ "LOP_U_TAK_Civ_Fatigue_11", "", 500, "" },
			{ "LOP_U_TAK_Civ_Fatigue_12", "", 500, "" },
			{ "LOP_U_TAK_Civ_Fatigue_04", "", 500, "" },
			{ "LOP_U_TAK_Civ_Fatigue_02", "", 500, "" },
			{ "LOP_U_CHR_Villager_01", "", 500, "" },
			{ "LOP_U_CHR_Villager_04", "", 500, "" },
			{ "LOP_U_CHR_Villager_03", "", 500, "" },
			{ "LOP_U_CHR_Villager_02", "", 500, "" },
      { "LOP_U_CHR_Profiteer_02", "", 500, "" },
      { "LOP_U_CHR_Profiteer_03", "", 500, "" },
      { "LOP_U_CHR_Profiteer_01", "", 500, "" },
      { "LOP_U_CHR_Profiteer_04", "", 500, "" },
      { "LOP_U_CHR_Profiteer_01", "", 500, "" },
      { "LOP_U_CHR_Woodlander_01", "", 500, "" },
      { "LOP_U_CHR_Woodlander_02", "", 500, "" },
      { "LOP_U_CHR_Woodlander_03", "", 500, "" },
      { "LOP_U_CHR_Woodlander_04", "", 500, "" },
      { "LOP_U_CHR_Woodlander_05", "", 500, "" },
      { "LOP_U_CHR_Worker_03", "", 500, "" },
      { "LOP_U_CHR_Worker_04", "", 500, "" },
      { "LOP_U_CHR_Worker_01", "", 500, "" },
      { "U_I_C_Soldier_Bandit_5_F", "", 500, "" },
      { "U_I_C_Soldier_Bandit_3_F", "", 500, "" },
      { "U_C_Poor_1", "", 500, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "LOP_H_Pakol", "", 250, "" },
            { "LOP_H_Turban", "", 250, "" },
            { "LOP_H_Worker_cap", "", 250, "" },
            { "H_Bandanna_sand", "", 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "rhsusf_shemagh_grn", "", 150, "" },
            { "rhsusf_shemagh_od", "", 150, "" },
            { "rhsusf_shemagh_tan", "", 150, "" },
            { "rhsusf_shemagh_white", "", 150, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "rhs_vest_commander", "", 400, "" },
            { "rhs_vest_pistol_holster", "", 400, "" },
            { "V_LegStrapBag_coyote_F", "", 400, "" },
            { "V_LegStrapBag_black_F", "", 400, "" },
            { "V_LegStrapBag_olive_F", "", 400, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_Messenger_Coyote_F", "", 990, "" },
            { "B_Messenger_Gray_F", "", 990, "" },
            { "B_Messenger_Black_F", "", 995, "" },
            { "B_Messenger_Olive_F", "", 995, "" },
			{ "B_Kitbag_tan", "", 1500, "" },
			{ "B_Kitbag_rgr", "", 1500, "" },
			{ "B_Carryall_cbr", "", 10000, "" },
            { "rhs_sidor", "", 880, "" }
        };
    };

    class milice {
        title = "STR_Shops_C_Police";
        conditions = "call life_coplevel >= 1";
        side = "cop";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "LOP_U_US_FATIGUE_03", "", 0, "call life_coplevel >= 1" },
            { "rhs_uniform_mflora_patchless", "", 0, "call life_coplevel >= 7" }

        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "LOP_H_chDKZ_Beret", "", 0, "call life_coplevel >= 5" },
            { "rhs_6b7_1m", "", 0, "call life_coplevel >= 2" },
			{ "rhs_fieldcap_khk", "", 0, "call life_coplevel >= 4" },
			{ "LOP_H_SLA_Beret", "", 0, "call life_coplevel >= 7" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
			{ "immersion_cigs_cigar0", "", 0, "call life_coplevel >= 7" },
			{ "murshun_cigs_cig0", "", 0, "call life_coplevel >= 2" },
			{ "G_Aviator", "", 0, "call life_coplevel >= 1" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "LOP_V_6B23_OLV", "", 0, "call life_coplevel >= 1" },
            { "LOP_V_6B23_Rifleman_OLV", "", 0, "call life_coplevel >= 2" },
            { "LOP_V_6B23_6Sh92_OLV", "", 0, "call life_coplevel >= 3" },
            { "rhs_6b23_6sh116_od", "", 0, "call life_coplevel >= 4" },
			{ "rhs_6b43", "", 0, "call life_coplevel >= 6" },
			{ "rhs_6b13_6sh92_radio", "", 0, "call life_coplevel >= 5" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "tf_rt1523g_green", "", 0, "call life_coplevel >= 1" },
			{ "tf_anprc155_coyote", "", 0, "call life_coplevel >= 1" },
			{ "B_FieldPack_oli", "", 0, "call life_coplevel >= 1" },
			{ "B_Kitbag_sgg", "", 0, "call life_coplevel >= 1" },
			{ "rhs_sidor", "", 0, "call life_coplevel >= 1" }
        };
    };

    class gouv {
        title = "STR_Shops_C_Gouv";
        conditions = "license_civ_gouv";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "LOP_U_CHR_Functionary_01", "", 1000, "" },
            { "LOP_U_CHR_Functionary_02", "", 1000, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "rhs_beret_milp", "", 500, "" },
            { "H_Hat_brown", "", 500, "" },
            { "H_Hat_tan", "", 500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Squares_Tinted", "", 500, "" },
            { "G_Spectacles", "", 500, "" },
            { "immersion_cigs_cigar0", "", 500, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "rhs_vest_commander", "", 400, "" },
            { "rhs_vest_pistol_holster", "", 400, "" }
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
            { "V_Rangemaster_belt", "", 4511, "" }
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

    class onu_clothing {
        title = "STR_MAR_ONU_Clothing_Shop";
        conditions = "";
        side = "med";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
			{ "rhs_uniform_cu_ocp", "", 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "LOP_H_6B27M_UN", "", 0, "" },
			{ "LOP_H_Beret_UN", "", 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "rhs_googles_black", "", 10, "" },
			{ "rhsusf_oakley_goggles_blk", "", 10, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "rhsusf_iotv_ocp_Teamleader", "", 10, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
			{ "tf_anprc155_coyote", "", 0, "" }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        conditions = "license_civ_rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_I_C_Soldier_Bandit_1_F", "", 1800, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_2_F", "", 1800, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_3_F", "", 1800, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_4_F", "", 1800, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_5_F", "", 1800, "" }, //Apex DLC
            { "U_I_C_Soldier_Para_3_F", "", 1800, "" }, //Apex DLC
            { "U_I_C_Soldier_Para_4_F", "", 1800, "" }, //Apex DLC
            { "U_I_C_Soldier_Para_5_F", "", 1800, "" }, //Apex DLC
            { "U_I_C_Soldier_Para_1_F", "", 1800, "" }, //Apex DLC
            { "U_I_C_Soldier_Para_2_F", "", 1800, "" }, //Apex DLC
            { "LOP_U_AM_Fatigue_01_4", "", 1800, "" },
            { "LOP_U_AM_Fatigue_01_6", "", 1800, "" },
            { "LOP_U_AM_Fatigue_01", "", 1800, "" },
            { "LOP_U_AM_Fatigue_01_2", "", 1800, "" },
            { "LOP_U_AM_Fatigue_01_5", "", 1800, "" },
            { "LOP_U_AM_Fatigue_01_3", "", 1800, "" },
            { "LOP_U_AM_Fatigue_02_3", "", 1800, "" },
            { "LOP_U_AM_Fatigue_02_5", "", 1800, "" },
            { "LOP_U_AM_Fatigue_02_6", "", 1800, "" },
            { "LOP_U_AM_Fatigue_02_4", "", 1800, "" },
            { "LOP_U_AM_Fatigue_02_2", "", 1800, "" },
            { "LOP_U_AM_Fatigue_02", "", 1800, "" },
            { "LOP_U_AM_Fatigue_03_3", "", 1800, "" },
            { "LOP_U_AM_Fatigue_03_6", "", 1800, "" },
            { "LOP_U_AM_Fatigue_03_4", "", 1800, "" },
            { "LOP_U_AM_Fatigue_04_3", "", 1800, "" },
            { "LOP_U_AM_Fatigue_04_2", "", 1800, "" },
            { "LOP_U_AM_Fatigue_04_2", "", 1800, "" },
            { "LOP_U_AM_Fatigue_04_2", "", 1800, "" },
            { "LOP_U_AM_Fatigue_04_5", "", 1800, "" },
            { "LOP_U_IRA_Fatigue_GRK_BLK", "", 1800, "" },
            { "LOP_U_UVF_Fatigue_BL", "", 1800, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "LOP_H_Shemag_BLK", "", 1000, "" },
            { "LOP_H_Shemag_BLU", "", 1000, "" },
            { "LOP_H_Shemag_GRE", "", 1000, "" },
            { "LOP_H_Shemag_OLV", "", 1000, "" },
            { "LOP_H_Shemag_RED1", "", 1000, "" },
            { "LOP_H_Shemag_RED2", "", 1000, "" },
            { "LOP_H_Shemag_TAN", "", 1000, "" },
            { "H_Beret_blk", "", 1000, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "rhs_balaclava", "", 400, "" },
            { "G_Balaclava_blk", "", 400, "" },
            { "G_Balaclava_oli", "", 400, "" },
            { "rhs_balaclava1_olive", "", 400, "" },
            { "rhs_scarf", "", 400, "" },
            { "rhsusf_shemagh2_grn", "", 400, "" },
            { "rhsusf_shemagh2_od", "", 400, "" },
            { "rhsusf_shemagh2_tan", "", 400, "" },
            { "G_Balaclava_blk", "", 400, "" },
            { "G_Bandanna_blk", "", 400, "" },
            { "rhsusf_shemagh2_white", "", 400, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_TacVest_khk", "", 7500, "" },
            { "V_TacVest_blk", "", 7500, "" },
            { "LOP_V_CarrierRig_BLK", "", 7500, "" },
            { "rhsusf_spc_patchless_radio", "", 7500, "" },
            { "V_PlateCarrier2_blk", "", 10500, "" },
            { "V_PlateCarrier1_blk", "", 10500, "" },
            { "LOP_V_CarrierLite_BLK", "", 10500, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
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
