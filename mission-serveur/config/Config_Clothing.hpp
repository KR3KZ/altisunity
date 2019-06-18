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
			{ "LOP_U_CHR_Villager_02", "", 0, "" },
      { "LOP_U_CHR_Profiteer_02", "", 0, "" },
      { "LOP_U_CHR_Profiteer_03", "", 0, "" },
      { "LOP_U_CHR_Profiteer_01", "", 0, "" },
      { "LOP_U_CHR_Profiteer_04", "", 0, "" },
      { "LOP_U_CHR_Profiteer_01", "", 0, "" },
      { "LOP_U_CHR_Woodlander_01", "", 0, "" },
      { "LOP_U_CHR_Woodlander_02", "", 0, "" },
      { "LOP_U_CHR_Woodlander_03", "", 0, "" },
      { "LOP_U_CHR_Woodlander_04", "", 0, "" },
      { "LOP_U_CHR_Woodlander_05", "", 0, "" },
      { "LOP_U_CHR_Worker_03", "", 0, "" },
      { "LOP_U_CHR_Worker_04", "", 0, "" },
      { "LOP_U_CHR_Worker_01", "", 0, "" },
      { "U_I_C_Soldier_Bandit_5_F", "", 0, "" },
      { "U_I_C_Soldier_Bandit_3_F", "", 0, "" },
      { "U_C_Poor_1", "", 0, "" }
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
            { "rhs_vest_pistol_holster", "", 0, "" },
            { "V_LegStrapBag_coyote_F", "", 0, "" },
            { "V_LegStrapBag_black_F", "", 0, "" },
            { "V_LegStrapBag_olive_F", "", 0, "" }
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
            { "LOP_U_CHR_Functionary_01", "", 2000, "" },
            { "LOP_U_CHR_Functionary_02", "", 2000, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "rhs_beret_milp", "", 2000, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Squares_Tinted", "", 500, "" },
            { "immersion_cigs_cigar0", "", 500, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "rhs_vest_commander", "", 5000, "" },
            { "rhs_vest_pistol_holster", "", 5000, "" }
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
            { "LOP_U_CHR_SchoolTeacher_01", "", 50, "" },
            { "U_C_Scientist", "", 50, "" },
            { "U_C_Paramedic_01_F", "", 50, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_WirelessEarpiece_F", "", 0, "" },
            { "H_HeadBandage_bloody_F", "", 0, "" },
            { "H_HeadBandage_stained_F", "", 0, "" },
            { "H_HeadBandage_clean_F", "", 0, "" },
            { "H_Hat_Safari_olive_F", "", 0, "" },
            { "H_Hat_Safari_sand_F", "", 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Respirator_white_F", "", 10, "" },
            { "G_Respirator_blue_F", "", 10, "" },
            { "G_Respirator_yellow_F", "", 10, "" },
            { "G_EyeProtectors_F", "", 10, "" },
            { "G_Spectacles", "", 10, "" },
            { "G_Squares", "", 10, "" },
            { "G_Lowprofile", "", 10, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Plain_crystal_F", "", 10, "" },
            { "LOP_V_6B23_Medic_OLV", "", 10, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_Messenger_Coyote_F", "", 3000, "" },
            { "B_Messenger_Gray_F", "", 3000, "" },
            { "B_Messenger_Black_F", "", 3000, "" },
            { "B_Messenger_Olive_F", "", 3000, "" }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        conditions = "license_civ_rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_B_T_Soldier_F", "", 50000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_1_F", "", 50000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_2_F", "", 51000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_3_F", "", 50032, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_4_F", "", 50020, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_5_F", "", 50020, "" }, //Apex DLC
            { "U_I_C_Soldier_Para_3_F", "", 52000, "" }, //Apex DLC
            { "U_I_C_Soldier_Para_4_F", "", 52000, "" }, //Apex DLC
            { "U_I_C_Soldier_Para_5_F", "", 52000, "" }, //Apex DLC
            { "U_I_C_Soldier_Para_1_F", "", 52000, "" }, //Apex DLC
            { "U_I_C_Soldier_Para_2_F", "", 52000, "" }, //Apex DLC
            { "LOP_U_AM_Fatigue_01_4", "", 52000, "" },
            { "LOP_U_AM_Fatigue_01_6", "", 52000, "" },
            { "LOP_U_AM_Fatigue_01", "", 52000, "" },
            { "LOP_U_AM_Fatigue_01_2", "", 52000, "" },
            { "LOP_U_AM_Fatigue_01_5", "", 52000, "" },
            { "LOP_U_AM_Fatigue_01_3", "", 52000, "" },
            { "LOP_U_AM_Fatigue_02_3", "", 52000, "" },
            { "LOP_U_AM_Fatigue_02_5", "", 52000, "" },
            { "LOP_U_AM_Fatigue_02_6", "", 52000, "" },
            { "LOP_U_AM_Fatigue_02_4", "", 52000, "" },
            { "LOP_U_AM_Fatigue_02_2", "", 52000, "" },
            { "LOP_U_AM_Fatigue_02", "", 52000, "" },
            { "LOP_U_AM_Fatigue_03_3", "", 52000, "" },
            { "LOP_U_AM_Fatigue_03_6", "", 52000, "" },
            { "LOP_U_AM_Fatigue_03_4", "", 52000, "" },
            { "LOP_U_AM_Fatigue_04_3", "", 52000, "" },
            { "LOP_U_AM_Fatigue_04_2", "", 52000, "" },
            { "LOP_U_AM_Fatigue_04_5", "", 52000, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "LOP_H_Shemag_BLK", "", 650, "" },
            { "LOP_H_Shemag_BLU", "", 800, "" },
            { "LOP_H_Shemag_GRE", "", 850, "" },
            { "LOP_H_Shemag_OLV", "", 850, "" },
            { "LOP_H_Shemag_RED1", "", 2500, "" },
            { "LOP_H_Shemag_RED2", "", 2500, "" },
            { "LOP_H_Shemag_TAN", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "rhs_balaclava", "", 20, "" },
            { "G_Balaclava_blk", "", 20, "" },
            { "G_Balaclava_oli", "", 25, "" },
            { "rhs_balaclava1_olive", "", 25, "" },
            { "rhs_scarf", "", 25, "" },
            { "rhsusf_shemagh2_grn", "", 25, "" },
            { "rhsusf_shemagh2_od", "", 30, "" },
            { "rhsusf_shemagh2_tan", "", 30, "" },
            { "rhsusf_shemagh2_white", "", 30, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_TacVest_khk", "", 4500, "" },
            { "V_TacVest_blk", "", 7500, "" },
            { "LOP_V_CarrierRig_BLK", "", 12500, "" },
            { "V_PlateCarrier1_blk", "", 17500, "" },
            { "rhsusf_spc_patchless_radio", "", 17500, "" }

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
