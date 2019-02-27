/*
	File: fn_iPhone_X_listNumber.sqf
	Author: Neyzhak

	Description:
	List number

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_listNumberClient"];
_listNumberClient = [_this,0,[],[[]]] call BIS_fnc_param;

diag_log "------------- LIST NUMBER 1 ---------------";
diag_log format ["Result : %1", _listNumberClient];
diag_log "-----------------------------------------";

if (_listNumberClient isEqualTo [[]]) then {_listNumberClient = [];};

iPhone_X_listNumberClient = _listNumberClient;

diag_log "------------- LIST NUMBER 2 ---------------";
diag_log format ["Result : %1", iPhone_X_listNumberClient];
diag_log "-----------------------------------------";