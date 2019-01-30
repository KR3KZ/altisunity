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
				displayName = "Kinduf";
				spawnMarker = "civ_spawn_1";
				icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
				conditions = "";
			};

			class spawn2 {
				displayName = "KalaeNoowi";
				spawnMarker = "civ_spawn_2";
				icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
				conditions = "";
			};

			class spawn3 {
				displayName = "Limari";
				spawnMarker = "civ_spawn_3";
				icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
				conditions = "";
			};
		};

		class Cop {
			class spawn_cop1 {
				displayName = "KalaeNoowi";
				spawnMarker = "cop_spawn_1";
				icon = "\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa";
				conditions = "";
			};

			class spawn_cop2 {
				displayName = "Kinduf";
				spawnMarker = "cop_spawn_2";
				icon = "\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa";
				conditions = "";
			};

			class spawn_cop3 {
				displayName = "MikisFob";
				spawnMarker = "cop_spawn_3";
				icon = "\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa";
				conditions = "";
			};
		};

		class Medic {
			class spawn_med1 {
				displayName = "KalaeNoowi";
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
