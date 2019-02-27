/*
	File: fn_iPhone_X_getAmende.sqf
	Author: Neyzhak

	Description:
	Get amende

	YOU ARE NOT ALLOWED TO USE, MODIFY, COPY, DISTRIBUTE OR SELL THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
*/
private ["_unit","_ownerID","_playerUID","_query","_result"];
_unit = [_this,0,objNull,[objNull]] call BIS_fnc_param;

if (isNil "_unit") exitWith {};
_ownerID = owner _unit;
_playerUID = getPlayerUID _unit;
if (_playerUID == "") exitWith {};

_query = format ["SELECT name_offense FROM iphone_value_amende"];
_result = [_query,2,true] call DB_fnc_asyncCall;

if !(_result isEqualTo []) then
{	
	[_result] remoteExec ["unity_fnc_iPhone_X_amende", _ownerID];
};

diag_log "------------- GET AMENDE -------------";
diag_log format ["Result : %1", _result];
diag_log "-----------------------------------------";