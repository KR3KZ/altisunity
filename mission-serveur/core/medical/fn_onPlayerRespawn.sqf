#include "..\..\script_macros.hpp"
/*
    File: fn_onPlayerRespawn.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Does something but I won't know till I write it...
*/
diag_log "start fn_onPlayerRespawn.sqf";
private ["_unit","_corpse","_containers"];
_unit 					= _this select 0;
_corpse 				= _this select 1;
life_corpse 			= _corpse;
hideBody _corpse;
diag_log "##### onPlayerRespawn hide body #####";
life_respawned = true;
player allowDamage true;

/*Set some vars on our new body.
_unit setVariable ["restrained",false,true];
_unit setVariable ["Escorting",false,true];
_unit setVariable ["transporting",false,true];
_unit setVariable ["playerSurrender",false,true];
_unit setVariable ["steam64id",getPlayerUID player,true]; //Reset the UID.
*/

if (_unit getVariable ["ACE_captives_isHandcuffed", false]) then {
	[_unit, false] call ACE_captives_setHandcuffed;
};
if (_unit getVariable ["ACE_captives_isSurrendering", false]) then {
	[_unit, false] call ACE_captives_setSurrendered;
};
 if (_unit getVariable ["ACE_captives_isEscorting", false]) then {
	_unit setVariable["ACE_captives_isEscorting",false,true];
};
if (_unit getVariable ["ACE_isUnconscious", false]) then {
	_unit setVariable["ACE_isUnconscious",false,true];
};

_unit setVariable["ACE_medical_bloodVolume",100,true];
_unit setVariable ["realname",profileName,true]; //Reset the players name.
_unit addRating 1e12;

player playMoveNow "AmovPpneMstpSrasWrflDnon";

[] call life_fnc_setupActions;
if (LIFE_SETTINGS(getNumber,"enable_fatigue") isEqualTo 0) then {player enableFatigue false;};
[] call life_fnc_spawnMenu;

//[_unit,life_settings_enableSidechannel,playerSide] remoteExecCall ["TON_fnc_manageSC",RSERV];
diag_log "end fn_onPlayerRespawn.sqf";
