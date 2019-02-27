/*
    File: fn_iPhone_X_setSettings.sqf
    Author: Neyzhak

    Description:
    Set settings

    YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_settings"];
_settings = [_this,0,[],[[]]] call BIS_fnc_param;

diag_log "------------- SET SETTINGS -------------";
diag_log format ["Result : %1", _settings];
diag_log "-----------------------------------------";

if (_settings isEqualTo [[]]) then {_settings = [];};
life_settings = _settings;

diag_log str life_settings;

if (!isNull (findDisplay 97000)) then {[] spawn unity_fnc_iPhone_X_home;};
