#include "..\script_macros.hpp"
/*
    File: init.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Master client initialization file
*/

private ["_handle","_timeStamp","_extDB_notLoaded"];
life_firstSpawn = true;
life_session_completed = false;
0 cutText[localize "STR_Init_ClientSetup","BLACK FADED"];
0 cutFadeOut 9999999;
_timeStamp = diag_tickTime;
_extDB_notLoaded = "";
diag_log "----------------------------------------------------------------------------------------------------";
diag_log "--------------------------------- Starting Altis Life Client Init ----------------------------------";
diag_log format["------------------------------------------ Version %1 -------------------------------------------",(LIFE_SETTINGS(getText,"framework_version"))];
diag_log "----------------------------------------------------------------------------------------------------";
waitUntil {!isNull player && player == player}; //Wait till the player is ready
[] call compile preprocessFileLineNumbers "core\clientValidator.sqf";
enableSentences false;

//Setup initial client core functions
diag_log "::Life Client:: Initialization Variables";
[] call compile preprocessFileLineNumbers "core\configuration.sqf";

diag_log "::Life Client:: Variables initialized";
diag_log "::Life Client:: Setting up Eventhandlers";
[] call life_fnc_setupEVH;

diag_log "::Life Client:: Eventhandlers completed";
diag_log "::Life Client:: Setting up user actions";
[] call life_fnc_setupActions;

diag_log "::Life Client:: User actions completed";
diag_log "::Life Client:: Waiting for server functions to transfer..";
waitUntil {(!isNil "TON_fnc_clientGangLeader")};

diag_log "::Life Client:: Received server functions.";
0 cutText [localize "STR_Init_ServerReady","BLACK FADED"];
0 cutFadeOut 99999999;

diag_log "::Life Client:: Waiting for the server to be ready..";
waitUntil {!isNil "life_server_isReady"};
waitUntil {!isNil "life_HC_isActive" && {!isNil "life_server_extDB_notLoaded"}};

if (life_server_extDB_notLoaded) exitWith {
    999999 cutText [localize "STR_Init_ExtdbFail","BLACK FADED"];
    999999 cutFadeOut 99999999;
};

waitUntil {life_server_isReady};
[] call SOCK_fnc_dataQuery;
waitUntil {life_session_completed};
0 cutText[localize "STR_Init_ClientFinish","BLACK FADED"];
0 cutFadeOut 9999999;

if (player getVariable["ACE_medical_bloodVolume",0] == 0) then {
	player setVariable["ACE_medical_bloodVolume",100,true];
};

//diag_log "::Life Client:: Group Base Execution";
//[] spawn life_fnc_escInterupt;

//Set bank amount for new players
switch (playerSide) do {
    case west: {
        life_paycheck = LIFE_SETTINGS(getNumber,"paycheck_cop");
    };
    case civilian: {
        life_paycheck = LIFE_SETTINGS(getNumber,"paycheck_civ");
    };
    case independent: {
        life_paycheck = LIFE_SETTINGS(getNumber,"paycheck_med");
    };
};

switch (playerSide) do {
    case west: {
        _handle = [] spawn life_fnc_initCop;
        waitUntil {scriptDone _handle};
    };
    case civilian: {
        //Initialize Civilian Settings
        _handle = [] spawn life_fnc_initCiv;
        waitUntil {scriptDone _handle};
    };
    case independent: {
        //Initialize Medics and blah
        _handle = [] spawn life_fnc_initMedic;
        waitUntil {scriptDone _handle};
    };
};

/*
player setVariable ["restrained",false,true];
player setVariable ["Escorting",false,true];
player setVariable ["transporting",false,true];
player setVariable ["playerSurrender",false,true];
*/

player setVariable ["ACE_captives_isHandcuffed",false,true];
player setVariable ["ACE_captives_isEscorting",false,true];
player setVariable ["ACE_captives_isSurrendering",false,true];
player setVariable ["ACE_isUnconscious",false,true];

diag_log "Past Settings Init";
[] execFSM "core\fsm\client.fsm";

diag_log "Executing client.fsm";
waitUntil {!(isNull (findDisplay 46))};

diag_log "Display 46 Found";
(findDisplay 46) displayAddEventHandler ["KeyDown", "_this call life_fnc_keyHandler"];
player addRating 99999999;

