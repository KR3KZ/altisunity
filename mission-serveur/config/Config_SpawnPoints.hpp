/*
*    Format:
*        3: STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*/
class CfgSpawnPoints {
	class Lythium {
		class Civilian {
			class spawn1 {
				displayName = "Kavala";
				spawnMarker = "civ_spawn_1";
				icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
				conditions = "!license_civ_rebel";
			};

			class spawn2 {
				displayName = "Athira";
				spawnMarker = "civ_spawn_3";
				icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
				conditions = "";
			};

			class spawn3 {
				displayName = "Pyrgos";
				spawnMarker = "civ_spawn_2";
				icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
				conditions = "";
			};

			class spawn4 {
				displayName = "Sofia";
				spawnMarker = "civ_spawn_4";
				icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
				conditions = "";
			};

			class spawn5 {
				displayName = "";
				spawnMarker = "Rebelop";
				icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
				conditions = "license_civ_rebel";
			};

			class spawn6 {
				displayName = "";
				spawnMarker = "Rebelop_1";
				icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
				conditions = "license_civ_rebel";
			};

			class spawn7 {
				displayName = "";
				spawnMarker = "Rebelop_2";
				icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
				conditions = "license_civ_rebel";
			};
		};

		class Cop {
			class spawn_cop1 {
				displayName = "Kavala HQ";
				spawnMarker = "cop_spawn_1";
				icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
				conditions = "";
			};

			class spawn_cop2 {
				displayName = "Athira HQ";
				spawnMarker = "cop_spawn_3";
				icon = "\a3\ui_f\data\map\MapControl\fuelstation_ca.paa";
				conditions = "";
			};

			class spawn_cop3 {
				displayName = "Pyrgos HQ";
				spawnMarker = "cop_spawn_2";
				icon = "\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa";
				conditions = "";
			};

			class spawn_cop4 {
				displayName = "";
				spawnMarker = "cop_spawn_4";
				icon = "\a3\ui_f\data\map\Markers\NATO\b_air.paa";
				conditions = "call life_coplevel >= 2 && {license_cop_cAir}";
			};

			class spawn_cop5 {
				displayName = "";
				spawnMarker = "cop_spawn_5";
				icon = "\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa";
				conditions = "call life_coplevel >= 3";
			};
		};

		class Medic {
			class spawn_med1 {
				displayName = "";
				spawnMarker = "medic_spawn_1";
				icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
				conditions = "";
			};

			class spawn_med2 {
				displayName = "";
				spawnMarker = "medic_spawn_2";
				icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
				conditions = "";
			};

			class spawn_med3 {
				displayName = "";
				spawnMarker = "medic_spawn_3";
				icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
				conditions = "";
			};
		};
	};
};
