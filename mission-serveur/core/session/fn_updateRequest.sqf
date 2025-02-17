#include "..\..\script_macros.hpp"
/*
    File: fn_updateRequest.sqf
    Author: Tonic

    Description:
    Passes ALL player information to the server to save player data to the database.
*/
private _packet 		= [getPlayerUID player,(profileName),playerSide,CASH,BANK];
private _array 			= [];
private _alive 			= alive player;
private _position 		= getPosATL player;
private _flag 			= switch (playerSide) do {case west: {"cop"}; case civilian: {"civ"}; case independent: {"med"};};
private _blood 			= player getVariable["ACE_medical_bloodVolume",100];

{
    _varName = LICENSE_VARNAME(configName _x,_flag);
    _array pushBack [_varName,LICENSE_VALUE(configName _x,_flag)];
} forEach (format ["getText(_x >> 'side') isEqualTo '%1'",_flag] configClasses (missionConfigFile >> "Licenses"));

_packet pushBack _array;

[] call life_fnc_saveGear;
_packet pushBack life_gear;

_array = [];
_array pushBack life_hunger;
_array pushBack life_thirst;
_array pushBack (damage player);
_packet pushBack _array;
_packet pushBack _alive;
_packet pushBack _position;
_packet pushBack _blood;

switch (playerSide) do {
    case civilian: {
        _packet pushBack life_is_arrested;
    };
};

if (life_HC_isActive) then {
    _packet remoteExecCall ["HC_fnc_updateRequest",HC_Life];
} else {
    _packet remoteExecCall ["DB_fnc_updateRequest",RSERV];
};