combat_mode = {
	if (isNull player) exitWith {};
	player setVariable ["combat_mode", time, false];
	if (mode_combat == 1) exitwith  {};
	mode_combat = 1;
	[] call life_fnc_hudUpdate;
	[] spawn  {
		private["_veh","_handled","_ctrlCombat"];
		while {((player getVariable ["combat_mode",0]) > time - 60)} do {
			if (cameraView == "External"/* OR {playerside == civilian && cameraView == "GUNNER" && (!l_c_gvt && !l_c_rebel) && !((currentWeapon player) in life_civ_weapon)}*/) then
			{
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

player addEventHandler ["FiredNear", " if(!((_this select 6) in life_chemlist)) then { [] spawn combat_mode; }; "];

[player,life_settings_enableSidechannel,playerSide] remoteExecCall ["TON_fnc_manageSC",RSERV];
0 cutText ["","BLACK IN"];
[] call life_fnc_hudSetup;

/* Set up frame-by-frame handlers */
LIFE_ID_PlayerTags = ["LIFE_PlayerTags","onEachFrame","life_fnc_playerTags"] call BIS_fnc_addStackedEventHandler;
LIFE_ID_RevealObjects = ["LIFE_RevealObjects","onEachFrame","life_fnc_revealObjects"] call BIS_fnc_addStackedEventHandler;

player setVariable ["steam64ID",getPlayerUID player];
player setVariable ["realname",profileName,true];

life_fnc_moveIn = compileFinal
"
    life_disable_getIn = false;
    player moveInCargo (_this select 0);
    life_disable_getOut = true;
";

life_fnc_RequestClientId = player;
publicVariableServer "life_fnc_RequestClientId"; //Variable OwnerID for HeadlessClient

[] spawn life_fnc_survival;

[] spawn {
    for "_i" from 0 to 1 step 0 do {
        waitUntil {(!isNull (findDisplay 49)) && {(!isNull (findDisplay 602))}}; // Check if Inventory and ESC dialogs are open
        (findDisplay 49) closeDisplay 2; // Close ESC dialog
        (findDisplay 602) closeDisplay 2; // Close Inventory dialog
    };
};

CONSTVAR(life_paycheck); //Make the paycheck static.
if (LIFE_SETTINGS(getNumber,"enable_fatigue") isEqualTo 0) then {player enableFatigue false;};

if (LIFE_SETTINGS(getNumber,"pump_service") isEqualTo 1) then {
    [] execVM "core\fn_setupStationService.sqf";
};

/*
    https://feedback.bistudio.com/T117205 - disableChannels settings cease to work when leaving/rejoining mission
    Universal workaround for usage in a preInit function. - AgentRev
    Remove if Bohemia actually fixes the issue.
*/
{
    _x params [["_chan",-1,[0]], ["_noText","false",[""]], ["_noVoice","false",[""]]];

    _noText = [false,true] select ((["false","true"] find toLower _noText) max 0);
    _noVoice = [false,true] select ((["false","true"] find toLower _noVoice) max 0);

    _chan enableChannel [!_noText, !_noVoice];

} forEach getArray (missionConfigFile >> "disableChannels");

if (life_HC_isActive) then {
    [getPlayerUID player,player getVariable ["realname",name player]] remoteExec ["HC_fnc_wantedProfUpdate",HC_Life];
} else {
    [getPlayerUID player,player getVariable ["realname",name player]] remoteExec ["life_fnc_wantedProfUpdate",RSERV];
};

[] execVM "unity\taskforce\fn_ts.sqf";

//auto update
[] spawn {
	private["_nb"];
	_nb = 0;
	while {true} do {
		sleep 60;
		//[] call life_fnc_updateClothing;
		_nb = _nb+1;
		if(_nb == 5) then {
			[] call SOCK_fnc_updateRequest;
			_nb = 0;
		} else {
			//Silent pos Sync
			//[8] call SOCK_fnc_updatePartial;
		};
	};
};

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

diag_log "----------------------------------------------------------------------------------------------------";
diag_log format ["               End of Altis Life Client Init :: Total Execution Time %1 seconds ",(diag_tickTime) - _timeStamp];
diag_log "----------------------------------------------------------------------------------------------------";
