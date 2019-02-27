/*
	File: fn_iPhone_X_saveWallpaper.sqf
	Author: Neyzhak

	Description:
	Save wallpaper in DB

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_unit","_wallpaper","_ownerID","_playerUID","_query"];
_unit = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_wallpaper = [_this,1,[],[[]]] call BIS_fnc_param;

if (isNil "_unit" || _wallpaper isEqualTo []) exitWith {};
_ownerID = owner _unit;
_playerUID = getPlayerUID _unit;
if (_playerUID == "") exitWith {};

if (_wallpaper isEqualType []) then {_wallpaper = _wallpaper select 0;};

diag_log "------------- WALLPAPER -------------";
diag_log format ["Wallpaper for player : %1", _playerUID];
diag_log format ["Result : %1", _wallpaper];
diag_log "-----------------------------------------";

_query = format ["UPDATE iphone_settings SET player_id = '%1', wallpaper_id = '%2' WHERE player_id='%1'", _playerUID, _wallpaper];
[_query,1] call DB_fnc_asyncCall;

diag_log "------------- WALLPAPER UPDATE -------------";
diag_log format ["Wallpaper update for player : %1", _playerUID];
diag_log format ["Result : %1", _query];
diag_log "-----------------------------------------";

[_unit] remoteExec ["unity_srv_fnc_iPhone_X_getSettings",2];