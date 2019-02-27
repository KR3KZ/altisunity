/*
	File: fn_iPhone_X_saveSilent.sqf
	Author: Neyzhak

	Description:
	Save silent in DB

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_unit","_sound","_ownerID","_playerUID","_query"];
_unit = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_silent = [_this,1,[],[[]]] call BIS_fnc_param;

if (isNil "_unit" || _silent isEqualTo []) exitWith {};
_ownerID = owner _unit;
_playerUID = getPlayerUID _unit;
if (_playerUID == "") exitWith {};

if (_silent isEqualType []) then {_silent = _silent select 0;};

diag_log "------------- SILENT -------------";
diag_log format ["Silent for player : %1", _playerUID];
diag_log format ["Result : %1", _silent];
diag_log "-----------------------------------------";

_query = format ["UPDATE iphone_settings SET player_id = '%1', silent_id = '%2' WHERE player_id='%1'", _playerUID, _silent];
[_query,1] call DB_fnc_asyncCall;

diag_log "------------- SILENT UPDATE -------------";
diag_log format ["Silent update for player : %1", _playerUID];
diag_log format ["Result : %1", _query];
diag_log "-----------------------------------------";

[_unit] remoteExec ["unity_srv_fnc_iPhone_X_getSettings",2];