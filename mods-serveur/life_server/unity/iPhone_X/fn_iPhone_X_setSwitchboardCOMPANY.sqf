/*
	File: fn_iPhone_X_setSwitchboardCOMPANY.sqf
	Author: Neyzhak /

	Description:
	Set switchboard PMC

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_unit","_ownerID","_playerUID","_query","_result"];
_switchboardCOMPANY = [_this,0,[],[[]]] call BIS_fnc_param;

if (_switchboardCOMPANY isEqualTo "") exitWith {};

iPhone_X_switchboardCOMPANY = _switchboardCOMPANY;

[iPhone_X_switchboardCOMPANY] remoteExec ["unity_fnc_iPhone_X_switchboard", civilian];

diag_log "------------- SET SB -------------";
diag_log format ["Result : %1", iPhone_X_switchboardCOMPANY];
diag_log "-----------------------------------------";
