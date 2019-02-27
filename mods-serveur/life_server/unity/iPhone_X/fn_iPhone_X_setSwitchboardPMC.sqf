/*
	File: fn_iPhone_X_setSwitchboardPMC.sqf
	Author: Neyzhak

	Description:
	Set switchboard PMC

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_unit","_ownerID","_playerUID","_query","_result"];
_switchboardPMC = [_this,0,[],[[]]] call BIS_fnc_param;

if (_switchboardPMC isEqualTo "") exitWith {};

iPhone_X_switchboardPMC = _switchboardPMC;

[iPhone_X_switchboardPMC] remoteExec ["unity_fnc_iPhone_X_switchboard", west];

diag_log "------------- SET SB -------------";
diag_log format ["Result : %1", iPhone_X_switchboardPMC];
diag_log "-----------------------------------------";
