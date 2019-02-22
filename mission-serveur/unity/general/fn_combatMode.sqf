combat_mode = {
	if (isNull player) exitWith {};
	player setVariable ["combat_mode", time, false];
	if (mode_combat == 1) exitwith  {};
	mode_combat = 1;
	[] call life_fnc_hudUpdate;
	[] spawn {
		private["_veh","_handled","_ctrlCombat"];
		while {((player getVariable ["combat_mode",0]) > time - 60)} do {
			if (cameraView == "External") then {
				if (vehicle player == player) then {
					player switchCamera "Internal";
				} else {
					if (driver (vehicle player) != player) then {
						player switchCamera "Internal";
					};
				};
			};
			sleep 0.01;
		};
		mode_combat = 0;
		player setVariable ["combat_mode", 0, false];
		[] call life_fnc_hudUpdate;
	};
};

player addEventHandler ["FiredNear", "if(!((_this select 6) in life_chemlist)) then { [] spawn combat_mode; };"];
