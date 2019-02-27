/*
	File: fn_iPhone_X_setSwitchboardIDAP.sqf
	Author: Neyzhak

	Description:
	Set switchboard IDAP

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_unit","_ownerID","_playerUID","_query","_result"];
_switchboardIDAP = [_this,0,[],[[]]] call BIS_fnc_param;

if (_switchboardIDAP isEqualTo "") exitWith {};

iPhone_X_switchboardIDAP = _switchboardIDAP;

[iPhone_X_switchboardIDAP] remoteExec ["unity_fnc_iPhone_X_switchboard", independent];

diag_log "------------- SET SB -------------";
diag_log format ["Result : %1", iPhone_X_switchboardIDAP];
diag_log "-----------------------------------------";