/*
	File: fn_iPhone_X_getSettings.sqf
	Author: Neyzhak

	Description:
	Get iPhone_X settings for player

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_unit","_ownerID","_playerUID","_query","_result"];
_unit = [_this,0,objNull,[objNull]] call BIS_fnc_param;

if (isNil "_unit") exitWith {};
_ownerID = owner _unit;
_playerUID = getPlayerUID _unit;
if (_playerUID == "") exitWith {};

_query = format ["SELECT wallpaper_id, sound_id, silent_id FROM iphone_settings WHERE player_id='%1'", _playerUID];
_result = [_query,2] call DB_fnc_asyncCall;

diag_log "------------- SETTINGS -------------";
diag_log format ["Settings for player : %1", _playerUID];
diag_log format ["Result : %1", _result];
diag_log "-----------------------------------------";

if (_result isEqualTo []) then
{
	_query2 = format ["INSERT INTO iphone_settings (player_id) VALUES ('%1')", _playerUID];
	[_query2,1] call DB_fnc_asyncCall;

	[[1,1,0]] remoteExec ["unity_fnc_iPhone_X_setSettings", _ownerID];
} else {
	[_result] remoteExec ["unity_fnc_iPhone_X_setSettings", _ownerID];
};