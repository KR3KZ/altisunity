[] spawn {
    diag_log format["spawn while"];

	private ["_isUnconscious"];
	while {true} do {
		// _isUnconscious = player getvariable ["ACE_isUnconscious", false];
		time_respawn = 0;
		// unconscious
		waitUntil {
			(player getVariable ["ACE_isUnconscious", false])
		};
        //diag_log format["%1 is unconscious",name player];

		sleep 1;
		time_respawn = time + (15 * 60);
		createDialog "DeathScreen";

		(findDisplay 7300) displaySetEventHandler ["KeyDown","if((_this select 1) == 1) then {true}"]; //Block the ESC menu

		player spawn {
			private ["_maxTime","_RespawnBtn","_Timer"];
			disableSerialization;
			player setVariable ["ACE_isUnconscious",true,true];
			_RespawnBtn = ((findDisplay 7300) displayCtrl 7302);
			_Timer = ((findDisplay 7300) displayCtrl 7301);
			if (FETCH_CONST(life_adminlevel) > 3) then {
				maxTimeRespawn = time + 10;
				_RespawnBtn ctrlEnable false;
				waitUntil {
					_Timer ctrlSetText format[localize "STR_Medic_Respawn",[(maxTimeRespawn - time),"MM:SS.MS"] call BIS_fnc_secondsToString];
					round(maxTimeRespawn - time) <= 0 OR isNull _this
				};
				_RespawnBtn ctrlEnable true;
				_Timer ctrlSetText localize "STR_Medic_Respawn_2";
				maxTimeRespawn = 0;
			} else {
				maxTimeRespawn = time + (life_respawn_timer * 60);
				_RespawnBtn ctrlEnable false;
				waitUntil {
					_Timer ctrlSetText format[localize "STR_Medic_Respawn",[(maxTimeRespawn - time),"MM:SS.MS"] call BIS_fnc_secondsToString];
					round(maxTimeRespawn - time) <= 0 OR isNull _this
				};
				_RespawnBtn ctrlEnable true;
				_Timer ctrlSetText localize "STR_Medic_Respawn_2";
				maxTimeRespawn = 0;
			};
		};

		[player] spawn life_fnc_deathScreen;

		// not unconscious
		waitUntil {
			!(player getVariable ["ACE_isUnconscious", false])
		};

		closeDialog 0;
        sleep 0.01;
	};
};
