/*
	File: fn_iPhone_X_saveSound.sqf
	Author: Neyzhak

	Description:
	Save sound in DB

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_unit","_sound","_ownerID","_playerUID","_query"];
_unit = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_sound = [_this,1,[],[[]]] call BIS_fnc_param;

if (isNil "_unit" || _sound isEqualTo []) exitWith {};
_ownerID = owner _unit;
_playerUID = getPlayerUID _unit;
if (_playerUID == "") exitWith {};

if (_sound isEqualType []) then {_sound = _sound select 0;};

diag_log "------------- SOUND -------------";
diag_log format ["Sound for player : %1", _playerUID];
diag_log format ["Result : %1", _sound];
diag_log "-----------------------------------------";

_query = format ["UPDATE iphone_settings SET player_id = '%1', sound_id = '%2' WHERE player_id='%1'", _playerUID, _sound];
[_query,1] call DB_fnc_asyncCall;

diag_log "------------- SOUND UPDATE -------------";
diag_log format ["sound update for player : %1", _playerUID];
diag_log format ["Result : %1", _query];
diag_log "-----------------------------------------";

[_unit] remoteExec ["unity_srv_fnc_iPhone_X_getSettings",2];