/*
	File: fn_iPhone_X_getSwitchboardCOMPANY.sqf
	Author: Neyzhak

	Description:
	Get switchboard PMC

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_unit","_ownerID","_playerUID","_query","_result"];
_unit = [_this,0,objNull,[objNull]] call BIS_fnc_param;

if (isNil "_unit") exitWith {};
_ownerID = owner _unit;
_playerUID = getPlayerUID _unit;
if (_playerUID == "") exitWith {};

[iPhone_X_switchboardCOMPANY] remoteExec ["unity_fnc_iPhone_X_switchboard", _ownerID];

diag_log "------------- GET SB -------------";
diag_log format ["Result : %1, %2", _ownerID, iPhone_X_switchboardCOMPANY];
diag_log "-----------------------------------------";
