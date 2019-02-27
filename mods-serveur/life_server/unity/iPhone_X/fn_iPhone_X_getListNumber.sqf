/*
	File: fn_iPhone_X_getListNumber.sqf
	Author: Neyzhak

	Description:
	Get list number

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_unit","_ownerID","_playerUID","_query","_result"];
_unit = [_this,0,objNull,[objNull]] call BIS_fnc_param;

if (isNil "_unit") exitWith {};
_ownerID = owner _unit;
_playerUID = getPlayerUID _unit;
if (_playerUID == "") exitWith {};

diag_log "------------- GET LIST NUMBER 1 ---------------";
diag_log format ["Get list number for player : %1", _playerUID];
diag_log format ["Result : %1", iPhone_X_listNumber];
diag_log "-----------------------------------------";

[iPhone_X_listNumber] remoteExec ["unity_fnc_iPhone_X_listNumber", _ownerID];

diag_log "------------- GET LIST NUMBER 2 ---------------";
diag_log format ["Get list number for player : %1", _playerUID];
diag_log format ["Result : %1", iPhone_X_listNumber];
diag_log "-----------------------------------------";