#include "..\script_macros.hpp"
/*
    File: fn_initMedic.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Initializes the medic..
*/
waitUntil {!(isNull (findDisplay 46))};

if ((FETCH_CONST(life_medicLevel)) < 1 && (FETCH_CONST(life_adminlevel) isEqualTo 0)) exitWith {
    ["Notwhitelisted",false,true] call BIS_fnc_endMission;
    sleep 35;
};

player setVariable ["rankMedic",call(life_medicLevel),true];

if (life_is_alive) then {
    /* Spawn at our last position */
    player setVehiclePosition [life_position, [], 0, "CAN_COLLIDE"];
} else {
    [] call life_fnc_spawnMenu;

    waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
    waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.
};
